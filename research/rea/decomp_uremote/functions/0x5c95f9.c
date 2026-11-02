// rea decompile_all
// name: _LanguageEnumProc@4
// address: 0x5c95f9
// body: available
// range: 0x5c95f9-0x5c96b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    _LanguageEnumProc@4
   
   Library: Visual Studio 2008 Release */

void _LanguageEnumProc_4(void)

{
  int *piVar1;
  _ptiddata p_Var2;
  LCID Locale;
  int iVar3;
  undefined4 uVar4;
  CHAR local_80 [120];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  p_Var2 = __getptd();
  Locale = _LcidFromHexString();
  iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevLanguage != 0) & 0xfffff002)
                                + 0x1001,local_80,0x78);
  if (iVar3 == 0) {
    (p_Var2->_setloc_data).iLocState = 0;
    goto LAB_005c96aa;
  }
  iVar3 = __stricmp((char *)(p_Var2->_setloc_data).pchLanguage,local_80);
  if (iVar3 == 0) {
    if ((p_Var2->_setloc_data).bAbbrevLanguage == 0) {
      uVar4 = 1;
      goto LAB_005c9687;
    }
  }
  else {
    if ((((p_Var2->_setloc_data).bAbbrevLanguage != 0) || ((p_Var2->_setloc_data).iPrimaryLen == 0))
       || (iVar3 = __stricmp((char *)(p_Var2->_setloc_data).pchLanguage,local_80), iVar3 != 0))
    goto LAB_005c96aa;
    uVar4 = 0;
LAB_005c9687:
    iVar3 = _TestDefaultLanguage(Locale,uVar4);
    if (iVar3 == 0) goto LAB_005c96aa;
  }
  piVar1 = &(p_Var2->_setloc_data).iLocState;
  *piVar1 = *piVar1 | 4;
  (p_Var2->_setloc_data)._cachecp = Locale;
  *(LCID *)(p_Var2->_setloc_data)._cachein = Locale;
LAB_005c96aa:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

