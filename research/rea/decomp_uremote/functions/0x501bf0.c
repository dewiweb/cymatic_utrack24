// rea decompile_all
// name: FUN_00501bf0
// address: 0x501bf0
// body: available
// range: 0x501bf0-0x501c8e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


short FUN_00501bf0(void)

{
  undefined4 *in_ECX;
  char *local_c;
  short local_8;
  
  local_8 = 0;
  if (*(short *)((int)in_ECX + 6) != 0) {
    local_c = (char *)*in_ECX;
    while (*local_c != '\0') {
      if (((int)*local_c & 0xe0U) == 0xe0) {
        local_c = local_c + 3;
      }
      else if (((int)*local_c & 0xc0U) == 0xc0) {
        local_c = local_c + 2;
      }
      else {
        local_c = local_c + 1;
      }
      local_8 = local_8 + 1;
    }
  }
  return local_8;
}

