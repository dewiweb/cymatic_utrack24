// rea decompile_all
// name: FUN_005104f0
// address: 0x5104f0
// body: available
// range: 0x5104f0-0x510654 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005104f0(undefined2 param_1,short param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int in_ECX;
  undefined4 local_10;
  
  (**(code **)(*(int *)(in_ECX + -0xb50 + *(int *)(*(int *)(in_ECX + -0xb50) + 4)) + 0x28))();
  iVar1 = FUN_005493b0(in_ECX + -0xb5c);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x28 + *(int *)(*(int *)(iVar1 + 0x28) + 0x10)) + 0x68))(param_1);
    if (param_2 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x28 + *(int *)(*(int *)(iVar1 + 0x28) + 0x10)) + 0x34))
                (param_2);
    }
    (**(code **)(*(int *)(iVar1 + 0x28 + *(int *)(*(int *)(iVar1 + 0x28) + 0x10)) + 0x70))(param_3);
    (**(code **)(*(int *)(iVar1 + 0x28 + *(int *)(*(int *)(iVar1 + 0x28) + 0x10)) + 0x50))(param_4);
  }
  (**(code **)(*(int *)(in_ECX + -0xb50 + *(int *)(*(int *)(in_ECX + -0xb50) + 4)) + 0x2c))();
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    local_10 = iVar1 + 0x28 + *(int *)(*(int *)(iVar1 + 0x28) + 0x10);
  }
  return local_10;
}

