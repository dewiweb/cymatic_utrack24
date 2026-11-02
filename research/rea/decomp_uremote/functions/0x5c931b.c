// rea decompile_all
// name: _CountryEnumProc@4
// address: 0x5c931b
// body: available
// range: 0x5c931b-0x5c93b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    _CountryEnumProc@4
   
   Library: Visual Studio 2008 Release */

void _CountryEnumProc_4(void)

{
  int *piVar1;
  _ptiddata p_Var2;
  LCID Locale;
  int iVar3;
  CHAR local_80 [120];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  p_Var2 = __getptd();
  Locale = _LcidFromHexString();
  iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevCountry != 0) & 0xfffff005) +
                                0x1002,local_80,0x78);
  if (iVar3 == 0) {
    (p_Var2->_setloc_data).iLocState = 0;
  }
  else {
    iVar3 = __stricmp((char *)(p_Var2->_setloc_data).pchCountry,local_80);
    if ((iVar3 == 0) && (iVar3 = _TestDefaultCountry(Locale), iVar3 != 0)) {
      piVar1 = &(p_Var2->_setloc_data).iLocState;
      *piVar1 = *piVar1 | 4;
      *(LCID *)(p_Var2->_setloc_data)._cachein = Locale;
      (p_Var2->_setloc_data)._cachecp = Locale;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

