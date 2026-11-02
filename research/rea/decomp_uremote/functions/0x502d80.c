// rea decompile_all
// name: FUN_00502d80
// address: 0x502d80
// body: available
// range: 0x502d80-0x502e0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00502d80(int param_1,byte param_2)

{
  int iVar1;
  undefined4 in_ECX;
  uint local_c;
  
  iVar1 = FUN_005b04d6((uint)param_2 * 3 + 1);
  if (iVar1 != 0) {
    for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
      _sprintf((char *)(local_c * 3 + iVar1),"%02x ",(uint)*(byte *)(param_1 + local_c));
    }
    FUN_00502720(iVar1);
    FUN_005b13e8(iVar1);
  }
  return in_ECX;
}

