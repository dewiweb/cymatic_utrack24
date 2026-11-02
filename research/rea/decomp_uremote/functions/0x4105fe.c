// rea decompile_all
// name: FUN_004105fe
// address: 0x4105fe
// body: available
// range: 0x4105fe-0x410669 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004105fe(void)

{
  short *unaff_ESI;
  short *unaff_EDI;
  
  if ((((unaff_ESI != (short *)0x0) && (unaff_EDI != (short *)0x0)) &&
      (unaff_ESI[1] == unaff_EDI[1])) && (*unaff_ESI == *unaff_EDI)) {
    if (unaff_ESI != unaff_EDI) {
      _memcpy(*(void **)(unaff_EDI + 2),*(void **)(unaff_ESI + 2),(int)unaff_ESI[1] << 3);
      _memcpy(*(void **)(unaff_EDI + 4),*(void **)(unaff_ESI + 4),(int)unaff_ESI[1]);
      _memcpy(*(void **)(unaff_EDI + 6),*(void **)(unaff_ESI + 6),*unaff_ESI * 2);
      *(uint *)(unaff_EDI + 8) =
           *(uint *)(unaff_ESI + 8) & 0xfffffffe | *(uint *)(unaff_EDI + 8) & 1;
    }
    return 0;
  }
  return 6;
}

