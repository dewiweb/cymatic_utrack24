// rea decompile_all
// name: FUN_0050fed0
// address: 0x50fed0
// body: available
// range: 0x50fed0-0x50ffca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0050fed0(undefined4 param_1,undefined1 param_2,undefined4 param_3)

{
  char cVar1;
  int in_ECX;
  int local_10;
  int local_8;
  
  (**(code **)(*(int *)(in_ECX + -0xb50 + *(int *)(*(int *)(in_ECX + -0xb50) + 4)) + 0x28))();
  local_8 = FUN_0051ad00(in_ECX + -0xb5c);
  if (local_8 != 0) {
    cVar1 = FUN_0051b650(param_1,param_2,param_3,0);
    if (cVar1 == '\0') {
      (**(code **)(*(int *)(local_8 + 0x28 + *(int *)(*(int *)(local_8 + 0x28) + 8)) + 4))();
      local_8 = 0;
    }
  }
  (**(code **)(*(int *)(in_ECX + -0xb50 + *(int *)(*(int *)(in_ECX + -0xb50) + 4)) + 0x2c))();
  if (local_8 == 0) {
    local_10 = 0;
  }
  else {
    local_10 = local_8 + 0x28 + *(int *)(*(int *)(local_8 + 0x28) + 0xc);
  }
  return local_10;
}

