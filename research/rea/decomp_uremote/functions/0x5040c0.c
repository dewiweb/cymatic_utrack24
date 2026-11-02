// rea decompile_all
// name: FUN_005040c0
// address: 0x5040c0
// body: available
// range: 0x5040c0-0x50411c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005040c0(char *param_1)

{
  char cVar1;
  char cVar2;
  char *in_ECX;
  uint local_10;
  char *local_c;
  char *local_8;
  
  local_8 = param_1;
  local_10 = 0;
  local_c = in_ECX;
  while( true ) {
    if (0xb < local_10) {
      return 1;
    }
    cVar1 = *local_8;
    cVar2 = *local_c;
    local_8 = local_8 + 1;
    local_c = local_c + 1;
    if (cVar2 != cVar1) break;
    local_10 = local_10 + 1;
  }
  return 0;
}

