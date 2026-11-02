// rea decompile_all
// name: FUN_005594b0
// address: 0x5594b0
// body: available
// range: 0x5594b0-0x55952e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005594b0(void)

{
  int in_ECX;
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < *(ushort *)(in_ECX + 0x10); local_8 = local_8 + 1) {
    FUN_0055b310(*(undefined2 *)(*(int *)(in_ECX + 8) + local_8 * 8));
  }
  *(undefined2 *)(in_ECX + 0x10) = 0;
  if (*(int *)(in_ECX + 8) != 0) {
    FUN_005b13e8(*(undefined4 *)(in_ECX + 8));
  }
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined2 *)(in_ECX + 0xe) = 0;
  return;
}

