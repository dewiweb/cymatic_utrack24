// rea decompile_all
// name: __tzset_nolock
// address: 0x5b182a
// body: available
// range: 0x5b182a-0x5b1ad0 inclusive
// range: 0x5b1adf-0x5b1b6f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __tzset_nolock
   
   Library: Visual Studio 2008 Release */

void __tzset_nolock(void)

{
  char cVar1;
  char cVar2;
  errno_t eVar3;
  UINT CodePage;
  char *_Str1;
  int iVar4;
  size_t sVar5;
  DWORD DVar6;
  long lVar7;
  int *piVar8;
  char *pcVar9;
  int local_34;
  int local_30;
  long local_2c;
  int local_28;
  int *local_24;
  long local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00940d90;
  uStack_c = 0x5b1836;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_2c = 0;
  local_24 = (int *)0x0;
  __lock(7);
  local_8 = (undefined *)0x0;
  local_24 = (int *)FUN_005b23a1();
  eVar3 = __get_timezone(local_20);
  if (eVar3 != 0) {
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  eVar3 = __get_daylight(&local_28);
  if (eVar3 != 0) {
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  eVar3 = __get_dstbias(&local_2c);
  if (eVar3 != 0) {
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  CodePage = ____lc_codepage_func();
  DAT_0095ca1c = 0;
  DAT_00955c34 = 0xffffffff;
  DAT_00955c28 = 0xffffffff;
  _Str1 = __getenv_helper_nolock("TZ");
  if ((_Str1 == (char *)0x0) || (*_Str1 == '\0')) {
    if (DAT_0095ca20 != (char *)0x0) {
      _free(DAT_0095ca20);
      DAT_0095ca20 = (char *)0x0;
    }
    DVar6 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_0095c970);
    if (DVar6 != 0xffffffff) {
      DAT_0095ca1c = 1;
      local_20[0] = DAT_0095c970 * 0x3c;
      if (DAT_0095c9b6 != 0) {
        local_20[0] = local_20[0] + DAT_0095c9c4 * 0x3c;
      }
      if ((DAT_0095ca0a == 0) || (DAT_0095ca18 == 0)) {
        local_28 = 0;
        local_2c = 0;
      }
      else {
        local_28 = 1;
        local_2c = (DAT_0095ca18 - DAT_0095c9c4) * 0x3c;
      }
      iVar4 = WideCharToMultiByte(CodePage,0,(LPCWSTR)&DAT_0095c974,-1,(LPSTR)*local_24,0x3f,
                                  (LPCSTR)0x0,&local_34);
      if ((iVar4 == 0) || (local_34 != 0)) {
        *(undefined1 *)*local_24 = 0;
      }
      else {
        *(undefined1 *)(*local_24 + 0x3f) = 0;
      }
      iVar4 = WideCharToMultiByte(CodePage,0,(LPCWSTR)&DAT_0095c9c8,-1,(LPSTR)local_24[1],0x3f,
                                  (LPCSTR)0x0,&local_34);
      if ((iVar4 == 0) || (local_34 != 0)) {
        *(undefined1 *)local_24[1] = 0;
      }
      else {
        *(undefined1 *)(local_24[1] + 0x3f) = 0;
      }
    }
  }
  else {
    if (DAT_0095ca20 != (char *)0x0) {
      iVar4 = _strcmp(_Str1,DAT_0095ca20);
      if (iVar4 == 0) goto LAB_005b1a46;
      if (DAT_0095ca20 != (char *)0x0) {
        _free(DAT_0095ca20);
      }
    }
    sVar5 = _strlen(_Str1);
    DAT_0095ca20 = __malloc_crt(sVar5 + 1);
    if (DAT_0095ca20 != (char *)0x0) {
      pcVar9 = _Str1;
      sVar5 = _strlen(_Str1);
      eVar3 = _strcpy_s(DAT_0095ca20,sVar5 + 1,pcVar9);
      if (eVar3 != 0) {
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      goto LAB_005b1a4d;
    }
  }
LAB_005b1a46:
  local_30 = 1;
LAB_005b1a4d:
  FID_conflict___set_dstbias(local_20[0]);
  FID_conflict___set_dstbias(local_28);
  FID_conflict___set_dstbias(local_2c);
  local_8 = (undefined *)0xfffffffe;
  FUN_005b1ad6();
  piVar8 = local_24;
  if (local_30 == 0) {
    eVar3 = _strncpy_s((char *)*local_24,0x40,_Str1,3);
    if (eVar3 != 0) {
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    pcVar9 = _Str1 + 3;
    cVar1 = *pcVar9;
    if (cVar1 == '-') {
      pcVar9 = _Str1 + 4;
    }
    lVar7 = _atol(pcVar9);
    local_20[0] = lVar7 * 0xe10;
    for (; (cVar2 = *pcVar9, cVar2 == '+' || (('/' < cVar2 && (cVar2 < ':')))); pcVar9 = pcVar9 + 1)
    {
    }
    if (*pcVar9 == ':') {
      pcVar9 = pcVar9 + 1;
      lVar7 = _atol(pcVar9);
      local_20[0] = local_20[0] + lVar7 * 0x3c;
      for (; ('/' < *pcVar9 && (*pcVar9 < ':')); pcVar9 = pcVar9 + 1) {
      }
      if (*pcVar9 == ':') {
        pcVar9 = pcVar9 + 1;
        lVar7 = _atol(pcVar9);
        local_20[0] = local_20[0] + lVar7;
        for (; ('/' < *pcVar9 && (*pcVar9 < ':')); pcVar9 = pcVar9 + 1) {
        }
      }
    }
    if (cVar1 == '-') {
      local_20[0] = -local_20[0];
    }
    local_28 = (int)*pcVar9;
    if (local_28 == 0) {
      *(undefined1 *)piVar8[1] = 0;
    }
    else {
      eVar3 = _strncpy_s((char *)piVar8[1],0x40,pcVar9,3);
      if (eVar3 != 0) {
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    lVar7 = local_20[0];
    piVar8 = (int *)FUN_005b239b();
    iVar4 = local_28;
    *piVar8 = lVar7;
    piVar8 = (int *)FUN_005b238f();
    *piVar8 = iVar4;
  }
  return;
}

