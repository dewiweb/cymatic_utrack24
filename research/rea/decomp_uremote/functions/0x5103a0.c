// rea decompile_all
// name: FUN_005103a0
// address: 0x5103a0
// body: available
// range: 0x5103a0-0x5104eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005103a0(undefined2 param_1,short param_2,undefined2 param_3,undefined4 param_4)

{
  int *piVar1;
  int in_ECX;
  int local_10;
  
  (**(code **)(*(int *)(in_ECX + -0xb50 + *(int *)(*(int *)(in_ECX + -0xb50) + 4)) + 0x28))();
  piVar1 = (int *)FUN_005493b0(in_ECX + -0xb5c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*(int *)((int)piVar1 + *(int *)(piVar1[10] + 0x10) + 0x28) + 0x68))(param_1);
    if (param_2 != 0) {
      (**(code **)(*(int *)((int)piVar1 + *(int *)(piVar1[10] + 0x10) + 0x28) + 0x34))(param_2);
    }
    (**(code **)(*piVar1 + 0x1c))(param_3);
    (**(code **)(*(int *)((int)piVar1 + *(int *)(piVar1[10] + 0x10) + 0x28) + 0x50))(param_4);
  }
  (**(code **)(*(int *)(in_ECX + -0xb50 + *(int *)(*(int *)(in_ECX + -0xb50) + 4)) + 0x2c))();
  if (piVar1 == (int *)0x0) {
    local_10 = 0;
  }
  else {
    local_10 = (int)piVar1 + *(int *)(piVar1[10] + 0x10) + 0x28;
  }
  return local_10;
}

