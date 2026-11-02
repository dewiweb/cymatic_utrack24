// rea decompile_all
// name: _wcslwr_s_l_stat
// address: 0x100fc314
// body: available
// range: 0x100fc314-0x100fc483 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl _wcslwr_s_l_stat(wchar_t *,unsigned int,struct localeinfo_struct *)
   
   Library: Visual Studio 2010 Release */

int __cdecl _wcslwr_s_l_stat(wchar_t *param_1,uint param_2,localeinfo_struct *param_3)

{
  uint _Size;
  wchar_t wVar1;
  uint uVar2;
  int *piVar3;
  wchar_t *pwVar4;
  undefined4 *puVar5;
  wchar_t *in_ECX;
  wchar_t *_LpDestStr;
  int iVar6;
  
  uVar2 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  _LpDestStr = (wchar_t *)0x0;
  if (in_ECX == (wchar_t *)0x0) {
LAB_100fc330:
    piVar3 = __errno();
    iVar6 = 0x16;
  }
  else {
    pwVar4 = (wchar_t *)_wcsnlen(in_ECX,(size_t)param_1);
    if (param_1 <= pwVar4) {
      *in_ECX = L'\0';
      goto LAB_100fc330;
    }
    if (*(LPCWSTR *)(*(int *)param_2 + 0x14) == (LPCWSTR)0x0) {
      wVar1 = *in_ECX;
      while (wVar1 != L'\0') {
        wVar1 = *in_ECX;
        if ((0x40 < (ushort)wVar1) && ((ushort)wVar1 < 0x5b)) {
          *in_ECX = wVar1 + L' ';
        }
        in_ECX = in_ECX + 1;
        wVar1 = *in_ECX;
      }
      goto LAB_100fc472;
    }
    pwVar4 = (wchar_t *)
             ___crtLCMapStringW(*(LPCWSTR *)(*(int *)param_2 + 0x14),0x100,in_ECX,-1,(LPWSTR)0x0,0);
    if (pwVar4 == (wchar_t *)0x0) {
      piVar3 = __errno();
      *piVar3 = 0x2a;
LAB_100fc3b8:
      __errno();
      goto LAB_100fc472;
    }
    if (pwVar4 <= param_1) {
      if ((0 < (int)pwVar4) && (1 < 0xffffffe0U / (uint)pwVar4)) {
        _Size = (int)pwVar4 * 2 + 8;
        if (_Size < 0x401) {
          puVar5 = (undefined4 *)&stack0xffffffe8;
          _LpDestStr = (wchar_t *)&stack0xffffffe8;
          if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_100fc419:
            _LpDestStr = (wchar_t *)(puVar5 + 2);
          }
        }
        else {
          puVar5 = _malloc(_Size);
          _LpDestStr = (wchar_t *)0x0;
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = 0xdddd;
            goto LAB_100fc419;
          }
        }
      }
      if (_LpDestStr != (wchar_t *)0x0) {
        iVar6 = ___crtLCMapStringW(*(LPCWSTR *)(*(int *)param_2 + 0x14),0x100,in_ECX,-1,_LpDestStr,
                                   (int)pwVar4);
        if (iVar6 == 0) {
          piVar3 = __errno();
          *piVar3 = 0x2a;
        }
        else {
          _wcscpy_s(in_ECX,(rsize_t)param_1,_LpDestStr);
        }
        __freea(_LpDestStr);
        goto LAB_100fc472;
      }
      piVar3 = __errno();
      *piVar3 = 0xc;
      goto LAB_100fc3b8;
    }
    *in_ECX = L'\0';
    piVar3 = __errno();
    iVar6 = 0x22;
  }
  *piVar3 = iVar6;
  FUN_100fe6d4();
LAB_100fc472:
  iVar6 = __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return iVar6;
}

