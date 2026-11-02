// rea decompile_all
// name: FUN_0059bdf0
// address: 0x59bdf0
// body: available
// range: 0x59bdf0-0x59c046 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0059bdf0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_54;
  undefined1 local_38 [12];
  undefined1 local_2c [12];
  int local_20;
  int local_1c;
  ushort local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d712b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_20 = FUN_005af82d(0xd0,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if (local_20 == 0) {
    local_54 = 0;
  }
  else {
    local_54 = FUN_0059bdc0();
  }
  local_1c = local_54;
  local_8 = 0xffffffff;
  local_14 = local_54;
  if (local_54 != 0) {
    *(undefined4 *)(local_54 + 0x60) = **(undefined4 **)(param_1 + 0x88);
    local_18 = *(ushort *)(param_3 + 0x34);
    if (0x400 < local_18) {
      local_18 = 0x400;
    }
    uVar2 = *(undefined2 *)(param_3 + 0x18);
    uVar3 = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) + 0x98)
            )(local_2c);
    uVar3 = FUN_00536990(uVar2,param_2,uVar3);
    *(undefined4 *)(local_14 + 200) = uVar3;
    *(undefined1 *)(local_14 + 0xc0) = *(undefined1 *)(param_3 + 0x28);
    *(undefined4 *)(local_14 + 0xc4) = *(undefined4 *)(param_3 + 0x2c);
    uVar8 = 0;
    uVar4 = -(uint)(*(char *)(*(int *)(local_14 + 0x60) + 0xad) != '\0') & 2000;
    uVar7 = 0;
    puVar6 = local_38;
    uVar3 = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) + 0x98)
            )(puVar6,param_4,0,uVar4,0,local_14);
    cVar1 = FUN_00544180(param_1,uVar3,puVar6,param_4,uVar7,uVar4,uVar8);
    if (cVar1 != '\0') {
      if (*(int *)(local_14 + 200) == 0) {
        FUN_0059adb0();
        ExceptionList = local_10;
        return 0;
      }
      uVar3 = *(undefined4 *)(param_3 + 0x30);
      uVar5 = (uint)local_18;
      uVar7 = *(undefined4 *)(local_14 + 0xc4);
      uVar4 = (uint)*(byte *)(local_14 + 0xc0);
      uVar2 = FUN_00544700(uVar4,uVar7,uVar3,uVar5);
      cVar1 = FUN_0055fab0(uVar2,uVar4,uVar7,uVar3,uVar5);
      if (cVar1 != '\0') {
        ExceptionList = local_10;
        return local_14;
      }
      if (*(char *)(local_14 + 0x4d) == '\0') {
        FUN_00587da0(1,0,0,0,0,0,1,0);
        FUN_0059adb0();
      }
      ExceptionList = local_10;
      return 0;
    }
    FUN_005442f0(1);
  }
  ExceptionList = local_10;
  return 0;
}

