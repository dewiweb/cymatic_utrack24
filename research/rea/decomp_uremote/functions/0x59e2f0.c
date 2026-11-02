// rea decompile_all
// name: FUN_0059e2f0
// address: 0x59e2f0
// body: available
// range: 0x59e2f0-0x59e44f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0059e2f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_34;
  undefined1 local_28 [12];
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d722e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = FUN_005af82d(0xe8,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if (local_1c == 0) {
    local_34 = 0;
  }
  else {
    local_34 = FUN_0059e260();
  }
  local_18 = local_34;
  local_8 = 0xffffffff;
  local_14 = local_34;
  if (local_34 != 0) {
    *(undefined4 *)(local_34 + 0x60) = **(undefined4 **)(param_1 + 0x88);
    FUN_00503650(param_2);
    *(undefined4 *)(local_14 + 0xcc) = param_3;
    *(int *)(local_14 + 0xd0) = param_1;
    *(int *)(local_14 + 0xd4) = param_1;
    *(undefined2 *)(local_14 + 0xd8) = 0;
    uVar6 = 0;
    uVar3 = -(uint)(*(char *)(*(int *)(local_14 + 0x60) + 0xad) != '\0') & 2000;
    uVar5 = 0;
    puVar4 = local_28;
    uVar2 = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) + 0x98)
            )(puVar4,param_5,0,uVar3,0,local_14);
    cVar1 = FUN_00544180(param_1,uVar2,puVar4,param_5,uVar5,uVar3,uVar6);
    if (cVar1 != '\0') {
      FUN_00544360();
      ExceptionList = local_10;
      return local_14;
    }
    FUN_005442f0(1);
  }
  ExceptionList = local_10;
  return 0;
}

