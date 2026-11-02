// rea decompile_all
// name: FUN_0059bb00
// address: 0x59bb00
// body: available
// range: 0x59bb00-0x59bd49 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0059bb00(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int local_58;
  undefined1 local_34 [12];
  undefined1 local_28 [12];
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d70fb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = FUN_005af82d(200,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if (local_1c == 0) {
    local_58 = 0;
  }
  else {
    local_58 = FUN_0059bad0();
  }
  local_18 = local_58;
  local_8 = 0xffffffff;
  local_14 = local_58;
  if (local_58 != 0) {
    *(undefined4 *)(local_58 + 0x60) = **(undefined4 **)(param_1 + 0x88);
    uVar2 = *(undefined2 *)(param_3 + 0x18);
    uVar3 = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) + 0x98)
            )(local_28);
    uVar3 = FUN_00536ba0(uVar2,param_2,uVar3);
    *(undefined4 *)(local_14 + 0xc4) = uVar3;
    *(undefined4 *)(local_14 + 0xc0) = *(undefined4 *)(param_3 + 0x2c);
    uVar9 = 0;
    uVar4 = -(uint)(*(char *)(*(int *)(local_14 + 0x60) + 0xad) != '\0') & 2000;
    uVar8 = 0;
    puVar7 = local_34;
    uVar3 = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) + 0x98)
            )(puVar7,param_4,0,uVar4,0,local_14);
    cVar1 = FUN_00544180(param_1,uVar3,puVar7,param_4,uVar8,uVar4,uVar9);
    if (cVar1 != '\0') {
      if (*(int *)(local_14 + 0xc4) == 0) {
        FUN_0059adb0();
        ExceptionList = local_10;
        return 0;
      }
      uVar3 = *(undefined4 *)(param_3 + 0x38);
      uVar8 = *(undefined4 *)(param_3 + 0x30);
      uVar6 = (uint)(*(char *)(param_3 + 0x36) != '\0');
      uVar4 = (uint)*(ushort *)(param_3 + 0x34);
      uVar9 = *(undefined4 *)(local_14 + 0xc0);
      uVar5 = (uint)*(byte *)(param_3 + 0x28);
      uVar2 = FUN_00544700(uVar5,uVar9,uVar8,uVar4,uVar6,uVar3);
      cVar1 = FUN_0055fbd0(uVar2,uVar5,uVar9,uVar8,uVar4,uVar6,uVar3);
      if (cVar1 != '\0') {
        ExceptionList = local_10;
        return local_14;
      }
      if (*(char *)(local_14 + 0x4d) == '\0') {
        FUN_00588530(7,0,0);
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

