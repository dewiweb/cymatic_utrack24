// rea decompile_all
// name: FUN_004646f5
// address: 0x4646f5
// body: available
// range: 0x4646f5-0x464713 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004646f5(void)

{
  int iVar1;
  int *in_ECX;
  int *local_8;
  
  local_8 = in_ECX;
  iVar1 = (**(code **)(*in_ECX + 0xc))(&local_8,4);
  if (iVar1 == 4) {
    return (uint)local_8 >> 0x18 | ((uint)local_8 & 0xff0000) >> 8 | ((uint)local_8 & 0xff00) << 8 |
           (int)local_8 << 0x18;
  }
  return 0;
}

