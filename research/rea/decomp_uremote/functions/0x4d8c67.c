// rea decompile_all
// name: FUN_004d8c67
// address: 0x4d8c67
// body: available
// range: 0x4d8c67-0x4d8e0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d8c67(undefined4 param_1,int param_2,int param_3,undefined4 param_4,char param_5,
                 char param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uStack_78;
  undefined1 *local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  uint uStack_5c;
  undefined4 local_48;
  undefined1 local_38 [36];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005dde30;
  local_14 = ExceptionList;
  uStack_5c = DAT_00955fd4 ^ (uint)&stack0xffffffa8;
  ExceptionList = &local_14;
  local_48 = 0x3f000000;
  if ((param_5 != '\0') || (param_6 != '\0')) {
    local_64 = 7.121819e-39;
    FUN_0047604f();
    local_64 = 7.121829e-39;
    FUN_0047d23a();
    local_48 = 0x3f800000;
  }
  local_60 = (float)param_2;
  fVar1 = (float)param_2 * 0.5;
  fVar2 = (float)param_3 * 0.5;
  local_64 = 7.121886e-39;
  iVar4 = FUN_00440367();
  local_60 = 1.4013e-45;
  local_74 = (undefined1 *)&local_6c;
  fVar3 = (float)iVar4 * 0.4;
  local_64 = fVar2 - fVar3 * 4.0;
  local_70 = (float)local_48;
  uStack_78 = 0x4d8d41;
  local_68 = fVar1;
  FUN_0047620f();
  local_70 = fVar3 + fVar2;
  local_74 = (undefined1 *)(fVar3 * 0.1 + fVar1);
  FUN_0047620f(&uStack_78,local_48);
  local_60 = (float)FUN_00476850(local_38);
  local_c = 0;
  local_64 = (float)param_1;
  local_68 = 7.12214e-39;
  FUN_0047ce07();
  local_c = 0xffffffff;
  local_60 = 7.12216e-39;
  FUN_004768de();
  local_64 = fVar3 + fVar3;
  local_68 = fVar2 - fVar3;
  local_6c = fVar1 - fVar3;
  local_70 = 7.122262e-39;
  local_60 = local_64;
  FUN_0047d49c();
  ExceptionList = local_14;
  return;
}

