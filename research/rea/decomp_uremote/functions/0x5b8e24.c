// rea decompile_all
// name: ___getlocaleinfo
// address: 0x5b8e24
// body: available
// range: 0x5b8e24-0x5b8fa2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___getlocaleinfo
   
   Library: Visual Studio 2008 Release */

int __cdecl
___getlocaleinfo(_locale_t _Locale,int _Lc_type,LPCWSTR _LocaleName,LCTYPE _FieldType,void *_Address
                )

{
  byte bVar1;
  bool bVar2;
  size_t sVar3;
  DWORD DVar4;
  LPSTR _LpLCData;
  char *_Dst;
  int iVar5;
  errno_t eVar6;
  byte *pbVar7;
  CHAR local_88 [128];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  if (_Lc_type != 1) {
    if (_Lc_type == 0) {
      pbVar7 = &DAT_0095d238;
      iVar5 = ___crtGetLocaleInfoW(_Locale,_LocaleName,_FieldType,&DAT_0095d238,4,0);
      if (iVar5 != 0) {
        *(undefined1 *)_Address = 0;
        do {
          bVar1 = *pbVar7;
          iVar5 = _isdigit((uint)bVar1);
          if (iVar5 == 0) break;
          pbVar7 = pbVar7 + 2;
          *(byte *)_Address = *(char *)_Address * '\n' + bVar1 + -0x30;
        } while ((int)pbVar7 < 0x95d240);
      }
    }
    goto LAB_005b8f16;
  }
  _LpLCData = local_88;
  bVar2 = false;
  sVar3 = ___crtGetLocaleInfoA(_Locale,_LocaleName,_FieldType,_LpLCData,0x80);
  if (sVar3 == 0) {
    DVar4 = GetLastError();
    if (((DVar4 != 0x7a) ||
        (sVar3 = ___crtGetLocaleInfoA(_Locale,_LocaleName,_FieldType,(LPSTR)0x0,0), sVar3 == 0)) ||
       (_LpLCData = __calloc_crt(sVar3,1), _LpLCData == (LPSTR)0x0)) goto LAB_005b8f16;
    bVar2 = true;
    sVar3 = ___crtGetLocaleInfoA(_Locale,_LocaleName,_FieldType,_LpLCData,sVar3);
    if (sVar3 != 0) goto LAB_005b8eee;
  }
  else {
LAB_005b8eee:
    _Dst = __calloc_crt(sVar3,1);
    *(char **)_Address = _Dst;
    if (_Dst != (char *)0x0) {
      eVar6 = _strncpy_s(_Dst,sVar3,_LpLCData,sVar3 - 1);
      if (eVar6 != 0) {
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      if (bVar2) {
        _free(_LpLCData);
      }
      goto LAB_005b8f16;
    }
    if (!bVar2) goto LAB_005b8f16;
  }
  _free(_LpLCData);
LAB_005b8f16:
  iVar5 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar5;
}

