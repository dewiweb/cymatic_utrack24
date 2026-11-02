// rea decompile_all
// name: ___crtLCMapStringA
// address: 0x4bf687
// body: available
// range: 0x4bf687-0x4bf889 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    ___crtLCMapStringA
   
   Library: Visual Studio 2015 Release */

int __cdecl
___crtLCMapStringA(_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwMapFlag,LPCSTR _LpSrcStr,
                  int _CchSrc,LPSTR _LpDestStr,int _CchDest,int _Code_page,BOOL _BError)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  LPCSTR pCVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  LPCWSTR pWVar8;
  LPCSTR cbMultiByte;
  LPCWSTR local_c;
  
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  cbMultiByte = _LpSrcStr;
  if (0 < (int)_LpSrcStr) {
    pCVar4 = (LPCSTR)___strncnt(_DwMapFlag,_LpSrcStr);
    cbMultiByte = pCVar4 + 1;
    if ((int)_LpSrcStr <= (int)pCVar4) {
      cbMultiByte = pCVar4;
    }
  }
  iVar5 = MultiByteToWideChar(_CchDest,(uint)(_Code_page != 0) * 8 + 1,(LPCSTR)_DwMapFlag,
                              (int)cbMultiByte,(LPWSTR)0x0,0);
  if (iVar5 == 0) goto LAB_004bf876;
  uVar2 = iVar5 * 2;
  uVar1 = uVar2 + 8;
  if ((uVar1 & -(uint)(uVar2 < uVar1)) == 0) {
    local_c = (LPCWSTR)0x0;
  }
  else if ((-(uint)(uVar2 < uVar1) & uVar1) < 0x401) {
    pWVar8 = (LPCWSTR)&stack0xffffffe4;
    local_c = (LPCWSTR)&stack0xffffffe4;
    if (&stack0x00000000 != (undefined1 *)0x1c) {
LAB_004bf739:
      local_c = pWVar8 + 4;
    }
  }
  else {
    pWVar8 = (LPCWSTR)__malloc_base(-(uint)(uVar2 < uVar2 + 8) & uVar2 + 8);
    local_c = pWVar8;
    if (pWVar8 != (LPCWSTR)0x0) {
      pWVar8[0] = L'\xdddd';
      pWVar8[1] = L'\0';
      goto LAB_004bf739;
    }
  }
  if (((local_c != (LPCWSTR)0x0) &&
      (iVar6 = MultiByteToWideChar(_CchDest,1,(LPCSTR)_DwMapFlag,(int)cbMultiByte,local_c,iVar5),
      iVar6 != 0)) &&
     (iVar6 = ___crtLCMapStringEx((LPCWSTR)_Plocinfo,(DWORD)_LocaleName,local_c,iVar5,(LPWSTR)0x0,0)
     , iVar6 != 0)) {
    if (((uint)_LocaleName & 0x400) == 0) {
      uVar2 = iVar6 * 2;
      uVar1 = uVar2 + 8;
      if ((uVar1 & -(uint)(uVar2 < uVar1)) == 0) {
        pWVar8 = (LPCWSTR)0x0;
LAB_004bf816:
        if ((pWVar8 != (LPCWSTR)0x0) &&
           (iVar5 = ___crtLCMapStringEx((LPCWSTR)_Plocinfo,(DWORD)_LocaleName,local_c,iVar5,pWVar8,
                                        iVar6), iVar5 != 0)) {
          if (_LpDestStr == (LPSTR)0x0) {
            _LpDestStr = (LPSTR)0x0;
            _CchSrc = 0;
          }
          iVar5 = WideCharToMultiByte(_CchDest,0,pWVar8,iVar6,(LPSTR)_CchSrc,(int)_LpDestStr,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
          if (iVar5 != 0) {
            __freea_crt(pWVar8);
            goto LAB_004bf86b;
          }
        }
      }
      else if ((-(uint)(uVar2 < uVar1) & uVar1) < 0x401) {
        puVar7 = (undefined4 *)&stack0xffffffe4;
        pWVar8 = (LPCWSTR)&stack0xffffffe4;
        if (&stack0x00000000 != (undefined1 *)0x1c) {
LAB_004bf80f:
          pWVar8 = (LPCWSTR)(puVar7 + 2);
          goto LAB_004bf816;
        }
      }
      else {
        puVar7 = (undefined4 *)__malloc_base(-(uint)(uVar2 < uVar2 + 8) & uVar2 + 8);
        pWVar8 = (LPCWSTR)0x0;
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = 0xdddd;
          goto LAB_004bf80f;
        }
      }
      __freea_crt(pWVar8);
    }
    else if ((_LpDestStr != (LPSTR)0x0) && (iVar6 <= (int)_LpDestStr)) {
      ___crtLCMapStringEx((LPCWSTR)_Plocinfo,(DWORD)_LocaleName,local_c,iVar5,(LPWSTR)_CchSrc,
                          (int)_LpDestStr);
    }
  }
LAB_004bf86b:
  __freea_crt(local_c);
LAB_004bf876:
  iVar5 = __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return iVar5;
}

