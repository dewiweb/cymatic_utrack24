// rea decompile_all
// name: FUN_00522020
// address: 0x522020
// body: available
// range: 0x522020-0x522153 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00522020(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  undefined1 *puVar3;
  int local_4c;
  undefined1 local_3c [16];
  undefined1 local_2c [24];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cfe09;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((param_1 != 0) &&
     (((*(int *)(in_ECX + 4) != 0 || (*(int *)(in_ECX + 8) != 0)) &&
      ((*(byte *)(param_1 + 0x74) & 1) != 0)))) {
    puVar3 = local_3c;
    uVar1 = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) + 0x24)
            )(puVar3,param_2,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
    FUN_00522a70(uVar1,puVar3);
    local_14 = FUN_00522f30(local_2c);
    if (local_14 == 0) {
      iVar2 = FUN_005af82d(0x28);
      local_8 = 0;
      if (iVar2 == 0) {
        local_4c = 0;
      }
      else {
        local_4c = FUN_00522990(local_2c);
      }
      local_8 = 0xffffffff;
      local_14 = local_4c;
      if (local_4c == 0) {
        ExceptionList = local_10;
        return;
      }
      FUN_00522ff0(local_4c);
    }
    *(short *)(local_14 + 0x18) = *(short *)(local_14 + 0x18) + *(short *)(param_1 + 0x72);
    *(undefined1 *)(local_14 + 0x1a) = 1;
  }
  ExceptionList = local_10;
  return;
}

