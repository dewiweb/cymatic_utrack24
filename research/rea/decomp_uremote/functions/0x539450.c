// rea decompile_all
// name: FUN_00539450
// address: 0x539450
// body: available
// range: 0x539450-0x539491 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00539450(undefined4 param_1)

{
  int in_ECX;
  undefined *local_10;
  
  if (*(int *)(in_ECX + -0x78) == 0) {
    local_10 = &DAT_0095c848;
  }
  else {
    local_10 = (undefined *)(*(int *)(in_ECX + -0x78) + 0x48);
  }
  FUN_005033e0(local_10);
  return param_1;
}

