// rea decompile_all
// name: FUN_00582240
// address: 0x582240
// body: available
// range: 0x582240-0x58238e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_00582240(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13,undefined4 param_14)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005d58c7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CPNS::ISerializable::vftable;
  in_ECX[1] = CPG::CPListItem<CPG::CCPMessage_Generic>::vftable;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  *in_ECX = CPG::CCPMessage_Generic::vftable;
  in_ECX[1] = CPG::CCPMessage_Generic::vftable;
  in_ECX[4] = param_1 | 0x10002300;
  local_8 = 0;
  *in_ECX = CPG::CCPMessage_SM_DeviceDeclarationXXX::vftable;
  in_ECX[1] = CPG::CCPMessage_SM_DeviceDeclarationXXX::vftable;
  FUN_005033e0(param_2);
  FUN_005033e0(param_3);
  in_ECX[0xc] = param_4;
  in_ECX[0xd] = param_5;
  in_ECX[0xe] = param_6;
  in_ECX[0xf] = param_7;
  in_ECX[0x10] = param_8;
  in_ECX[0x11] = param_9;
  in_ECX[0x12] = param_10;
  in_ECX[0x13] = param_11;
  FUN_005018d0(param_12);
  local_8._0_1_ = 1;
  FUN_005018d0(param_13);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_00506330(param_14);
  ExceptionList = local_10;
  return in_ECX;
}

