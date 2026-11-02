// rea decompile_all
// name: FUN_0052c7c0
// address: 0x52c7c0
// body: available
// range: 0x52c7c0-0x52c7fa inclusive
// range: 0x52c7fd-0x52c810 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0052c7c0(int param_1)

{
  int in_ECX;
  int local_8;
  
  local_8 = *(int *)(in_ECX + 4);
  while( true ) {
    if (local_8 == 0) {
      return 0;
    }
    if (local_8 == param_1) break;
    if (local_8 == 0) {
      local_8 = *(int *)(in_ECX + 4);
    }
    else {
      local_8 = *(int *)(local_8 + 8);
    }
  }
  return 1;
}

