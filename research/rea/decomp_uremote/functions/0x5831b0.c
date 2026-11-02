// rea decompile_all
// name: FUN_005831b0
// address: 0x5831b0
// body: available
// range: 0x5831b0-0x5832ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_005831b0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d59e9;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0057b190(0x10022301);
  local_8 = 0;
  *in_ECX = CPG::CCPMessage_SM_GetDeviceInfoReply::vftable;
  in_ECX[1] = CPG::CCPMessage_SM_GetDeviceInfoReply::vftable;
  FUN_005017d0(uVar1);
  local_8._0_1_ = 1;
  FUN_005017d0();
  local_8._0_1_ = 2;
  FUN_005017d0();
  local_8._0_1_ = 3;
  FUN_005017d0();
  local_8._0_1_ = 4;
  FUN_00503380();
  FUN_00506310();
  local_8 = CONCAT31(local_8._1_3_,5);
  FUN_00503bc0();
  in_ECX[10] = 0;
  *(undefined1 *)(in_ECX + 0x45) = 1;
  *(undefined2 *)(in_ECX + 0x35) = 0;
  *(undefined2 *)((int)in_ECX + 0xd2) = 0;
  *(undefined2 *)((int)in_ECX + 0xce) = 0;
  *(undefined2 *)(in_ECX + 0x33) = 0;
  in_ECX[0x36] = 0;
  in_ECX[0x37] = 0;
  in_ECX[0x38] = 0;
  ExceptionList = local_10;
  return in_ECX;
}

