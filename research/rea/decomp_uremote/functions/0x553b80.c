// rea decompile_all
// name: FUN_00553b80
// address: 0x553b80
// body: available
// range: 0x553b80-0x553d5c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00553b80(int param_1,int param_2)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d369d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 != 0) {
    in_ECX[0x28] = &DAT_005ee180;
    in_ECX[0x53] = CPNS::IAsync::vftable;
    local_8 = 0;
  }
  FUN_00598120(0x2004,"TaskDeviceInfoGetPerfMsgInfo");
  local_8 = 1;
  *in_ECX = CPCHAI::CTaskDeviceInfoGetPerfMsgInfo::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x28] + 4) + 0xa0) =
       CPCHAI::CTaskDeviceInfoGetPerfMsgInfo::vftable;
  *(int *)((int)in_ECX + *(int *)(in_ECX[0x28] + 4) + 0x9c) = *(int *)(in_ECX[0x28] + 4) + -0xac;
  FUN_00555940(param_1 + 0xb08);
  local_8._0_1_ = 2;
  FUN_00555ab0(param_1 + 0xb08);
  local_8._0_1_ = 3;
  FUN_00555c20(param_1 + 0xb08);
  local_8._0_1_ = 4;
  FUN_00555d00(param_1 + 0xb08);
  local_8._0_1_ = 5;
  FUN_00555de0(param_1 + 0xb08);
  local_8 = CONCAT31(local_8._1_3_,6);
  in_ECX[0x43] = param_1;
  in_ECX[0x48] = 0;
  in_ECX[0x49] = 0;
  *(undefined2 *)(in_ECX + 0x4a) = 0;
  *(undefined2 *)((int)in_ECX + 0x132) = 0;
  *(undefined2 *)(in_ECX + 0x4c) = 0;
  *(undefined2 *)(in_ECX + 0x4d) = 0;
  *(undefined2 *)((int)in_ECX + 0x136) = 0;
  FUN_00503380();
  ExceptionList = local_10;
  return in_ECX;
}

