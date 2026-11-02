// rea decompile_all
// name: FUN_00472a44
// address: 0x472a44
// body: available
// range: 0x472a44-0x472a56 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00472a44(void)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = *(int *)(in_ECX + 0x38) - 1;
  if (uVar1 < *(uint *)(in_ECX + 0x24)) {
    return *(undefined4 *)(*(int *)(in_ECX + 0x1c) + uVar1 * 4);
  }
  return 0;
}

