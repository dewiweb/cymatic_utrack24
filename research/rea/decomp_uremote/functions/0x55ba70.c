// rea decompile_all
// name: FUN_0055ba70
// address: 0x55ba70
// body: available
// range: 0x55ba70-0x55bb3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


short FUN_0055ba70(void)

{
  int *in_ECX;
  uint local_c;
  short local_8;
  
  local_8 = 0;
  for (local_c = 0; local_c < *(ushort *)(in_ECX + 1); local_c = local_c + 1) {
    if (*(int *)(*in_ECX + 0x10 + local_c * 0x18) == 2) {
      if (*(byte *)(*in_ECX + 0x14 + local_c * 0x18) < 0x3c) {
        *(char *)(*in_ECX + 0x14 + local_c * 0x18) =
             *(char *)(*in_ECX + 0x14 + local_c * 0x18) + '\x01';
      }
      if (*(char *)(*in_ECX + 0x14 + local_c * 0x18) == '<') {
        *(undefined4 *)(*in_ECX + 0x10 + local_c * 0x18) = 3;
      }
    }
    if (*(int *)(*in_ECX + 0x10 + local_c * 0x18) == 2) {
      local_8 = local_8 + 1;
    }
  }
  return local_8;
}

