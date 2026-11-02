// rea decompile_all
// name: FUN_00557020
// address: 0x557020
// body: available
// range: 0x557020-0x557219 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_00557020(int param_1,ushort param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int local_54;
  undefined4 *local_50;
  undefined1 local_38 [12];
  undefined1 local_2c [12];
  int local_20;
  undefined4 *local_1c;
  int local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d39d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_20 = FUN_005af82d(0x98,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if (local_20 == 0) {
    local_50 = (undefined4 *)0x0;
  }
  else {
    local_50 = (undefined4 *)FUN_00556e90(1);
  }
  local_1c = local_50;
  local_8 = 0xffffffff;
  local_14 = local_50;
  if (local_50 != (undefined4 *)0x0) {
    local_50[0x1a] = param_4;
    *(undefined2 *)(local_50 + 0x1b) = 0;
    local_50[0x15] = param_5;
    local_50[0x1c] = *(undefined4 *)(param_1 + 0x2c);
    uVar2 = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) + 8))
                      (local_2c);
    FUN_00503650(uVar2);
    FUN_0056f170(param_2);
    for (local_18 = 0; local_18 < (int)(uint)param_2; local_18 = local_18 + 1) {
      FUN_0056f2d0(local_18 * 0xc + param_3);
    }
    if (local_14 == (undefined4 *)0x0) {
      local_54 = 0;
    }
    else {
      local_54 = (int)local_14 + *(int *)(local_14[0x18] + 4) + 0x60;
    }
    uVar6 = 0;
    uVar3 = -(uint)(*(char *)(*(int *)(param_1 + 0x2c) + 0xad) != '\0') & 60000;
    iVar4 = *(int *)(param_1 + 0x2c) + 0x3f8;
    puVar5 = local_38;
    uVar2 = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) + 8))
                      (puVar5,iVar4,param_5,uVar3,0,local_54);
    cVar1 = FUN_00544180(param_1,uVar2,puVar5,iVar4,param_5,uVar3,uVar6);
    if (cVar1 != '\0') {
      ExceptionList = local_10;
      return local_14;
    }
    if (local_14 != (undefined4 *)0x0) {
      (**(code **)*local_14)(1);
    }
  }
  ExceptionList = local_10;
  return (undefined4 *)0x0;
}

