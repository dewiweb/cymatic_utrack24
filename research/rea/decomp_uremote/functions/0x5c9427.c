// rea decompile_all
// name: _LangCountryEnumProc@4
// address: 0x5c9427
// body: available
// range: 0x5c9427-0x5c95f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    _LangCountryEnumProc@4
   
   Library: Visual Studio 2008 Release */

void _LangCountryEnumProc_4(void)

{
  int *piVar1;
  _ptiddata p_Var2;
  LCID Locale;
  int iVar3;
  size_t sVar4;
  _setloc_struct *p_Var5;
  undefined8 uVar6;
  undefined4 uVar7;
  CHAR local_80 [120];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  p_Var2 = __getptd();
  p_Var5 = &p_Var2->_setloc_data;
  Locale = _LcidFromHexString();
  iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevCountry != 0) & 0xfffff005) +
                                0x1002,local_80,0x78);
  if (iVar3 == 0) {
LAB_005c947a:
    (p_Var2->_setloc_data).iLocState = 0;
    goto LAB_005c95e8;
  }
  iVar3 = __stricmp((char *)(p_Var2->_setloc_data).pchCountry,local_80);
  if (iVar3 == 0) {
    iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevLanguage != 0) & 0xfffff002
                                  ) + 0x1001,local_80,0x78);
    if (iVar3 == 0) goto LAB_005c947a;
    iVar3 = __stricmp((char *)p_Var5->pchLanguage,local_80);
    if (iVar3 == 0) {
      piVar1 = &(p_Var2->_setloc_data).iLocState;
      *piVar1 = *piVar1 | 0x304;
      (p_Var2->_setloc_data)._cachecp = Locale;
LAB_005c952a:
      *(LCID *)(p_Var2->_setloc_data)._cachein = Locale;
    }
    else if (((p_Var2->_setloc_data).iLocState & 2) == 0) {
      sVar4 = (p_Var2->_setloc_data).iPrimaryLen;
      if ((sVar4 == 0) ||
         (iVar3 = __strnicmp((char *)p_Var5->pchLanguage,local_80,sVar4), iVar3 != 0)) {
        if (((p_Var2->_setloc_data).iLocState & 1U) == 0) {
          uVar6 = _TestDefaultCountry(Locale);
          if ((int)uVar6 != 0) {
            (p_Var2->_setloc_data).iLocState = (uint)((ulonglong)uVar6 >> 0x20) | 1;
            goto LAB_005c952a;
          }
        }
      }
      else {
        piVar1 = &(p_Var2->_setloc_data).iLocState;
        *piVar1 = *piVar1 | 2;
        *(LCID *)(p_Var2->_setloc_data)._cachein = Locale;
        sVar4 = _strlen((char *)p_Var5->pchLanguage);
        if (sVar4 == (p_Var2->_setloc_data).iPrimaryLen) {
          (p_Var2->_setloc_data)._cachecp = Locale;
        }
      }
    }
  }
  if (((p_Var2->_setloc_data).iLocState & 0x300U) == 0x300) goto LAB_005c95e8;
  iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevLanguage != 0) & 0xfffff002)
                                + 0x1001,local_80,0x78);
  if (iVar3 == 0) goto LAB_005c947a;
  iVar3 = __stricmp((char *)p_Var5->pchLanguage,local_80);
  if (iVar3 == 0) {
    piVar1 = &(p_Var2->_setloc_data).iLocState;
    *piVar1 = *piVar1 | 0x200;
    if ((p_Var2->_setloc_data).bAbbrevLanguage == 0) {
      if (((p_Var2->_setloc_data).iPrimaryLen != 0) &&
         (sVar4 = _strlen((char *)p_Var5->pchLanguage), sVar4 == (p_Var2->_setloc_data).iPrimaryLen)
         ) {
        uVar7 = 1;
        goto LAB_005c95c0;
      }
      goto LAB_005c95ce;
    }
    (p_Var2->_setloc_data).iLocState = (p_Var2->_setloc_data).iLocState | 0x100;
  }
  else {
    if ((((p_Var2->_setloc_data).bAbbrevLanguage != 0) || ((p_Var2->_setloc_data).iPrimaryLen == 0))
       || (iVar3 = __stricmp((char *)p_Var5->pchLanguage,local_80), iVar3 != 0)) goto LAB_005c95e8;
    uVar7 = 0;
LAB_005c95c0:
    iVar3 = _TestDefaultLanguage(Locale,uVar7);
    if (iVar3 == 0) goto LAB_005c95e8;
LAB_005c95ce:
    piVar1 = &(p_Var2->_setloc_data).iLocState;
    *piVar1 = *piVar1 | 0x100;
  }
  if ((p_Var2->_setloc_data)._cachecp == 0) {
    (p_Var2->_setloc_data)._cachecp = Locale;
  }
LAB_005c95e8:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

