// rea decompile_all
// name: FUN_0059b0a0
// address: 0x59b0a0
// body: available
// range: 0x59b0a0-0x59b187 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0059b0a0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  int local_44;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d6fc3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_11 = 0;
  iVar1 = FUN_005af82d(0x120,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if (iVar1 == 0) {
    local_44 = 0;
  }
  else {
    local_44 = FUN_0059ae30(param_1,in_stack_00000020,in_stack_00000024,1);
  }
  local_8 = 0xffffffff;
  if (local_44 != 0) {
    uVar2 = FUN_00503c30(&stack0x00000014,0);
    uVar3 = FUN_00503c30(&stack0x00000008,0);
    local_11 = FUN_00595ea0(8,0x80,uVar3,uVar2);
    (**(code **)(*(int *)(local_44 + 0x28 + *(int *)(*(int *)(local_44 + 0x28) + 8)) + 4))();
  }
  ExceptionList = local_10;
  return local_11;
}

