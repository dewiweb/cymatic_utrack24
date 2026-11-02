// rea decompile_all
// name: FUN_0056bf70
// address: 0x56bf70
// body: available
// range: 0x56bf70-0x56c0f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0056bf70(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined2 *param_5,
                 undefined4 param_6)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int local_30;
  bool local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d4845;
  local_10 = ExceptionList;
  uVar2 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_11 = false;
  uVar1 = *(undefined4 *)(param_4 + 0xd8);
  *(undefined2 *)(param_1 + 0x4c) = 0x3784;
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  FUN_00503de0(param_2);
  iVar3 = FUN_0052f3a0(1);
  if (iVar3 == 0) {
    FUN_0052f410(param_3);
  }
  iVar3 = FUN_005af82d(0x110,uVar2);
  local_8 = 0;
  if (iVar3 == 0) {
    local_30 = 0;
  }
  else {
    local_30 = FUN_0056af60(param_4,1,0x4a,1);
  }
  local_8 = 0xffffffff;
  if (local_30 != 0) {
    *(undefined2 *)(local_30 + 0x8a) = param_5[1];
    *(undefined2 *)(local_30 + 0x88) = *param_5;
    *(undefined2 *)(local_30 + 0x8c) = param_5[2];
    *(undefined2 *)(local_30 + 0x8e) = param_5[3];
    FUN_00501d80(param_6);
    uVar2 = FUN_00521c70(param_1,local_30);
    local_11 = (uVar2 & 0x80) != 0;
    (**(code **)(*(int *)(local_30 + 0x28 + *(int *)(*(int *)(local_30 + 0x28) + 8)) + 4))();
  }
  ExceptionList = local_10;
  return local_11;
}

