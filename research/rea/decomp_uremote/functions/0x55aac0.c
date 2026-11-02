// rea decompile_all
// name: FUN_0055aac0
// address: 0x55aac0
// body: available
// range: 0x55aac0-0x55ab9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055aac0(ushort param_1)

{
  int *in_ECX;
  uint local_c;
  short local_8;
  
  if (((param_1 < *(ushort *)(in_ECX + 1)) &&
      (*(short *)(*in_ECX + 0xc + (uint)param_1 * 0x10) != 0)) &&
     (*(short *)(*in_ECX + 0xc + (uint)param_1 * 0x10) =
           *(short *)(*in_ECX + 0xc + (uint)param_1 * 0x10) + -1,
     *(short *)(*in_ECX + 0xc + (uint)param_1 * 0x10) == 0)) {
    FUN_00503650(&DAT_0095c848);
  }
  local_8 = 0;
  for (local_c = 0; local_c < *(ushort *)(in_ECX + 1); local_c = local_c + 1) {
    if (*(short *)(*in_ECX + 0xc + local_c * 0x10) != 0) {
      local_8 = local_8 + 1;
    }
  }
  if (local_8 == 0) {
    FUN_0055acb0(2);
  }
  return;
}

