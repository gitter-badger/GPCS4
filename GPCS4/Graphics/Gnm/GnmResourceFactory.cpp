#include "GnmResourceFactory.h"
#include "Emulator.h"
#include "VirtualGPU.h"
#include "GnmConverter.h"
#include "GnmDepthRenderTarget.h"
#include "Sce/SceResourceTracker.h"
#include "Violet/VltDevice.h"
#include "Violet/VltBuffer.h"
#include "Violet/VltImage.h"
#include "Violet/VltSampler.h"

using namespace sce::vlt;

LOG_CHANNEL(Graphic.Gnm.GnmResourceFactory);

namespace sce::Gnm
{
	GnmResourceFactory::GnmResourceFactory(VltDevice* device) :
		m_device(device)
	{
	}

	GnmResourceFactory::~GnmResourceFactory()
	{
	}

	bool GnmResourceFactory::createDepthImage(
		const DepthRenderTarget* depthTarget,
		SceDepthRenderTarget&    depthImage)
	{
		VltImageCreateInfo imgInfo;
		imgInfo.type          = VK_IMAGE_TYPE_2D;
		imgInfo.format        = cvt::convertZFormat(depthTarget->getZFormat());
		imgInfo.flags         = 0;
		imgInfo.sampleCount   = cvt::convertNumFragments(depthTarget->getNumFragments());  // not really understand..
		imgInfo.extent.width  = depthTarget->getWidth();
		imgInfo.extent.height = depthTarget->getHeight();
		imgInfo.extent.depth  = 1;
		// NOTE: this slice count is only valid if the array view hasn't changed since initialization!
		imgInfo.numLayers     = depthTarget->getLastArraySliceIndex() - depthTarget->getBaseArraySliceIndex() + 1;
		imgInfo.mipLevels     = 1;
		imgInfo.usage         = VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT;
		imgInfo.stages        = VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT | VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT;
		imgInfo.access        = VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT | VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT;
		imgInfo.tiling        = VK_IMAGE_TILING_OPTIMAL;
		imgInfo.layout        = VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_OPTIMAL;

		VltImageViewCreateInfo viewInfo;
		viewInfo.type      = VK_IMAGE_VIEW_TYPE_2D;
		viewInfo.format    = imgInfo.format;
		viewInfo.usage     = imgInfo.usage;
		viewInfo.aspect    = VK_IMAGE_ASPECT_DEPTH_BIT;
		viewInfo.minLevel  = 0;
		viewInfo.numLevels = 1;
		viewInfo.minLayer  = 0;
		viewInfo.numLayers = 1;
		if (imgInfo.format >= VK_FORMAT_D16_UNORM_S8_UINT)
		{
			viewInfo.aspect |= VK_IMAGE_ASPECT_STENCIL_BIT;
		}

		depthImage.image = m_device->createImage(
			imgInfo, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);
		depthImage.imageView = m_device->createImageView(
			depthImage.image, viewInfo);
		depthImage.depthRenderTarget = *depthTarget;

		return true;
	}
	
	bool GnmResourceFactory::createRenderTarget(
		const RenderTarget* target,
		SceRenderTarget&    targetImage)
	{
		VltImageCreateInfo imageInfo;
		imageInfo.type        = VK_IMAGE_TYPE_2D;
		imageInfo.format      = cvt::convertDataFormat(target->getDataFormat());
		imageInfo.flags       = 0;
		imageInfo.sampleCount = cvt::convertNumFragments(target->getNumFragments());  // Should we use getNumSamples?
		imageInfo.extent      = { target->getWidth(), target->getHeight(), 1 };
		imageInfo.numLayers   = 1;
		imageInfo.mipLevels   = 1;
		imageInfo.usage       = VK_IMAGE_USAGE_SAMPLED_BIT | VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT;
		imageInfo.stages      = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT | VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT;
		imageInfo.access      = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT | VK_ACCESS_SHADER_READ_BIT;
		imageInfo.tiling      = VK_IMAGE_TILING_OPTIMAL;
		imageInfo.layout      = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;

		VltImageViewCreateInfo viewInfo;
		viewInfo.type      = VK_IMAGE_VIEW_TYPE_2D;
		viewInfo.format    = imageInfo.format;
		viewInfo.usage     = imageInfo.usage;
		viewInfo.aspect    = VK_IMAGE_ASPECT_COLOR_BIT;
		viewInfo.minLevel  = 0;
		viewInfo.numLevels = 1;
		viewInfo.minLayer  = 0;
		viewInfo.numLayers = 1;

		targetImage.image        = m_device->createImage(imageInfo, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);
		targetImage.imageView    = m_device->createImageView(targetImage.image, viewInfo);
		targetImage.renderTarget = *target;

		return true;
	}

	bool GnmResourceFactory::createBuffer(
		const GnmBufferCreateInfo& createInfo,
		SceBuffer&                 sceBuffer)
	{
		auto                vsharp = createInfo.vsharp;
		VltBufferCreateInfo info   = {};
		info.size                  = vsharp->getSize();
		info.usage                 = createInfo.usage;
		info.stages                = createInfo.stage;
		info.access                = createInfo.access;

		sceBuffer.buffer           = m_device->createBuffer(info, createInfo.memoryType);
		sceBuffer.bufferView       = nullptr;
		sceBuffer.gnmBuffer        = *vsharp;
		return true;
	}

	bool GnmResourceFactory::createImage(
		const GnmImageCreateInfo& createInfo,
		SceTexture&               sceTexture)
	{
		auto        tsharp = createInfo.tsharp;
		TextureType textureType   = tsharp->getTextureType();

		auto tileMode = tsharp->getTileMode();

		VkImageCreateFlags flags;
		switch (textureType)
		{
			case kTextureType2dArray: flags = VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT; break;
			case kTextureTypeCubemap: flags = VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT; break;
			default: flags = 0; break;
		}

		uint32_t mipLevelCount = tsharp->getLastMipLevel() - tsharp->getBaseMipLevel() + 1;
		uint32_t sliceCount = tsharp->getLastArraySliceIndex() - tsharp->getBaseArraySliceIndex() + 1;

		VltImageCreateInfo imageInfo;
		imageInfo.type        = cvt::convertTextureType(textureType);
		imageInfo.format      = cvt::convertDataFormat(tsharp->getDataFormat());
		imageInfo.flags       = flags;
		imageInfo.sampleCount = cvt::convertNumFragments(tsharp->getNumFragments());
		imageInfo.extent      = { tsharp->getWidth(), tsharp->getHeight(), tsharp->getDepth() };
		imageInfo.numLayers   = sliceCount;
		imageInfo.mipLevels   = mipLevelCount;
		imageInfo.usage       = createInfo.usage;
		imageInfo.stages      = createInfo.stage;
		imageInfo.access      = createInfo.access;
		imageInfo.tiling      = createInfo.tiling;
		imageInfo.layout      = createInfo.layout;

		VltImageViewCreateInfo viewInfo;
		viewInfo.type      = cvt::convertTextureTypeView(textureType);
		viewInfo.format    = imageInfo.format;
		viewInfo.usage     = imageInfo.usage;
		viewInfo.aspect    = VK_IMAGE_ASPECT_COLOR_BIT;
		viewInfo.minLevel  = tsharp->getBaseMipLevel();
		viewInfo.numLevels = mipLevelCount;
		viewInfo.minLayer  = tsharp->getBaseArraySliceIndex();
		viewInfo.numLayers = sliceCount;

		sceTexture.image     = m_device->createImage(imageInfo, createInfo.memoryType);
		sceTexture.imageView = m_device->createImageView(sceTexture.image, viewInfo);
		sceTexture.texture   = *tsharp;

		return true;
	}

	bool GnmResourceFactory::createSampler(
		const Sampler* ssharp,
		SceSampler&    sampler)
	{
		DepthCompare depthComp = ssharp->getDepthCompareFunction();

		static const std::array<VkClearColorValue, 3> s_borderColors = { {
			{ { 0.0f, 0.0f, 0.0f, 0.0f } },
			{ { 0.0f, 0.0f, 0.0f, 1.0f } },
			{ { 1.0f, 1.0f, 1.0f, 1.0f } },
		} };

		VltSamplerCreateInfo samplerInfo;
		samplerInfo.magFilter      = cvt::convertFilterMode(ssharp->getMagFilterMode());
		samplerInfo.minFilter      = cvt::convertFilterMode(ssharp->getMinFilterMode());
		samplerInfo.mipmapMode     = cvt::convertMipFilterMode(ssharp->getMipFilterMode());
		samplerInfo.mipmapLodBias  = (float)ssharp->getLodBias();
		samplerInfo.mipmapLodMin   = (float)ssharp->getMinLod();
		samplerInfo.mipmapLodMax   = (float)ssharp->getMaxLod();
		samplerInfo.useAnisotropy  = ssharp->getAnisotropyRatio() != kAnisotropyRatio1;
		samplerInfo.maxAnisotropy  = (float)ssharp->getAnisotropyThreshold();
		samplerInfo.addressModeU   = cvt::convertWrapMode(ssharp->getWrapModeX());
		samplerInfo.addressModeV   = cvt::convertWrapMode(ssharp->getWrapModeY());
		samplerInfo.addressModeW   = cvt::convertWrapMode(ssharp->getWrapModeZ());
		samplerInfo.compareToDepth = depthComp != kDepthCompareNever;
		samplerInfo.compareOp      = cvt::convertDepthCompare(depthComp);
		samplerInfo.borderColor    = s_borderColors[ssharp->getBorderColor()];
		samplerInfo.usePixelCoord  = ssharp->getForceUnnormalized();

		sampler.sampler = m_device->createSampler(samplerInfo);
		sampler.ssharp  = *ssharp;

		return true;
	}


}  // namespace sce::Gnm