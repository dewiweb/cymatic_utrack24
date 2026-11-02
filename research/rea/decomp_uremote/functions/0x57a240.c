// rea decompile_all
// name: FUN_0057a240
// address: 0x57a240
// body: available
// range: 0x57a240-0x57a33c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0057a240(int param_1)

{
  int in_ECX;
  char local_11;
  int local_10;
  int local_8;
  
  if (param_1 == 0) {
    local_8 = FUN_0057a160();
  }
  else if (*(int *)(param_1 + 0x10c) == 0) {
    local_8 = 0;
    for (local_10 = *(int *)(in_ECX + 4); local_10 != param_1;
        local_10 = *(int *)(local_10 + 0x10c + (uint)('\0' < local_11) * 4)) {
      if (*(ushort *)(param_1 + 0x98) < *(ushort *)(local_10 + 0x98)) {
        local_11 = -1;
      }
      else if (*(ushort *)(local_10 + 0x98) < *(ushort *)(param_1 + 0x98)) {
        local_11 = '\x01';
      }
      else {
        local_11 = '\0';
      }
      if ('\0' < local_11) {
        local_8 = local_10;
      }
    }
  }
  else {
    for (local_8 = *(int *)(param_1 + 0x10c);
        (local_8 != 0 && ((*(byte *)(local_8 + 0x114) & 0x80) == 0));
        local_8 = *(int *)(local_8 + 0x110)) {
    }
  }
  return local_8;
}

