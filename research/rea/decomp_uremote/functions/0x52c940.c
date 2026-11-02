// rea decompile_all
// name: FUN_0052c940
// address: 0x52c940
// body: available
// range: 0x52c940-0x52c986 inclusive
// range: 0x52c989-0x52c9aa inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0052c940(short param_1)

{
  int in_ECX;
  short local_c;
  int local_8;
  
  local_8 = *(int *)(in_ECX + 4);
  local_c = param_1;
  while ((local_8 != 0 && (local_c != 0))) {
    if (local_8 == 0) {
      local_8 = *(int *)(in_ECX + 4);
      local_c = local_c + -1;
    }
    else {
      local_8 = *(int *)(local_8 + 8);
      local_c = local_c + -1;
    }
  }
  if (local_8 != 0) {
    FUN_00544600();
  }
  return local_8;
}

