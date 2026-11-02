// rea decompile_all
// name: FUN_00502f80
// address: 0x502f80
// body: available
// range: 0x502f80-0x503010 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00502f80(int *param_1)

{
  int *in_ECX;
  char local_d;
  int *local_c;
  int *local_8;
  
  if (*in_ECX != 0) {
    local_c = (int *)*in_ECX;
    local_8 = param_1;
    in_ECX = param_1;
    while ((char)*local_c != '\0') {
      local_d = (char)*local_c;
      if (('@' < local_d) && (local_d < '[')) {
        local_d = local_d + ' ';
      }
      if (local_d == (char)*local_8) {
        local_8 = (int *)((int)local_8 + 1);
        if (*(char *)local_8 == '\0') {
          return CONCAT31((int3)((uint)local_8 >> 8),1);
        }
      }
      else {
        local_8 = param_1;
      }
      in_ECX = (int *)((int)local_c + 1);
      local_c = in_ECX;
    }
  }
  return (uint)in_ECX & 0xffffff00;
}

