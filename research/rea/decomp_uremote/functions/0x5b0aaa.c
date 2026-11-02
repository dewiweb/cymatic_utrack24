// rea decompile_all
// name: __localtime64_s
// address: 0x5b0aaa
// body: available
// range: 0x5b0aaa-0x5b0d61 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __localtime64_s
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl __localtime64_s(tm *_Tm,__time64_t *_Time)

{
  uint uVar1;
  int *piVar2;
  errno_t eVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  longlong lVar9;
  uint local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  local_c = 0;
  local_10 = 0;
  local_8 = 0;
  if (_Tm == (tm *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    return 0x16;
  }
  _memset(_Tm,0xff,0x24);
  if (_Time == (__time64_t *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    return 0x16;
  }
  iVar4 = *(int *)((int)_Time + 4);
  if (((iVar4 < 1) && (iVar4 < 0)) || ((6 < iVar4 && ((7 < iVar4 || (0x93406fff < (uint)*_Time))))))
  {
    piVar2 = __errno();
    *piVar2 = 0x16;
    return 0x16;
  }
  ___tzset();
  eVar3 = __get_daylight(&local_c);
  if (eVar3 != 0) {
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  eVar3 = __get_dstbias((long *)&local_10);
  if (eVar3 != 0) {
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  eVar3 = __get_timezone((long *)&local_8);
  if (eVar3 != 0) {
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  iVar4 = *(int *)((int)_Time + 4);
  uVar1 = (uint)*_Time;
  if ((-1 < iVar4) && ((0 < iVar4 || (0x3f480 < uVar1)))) {
    local_18 = uVar1 - local_8;
    local_14 = (iVar4 - ((int)local_8 >> 0x1f)) - (uint)(uVar1 < local_8);
    eVar3 = __gmtime64_s(_Tm,(__time64_t *)&local_18);
    if (eVar3 != 0) {
      return eVar3;
    }
    if (local_c == 0) {
      return 0;
    }
    iVar4 = __isindst(_Tm);
    if (iVar4 == 0) {
      return 0;
    }
    bVar8 = local_18 < local_10;
    local_18 = local_18 - local_10;
    local_14 = (local_14 - ((int)local_10 >> 0x1f)) - (uint)bVar8;
    eVar3 = __gmtime64_s(_Tm,(__time64_t *)&local_18);
    if (eVar3 == 0) {
      _Tm->tm_isdst = 1;
      return 0;
    }
    return eVar3;
  }
  eVar3 = __gmtime64_s(_Tm,_Time);
  if (eVar3 != 0) {
    return eVar3;
  }
  if ((local_c == 0) || (iVar4 = __isindst(_Tm), iVar4 == 0)) {
    uVar1 = _Tm->tm_sec;
    uVar7 = uVar1 - local_8;
    iVar4 = (((int)uVar1 >> 0x1f) - ((int)local_8 >> 0x1f)) - (uint)(uVar1 < local_8);
  }
  else {
    uVar5 = local_8 + local_10;
    uVar1 = _Tm->tm_sec;
    uVar7 = uVar1 - uVar5;
    iVar4 = (((int)uVar1 >> 0x1f) - ((int)uVar5 >> 0x1f)) - (uint)(uVar1 < uVar5);
    _Tm->tm_isdst = 1;
  }
  iVar6 = __allrem(uVar7,iVar4,0x3c,0);
  _Tm->tm_sec = iVar6;
  if (iVar6 < 0) {
    bVar8 = 0x3b < uVar7;
    uVar7 = uVar7 - 0x3c;
    _Tm->tm_sec = iVar6 + 0x3c;
    iVar4 = iVar4 + -1 + (uint)bVar8;
  }
  lVar9 = __alldiv(uVar7,iVar4,0x3c,0);
  lVar9 = lVar9 + _Tm->tm_min;
  iVar4 = __allrem(lVar9,0x3c,0);
  _Tm->tm_min = iVar4;
  if (iVar4 < 0) {
    _Tm->tm_min = iVar4 + 0x3c;
    lVar9 = lVar9 + -0x3c;
  }
  lVar9 = __alldiv(lVar9,0x3c,0);
  lVar9 = lVar9 + _Tm->tm_hour;
  iVar4 = __allrem(lVar9,0x18,0);
  _Tm->tm_hour = iVar4;
  if (iVar4 < 0) {
    _Tm->tm_hour = iVar4 + 0x18;
    lVar9 = lVar9 + -0x18;
  }
  lVar9 = __alldiv(lVar9,0x18,0);
  iVar4 = (int)lVar9;
  if (-1 < lVar9) {
    if ((0xffffffff < lVar9) || (iVar4 != 0)) {
      _Tm->tm_mday = _Tm->tm_mday + iVar4;
      _Tm->tm_wday = (_Tm->tm_wday + iVar4) % 7;
      goto LAB_005b0d19;
    }
    if (0xffffffff < lVar9) {
      return 0;
    }
    if (-1 < lVar9) {
      return 0;
    }
  }
  _Tm->tm_mday = _Tm->tm_mday + iVar4;
  _Tm->tm_wday = (iVar4 + 7 + _Tm->tm_wday) % 7;
  if (_Tm->tm_mday < 1) {
    _Tm->tm_yday = _Tm->tm_yday + iVar4 + 0x16d;
    _Tm->tm_year = _Tm->tm_year + -1;
    _Tm->tm_mday = _Tm->tm_mday + 0x1f;
    _Tm->tm_mon = 0xb;
    return 0;
  }
LAB_005b0d19:
  _Tm->tm_yday = _Tm->tm_yday + iVar4;
  return 0;
}

