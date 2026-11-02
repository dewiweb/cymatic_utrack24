// rea decompile_all
// name: FUN_004f4718
// address: 0x4f4718
// body: available
// range: 0x4f4718-0x4f4795 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004f4718(HIMC param_1,DWORD param_2)

{
  uint dwBufLen;
  void *lpBuf;
  
  dwBufLen = ImmGetCompositionStringW(param_1,param_2,(LPVOID)0x0,0);
  if ((int)dwBufLen < 1) {
    FUN_004652e4(&DAT_0095d718);
  }
  else {
    _free((void *)0x0);
    lpBuf = _calloc((dwBufLen >> 1) + 1,2);
    ImmGetCompositionStringW(param_1,param_2,lpBuf,dwBufLen);
    FUN_004653b1();
    _free(lpBuf);
  }
  return;
}

