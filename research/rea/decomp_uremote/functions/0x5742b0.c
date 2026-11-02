// rea decompile_all
// name: FUN_005742b0
// address: 0x5742b0
// body: available
// range: 0x5742b0-0x57435f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005742b0(ushort *param_1)

{
  bool bVar1;
  int in_ECX;
  char local_9;
  int local_8;
  
  local_8 = *(int *)(in_ECX + 4);
  while( true ) {
    if (local_8 == 0) {
      return 0;
    }
    if (*param_1 < *(ushort *)(local_8 + 0xf0)) {
      local_9 = -1;
    }
    else if (*(ushort *)(local_8 + 0xf0) < *param_1) {
      local_9 = '\x01';
    }
    else {
      local_9 = '\0';
    }
    if (local_9 == '\0') break;
    bVar1 = '\0' < local_9;
    if ((*(int *)(local_8 + 0x48 + (uint)bVar1 * 4) == 0) ||
       ((bVar1 && ((*(byte *)(local_8 + 0x50) & 0x80) != 0)))) {
      return 0;
    }
    local_8 = *(int *)(local_8 + 0x48 + (uint)bVar1 * 4);
  }
  return local_8;
}

