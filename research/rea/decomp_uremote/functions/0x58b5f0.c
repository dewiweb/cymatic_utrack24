// rea decompile_all
// name: FUN_0058b5f0
// address: 0x58b5f0
// body: available
// range: 0x58b5f0-0x58b6fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_0058b5f0(undefined2 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13,undefined4 param_14,undefined4 param_15)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d60f1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0057b5b0(0x10022319,param_1,param_2);
  local_8 = 0;
  *in_ECX = CPG::CCPMessage_SM_FilteredDeviceSearchReply::vftable;
  in_ECX[1] = CPG::CCPMessage_SM_FilteredDeviceSearchReply::vftable;
  in_ECX[10] = param_3;
  in_ECX[0xb] = param_4;
  in_ECX[0xc] = param_5;
  in_ECX[0xd] = param_6;
  in_ECX[0xe] = param_7;
  in_ECX[0xf] = param_8;
  in_ECX[0x10] = param_9;
  in_ECX[0x11] = param_10;
  FUN_005033e0(param_11);
  FUN_005033e0(param_12);
  FUN_005018d0(param_13);
  local_8._0_1_ = 1;
  FUN_005018d0(param_14);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_00506330(param_15);
  ExceptionList = local_10;
  return in_ECX;
}

