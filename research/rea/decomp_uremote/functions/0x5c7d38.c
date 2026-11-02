// rea decompile_all
// name: __crtGetLocaleInfoA_stat
// address: 0x5c7d38
// body: available
// range: 0x5c7d38-0x5c7e76 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtGetLocaleInfoA_stat(struct localeinfo_struct *,unsigned long,unsigned long,char
   *,int,int)
   
   Library: Visual Studio 2008 Release */

int __cdecl
__crtGetLocaleInfoA_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,
          int param_6)

{
  uint _Size;
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  uint cchData;
  LPWSTR lpLCData;
  
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  if (DAT_0095d410 == 0) {
    iVar2 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x78) {
        DAT_0095d410 = 2;
      }
      goto LAB_005c7d8c;
    }
    DAT_0095d410 = 1;
  }
  else {
LAB_005c7d8c:
    if ((DAT_0095d410 == 2) || (DAT_0095d410 == 0)) {
      GetLocaleInfoA(param_2,param_3,param_4,param_5);
      goto LAB_005c7e65;
    }
    if (DAT_0095d410 != 1) goto LAB_005c7e65;
  }
  if (param_6 == 0) {
    param_6 = param_1->locinfo->lc_codepage;
  }
  cchData = GetLocaleInfoW(param_2,param_3,(LPWSTR)0x0,0);
  if (cchData != 0) {
    if (((int)cchData < 1) || (0xffffffe0 / cchData < 2)) {
      lpLCData = (LPWSTR)0x0;
    }
    else {
      _Size = cchData * 2 + 8;
      if (_Size < 0x401) {
        if (&stack0x00000000 == (undefined1 *)0x18) goto LAB_005c7e65;
        lpLCData = (LPWSTR)&stack0xfffffff0;
      }
      else {
        lpLCData = _malloc(_Size);
        if (lpLCData != (LPWSTR)0x0) {
          lpLCData[0] = L'\xdddd';
          lpLCData[1] = L'\0';
          lpLCData = lpLCData + 4;
        }
      }
    }
    if (lpLCData != (LPWSTR)0x0) {
      iVar2 = GetLocaleInfoW(param_2,param_3,lpLCData,cchData);
      if (iVar2 != 0) {
        if (param_5 == 0) {
          param_5 = 0;
          param_4 = (LPSTR)0x0;
        }
        WideCharToMultiByte(param_6,0,lpLCData,-1,param_4,param_5,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      __freea(lpLCData);
    }
  }
LAB_005c7e65:
  iVar2 = __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

