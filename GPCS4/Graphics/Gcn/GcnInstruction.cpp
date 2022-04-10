#include "GcnInstruction.h"

#include <array>

namespace sce::gcn
{

	// Note:
	// The following table is auto-generated using python scripts.
	// (ParseOpcode.py, GenerateInstructionClass.py)
	// some fields are generated using heuristic method,
	// thus not guaranteed to be 100% correct.
	// If you find some error, you should either fix the script
	// or modify the table directly.

	const std::array<GcnInstFormat, 45> g_instructionFormatSOP2 = { {
		// 0 = S_ADD_U32
		{ GcnInstClass::ScalarArith, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 1 = S_SUB_U32
		{ GcnInstClass::ScalarArith, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 2 = S_ADD_I32
		{ GcnInstClass::ScalarArith, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 3 = S_SUB_I32
		{ GcnInstClass::ScalarArith, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 4 = S_ADDC_U32
		{ GcnInstClass::ScalarArith, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 5 = S_SUBB_U32
		{ GcnInstClass::ScalarArith, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 6 = S_MIN_I32
		{ GcnInstClass::ScalarCmp, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 7 = S_MIN_U32
		{ GcnInstClass::ScalarCmp, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 8 = S_MAX_I32
		{ GcnInstClass::ScalarCmp, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 9 = S_MAX_U32
		{ GcnInstClass::ScalarCmp, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 10 = S_CSELECT_B32
		{ GcnInstClass::ScalarSelect, 2, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 11 = S_CSELECT_B64
		{ GcnInstClass::ScalarSelect, 2, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		{},
		{},
		// 14 = S_AND_B32
		{ GcnInstClass::ScalarBitLogic, 2, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 15 = S_AND_B64
		{ GcnInstClass::ScalarBitLogic, 2, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 16 = S_OR_B32
		{ GcnInstClass::ScalarBitLogic, 2, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 17 = S_OR_B64
		{ GcnInstClass::ScalarBitLogic, 2, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 18 = S_XOR_B32
		{ GcnInstClass::ScalarBitLogic, 2, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 19 = S_XOR_B64
		{ GcnInstClass::ScalarBitLogic, 2, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 20 = S_ANDN2_B32
		{ GcnInstClass::ScalarBitLogic, 2, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 21 = S_ANDN2_B64
		{ GcnInstClass::ScalarBitLogic, 2, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 22 = S_ORN2_B32
		{ GcnInstClass::ScalarBitLogic, 2, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 23 = S_ORN2_B64
		{ GcnInstClass::ScalarBitLogic, 2, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 24 = S_NAND_B32
		{ GcnInstClass::ScalarBitLogic, 2, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 25 = S_NAND_B64
		{ GcnInstClass::ScalarBitLogic, 2, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 26 = S_NOR_B32
		{ GcnInstClass::ScalarBitLogic, 2, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 27 = S_NOR_B64
		{ GcnInstClass::ScalarBitLogic, 2, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 28 = S_XNOR_B32
		{ GcnInstClass::ScalarBitLogic, 2, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 29 = S_XNOR_B64
		{ GcnInstClass::ScalarBitLogic, 2, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 30 = S_LSHL_B32
		{ GcnInstClass::ScalarBitManip, 2, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 31 = S_LSHL_B64
		{ GcnInstClass::ScalarBitManip, 2, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 32 = S_LSHR_B32
		{ GcnInstClass::ScalarBitManip, 2, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 33 = S_LSHR_B64
		{ GcnInstClass::ScalarBitManip, 2, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 34 = S_ASHR_I32
		{ GcnInstClass::ScalarBitManip, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 35 = S_ASHR_I64
		{ GcnInstClass::ScalarBitManip, 2, 1,
		  GcnNumericType::I64, GcnNumericType::I64 },
		// 36 = S_BFM_B32
		{ GcnInstClass::ScalarBitField, 2, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 37 = S_BFM_B64
		{ GcnInstClass::ScalarBitField, 2, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 38 = S_MUL_I32
		{ GcnInstClass::ScalarArith, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 39 = S_BFE_U32
		{ GcnInstClass::ScalarBitField, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 40 = S_BFE_I32
		{ GcnInstClass::ScalarBitField, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 41 = S_BFE_U64
		{ GcnInstClass::ScalarBitField, 2, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 42 = S_BFE_I64
		{ GcnInstClass::ScalarBitField, 2, 1,
		  GcnNumericType::I64, GcnNumericType::I64 },
		// 43 = S_CBRANCH_G_FORK
		{ GcnInstClass::ScalarProgFlow, 2, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 44 = S_ABSDIFF_I32
		{ GcnInstClass::ScalarAbs, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
	} };

	const std::array<GcnInstFormat, 22> g_instructionFormatSOPK = { {
		// 0 = S_MOVK_I32
		{ GcnInstClass::ScalarMov, 0, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		{},
		// 2 = S_CMOVK_I32
		{ GcnInstClass::ScalarMov, 0, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 3 = S_CMPK_EQ_I32
		{ GcnInstClass::ScalarCmp, 0, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 4 = S_CMPK_LG_I32
		{ GcnInstClass::ScalarCmp, 0, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 5 = S_CMPK_GT_I32
		{ GcnInstClass::ScalarCmp, 0, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 6 = S_CMPK_GE_I32
		{ GcnInstClass::ScalarCmp, 0, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 7 = S_CMPK_LT_I32
		{ GcnInstClass::ScalarCmp, 0, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 8 = S_CMPK_LE_I32
		{ GcnInstClass::ScalarCmp, 0, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 9 = S_CMPK_EQ_U32
		{ GcnInstClass::ScalarCmp, 0, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 10 = S_CMPK_LG_U32
		{ GcnInstClass::ScalarCmp, 0, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 11 = S_CMPK_GT_U32
		{ GcnInstClass::ScalarCmp, 0, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 12 = S_CMPK_GE_U32
		{ GcnInstClass::ScalarCmp, 0, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 13 = S_CMPK_LT_U32
		{ GcnInstClass::ScalarCmp, 0, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 14 = S_CMPK_LE_U32
		{ GcnInstClass::ScalarCmp, 0, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 15 = S_ADDK_I32
		{ GcnInstClass::ScalarArith, 0, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 16 = S_MULK_I32
		{ GcnInstClass::ScalarArith, 0, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 17 = S_CBRANCH_I_FORK
		{ GcnInstClass::ScalarProgFlow, 0, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 18 = S_GETREG_B32
		{ GcnInstClass::ScalarProgFlow, 0, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 19 = S_SETREG_B32
		{ GcnInstClass::ScalarRegAccess, 0, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		{},
		// 21 = S_SETREG_IMM32_B32
		{ GcnInstClass::ScalarRegAccess, 0, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
	} };

	const std::array<GcnInstFormat, 54> g_instructionFormatSOP1 = { {
		{},
		{},
		{},
		// 3 = S_MOV_B32
		{ GcnInstClass::ScalarMov, 1, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 4 = S_MOV_B64
		{ GcnInstClass::ScalarMov, 1, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 5 = S_CMOV_B32
		{ GcnInstClass::ScalarMov, 1, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 6 = S_CMOV_B64
		{ GcnInstClass::ScalarMov, 1, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 7 = S_NOT_B32
		{ GcnInstClass::ScalarBitLogic, 1, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 8 = S_NOT_B64
		{ GcnInstClass::ScalarBitLogic, 1, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 9 = S_WQM_B32
		{ GcnInstClass::ScalarQuadMask, 1, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 10 = S_WQM_B64
		{ GcnInstClass::ScalarQuadMask, 1, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 11 = S_BREV_B32
		{ GcnInstClass::ScalarBitManip, 1, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 12 = S_BREV_B64
		{ GcnInstClass::ScalarBitManip, 1, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 13 = S_BCNT0_I32_B32
		{ GcnInstClass::ScalarBitManip, 1, 1,
		  GcnNumericType::B32, GcnNumericType::I32 },
		// 14 = S_BCNT0_I32_B64
		{ GcnInstClass::ScalarBitManip, 1, 1,
		  GcnNumericType::B64, GcnNumericType::I32 },
		// 15 = S_BCNT1_I32_B32
		{ GcnInstClass::ScalarBitManip, 1, 1,
		  GcnNumericType::B32, GcnNumericType::I32 },
		// 16 = S_BCNT1_I32_B64
		{ GcnInstClass::ScalarBitManip, 1, 1,
		  GcnNumericType::B64, GcnNumericType::I32 },
		// 17 = S_FF0_I32_B32
		{ GcnInstClass::ScalarBitManip, 1, 1,
		  GcnNumericType::B32, GcnNumericType::I32 },
		// 18 = S_FF0_I32_B64
		{ GcnInstClass::ScalarBitManip, 1, 1,
		  GcnNumericType::B64, GcnNumericType::I32 },
		// 19 = S_FF1_I32_B32
		{ GcnInstClass::ScalarBitManip, 1, 1,
		  GcnNumericType::B32, GcnNumericType::I32 },
		// 20 = S_FF1_I32_B64
		{ GcnInstClass::ScalarBitManip, 1, 1,
		  GcnNumericType::B64, GcnNumericType::I32 },
		// 21 = S_FLBIT_I32_B32
		{ GcnInstClass::ScalarBitManip, 1, 1,
		  GcnNumericType::B32, GcnNumericType::I32 },
		// 22 = S_FLBIT_I32_B64
		{ GcnInstClass::ScalarBitManip, 1, 1,
		  GcnNumericType::B64, GcnNumericType::I32 },
		// 23 = S_FLBIT_I32
		{ GcnInstClass::ScalarBitManip, 1, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 24 = S_FLBIT_I32_I64
		{ GcnInstClass::ScalarBitManip, 1, 1,
		  GcnNumericType::I64, GcnNumericType::I32 },
		// 25 = S_SEXT_I32_I8
		{ GcnInstClass::ScalarConv, 1, 1,
		  GcnNumericType::I8, GcnNumericType::I32 },
		// 26 = S_SEXT_I32_I16
		{ GcnInstClass::ScalarConv, 1, 1,
		  GcnNumericType::I16, GcnNumericType::I32 },
		// 27 = S_BITSET0_B32
		{ GcnInstClass::ScalarBitManip, 1, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 28 = S_BITSET0_B64
		{ GcnInstClass::ScalarBitManip, 1, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 29 = S_BITSET1_B32
		{ GcnInstClass::ScalarBitManip, 1, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 30 = S_BITSET1_B64
		{ GcnInstClass::ScalarBitManip, 1, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 31 = S_GETPC_B64
		{ GcnInstClass::ScalarProgFlow, 0, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 32 = S_SETPC_B64
		{ GcnInstClass::ScalarProgFlow, 1, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 33 = S_SWAPPC_B64
		{ GcnInstClass::ScalarProgFlow, 1, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 34 = S_RFE_B64
		{ GcnInstClass::Undefined, 1, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		{},
		// 36 = S_AND_SAVEEXEC_B64
		{ GcnInstClass::ScalarExecMask, 1, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 37 = S_OR_SAVEEXEC_B64
		{ GcnInstClass::ScalarExecMask, 1, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 38 = S_XOR_SAVEEXEC_B64
		{ GcnInstClass::ScalarExecMask, 1, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 39 = S_ANDN2_SAVEEXEC_B64
		{ GcnInstClass::ScalarExecMask, 1, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 40 = S_ORN2_SAVEEXEC_B64
		{ GcnInstClass::ScalarExecMask, 1, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 41 = S_NAND_SAVEEXEC_B64
		{ GcnInstClass::ScalarExecMask, 1, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 42 = S_NOR_SAVEEXEC_B64
		{ GcnInstClass::ScalarExecMask, 1, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 43 = S_XNOR_SAVEEXEC_B64
		{ GcnInstClass::ScalarExecMask, 1, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 44 = S_QUADMASK_B32
		{ GcnInstClass::ScalarQuadMask, 1, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 45 = S_QUADMASK_B64
		{ GcnInstClass::ScalarQuadMask, 1, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 46 = S_MOVRELS_B32
		{ GcnInstClass::ScalarMov, 1, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 47 = S_MOVRELS_B64
		{ GcnInstClass::ScalarMov, 1, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 48 = S_MOVRELD_B32
		{ GcnInstClass::ScalarMov, 1, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 49 = S_MOVRELD_B64
		{ GcnInstClass::ScalarMov, 1, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 50 = S_CBRANCH_JOIN
		{ GcnInstClass::ScalarProgFlow, 1, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		{},
		// 52 = S_ABS_I32
		{ GcnInstClass::ScalarAbs, 1, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 53 = S_MOV_FED_B32
		{ GcnInstClass::Undefined, 1, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
	} };

	const std::array<GcnInstFormat, 17> g_instructionFormatSOPC = { {
		// 0 = S_CMP_EQ_I32
		{ GcnInstClass::ScalarCmp, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 1 = S_CMP_LG_I32
		{ GcnInstClass::ScalarCmp, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 2 = S_CMP_GT_I32
		{ GcnInstClass::ScalarCmp, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 3 = S_CMP_GE_I32
		{ GcnInstClass::ScalarCmp, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 4 = S_CMP_LT_I32
		{ GcnInstClass::ScalarCmp, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 5 = S_CMP_LE_I32
		{ GcnInstClass::ScalarCmp, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 6 = S_CMP_EQ_U32
		{ GcnInstClass::ScalarCmp, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 7 = S_CMP_LG_U32
		{ GcnInstClass::ScalarCmp, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 8 = S_CMP_GT_U32
		{ GcnInstClass::ScalarCmp, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 9 = S_CMP_GE_U32
		{ GcnInstClass::ScalarCmp, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 10 = S_CMP_LT_U32
		{ GcnInstClass::ScalarCmp, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 11 = S_CMP_LE_U32
		{ GcnInstClass::ScalarCmp, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 12 = S_BITCMP0_B32
		{ GcnInstClass::ScalarCmp, 2, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 13 = S_BITCMP1_B32
		{ GcnInstClass::ScalarCmp, 2, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 14 = S_BITCMP0_B64
		{ GcnInstClass::ScalarCmp, 2, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 15 = S_BITCMP1_B64
		{ GcnInstClass::ScalarCmp, 2, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 16 = S_SETVSKIP
		{ GcnInstClass::ScalarProgFlow, 2, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
	} };

	const std::array<GcnInstFormat, 27> g_instructionFormatSOPP = { {
		// 0 = S_NOP
		{ GcnInstClass::ScalarWait, 0, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 1 = S_ENDPGM
		{ GcnInstClass::ScalarProgFlow, 0, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 2 = S_BRANCH
		{ GcnInstClass::ScalarProgFlow, 0, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		{},
		// 4 = S_CBRANCH_SCC0
		{ GcnInstClass::ScalarProgFlow, 0, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 5 = S_CBRANCH_SCC1
		{ GcnInstClass::ScalarProgFlow, 0, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 6 = S_CBRANCH_VCCZ
		{ GcnInstClass::ScalarProgFlow, 0, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 7 = S_CBRANCH_VCCNZ
		{ GcnInstClass::ScalarProgFlow, 0, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 8 = S_CBRANCH_EXECZ
		{ GcnInstClass::ScalarProgFlow, 0, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 9 = S_CBRANCH_EXECNZ
		{ GcnInstClass::ScalarProgFlow, 0, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 10 = S_BARRIER
		{ GcnInstClass::ScalarSync, 0, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		{},
		// 12 = S_WAITCNT
		{ GcnInstClass::ScalarSync, 0, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 13 = S_SETHALT
		{ GcnInstClass::Undefined, 0, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 14 = S_SLEEP
		{ GcnInstClass::ScalarSync, 0, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 15 = S_SETPRIO
		{ GcnInstClass::ScalarSync, 0, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 16 = S_SENDMSG
		{ GcnInstClass::ScalarProgFlow, 0, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 17 = S_SENDMSGHALT
		{ GcnInstClass::ScalarProgFlow, 0, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 18 = S_TRAP
		{ GcnInstClass::Undefined, 0, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 19 = S_ICACHE_INV
		{ GcnInstClass::ScalarCache, 0, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 20 = S_INCPERFLEVEL
		{ GcnInstClass::DbgProf, 0, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 21 = S_DECPERFLEVEL
		{ GcnInstClass::DbgProf, 0, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 22 = S_TTRACEDATA
		{ GcnInstClass::DbgProf, 0, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 23 = S_CBRANCH_CDBGSYS
		{ GcnInstClass::Undefined, 0, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 24 = S_CBRANCH_CDBGUSER
		{ GcnInstClass::Undefined, 0, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 25 = S_CBRANCH_CDBGSYS_OR_USER
		{ GcnInstClass::Undefined, 0, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 26 = S_CBRANCH_CDBGSYS_AND_USER
		{ GcnInstClass::Undefined, 0, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
	} };

	const std::array<GcnInstFormat, 32> g_instructionFormatSMRD = { {
		// 0 = S_LOAD_DWORD
		{ GcnInstClass::ScalarMemRd, 1, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 1 = S_LOAD_DWORDX2
		{ GcnInstClass::ScalarMemRd, 1, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 2 = S_LOAD_DWORDX4
		{ GcnInstClass::ScalarMemRd, 1, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 3 = S_LOAD_DWORDX8
		{ GcnInstClass::ScalarMemRd, 1, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 4 = S_LOAD_DWORDX16
		{ GcnInstClass::ScalarMemRd, 1, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		{},
		{},
		{},
		// 8 = S_BUFFER_LOAD_DWORD
		{ GcnInstClass::ScalarMemRd, 1, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 9 = S_BUFFER_LOAD_DWORDX2
		{ GcnInstClass::ScalarMemRd, 1, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 10 = S_BUFFER_LOAD_DWORDX4
		{ GcnInstClass::ScalarMemRd, 1, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 11 = S_BUFFER_LOAD_DWORDX8
		{ GcnInstClass::ScalarMemRd, 1, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 12 = S_BUFFER_LOAD_DWORDX16
		{ GcnInstClass::ScalarMemRd, 1, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		// 29 = S_DCACHE_INV_VOL
		{ GcnInstClass::ScalarMemUt, 1, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 30 = S_MEMTIME
		{ GcnInstClass::ScalarMemUt, 1, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 31 = S_DCACHE_INV
		{ GcnInstClass::ScalarMemUt, 1, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
	} };

	const std::array<GcnInstFormat, 50> g_instructionFormatVOP2 = { {
		// 0 = V_CNDMASK_B32
		{ GcnInstClass::VectorThreadMask, 2, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 1 = V_READLANE_B32
		{ GcnInstClass::VectorLane, 2, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 2 = V_WRITELANE_B32
		{ GcnInstClass::VectorLane, 2, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 3 = V_ADD_F32
		{ GcnInstClass::VectorFpArith32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 4 = V_SUB_F32
		{ GcnInstClass::VectorFpArith32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 5 = V_SUBREV_F32
		{ GcnInstClass::VectorFpArith32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 6 = V_MAC_LEGACY_F32
		{ GcnInstClass::VectorFpArith32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 7 = V_MUL_LEGACY_F32
		{ GcnInstClass::VectorFpArith32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 8 = V_MUL_F32
		{ GcnInstClass::VectorFpArith32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 9 = V_MUL_I32_I24
		{ GcnInstClass::VectorIntArith32, 2, 1,
		  GcnNumericType::I24, GcnNumericType::I32 },
		// 10 = V_MUL_HI_I32_I24
		{ GcnInstClass::VectorIntArith32, 2, 1,
		  GcnNumericType::I24, GcnNumericType::I32 },
		// 11 = V_MUL_U32_U24
		{ GcnInstClass::VectorIntArith32, 2, 1,
		  GcnNumericType::U24, GcnNumericType::U32 },
		// 12 = V_MUL_HI_U32_U24
		{ GcnInstClass::VectorIntArith32, 2, 1,
		  GcnNumericType::U24, GcnNumericType::U32 },
		// 13 = V_MIN_LEGACY_F32
		{ GcnInstClass::VectorFpArith32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 14 = V_MAX_LEGACY_F32
		{ GcnInstClass::VectorFpArith32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 15 = V_MIN_F32
		{ GcnInstClass::VectorFpArith32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 16 = V_MAX_F32
		{ GcnInstClass::VectorFpArith32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 17 = V_MIN_I32
		{ GcnInstClass::VectorIntArith32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 18 = V_MAX_I32
		{ GcnInstClass::VectorIntArith32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 19 = V_MIN_U32
		{ GcnInstClass::VectorIntArith32, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 20 = V_MAX_U32
		{ GcnInstClass::VectorIntArith32, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 21 = V_LSHR_B32
		{ GcnInstClass::VectorBitField32, 2, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 22 = V_LSHRREV_B32
		{ GcnInstClass::VectorBitField32, 2, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 23 = V_ASHR_I32
		{ GcnInstClass::VectorBitField32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 24 = V_ASHRREV_I32
		{ GcnInstClass::VectorBitField32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 25 = V_LSHL_B32
		{ GcnInstClass::VectorBitField32, 2, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 26 = V_LSHLREV_B32
		{ GcnInstClass::VectorBitField32, 2, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 27 = V_AND_B32
		{ GcnInstClass::VectorBitLogic, 2, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 28 = V_OR_B32
		{ GcnInstClass::VectorBitLogic, 2, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 29 = V_XOR_B32
		{ GcnInstClass::VectorBitLogic, 2, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 30 = V_BFM_B32
		{ GcnInstClass::VectorBitField32, 2, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 31 = V_MAC_F32
		{ GcnInstClass::VectorFpArith32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 32 = V_MADMK_F32
		{ GcnInstClass::VectorFpArith32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 33 = V_MADAK_F32
		{ GcnInstClass::VectorFpArith32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 34 = V_BCNT_U32_B32
		{ GcnInstClass::VectorThreadMask, 2, 1,
		  GcnNumericType::B32, GcnNumericType::U32 },
		// 35 = V_MBCNT_LO_U32_B32
		{ GcnInstClass::VectorThreadMask, 2, 1,
		  GcnNumericType::B32, GcnNumericType::U32 },
		// 36 = V_MBCNT_HI_U32_B32
		{ GcnInstClass::VectorThreadMask, 2, 1,
		  GcnNumericType::B32, GcnNumericType::U32 },
		// 37 = V_ADD_I32
		{ GcnInstClass::VectorIntArith32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 38 = V_SUB_I32
		{ GcnInstClass::VectorIntArith32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 39 = V_SUBREV_I32
		{ GcnInstClass::VectorIntArith32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 40 = V_ADDC_U32
		{ GcnInstClass::VectorIntArith32, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 41 = V_SUBB_U32
		{ GcnInstClass::VectorIntArith32, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 42 = V_SUBBREV_U32
		{ GcnInstClass::VectorIntArith32, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 43 = V_LDEXP_F32
		{ GcnInstClass::VectorFpField32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 44 = V_CVT_PKACCUM_U8_F32
		{ GcnInstClass::VectorConv, 2, 1,
		  GcnNumericType::F32, GcnNumericType::U8 },
		// 45 = V_CVT_PKNORM_I16_F32
		{ GcnInstClass::VectorConv, 2, 1,
		  GcnNumericType::F32, GcnNumericType::I16 },
		// 46 = V_CVT_PKNORM_U16_F32
		{ GcnInstClass::VectorConv, 2, 1,
		  GcnNumericType::F32, GcnNumericType::U16 },
		// 47 = V_CVT_PKRTZ_F16_F32
		{ GcnInstClass::VectorConv, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F16 },
		// 48 = V_CVT_PK_U16_U32
		{ GcnInstClass::VectorConv, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U16 },
		// 49 = V_CVT_PK_I16_I32
		{ GcnInstClass::VectorConv, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I16 },
	} };

	const std::array<GcnInstFormat, 455> g_instructionFormatVOP3 = { {
		// 0 = V_CMP_F_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 1 = V_CMP_LT_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 2 = V_CMP_EQ_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 3 = V_CMP_LE_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 4 = V_CMP_GT_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 5 = V_CMP_LG_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 6 = V_CMP_GE_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 7 = V_CMP_O_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 8 = V_CMP_U_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 9 = V_CMP_NGE_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 10 = V_CMP_NLG_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 11 = V_CMP_NGT_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 12 = V_CMP_NLE_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 13 = V_CMP_NEQ_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 14 = V_CMP_NLT_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 15 = V_CMP_TRU_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 16 = V_CMPX_F_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 17 = V_CMPX_LT_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 18 = V_CMPX_EQ_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 19 = V_CMPX_LE_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 20 = V_CMPX_GT_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 21 = V_CMPX_LG_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 22 = V_CMPX_GE_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 23 = V_CMPX_O_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 24 = V_CMPX_U_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 25 = V_CMPX_NGE_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 26 = V_CMPX_NLG_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 27 = V_CMPX_NGT_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 28 = V_CMPX_NLE_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 29 = V_CMPX_NEQ_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 30 = V_CMPX_NLT_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 31 = V_CMPX_TRU_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 32 = V_CMP_F_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 33 = V_CMP_LT_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 34 = V_CMP_EQ_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 35 = V_CMP_LE_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 36 = V_CMP_GT_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 37 = V_CMP_LG_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 38 = V_CMP_GE_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 39 = V_CMP_O_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 40 = V_CMP_U_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 41 = V_CMP_NGE_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 42 = V_CMP_NLG_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 43 = V_CMP_NGT_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 44 = V_CMP_NLE_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 45 = V_CMP_NEQ_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 46 = V_CMP_NLT_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 47 = V_CMP_TRU_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 48 = V_CMPX_F_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 49 = V_CMPX_LT_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 50 = V_CMPX_EQ_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 51 = V_CMPX_LE_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 52 = V_CMPX_GT_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 53 = V_CMPX_LG_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 54 = V_CMPX_GE_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 55 = V_CMPX_O_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 56 = V_CMPX_U_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 57 = V_CMPX_NGE_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 58 = V_CMPX_NLG_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 59 = V_CMPX_NGT_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 60 = V_CMPX_NLE_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 61 = V_CMPX_NEQ_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 62 = V_CMPX_NLT_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 63 = V_CMPX_TRU_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 64 = V_CMPS_F_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 65 = V_CMPS_LT_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 66 = V_CMPS_EQ_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 67 = V_CMPS_LE_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 68 = V_CMPS_GT_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 69 = V_CMPS_LG_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 70 = V_CMPS_GE_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 71 = V_CMPS_O_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 72 = V_CMPS_U_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 73 = V_CMPS_NGE_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 74 = V_CMPS_NLG_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 75 = V_CMPS_NGT_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 76 = V_CMPS_NLE_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 77 = V_CMPS_NEQ_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 78 = V_CMPS_NLT_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 79 = V_CMPS_TRU_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 80 = V_CMPSX_F_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 81 = V_CMPSX_LT_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 82 = V_CMPSX_EQ_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 83 = V_CMPSX_LE_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 84 = V_CMPSX_GT_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 85 = V_CMPSX_LG_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 86 = V_CMPSX_GE_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 87 = V_CMPSX_O_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 88 = V_CMPSX_U_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 89 = V_CMPSX_NGE_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 90 = V_CMPSX_NLG_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 91 = V_CMPSX_NGT_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 92 = V_CMPSX_NLE_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 93 = V_CMPSX_NEQ_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 94 = V_CMPSX_NLT_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 95 = V_CMPSX_TRU_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 96 = V_CMPS_F_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 97 = V_CMPS_LT_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 98 = V_CMPS_EQ_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 99 = V_CMPS_LE_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 100 = V_CMPS_GT_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 101 = V_CMPS_LG_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 102 = V_CMPS_GE_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 103 = V_CMPS_O_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 104 = V_CMPS_U_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 105 = V_CMPS_NGE_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 106 = V_CMPS_NLG_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 107 = V_CMPS_NGT_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 108 = V_CMPS_NLE_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 109 = V_CMPS_NEQ_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 110 = V_CMPS_NLT_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 111 = V_CMPS_TRU_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 112 = V_CMPSX_F_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 113 = V_CMPSX_LT_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 114 = V_CMPSX_EQ_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 115 = V_CMPSX_LE_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 116 = V_CMPSX_GT_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 117 = V_CMPSX_LG_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 118 = V_CMPSX_GE_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 119 = V_CMPSX_O_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 120 = V_CMPSX_U_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 121 = V_CMPSX_NGE_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 122 = V_CMPSX_NLG_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 123 = V_CMPSX_NGT_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 124 = V_CMPSX_NLE_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 125 = V_CMPSX_NEQ_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 126 = V_CMPSX_NLT_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 127 = V_CMPSX_TRU_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 128 = V_CMP_F_I32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 129 = V_CMP_LT_I32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 130 = V_CMP_EQ_I32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 131 = V_CMP_LE_I32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 132 = V_CMP_GT_I32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 133 = V_CMP_NE_I32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 134 = V_CMP_GE_I32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 135 = V_CMP_T_I32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 136 = V_CMP_CLASS_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		// 144 = V_CMPX_F_I32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 145 = V_CMPX_LT_I32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 146 = V_CMPX_EQ_I32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 147 = V_CMPX_LE_I32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 148 = V_CMPX_GT_I32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 149 = V_CMPX_NE_I32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 150 = V_CMPX_GE_I32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 151 = V_CMPX_T_I32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 152 = V_CMPX_CLASS_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		// 160 = V_CMP_F_I64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::I64, GcnNumericType::I64 },
		// 161 = V_CMP_LT_I64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::I64, GcnNumericType::I64 },
		// 162 = V_CMP_EQ_I64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::I64, GcnNumericType::I64 },
		// 163 = V_CMP_LE_I64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::I64, GcnNumericType::I64 },
		// 164 = V_CMP_GT_I64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::I64, GcnNumericType::I64 },
		// 165 = V_CMP_NE_I64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::I64, GcnNumericType::I64 },
		// 166 = V_CMP_GE_I64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::I64, GcnNumericType::I64 },
		// 167 = V_CMP_T_I64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::I64, GcnNumericType::I64 },
		// 168 = V_CMP_CLASS_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		// 176 = V_CMPX_F_I64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::I64, GcnNumericType::I64 },
		// 177 = V_CMPX_LT_I64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::I64, GcnNumericType::I64 },
		// 178 = V_CMPX_EQ_I64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::I64, GcnNumericType::I64 },
		// 179 = V_CMPX_LE_I64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::I64, GcnNumericType::I64 },
		// 180 = V_CMPX_GT_I64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::I64, GcnNumericType::I64 },
		// 181 = V_CMPX_NE_I64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::I64, GcnNumericType::I64 },
		// 182 = V_CMPX_GE_I64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::I64, GcnNumericType::I64 },
		// 183 = V_CMPX_T_I64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::I64, GcnNumericType::I64 },
		// 184 = V_CMPX_CLASS_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		// 192 = V_CMP_F_U32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 193 = V_CMP_LT_U32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 194 = V_CMP_EQ_U32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 195 = V_CMP_LE_U32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 196 = V_CMP_GT_U32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 197 = V_CMP_NE_U32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 198 = V_CMP_GE_U32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 199 = V_CMP_T_U32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		// 208 = V_CMPX_F_U32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 209 = V_CMPX_LT_U32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 210 = V_CMPX_EQ_U32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 211 = V_CMPX_LE_U32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 212 = V_CMPX_GT_U32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 213 = V_CMPX_NE_U32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 214 = V_CMPX_GE_U32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 215 = V_CMPX_T_U32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		// 224 = V_CMP_F_U64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 225 = V_CMP_LT_U64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 226 = V_CMP_EQ_U64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 227 = V_CMP_LE_U64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 228 = V_CMP_GT_U64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 229 = V_CMP_NE_U64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 230 = V_CMP_GE_U64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 231 = V_CMP_T_U64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		// 240 = V_CMPX_F_U64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 241 = V_CMPX_LT_U64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 242 = V_CMPX_EQ_U64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 243 = V_CMPX_LE_U64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 244 = V_CMPX_GT_U64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 245 = V_CMPX_NE_U64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 246 = V_CMPX_GE_U64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 247 = V_CMPX_T_U64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		// 256 = V_CNDMASK_B32
		{ GcnInstClass::VectorThreadMask, 3, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 257 = V_READLANE_B32
		{ GcnInstClass::VectorLane, 2, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 258 = V_WRITELANE_B32
		{ GcnInstClass::VectorLane, 2, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 259 = V_ADD_F32
		{ GcnInstClass::VectorFpArith32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 260 = V_SUB_F32
		{ GcnInstClass::VectorFpArith32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 261 = V_SUBREV_F32
		{ GcnInstClass::VectorFpArith32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 262 = V_MAC_LEGACY_F32
		{ GcnInstClass::VectorFpArith32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 263 = V_MUL_LEGACY_F32
		{ GcnInstClass::VectorFpArith32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 264 = V_MUL_F32
		{ GcnInstClass::VectorFpArith32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 265 = V_MUL_I32_I24
		{ GcnInstClass::VectorIntArith32, 2, 1,
		  GcnNumericType::I24, GcnNumericType::I32 },
		// 266 = V_MUL_HI_I32_I24
		{ GcnInstClass::VectorIntArith32, 2, 1,
		  GcnNumericType::I24, GcnNumericType::I32 },
		// 267 = V_MUL_U32_U24
		{ GcnInstClass::VectorIntArith32, 2, 1,
		  GcnNumericType::U24, GcnNumericType::U32 },
		// 268 = V_MUL_HI_U32_U24
		{ GcnInstClass::VectorIntArith32, 2, 1,
		  GcnNumericType::U24, GcnNumericType::U32 },
		// 269 = V_MIN_LEGACY_F32
		{ GcnInstClass::VectorFpArith32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 270 = V_MAX_LEGACY_F32
		{ GcnInstClass::VectorFpArith32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 271 = V_MIN_F32
		{ GcnInstClass::VectorFpArith32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 272 = V_MAX_F32
		{ GcnInstClass::VectorFpArith32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 273 = V_MIN_I32
		{ GcnInstClass::VectorIntArith32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 274 = V_MAX_I32
		{ GcnInstClass::VectorIntArith32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 275 = V_MIN_U32
		{ GcnInstClass::VectorIntArith32, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 276 = V_MAX_U32
		{ GcnInstClass::VectorIntArith32, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 277 = V_LSHR_B32
		{ GcnInstClass::VectorBitField32, 2, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 278 = V_LSHRREV_B32
		{ GcnInstClass::VectorBitField32, 2, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 279 = V_ASHR_I32
		{ GcnInstClass::VectorBitField32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 280 = V_ASHRREV_I32
		{ GcnInstClass::VectorBitField32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 281 = V_LSHL_B32
		{ GcnInstClass::VectorBitField32, 2, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 282 = V_LSHLREV_B32
		{ GcnInstClass::VectorBitField32, 2, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 283 = V_AND_B32
		{ GcnInstClass::VectorBitLogic, 2, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 284 = V_OR_B32
		{ GcnInstClass::VectorBitLogic, 2, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 285 = V_XOR_B32
		{ GcnInstClass::VectorBitLogic, 2, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 286 = V_BFM_B32
		{ GcnInstClass::VectorBitField32, 2, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 287 = V_MAC_F32
		{ GcnInstClass::VectorFpArith32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 288 = V_MADMK_F32
		{ GcnInstClass::VectorFpArith32, 3, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 289 = V_MADAK_F32
		{ GcnInstClass::VectorFpArith32, 3, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 290 = V_BCNT_U32_B32
		{ GcnInstClass::VectorThreadMask, 2, 1,
		  GcnNumericType::B32, GcnNumericType::U32 },
		// 291 = V_MBCNT_LO_U32_B32
		{ GcnInstClass::VectorThreadMask, 2, 1,
		  GcnNumericType::B32, GcnNumericType::U32 },
		// 292 = V_MBCNT_HI_U32_B32
		{ GcnInstClass::VectorThreadMask, 2, 1,
		  GcnNumericType::B32, GcnNumericType::U32 },
		// 293 = V_ADD_I32
		{ GcnInstClass::VectorIntArith32, 3, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 294 = V_SUB_I32
		{ GcnInstClass::VectorIntArith32, 3, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 295 = V_SUBREV_I32
		{ GcnInstClass::VectorIntArith32, 3, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 296 = V_ADDC_U32
		{ GcnInstClass::VectorIntArith32, 3, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 297 = V_SUBB_U32
		{ GcnInstClass::VectorIntArith32, 3, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 298 = V_SUBBREV_U32
		{ GcnInstClass::VectorIntArith32, 3, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 299 = V_LDEXP_F32
		{ GcnInstClass::VectorFpField32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 300 = V_CVT_PKACCUM_U8_F32
		{ GcnInstClass::VectorConv, 2, 1,
		  GcnNumericType::F32, GcnNumericType::U8 },
		// 301 = V_CVT_PKNORM_I16_F32
		{ GcnInstClass::VectorConv, 2, 1,
		  GcnNumericType::F32, GcnNumericType::I16 },
		// 302 = V_CVT_PKNORM_U16_F32
		{ GcnInstClass::VectorConv, 2, 1,
		  GcnNumericType::F32, GcnNumericType::U16 },
		// 303 = V_CVT_PKRTZ_F16_F32
		{ GcnInstClass::VectorConv, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F16 },
		// 304 = V_CVT_PK_U16_U32
		{ GcnInstClass::VectorConv, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U16 },
		// 305 = V_CVT_PK_I16_I32
		{ GcnInstClass::VectorConv, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I16 },
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		// 320 = V_MAD_LEGACY_F32
		{ GcnInstClass::VectorFpArith32, 3, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 321 = V_MAD_F32
		{ GcnInstClass::VectorFpArith32, 3, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 322 = V_MAD_I32_I24
		{ GcnInstClass::VectorIntArith32, 3, 1,
		  GcnNumericType::I24, GcnNumericType::I32 },
		// 323 = V_MAD_U32_U24
		{ GcnInstClass::VectorIntArith32, 3, 1,
		  GcnNumericType::U24, GcnNumericType::U32 },
		// 324 = V_CUBEID_F32
		{ GcnInstClass::VectorFpGraph32, 3, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 325 = V_CUBESC_F32
		{ GcnInstClass::VectorFpGraph32, 3, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 326 = V_CUBETC_F32
		{ GcnInstClass::VectorFpGraph32, 3, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 327 = V_CUBEMA_F32
		{ GcnInstClass::VectorFpGraph32, 3, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 328 = V_BFE_U32
		{ GcnInstClass::VectorBitField32, 3, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 329 = V_BFE_I32
		{ GcnInstClass::VectorBitField32, 3, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 330 = V_BFI_B32
		{ GcnInstClass::VectorBitLogic, 3, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 331 = V_FMA_F32
		{ GcnInstClass::VectorFpArith32, 3, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 332 = V_FMA_F64
		{ GcnInstClass::VectorFpArith64, 3, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 333 = V_LERP_U8
		{ GcnInstClass::VectorIntGraph, 3, 1,
		  GcnNumericType::U8, GcnNumericType::U8 },
		// 334 = V_ALIGNBIT_B32
		{ GcnInstClass::VectorBitField32, 3, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 335 = V_ALIGNBYTE_B32
		{ GcnInstClass::VectorBitField32, 3, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 336 = V_MULLIT_F32
		{ GcnInstClass::VectorFpGraph32, 3, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 337 = V_MIN3_F32
		{ GcnInstClass::VectorIntArith32, 3, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 338 = V_MIN3_I32
		{ GcnInstClass::VectorIntArith32, 3, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 339 = V_MIN3_U32
		{ GcnInstClass::VectorIntArith32, 3, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 340 = V_MAX3_F32
		{ GcnInstClass::VectorIntArith32, 3, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 341 = V_MAX3_I32
		{ GcnInstClass::VectorIntArith32, 3, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 342 = V_MAX3_U32
		{ GcnInstClass::VectorIntArith32, 3, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 343 = V_MED3_F32
		{ GcnInstClass::VectorIntArith32, 3, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 344 = V_MED3_I32
		{ GcnInstClass::VectorIntArith32, 3, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 345 = V_MED3_U32
		{ GcnInstClass::VectorIntArith32, 3, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 346 = V_SAD_U8
		{ GcnInstClass::VectorIntGraph, 3, 1,
		  GcnNumericType::U8, GcnNumericType::U8 },
		// 347 = V_SAD_HI_U8
		{ GcnInstClass::VectorIntGraph, 3, 1,
		  GcnNumericType::U8, GcnNumericType::U8 },
		// 348 = V_SAD_U16
		{ GcnInstClass::VectorIntGraph, 3, 1,
		  GcnNumericType::U16, GcnNumericType::U16 },
		// 349 = V_SAD_U32
		{ GcnInstClass::VectorIntGraph, 3, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 350 = V_CVT_PK_U8_F32
		{ GcnInstClass::VectorConv, 3, 1,
		  GcnNumericType::F32, GcnNumericType::U8 },
		// 351 = V_DIV_FIXUP_F32
		{ GcnInstClass::VectorFpTran32, 3, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 352 = V_DIV_FIXUP_F64
		{ GcnInstClass::VectorFpTran64, 3, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 353 = V_LSHL_B64
		{ GcnInstClass::VectorBitField64, 2, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 354 = V_LSHR_B64
		{ GcnInstClass::VectorBitField64, 2, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 355 = V_ASHR_I64
		{ GcnInstClass::VectorBitField64, 2, 1,
		  GcnNumericType::I64, GcnNumericType::I64 },
		// 356 = V_ADD_F64
		{ GcnInstClass::VectorFpArith64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 357 = V_MUL_F64
		{ GcnInstClass::VectorFpArith64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 358 = V_MIN_F64
		{ GcnInstClass::VectorFpArith64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 359 = V_MAX_F64
		{ GcnInstClass::VectorFpArith64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 360 = V_LDEXP_F64
		{ GcnInstClass::VectorFpField64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 361 = V_MUL_LO_U32
		{ GcnInstClass::VectorIntArith32, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 362 = V_MUL_HI_U32
		{ GcnInstClass::VectorIntArith32, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 363 = V_MUL_LO_I32
		{ GcnInstClass::VectorIntArith32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 364 = V_MUL_HI_I32
		{ GcnInstClass::VectorIntArith32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 365 = V_DIV_SCALE_F32
		{ GcnInstClass::VectorFpTran32, 3, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 366 = V_DIV_SCALE_F64
		{ GcnInstClass::VectorFpTran64, 3, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 367 = V_DIV_FMAS_F32
		{ GcnInstClass::VectorFpTran32, 3, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 368 = V_DIV_FMAS_F64
		{ GcnInstClass::VectorFpTran64, 3, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 369 = V_MSAD_U8
		{ GcnInstClass::VectorIntGraph, 3, 1,
		  GcnNumericType::U8, GcnNumericType::U8 },
		// 370 = V_QSAD_U8
		{ GcnInstClass::Undefined, 3, 1,
		  GcnNumericType::U8, GcnNumericType::U8 },
		// 371 = V_MQSAD_U8
		{ GcnInstClass::Undefined, 3, 1,
		  GcnNumericType::U8, GcnNumericType::U8 },
		// 372 = V_TRIG_PREOP_F64
		{ GcnInstClass::VectorFpTran64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		// 384 = V_NOP
		{ GcnInstClass::VectorMisc, 0, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 385 = V_MOV_B32
		{ GcnInstClass::VectorRegMov, 1, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 386 = V_READFIRSTLANE_B32
		{ GcnInstClass::VectorLane, 1, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 387 = V_CVT_I32_F64
		{ GcnInstClass::VectorConv, 1, 1,
		  GcnNumericType::F64, GcnNumericType::I32 },
		// 388 = V_CVT_F64_I32
		{ GcnInstClass::VectorConv, 1, 1,
		  GcnNumericType::I32, GcnNumericType::F64 },
		// 389 = V_CVT_F32_I32
		{ GcnInstClass::VectorFpTran32, 1, 1,
		  GcnNumericType::I32, GcnNumericType::F32 },
		// 390 = V_CVT_F32_U32
		{ GcnInstClass::VectorFpTran32, 1, 1,
		  GcnNumericType::U32, GcnNumericType::F32 },
		// 391 = V_CVT_U32_F32
		{ GcnInstClass::VectorFpTran32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::U32 },
		// 392 = V_CVT_I32_F32
		{ GcnInstClass::VectorFpTran32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::I32 },
		// 393 = V_MOV_FED_B32
		{ GcnInstClass::Undefined, 1, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 394 = V_CVT_F16_F32
		{ GcnInstClass::VectorConv, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F16 },
		// 395 = V_CVT_F32_F16
		{ GcnInstClass::VectorConv, 1, 1,
		  GcnNumericType::F16, GcnNumericType::F32 },
		// 396 = V_CVT_RPI_I32_F32
		{ GcnInstClass::VectorConv, 1, 1,
		  GcnNumericType::F32, GcnNumericType::I32 },
		// 397 = V_CVT_FLR_I32_F32
		{ GcnInstClass::VectorConv, 1, 1,
		  GcnNumericType::F32, GcnNumericType::I32 },
		// 398 = V_CVT_OFF_F32_I4
		{ GcnInstClass::VectorConv, 1, 1,
		  GcnNumericType::I4, GcnNumericType::F32 },
		// 399 = V_CVT_F32_F64
		{ GcnInstClass::VectorConv, 1, 1,
		  GcnNumericType::F64, GcnNumericType::F32 },
		// 400 = V_CVT_F64_F32
		{ GcnInstClass::VectorConv, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F64 },
		// 401 = V_CVT_F32_UBYTE0
		{ GcnInstClass::VectorConv, 1, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 402 = V_CVT_F32_UBYTE1
		{ GcnInstClass::VectorConv, 1, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 403 = V_CVT_F32_UBYTE2
		{ GcnInstClass::VectorConv, 1, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 404 = V_CVT_F32_UBYTE3
		{ GcnInstClass::VectorConv, 1, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 405 = V_CVT_U32_F64
		{ GcnInstClass::VectorConv, 1, 1,
		  GcnNumericType::F64, GcnNumericType::U32 },
		// 406 = V_CVT_F64_U32
		{ GcnInstClass::VectorConv, 1, 1,
		  GcnNumericType::U32, GcnNumericType::F64 },
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		// 416 = V_FRACT_F32
		{ GcnInstClass::VectorFpRound32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 417 = V_TRUNC_F32
		{ GcnInstClass::VectorFpRound32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 418 = V_CEIL_F32
		{ GcnInstClass::VectorFpRound32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 419 = V_RNDNE_F32
		{ GcnInstClass::VectorFpRound32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 420 = V_FLOOR_F32
		{ GcnInstClass::VectorFpRound32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 421 = V_EXP_F32
		{ GcnInstClass::VectorFpTran32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 422 = V_LOG_CLAMP_F32
		{ GcnInstClass::VectorFpTran32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 423 = V_LOG_F32
		{ GcnInstClass::VectorFpTran32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 424 = V_RCP_CLAMP_F32
		{ GcnInstClass::VectorFpTran32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 425 = V_RCP_LEGACY_F32
		{ GcnInstClass::VectorFpTran32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 426 = V_RCP_F32
		{ GcnInstClass::VectorFpTran32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 427 = V_RCP_IFLAG_F32
		{ GcnInstClass::VectorFpTran32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 428 = V_RSQ_CLAMP_F32
		{ GcnInstClass::VectorFpTran32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 429 = V_RSQ_LEGACY_F32
		{ GcnInstClass::VectorFpTran32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 430 = V_RSQ_F32
		{ GcnInstClass::VectorFpTran32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 431 = V_RCP_F64
		{ GcnInstClass::VectorFpTran64, 1, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 432 = V_RCP_CLAMP_F64
		{ GcnInstClass::VectorFpTran64, 1, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 433 = V_RSQ_F64
		{ GcnInstClass::VectorFpTran64, 1, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 434 = V_RSQ_CLAMP_F64
		{ GcnInstClass::VectorFpTran64, 1, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 435 = V_SQRT_F32
		{ GcnInstClass::VectorFpTran32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 436 = V_SQRT_F64
		{ GcnInstClass::VectorFpTran64, 1, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 437 = V_SIN_F32
		{ GcnInstClass::VectorFpTran32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 438 = V_COS_F32
		{ GcnInstClass::VectorFpTran32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 439 = V_NOT_B32
		{ GcnInstClass::VectorBitLogic, 1, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 440 = V_BFREV_B32
		{ GcnInstClass::VectorBitField32, 1, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 441 = V_FFBH_U32
		{ GcnInstClass::VectorBitField32, 1, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 442 = V_FFBL_B32
		{ GcnInstClass::VectorBitField32, 1, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 443 = V_FFBH_I32
		{ GcnInstClass::VectorBitField32, 1, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 444 = V_FREXP_EXP_I32_F64
		{ GcnInstClass::VectorFpField64, 1, 1,
		  GcnNumericType::F64, GcnNumericType::I32 },
		// 445 = V_FREXP_MANT_F64
		{ GcnInstClass::VectorFpField64, 1, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 446 = V_FRACT_F64
		{ GcnInstClass::VectorFpRound64, 1, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 447 = V_FREXP_EXP_I32_F32
		{ GcnInstClass::VectorFpField32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::I32 },
		// 448 = V_FREXP_MANT_F32
		{ GcnInstClass::VectorFpField32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 449 = V_CLREXCP
		{ GcnInstClass::Undefined, 0, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 450 = V_MOVRELD_B32
		{ GcnInstClass::VectorRegMov, 1, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 451 = V_MOVRELS_B32
		{ GcnInstClass::VectorRegMov, 1, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 452 = V_MOVRELSD_B32
		{ GcnInstClass::VectorRegMov, 1, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		{},
		{},
	} };

	const std::array<GcnInstFormat, 71> g_instructionFormatVOP1 = { {
		// 0 = V_NOP
		{ GcnInstClass::VectorMisc, 0, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 1 = V_MOV_B32
		{ GcnInstClass::VectorRegMov, 1, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 2 = V_READFIRSTLANE_B32
		{ GcnInstClass::VectorLane, 1, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 3 = V_CVT_I32_F64
		{ GcnInstClass::VectorConv, 1, 1,
		  GcnNumericType::F64, GcnNumericType::I32 },
		// 4 = V_CVT_F64_I32
		{ GcnInstClass::VectorConv, 1, 1,
		  GcnNumericType::I32, GcnNumericType::F64 },
		// 5 = V_CVT_F32_I32
		{ GcnInstClass::VectorConv, 1, 1,
		  GcnNumericType::I32, GcnNumericType::F32 },
		// 6 = V_CVT_F32_U32
		{ GcnInstClass::VectorConv, 1, 1,
		  GcnNumericType::U32, GcnNumericType::F32 },
		// 7 = V_CVT_U32_F32
		{ GcnInstClass::VectorConv, 1, 1,
		  GcnNumericType::F32, GcnNumericType::U32 },
		// 8 = V_CVT_I32_F32
		{ GcnInstClass::VectorConv, 1, 1,
		  GcnNumericType::F32, GcnNumericType::I32 },
		// 9 = V_MOV_FED_B32
		{ GcnInstClass::Undefined, 1, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 10 = V_CVT_F16_F32
		{ GcnInstClass::VectorConv, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F16 },
		// 11 = V_CVT_F32_F16
		{ GcnInstClass::VectorConv, 1, 1,
		  GcnNumericType::F16, GcnNumericType::F32 },
		// 12 = V_CVT_RPI_I32_F32
		{ GcnInstClass::VectorConv, 1, 1,
		  GcnNumericType::F32, GcnNumericType::I32 },
		// 13 = V_CVT_FLR_I32_F32
		{ GcnInstClass::VectorConv, 1, 1,
		  GcnNumericType::F32, GcnNumericType::I32 },
		// 14 = V_CVT_OFF_F32_I4
		{ GcnInstClass::VectorConv, 1, 1,
		  GcnNumericType::I4, GcnNumericType::F32 },
		// 15 = V_CVT_F32_F64
		{ GcnInstClass::VectorConv, 1, 1,
		  GcnNumericType::F64, GcnNumericType::F32 },
		// 16 = V_CVT_F64_F32
		{ GcnInstClass::VectorConv, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F64 },
		// 17 = V_CVT_F32_UBYTE0
		{ GcnInstClass::VectorConv, 1, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 18 = V_CVT_F32_UBYTE1
		{ GcnInstClass::VectorConv, 1, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 19 = V_CVT_F32_UBYTE2
		{ GcnInstClass::VectorConv, 1, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 20 = V_CVT_F32_UBYTE3
		{ GcnInstClass::VectorConv, 1, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 21 = V_CVT_U32_F64
		{ GcnInstClass::VectorConv, 1, 1,
		  GcnNumericType::F64, GcnNumericType::U32 },
		// 22 = V_CVT_F64_U32
		{ GcnInstClass::VectorConv, 1, 1,
		  GcnNumericType::U32, GcnNumericType::F64 },
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		// 32 = V_FRACT_F32
		{ GcnInstClass::VectorFpRound32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 33 = V_TRUNC_F32
		{ GcnInstClass::VectorFpRound32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 34 = V_CEIL_F32
		{ GcnInstClass::VectorFpRound32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 35 = V_RNDNE_F32
		{ GcnInstClass::VectorFpRound32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 36 = V_FLOOR_F32
		{ GcnInstClass::VectorFpRound32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 37 = V_EXP_F32
		{ GcnInstClass::VectorFpTran32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 38 = V_LOG_CLAMP_F32
		{ GcnInstClass::VectorFpTran32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 39 = V_LOG_F32
		{ GcnInstClass::VectorFpTran32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 40 = V_RCP_CLAMP_F32
		{ GcnInstClass::VectorFpTran32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 41 = V_RCP_LEGACY_F32
		{ GcnInstClass::VectorFpTran32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 42 = V_RCP_F32
		{ GcnInstClass::VectorFpTran32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 43 = V_RCP_IFLAG_F32
		{ GcnInstClass::VectorFpTran32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 44 = V_RSQ_CLAMP_F32
		{ GcnInstClass::VectorFpTran32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 45 = V_RSQ_LEGACY_F32
		{ GcnInstClass::VectorFpTran32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 46 = V_RSQ_F32
		{ GcnInstClass::VectorFpTran32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 47 = V_RCP_F64
		{ GcnInstClass::VectorFpTran64, 1, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 48 = V_RCP_CLAMP_F64
		{ GcnInstClass::VectorFpTran64, 1, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 49 = V_RSQ_F64
		{ GcnInstClass::VectorFpTran64, 1, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 50 = V_RSQ_CLAMP_F64
		{ GcnInstClass::VectorFpTran64, 1, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 51 = V_SQRT_F32
		{ GcnInstClass::VectorFpTran32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 52 = V_SQRT_F64
		{ GcnInstClass::VectorFpTran64, 1, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 53 = V_SIN_F32
		{ GcnInstClass::VectorFpTran32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 54 = V_COS_F32
		{ GcnInstClass::VectorFpTran32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 55 = V_NOT_B32
		{ GcnInstClass::VectorBitLogic, 1, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 56 = V_BFREV_B32
		{ GcnInstClass::VectorBitField32, 1, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 57 = V_FFBH_U32
		{ GcnInstClass::VectorBitField32, 1, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 58 = V_FFBL_B32
		{ GcnInstClass::VectorBitField32, 1, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 59 = V_FFBH_I32
		{ GcnInstClass::VectorBitField32, 1, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 60 = V_FREXP_EXP_I32_F64
		{ GcnInstClass::VectorFpField64, 1, 1,
		  GcnNumericType::F64, GcnNumericType::I32 },
		// 61 = V_FREXP_MANT_F64
		{ GcnInstClass::VectorFpField64, 1, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 62 = V_FRACT_F64
		{ GcnInstClass::VectorFpRound64, 1, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 63 = V_FREXP_EXP_I32_F32
		{ GcnInstClass::VectorFpField32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::I32 },
		// 64 = V_FREXP_MANT_F32
		{ GcnInstClass::VectorFpField32, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 65 = V_CLREXCP
		{ GcnInstClass::Undefined, 0, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 66 = V_MOVRELD_B32
		{ GcnInstClass::VectorRegMov, 1, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 67 = V_MOVRELS_B32
		{ GcnInstClass::VectorRegMov, 1, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 68 = V_MOVRELSD_B32
		{ GcnInstClass::VectorRegMov, 1, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		{},
		{},
	} };

	const std::array<GcnInstFormat, 248> g_instructionFormatVOPC = { {
		// 0 = V_CMP_F_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 1 = V_CMP_LT_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 2 = V_CMP_EQ_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 3 = V_CMP_LE_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 4 = V_CMP_GT_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 5 = V_CMP_LG_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 6 = V_CMP_GE_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 7 = V_CMP_O_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 8 = V_CMP_U_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 9 = V_CMP_NGE_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 10 = V_CMP_NLG_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 11 = V_CMP_NGT_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 12 = V_CMP_NLE_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 13 = V_CMP_NEQ_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 14 = V_CMP_NLT_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 15 = V_CMP_TRU_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 16 = V_CMPX_F_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 17 = V_CMPX_LT_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 18 = V_CMPX_EQ_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 19 = V_CMPX_LE_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 20 = V_CMPX_GT_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 21 = V_CMPX_LG_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 22 = V_CMPX_GE_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 23 = V_CMPX_O_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 24 = V_CMPX_U_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 25 = V_CMPX_NGE_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 26 = V_CMPX_NLG_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 27 = V_CMPX_NGT_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 28 = V_CMPX_NLE_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 29 = V_CMPX_NEQ_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 30 = V_CMPX_NLT_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 31 = V_CMPX_TRU_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 32 = V_CMP_F_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 33 = V_CMP_LT_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 34 = V_CMP_EQ_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 35 = V_CMP_LE_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 36 = V_CMP_GT_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 37 = V_CMP_LG_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 38 = V_CMP_GE_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 39 = V_CMP_O_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 40 = V_CMP_U_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 41 = V_CMP_NGE_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 42 = V_CMP_NLG_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 43 = V_CMP_NGT_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 44 = V_CMP_NLE_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 45 = V_CMP_NEQ_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 46 = V_CMP_NLT_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 47 = V_CMP_TRU_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 48 = V_CMPX_F_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 49 = V_CMPX_LT_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 50 = V_CMPX_EQ_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 51 = V_CMPX_LE_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 52 = V_CMPX_GT_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 53 = V_CMPX_LG_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 54 = V_CMPX_GE_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 55 = V_CMPX_O_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 56 = V_CMPX_U_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 57 = V_CMPX_NGE_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 58 = V_CMPX_NLG_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 59 = V_CMPX_NGT_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 60 = V_CMPX_NLE_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 61 = V_CMPX_NEQ_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 62 = V_CMPX_NLT_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 63 = V_CMPX_TRU_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 64 = V_CMPS_F_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 65 = V_CMPS_LT_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 66 = V_CMPS_EQ_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 67 = V_CMPS_LE_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 68 = V_CMPS_GT_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 69 = V_CMPS_LG_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 70 = V_CMPS_GE_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 71 = V_CMPS_O_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 72 = V_CMPS_U_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 73 = V_CMPS_NGE_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 74 = V_CMPS_NLG_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 75 = V_CMPS_NGT_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 76 = V_CMPS_NLE_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 77 = V_CMPS_NEQ_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 78 = V_CMPS_NLT_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 79 = V_CMPS_TRU_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 80 = V_CMPSX_F_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 81 = V_CMPSX_LT_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 82 = V_CMPSX_EQ_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 83 = V_CMPSX_LE_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 84 = V_CMPSX_GT_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 85 = V_CMPSX_LG_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 86 = V_CMPSX_GE_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 87 = V_CMPSX_O_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 88 = V_CMPSX_U_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 89 = V_CMPSX_NGE_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 90 = V_CMPSX_NLG_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 91 = V_CMPSX_NGT_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 92 = V_CMPSX_NLE_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 93 = V_CMPSX_NEQ_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 94 = V_CMPSX_NLT_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 95 = V_CMPSX_TRU_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 96 = V_CMPS_F_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 97 = V_CMPS_LT_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 98 = V_CMPS_EQ_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 99 = V_CMPS_LE_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 100 = V_CMPS_GT_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 101 = V_CMPS_LG_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 102 = V_CMPS_GE_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 103 = V_CMPS_O_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 104 = V_CMPS_U_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 105 = V_CMPS_NGE_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 106 = V_CMPS_NLG_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 107 = V_CMPS_NGT_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 108 = V_CMPS_NLE_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 109 = V_CMPS_NEQ_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 110 = V_CMPS_NLT_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 111 = V_CMPS_TRU_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 112 = V_CMPSX_F_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 113 = V_CMPSX_LT_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 114 = V_CMPSX_EQ_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 115 = V_CMPSX_LE_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 116 = V_CMPSX_GT_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 117 = V_CMPSX_LG_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 118 = V_CMPSX_GE_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 119 = V_CMPSX_O_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 120 = V_CMPSX_U_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 121 = V_CMPSX_NGE_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 122 = V_CMPSX_NLG_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 123 = V_CMPSX_NGT_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 124 = V_CMPSX_NLE_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 125 = V_CMPSX_NEQ_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 126 = V_CMPSX_NLT_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 127 = V_CMPSX_TRU_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 128 = V_CMP_F_I32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 129 = V_CMP_LT_I32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 130 = V_CMP_EQ_I32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 131 = V_CMP_LE_I32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 132 = V_CMP_GT_I32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 133 = V_CMP_NE_I32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 134 = V_CMP_GE_I32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 135 = V_CMP_T_I32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 136 = V_CMP_CLASS_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		// 144 = V_CMPX_F_I32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 145 = V_CMPX_LT_I32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 146 = V_CMPX_EQ_I32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 147 = V_CMPX_LE_I32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 148 = V_CMPX_GT_I32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 149 = V_CMPX_NE_I32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 150 = V_CMPX_GE_I32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 151 = V_CMPX_T_I32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 152 = V_CMPX_CLASS_F32
		{ GcnInstClass::VectorFpCmp32, 2, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		// 160 = V_CMP_F_I64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::I64, GcnNumericType::I64 },
		// 161 = V_CMP_LT_I64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::I64, GcnNumericType::I64 },
		// 162 = V_CMP_EQ_I64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::I64, GcnNumericType::I64 },
		// 163 = V_CMP_LE_I64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::I64, GcnNumericType::I64 },
		// 164 = V_CMP_GT_I64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::I64, GcnNumericType::I64 },
		// 165 = V_CMP_NE_I64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::I64, GcnNumericType::I64 },
		// 166 = V_CMP_GE_I64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::I64, GcnNumericType::I64 },
		// 167 = V_CMP_T_I64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::I64, GcnNumericType::I64 },
		// 168 = V_CMP_CLASS_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		// 176 = V_CMPX_F_I64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::I64, GcnNumericType::I64 },
		// 177 = V_CMPX_LT_I64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::I64, GcnNumericType::I64 },
		// 178 = V_CMPX_EQ_I64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::I64, GcnNumericType::I64 },
		// 179 = V_CMPX_LE_I64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::I64, GcnNumericType::I64 },
		// 180 = V_CMPX_GT_I64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::I64, GcnNumericType::I64 },
		// 181 = V_CMPX_NE_I64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::I64, GcnNumericType::I64 },
		// 182 = V_CMPX_GE_I64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::I64, GcnNumericType::I64 },
		// 183 = V_CMPX_T_I64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::I64, GcnNumericType::I64 },
		// 184 = V_CMPX_CLASS_F64
		{ GcnInstClass::VectorFpCmp64, 2, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		// 192 = V_CMP_F_U32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 193 = V_CMP_LT_U32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 194 = V_CMP_EQ_U32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 195 = V_CMP_LE_U32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 196 = V_CMP_GT_U32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 197 = V_CMP_NE_U32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 198 = V_CMP_GE_U32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 199 = V_CMP_T_U32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		// 208 = V_CMPX_F_U32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 209 = V_CMPX_LT_U32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 210 = V_CMPX_EQ_U32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 211 = V_CMPX_LE_U32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 212 = V_CMPX_GT_U32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 213 = V_CMPX_NE_U32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 214 = V_CMPX_GE_U32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 215 = V_CMPX_T_U32
		{ GcnInstClass::VectorIntCmp32, 2, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		// 224 = V_CMP_F_U64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 225 = V_CMP_LT_U64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 226 = V_CMP_EQ_U64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 227 = V_CMP_LE_U64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 228 = V_CMP_GT_U64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 229 = V_CMP_NE_U64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 230 = V_CMP_GE_U64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 231 = V_CMP_T_U64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		// 240 = V_CMPX_F_U64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 241 = V_CMPX_LT_U64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 242 = V_CMPX_EQ_U64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 243 = V_CMPX_LE_U64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 244 = V_CMPX_GT_U64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 245 = V_CMPX_NE_U64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 246 = V_CMPX_GE_U64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 247 = V_CMPX_T_U64
		{ GcnInstClass::VectorIntCmp64, 2, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
	} };

	const std::array<GcnInstFormat, 3> g_instructionFormatVINTRP = { {
		// 0 = V_INTERP_P1_F32
		{ GcnInstClass::VectorInterpFpCache, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 1 = V_INTERP_P2_F32
		{ GcnInstClass::VectorInterpFpCache, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 2 = V_INTERP_MOV_F32
		{ GcnInstClass::VectorInterpFpCache, 1, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
	} };

	const std::array<GcnInstFormat, 256> g_instructionFormatDS = { {
		// 0 = DS_ADD_U32
		{ GcnInstClass::DsAtomicArith32, 3, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 1 = DS_SUB_U32
		{ GcnInstClass::DsAtomicArith32, 3, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 2 = DS_RSUB_U32
		{ GcnInstClass::DsAtomicArith32, 3, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 3 = DS_INC_U32
		{ GcnInstClass::DsAtomicArith32, 3, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 4 = DS_DEC_U32
		{ GcnInstClass::DsAtomicArith32, 3, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 5 = DS_MIN_I32
		{ GcnInstClass::DsAtomicMinMax32, 3, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 6 = DS_MAX_I32
		{ GcnInstClass::DsAtomicMinMax32, 3, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 7 = DS_MIN_U32
		{ GcnInstClass::DsAtomicMinMax32, 3, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 8 = DS_MAX_U32
		{ GcnInstClass::DsAtomicMinMax32, 3, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 9 = DS_AND_B32
		{ GcnInstClass::DsAtomicLogic32, 3, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 10 = DS_OR_B32
		{ GcnInstClass::DsAtomicLogic32, 3, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 11 = DS_XOR_B32
		{ GcnInstClass::DsAtomicLogic32, 3, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 12 = DS_MSKOR_B32
		{ GcnInstClass::DsAtomicLogic32, 3, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 13 = DS_WRITE_B32
		{ GcnInstClass::DsIdxWr, 3, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 14 = DS_WRITE2_B32
		{ GcnInstClass::DsIdxWr, 3, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 15 = DS_WRITE2ST64_B32
		{ GcnInstClass::DsIdxWr, 3, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 16 = DS_CMPST_B32
		{ GcnInstClass::DsAtomicCmpSt32, 3, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 17 = DS_CMPST_F32
		{ GcnInstClass::DsAtomicCmpSt32, 3, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 18 = DS_MIN_F32
		{ GcnInstClass::DsAtomicMinMax32, 3, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 19 = DS_MAX_F32
		{ GcnInstClass::DsAtomicMinMax32, 3, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 20 = DS_NOP
		{ GcnInstClass::DsDataShareMisc, 3, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		{},
		{},
		{},
		// 24 = DS_GWS_SEMA_RELEASE_ALL
		{ GcnInstClass::GdsSync, 3, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 25 = DS_GWS_INIT
		{ GcnInstClass::GdsSync, 3, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 26 = DS_GWS_SEMA_V
		{ GcnInstClass::GdsSync, 3, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 27 = DS_GWS_SEMA_BR
		{ GcnInstClass::GdsSync, 3, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 28 = DS_GWS_SEMA_P
		{ GcnInstClass::GdsSync, 3, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 29 = DS_GWS_BARRIER
		{ GcnInstClass::ScalarSync, 3, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 30 = DS_WRITE_B8
		{ GcnInstClass::DsIdxWr, 3, 1,
		  GcnNumericType::B8, GcnNumericType::B8 },
		// 31 = DS_WRITE_B16
		{ GcnInstClass::DsIdxWr, 3, 1,
		  GcnNumericType::B16, GcnNumericType::B16 },
		// 32 = DS_ADD_RTN_U32
		{ GcnInstClass::DsAtomicArith32, 3, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 33 = DS_SUB_RTN_U32
		{ GcnInstClass::DsAtomicArith32, 3, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 34 = DS_RSUB_RTN_U32
		{ GcnInstClass::DsAtomicArith32, 3, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 35 = DS_INC_RTN_U32
		{ GcnInstClass::DsAtomicArith32, 3, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 36 = DS_DEC_RTN_U32
		{ GcnInstClass::DsAtomicArith32, 3, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 37 = DS_MIN_RTN_I32
		{ GcnInstClass::DsAtomicMinMax32, 3, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 38 = DS_MAX_RTN_I32
		{ GcnInstClass::DsAtomicMinMax32, 3, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 39 = DS_MIN_RTN_U32
		{ GcnInstClass::DsAtomicMinMax32, 3, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 40 = DS_MAX_RTN_U32
		{ GcnInstClass::DsAtomicMinMax32, 3, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 41 = DS_AND_RTN_B32
		{ GcnInstClass::DsAtomicLogic32, 3, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 42 = DS_OR_RTN_B32
		{ GcnInstClass::DsAtomicLogic32, 3, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 43 = DS_XOR_RTN_B32
		{ GcnInstClass::DsAtomicLogic32, 3, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 44 = DS_MSKOR_RTN_B32
		{ GcnInstClass::DsAtomicLogic32, 3, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 45 = DS_WRXCHG_RTN_B32
		{ GcnInstClass::DsIdxWrXchg, 3, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 46 = DS_WRXCHG2_RTN_B32
		{ GcnInstClass::DsIdxWrXchg, 3, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 47 = DS_WRXCHG2ST64_RTN_B32
		{ GcnInstClass::DsIdxWrXchg, 3, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 48 = DS_CMPST_RTN_B32
		{ GcnInstClass::DsAtomicCmpSt32, 3, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 49 = DS_CMPST_RTN_F32
		{ GcnInstClass::DsAtomicCmpSt32, 3, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 50 = DS_MIN_RTN_F32
		{ GcnInstClass::DsAtomicMinMax32, 3, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 51 = DS_MAX_RTN_F32
		{ GcnInstClass::DsAtomicMinMax32, 3, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 52 = DS_WRAP_RTN_B32
		{ GcnInstClass::DsIdxWrap, 3, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 53 = DS_SWIZZLE_B32
		{ GcnInstClass::DsDataShareUt, 3, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 54 = DS_READ_B32
		{ GcnInstClass::DsIdxRd, 3, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 55 = DS_READ2_B32
		{ GcnInstClass::DsIdxRd, 3, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 56 = DS_READ2ST64_B32
		{ GcnInstClass::DsIdxRd, 3, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 57 = DS_READ_I8
		{ GcnInstClass::DsIdxRd, 3, 1,
		  GcnNumericType::I8, GcnNumericType::I8 },
		// 58 = DS_READ_U8
		{ GcnInstClass::DsIdxRd, 3, 1,
		  GcnNumericType::U8, GcnNumericType::U8 },
		// 59 = DS_READ_I16
		{ GcnInstClass::DsIdxRd, 3, 1,
		  GcnNumericType::I16, GcnNumericType::I16 },
		// 60 = DS_READ_U16
		{ GcnInstClass::DsIdxRd, 3, 1,
		  GcnNumericType::U16, GcnNumericType::U16 },
		// 61 = DS_CONSUME
		{ GcnInstClass::DsAppendCon, 3, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 62 = DS_APPEND
		{ GcnInstClass::DsAppendCon, 3, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 63 = DS_ORDERED_COUNT
		{ GcnInstClass::GdsOrdCnt, 3, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 64 = DS_ADD_U64
		{ GcnInstClass::DsAtomicArith64, 3, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 65 = DS_SUB_U64
		{ GcnInstClass::DsAtomicArith64, 3, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 66 = DS_RSUB_U64
		{ GcnInstClass::DsAtomicArith64, 3, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 67 = DS_INC_U64
		{ GcnInstClass::DsAtomicArith64, 3, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 68 = DS_DEC_U64
		{ GcnInstClass::DsAtomicArith64, 3, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 69 = DS_MIN_I64
		{ GcnInstClass::DsAtomicMinMax64, 3, 1,
		  GcnNumericType::I64, GcnNumericType::I64 },
		// 70 = DS_MAX_I64
		{ GcnInstClass::DsAtomicMinMax64, 3, 1,
		  GcnNumericType::I64, GcnNumericType::I64 },
		// 71 = DS_MIN_U64
		{ GcnInstClass::DsAtomicMinMax64, 3, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 72 = DS_MAX_U64
		{ GcnInstClass::DsAtomicMinMax64, 3, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 73 = DS_AND_B64
		{ GcnInstClass::DsAtomicLogic64, 3, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 74 = DS_OR_B64
		{ GcnInstClass::DsAtomicLogic64, 3, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 75 = DS_XOR_B64
		{ GcnInstClass::DsAtomicLogic64, 3, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 76 = DS_MSKOR_B64
		{ GcnInstClass::DsAtomicLogic64, 3, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 77 = DS_WRITE_B64
		{ GcnInstClass::DsIdxWr, 3, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 78 = DS_WRITE2_B64
		{ GcnInstClass::DsIdxWr, 3, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 79 = DS_WRITE2ST64_B64
		{ GcnInstClass::DsIdxWr, 3, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 80 = DS_CMPST_B64
		{ GcnInstClass::DsAtomicCmpSt64, 3, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 81 = DS_CMPST_F64
		{ GcnInstClass::DsAtomicCmpSt64, 3, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 82 = DS_MIN_F64
		{ GcnInstClass::DsAtomicMinMax64, 3, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 83 = DS_MAX_F64
		{ GcnInstClass::DsAtomicMinMax64, 3, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		// 96 = DS_ADD_RTN_U64
		{ GcnInstClass::DsAtomicArith64, 3, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 97 = DS_SUB_RTN_U64
		{ GcnInstClass::DsAtomicArith64, 3, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 98 = DS_RSUB_RTN_U64
		{ GcnInstClass::DsAtomicArith64, 3, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 99 = DS_INC_RTN_U64
		{ GcnInstClass::DsAtomicArith64, 3, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 100 = DS_DEC_RTN_U64
		{ GcnInstClass::DsAtomicArith64, 3, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 101 = DS_MIN_RTN_I64
		{ GcnInstClass::DsAtomicMinMax64, 3, 1,
		  GcnNumericType::I64, GcnNumericType::I64 },
		// 102 = DS_MAX_RTN_I64
		{ GcnInstClass::DsAtomicMinMax64, 3, 1,
		  GcnNumericType::I64, GcnNumericType::I64 },
		// 103 = DS_MIN_RTN_U64
		{ GcnInstClass::DsAtomicMinMax64, 3, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 104 = DS_MAX_RTN_U64
		{ GcnInstClass::DsAtomicMinMax64, 3, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 105 = DS_AND_RTN_B64
		{ GcnInstClass::DsAtomicLogic64, 3, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 106 = DS_OR_RTN_B64
		{ GcnInstClass::DsAtomicLogic64, 3, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 107 = DS_XOR_RTN_B64
		{ GcnInstClass::DsAtomicLogic64, 3, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 108 = DS_MSKOR_RTN_B64
		{ GcnInstClass::DsAtomicLogic64, 3, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 109 = DS_WRXCHG_RTN_B64
		{ GcnInstClass::DsIdxWrXchg, 3, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 110 = DS_WRXCHG2_RTN_B64
		{ GcnInstClass::DsIdxWrXchg, 3, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 111 = DS_WRXCHG2ST64_RTN_B64
		{ GcnInstClass::DsIdxWrXchg, 3, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 112 = DS_CMPST_RTN_B64
		{ GcnInstClass::DsAtomicCmpSt64, 3, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 113 = DS_CMPST_RTN_F64
		{ GcnInstClass::DsAtomicCmpSt64, 3, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 114 = DS_MIN_RTN_F64
		{ GcnInstClass::DsAtomicMinMax64, 3, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 115 = DS_MAX_RTN_F64
		{ GcnInstClass::DsAtomicMinMax64, 3, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		{},
		{},
		// 118 = DS_READ_B64
		{ GcnInstClass::DsIdxRd, 3, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 119 = DS_READ2_B64
		{ GcnInstClass::DsIdxRd, 3, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 120 = DS_READ2ST64_B64
		{ GcnInstClass::DsIdxRd, 3, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		{},
		{},
		{},
		{},
		{},
		// 126 = DS_CONDXCHG32_RTN_B64
		{ GcnInstClass::DsIdxCondXchg, 3, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		{},
		// 128 = DS_ADD_SRC2_U32
		{ GcnInstClass::DsAtomicArith32, 3, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 129 = DS_SUB_SRC2_U32
		{ GcnInstClass::DsAtomicArith32, 3, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 130 = DS_RSUB_SRC2_U32
		{ GcnInstClass::DsAtomicArith32, 3, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 131 = DS_INC_SRC2_U32
		{ GcnInstClass::DsAtomicArith32, 3, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 132 = DS_DEC_SRC2_U32
		{ GcnInstClass::DsAtomicArith32, 3, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 133 = DS_MIN_SRC2_I32
		{ GcnInstClass::DsAtomicMinMax32, 3, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 134 = DS_MAX_SRC2_I32
		{ GcnInstClass::DsAtomicMinMax32, 3, 1,
		  GcnNumericType::I32, GcnNumericType::I32 },
		// 135 = DS_MIN_SRC2_U32
		{ GcnInstClass::DsAtomicMinMax32, 3, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 136 = DS_MAX_SRC2_U32
		{ GcnInstClass::DsAtomicMinMax32, 3, 1,
		  GcnNumericType::U32, GcnNumericType::U32 },
		// 137 = DS_AND_SRC2_B32
		{ GcnInstClass::DsAtomicLogic32, 3, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 138 = DS_OR_SRC2_B32
		{ GcnInstClass::DsAtomicLogic32, 3, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		// 139 = DS_XOR_SRC2_B32
		{ GcnInstClass::DsAtomicLogic32, 3, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		{},
		// 141 = DS_WRITE_SRC2_B32
		{ GcnInstClass::DsIdxWr, 3, 1,
		  GcnNumericType::B32, GcnNumericType::B32 },
		{},
		{},
		{},
		{},
		// 146 = DS_MIN_SRC2_F32
		{ GcnInstClass::DsAtomicMinMax32, 3, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		// 147 = DS_MAX_SRC2_F32
		{ GcnInstClass::DsAtomicMinMax32, 3, 1,
		  GcnNumericType::F32, GcnNumericType::F32 },
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		// 192 = DS_ADD_SRC2_U64
		{ GcnInstClass::DsAtomicArith64, 3, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 193 = DS_SUB_SRC2_U64
		{ GcnInstClass::DsAtomicArith64, 3, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 194 = DS_RSUB_SRC2_U64
		{ GcnInstClass::DsAtomicArith64, 3, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 195 = DS_INC_SRC2_U64
		{ GcnInstClass::DsAtomicArith64, 3, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 196 = DS_DEC_SRC2_U64
		{ GcnInstClass::DsAtomicArith64, 3, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 197 = DS_MIN_SRC2_I64
		{ GcnInstClass::DsAtomicMinMax64, 3, 1,
		  GcnNumericType::I64, GcnNumericType::I64 },
		// 198 = DS_MAX_SRC2_I64
		{ GcnInstClass::DsAtomicMinMax64, 3, 1,
		  GcnNumericType::I64, GcnNumericType::I64 },
		// 199 = DS_MIN_SRC2_U64
		{ GcnInstClass::DsAtomicMinMax64, 3, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 200 = DS_MAX_SRC2_U64
		{ GcnInstClass::DsAtomicMinMax64, 3, 1,
		  GcnNumericType::U64, GcnNumericType::U64 },
		// 201 = DS_AND_SRC2_B64
		{ GcnInstClass::DsAtomicLogic64, 3, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 202 = DS_OR_SRC2_B64
		{ GcnInstClass::DsAtomicLogic64, 3, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		// 203 = DS_XOR_SRC2_B64
		{ GcnInstClass::DsAtomicLogic64, 3, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		{},
		// 205 = DS_WRITE_SRC2_B64
		{ GcnInstClass::DsIdxWr, 3, 1,
		  GcnNumericType::B64, GcnNumericType::B64 },
		{},
		{},
		{},
		{},
		// 210 = DS_MIN_SRC2_F64
		{ GcnInstClass::DsAtomicMinMax64, 3, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		// 211 = DS_MAX_SRC2_F64
		{ GcnInstClass::DsAtomicMinMax64, 3, 1,
		  GcnNumericType::F64, GcnNumericType::F64 },
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		// 222 = DS_WRITE_B96
		{ GcnInstClass::Undefined, 3, 1,
		  GcnNumericType::B96, GcnNumericType::B96 },
		// 223 = DS_WRITE_B128
		{ GcnInstClass::Undefined, 3, 1,
		  GcnNumericType::B128, GcnNumericType::B128 },
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		// 253 = DS_CONDXCHG32_RTN_B128
		{ GcnInstClass::Undefined, 3, 1,
		  GcnNumericType::B128, GcnNumericType::B128 },
		// 254 = DS_READ_B96
		{ GcnInstClass::Undefined, 3, 1,
		  GcnNumericType::B96, GcnNumericType::B96 },
		// 255 = DS_READ_B128
		{ GcnInstClass::Undefined, 3, 1,
		  GcnNumericType::B128, GcnNumericType::B128 },
	} };

	const std::array<GcnInstFormat, 114> g_instructionFormatMUBUF = { {
		// 0 = BUFFER_LOAD_FORMAT_X
		{ GcnInstClass::VectorMemBufFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 1 = BUFFER_LOAD_FORMAT_XY
		{ GcnInstClass::VectorMemBufFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 2 = BUFFER_LOAD_FORMAT_XYZ
		{ GcnInstClass::VectorMemBufFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 3 = BUFFER_LOAD_FORMAT_XYZW
		{ GcnInstClass::VectorMemBufFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 4 = BUFFER_STORE_FORMAT_X
		{ GcnInstClass::VectorMemBufFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 5 = BUFFER_STORE_FORMAT_XY
		{ GcnInstClass::VectorMemBufFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 6 = BUFFER_STORE_FORMAT_XYZ
		{ GcnInstClass::VectorMemBufFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 7 = BUFFER_STORE_FORMAT_XYZW
		{ GcnInstClass::VectorMemBufFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 8 = BUFFER_LOAD_UBYTE
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 9 = BUFFER_LOAD_SBYTE
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 10 = BUFFER_LOAD_USHORT
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 11 = BUFFER_LOAD_SSHORT
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 12 = BUFFER_LOAD_DWORD
		{ GcnInstClass::ScalarMemRd, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 13 = BUFFER_LOAD_DWORDX2
		{ GcnInstClass::ScalarMemRd, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 14 = BUFFER_LOAD_DWORDX4
		{ GcnInstClass::ScalarMemRd, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 15 = BUFFER_LOAD_DWORDX3
		{ GcnInstClass::ScalarMemRd, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		// 24 = BUFFER_STORE_BYTE
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		{},
		// 26 = BUFFER_STORE_SHORT
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		{},
		// 28 = BUFFER_STORE_DWORD
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 29 = BUFFER_STORE_DWORDX2
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 30 = BUFFER_STORE_DWORDX4
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 31 = BUFFER_STORE_DWORDX3
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		// 48 = BUFFER_ATOMIC_SWAP
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 49 = BUFFER_ATOMIC_CMPSWAP
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 50 = BUFFER_ATOMIC_ADD
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 51 = BUFFER_ATOMIC_SUB
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		{},
		// 53 = BUFFER_ATOMIC_SMIN
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 54 = BUFFER_ATOMIC_UMIN
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 55 = BUFFER_ATOMIC_SMAX
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 56 = BUFFER_ATOMIC_UMAX
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 57 = BUFFER_ATOMIC_AND
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 58 = BUFFER_ATOMIC_OR
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 59 = BUFFER_ATOMIC_XOR
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 60 = BUFFER_ATOMIC_INC
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 61 = BUFFER_ATOMIC_DEC
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 62 = BUFFER_ATOMIC_FCMPSWAP
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 63 = BUFFER_ATOMIC_FMIN
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 64 = BUFFER_ATOMIC_FMAX
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		// 80 = BUFFER_ATOMIC_SWAP_X2
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 81 = BUFFER_ATOMIC_CMPSWAP_X2
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 82 = BUFFER_ATOMIC_ADD_X2
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 83 = BUFFER_ATOMIC_SUB_X2
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		{},
		// 85 = BUFFER_ATOMIC_SMIN_X2
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 86 = BUFFER_ATOMIC_UMIN_X2
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 87 = BUFFER_ATOMIC_SMAX_X2
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 88 = BUFFER_ATOMIC_UMAX_X2
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 89 = BUFFER_ATOMIC_AND_X2
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 90 = BUFFER_ATOMIC_OR_X2
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 91 = BUFFER_ATOMIC_XOR_X2
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 92 = BUFFER_ATOMIC_INC_X2
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 93 = BUFFER_ATOMIC_DEC_X2
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 94 = BUFFER_ATOMIC_FCMPSWAP_X2
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 95 = BUFFER_ATOMIC_FMIN_X2
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 96 = BUFFER_ATOMIC_FMAX_X2
		{ GcnInstClass::VectorMemBufNoFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		// 112 = BUFFER_WBINVL1_SC
		{ GcnInstClass::VectorMemL1Cache, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 113 = BUFFER_WBINVL1
		{ GcnInstClass::VectorMemL1Cache, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
	} };

	const std::array<GcnInstFormat, 8> g_instructionFormatMTBUF = { {
		// 0 = TBUFFER_LOAD_FORMAT_X
		{ GcnInstClass::VectorMemBufFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 1 = TBUFFER_LOAD_FORMAT_XY
		{ GcnInstClass::VectorMemBufFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 2 = TBUFFER_LOAD_FORMAT_XYZ
		{ GcnInstClass::VectorMemBufFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 3 = TBUFFER_LOAD_FORMAT_XYZW
		{ GcnInstClass::VectorMemBufFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 4 = TBUFFER_STORE_FORMAT_X
		{ GcnInstClass::VectorMemBufFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 5 = TBUFFER_STORE_FORMAT_XY
		{ GcnInstClass::VectorMemBufFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 6 = TBUFFER_STORE_FORMAT_XYZ
		{ GcnInstClass::VectorMemBufFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 7 = TBUFFER_STORE_FORMAT_XYZW
		{ GcnInstClass::VectorMemBufFmt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
	} };

	const std::array<GcnInstFormat, 112> g_instructionFormatMIMG = { {
		// 0 = IMAGE_LOAD
		{ GcnInstClass::VectorMemImgNoSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 1 = IMAGE_LOAD_MIP
		{ GcnInstClass::VectorMemImgNoSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 2 = IMAGE_LOAD_PCK
		{ GcnInstClass::VectorMemImgNoSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 3 = IMAGE_LOAD_PCK_SGN
		{ GcnInstClass::VectorMemImgNoSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 4 = IMAGE_LOAD_MIP_PCK
		{ GcnInstClass::VectorMemImgNoSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 5 = IMAGE_LOAD_MIP_PCK_SGN
		{ GcnInstClass::VectorMemImgNoSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		{},
		{},
		// 8 = IMAGE_STORE
		{ GcnInstClass::VectorMemImgNoSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 9 = IMAGE_STORE_MIP
		{ GcnInstClass::VectorMemImgNoSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 10 = IMAGE_STORE_PCK
		{ GcnInstClass::VectorMemImgNoSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 11 = IMAGE_STORE_MIP_PCK
		{ GcnInstClass::VectorMemImgNoSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		{},
		{},
		// 14 = IMAGE_GET_RESINFO
		{ GcnInstClass::VectorMemImgUt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 15 = IMAGE_ATOMIC_SWAP
		{ GcnInstClass::VectorMemImgNoSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 16 = IMAGE_ATOMIC_CMPSWAP
		{ GcnInstClass::VectorMemImgNoSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 17 = IMAGE_ATOMIC_ADD
		{ GcnInstClass::VectorMemImgNoSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 18 = IMAGE_ATOMIC_SUB
		{ GcnInstClass::VectorMemImgNoSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		{},
		// 20 = IMAGE_ATOMIC_SMIN
		{ GcnInstClass::VectorMemImgNoSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 21 = IMAGE_ATOMIC_UMIN
		{ GcnInstClass::VectorMemImgNoSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 22 = IMAGE_ATOMIC_SMAX
		{ GcnInstClass::VectorMemImgNoSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 23 = IMAGE_ATOMIC_UMAX
		{ GcnInstClass::VectorMemImgNoSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 24 = IMAGE_ATOMIC_AND
		{ GcnInstClass::VectorMemImgNoSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 25 = IMAGE_ATOMIC_OR
		{ GcnInstClass::VectorMemImgNoSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 26 = IMAGE_ATOMIC_XOR
		{ GcnInstClass::VectorMemImgNoSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 27 = IMAGE_ATOMIC_INC
		{ GcnInstClass::VectorMemImgNoSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 28 = IMAGE_ATOMIC_DEC
		{ GcnInstClass::VectorMemImgNoSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 29 = IMAGE_ATOMIC_FCMPSWAP
		{ GcnInstClass::VectorMemImgNoSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 30 = IMAGE_ATOMIC_FMIN
		{ GcnInstClass::VectorMemImgNoSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 31 = IMAGE_ATOMIC_FMAX
		{ GcnInstClass::VectorMemImgNoSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 32 = IMAGE_SAMPLE
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 33 = IMAGE_SAMPLE_CL
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 34 = IMAGE_SAMPLE_D
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 35 = IMAGE_SAMPLE_D_CL
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 36 = IMAGE_SAMPLE_L
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 37 = IMAGE_SAMPLE_B
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 38 = IMAGE_SAMPLE_B_CL
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 39 = IMAGE_SAMPLE_LZ
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 40 = IMAGE_SAMPLE_C
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 41 = IMAGE_SAMPLE_C_CL
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 42 = IMAGE_SAMPLE_C_D
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 43 = IMAGE_SAMPLE_C_D_CL
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 44 = IMAGE_SAMPLE_C_L
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 45 = IMAGE_SAMPLE_C_B
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 46 = IMAGE_SAMPLE_C_B_CL
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 47 = IMAGE_SAMPLE_C_LZ
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 48 = IMAGE_SAMPLE_O
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 49 = IMAGE_SAMPLE_CL_O
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 50 = IMAGE_SAMPLE_D_O
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 51 = IMAGE_SAMPLE_D_CL_O
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 52 = IMAGE_SAMPLE_L_O
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 53 = IMAGE_SAMPLE_B_O
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 54 = IMAGE_SAMPLE_B_CL_O
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 55 = IMAGE_SAMPLE_LZ_O
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 56 = IMAGE_SAMPLE_C_O
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 57 = IMAGE_SAMPLE_C_CL_O
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 58 = IMAGE_SAMPLE_C_D_O
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 59 = IMAGE_SAMPLE_C_D_CL_O
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 60 = IMAGE_SAMPLE_C_L_O
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 61 = IMAGE_SAMPLE_C_B_O
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 62 = IMAGE_SAMPLE_C_B_CL_O
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 63 = IMAGE_SAMPLE_C_LZ_O
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 64 = IMAGE_GATHER4
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 65 = IMAGE_GATHER4_CL
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		{},
		{},
		// 68 = IMAGE_GATHER4_L
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 69 = IMAGE_GATHER4_B
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 70 = IMAGE_GATHER4_B_CL
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 71 = IMAGE_GATHER4_LZ
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 72 = IMAGE_GATHER4_C
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 73 = IMAGE_GATHER4_C_CL
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		{},
		{},
		// 76 = IMAGE_GATHER4_C_L
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 77 = IMAGE_GATHER4_C_B
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 78 = IMAGE_GATHER4_C_B_CL
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 79 = IMAGE_GATHER4_C_LZ
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 80 = IMAGE_GATHER4_O
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 81 = IMAGE_GATHER4_CL_O
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		{},
		{},
		// 84 = IMAGE_GATHER4_L_O
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 85 = IMAGE_GATHER4_B_O
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 86 = IMAGE_GATHER4_B_CL_O
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 87 = IMAGE_GATHER4_LZ_O
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 88 = IMAGE_GATHER4_C_O
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 89 = IMAGE_GATHER4_C_CL_O
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		{},
		{},
		// 92 = IMAGE_GATHER4_C_L_O
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 93 = IMAGE_GATHER4_C_B_O
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 94 = IMAGE_GATHER4_C_B_CL_O
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 95 = IMAGE_GATHER4_C_LZ_O
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 96 = IMAGE_GET_LOD
		{ GcnInstClass::VectorMemImgUt, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		// 104 = IMAGE_SAMPLE_CD
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 105 = IMAGE_SAMPLE_CD_CL
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 106 = IMAGE_SAMPLE_C_CD
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 107 = IMAGE_SAMPLE_C_CD_CL
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 108 = IMAGE_SAMPLE_CD_O
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 109 = IMAGE_SAMPLE_CD_CL_O
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 110 = IMAGE_SAMPLE_C_CD_O
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
		// 111 = IMAGE_SAMPLE_C_CD_CL_O
		{ GcnInstClass::VectorMemImgSmp, 4, 1,
		  GcnNumericType::Undefined, GcnNumericType::Undefined },
	} };

	const std::array<GcnInstFormat, 1> g_instructionFormatEXP = { {
		{ GcnInstClass::Exp, 4, 1,
		  GcnNumericType::F32, GcnNumericType::Undefined },
	} };

	GcnInstFormat gcnInstructionFormat(GcnInstEncoding encoding, uint32_t opcode)
	{
		GcnInstFormat format;
		switch (encoding)
		{
		case GcnInstEncoding::SOP1:
			format = g_instructionFormatSOP1[opcode];
			break;
		case GcnInstEncoding::SOPP:
			format = g_instructionFormatSOPP[opcode];
			break;
		case GcnInstEncoding::SOPC:
			format = g_instructionFormatSOPC[opcode];
			break;
		case GcnInstEncoding::VOP1:
			format = g_instructionFormatVOP1[opcode];
			break;
		case GcnInstEncoding::VOPC:
			format = g_instructionFormatVOPC[opcode];
			break;
		case GcnInstEncoding::VOP3:
			format = g_instructionFormatVOP3[opcode];
			break;
		case GcnInstEncoding::EXP:
			format = g_instructionFormatEXP[opcode];
			break;
		case GcnInstEncoding::VINTRP:
			format = g_instructionFormatVINTRP[opcode];
			break;
		case GcnInstEncoding::DS:
			format = g_instructionFormatDS[opcode];
			break;
		case GcnInstEncoding::MUBUF:
			format = g_instructionFormatMUBUF[opcode];
			break;
		case GcnInstEncoding::MTBUF:
			format = g_instructionFormatMTBUF[opcode];
			break;
		case GcnInstEncoding::MIMG:
			format = g_instructionFormatMIMG[opcode];
			break;
		case GcnInstEncoding::SMRD:
			format = g_instructionFormatSMRD[opcode];
			break;
		case GcnInstEncoding::SOPK:
			format = g_instructionFormatSOPK[opcode];
			break;
		case GcnInstEncoding::SOP2:
			format = g_instructionFormatSOP2[opcode];
			break;
		case GcnInstEncoding::VOP2:
			format = g_instructionFormatVOP2[opcode];
			break;
		}
		return format;
	}

}  // namespace sce::gcn