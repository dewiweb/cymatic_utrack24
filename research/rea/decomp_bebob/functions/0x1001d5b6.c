// rea decompile_all
// name: CFileDialog::UpdateOFNFromShellDialog
// address: 0x1001d5b6
// body: available
// range: 0x1001d5b6-0x1001d9d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CFileDialog::UpdateOFNFromShellDialog(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CFileDialog::UpdateOFNFromShellDialog(CFileDialog *this)

{
  int iVar1;
  IFileSaveDialog *pIVar2;
  size_t sVar3;
  undefined **ppuVar4;
  LPWSTR pWVar5;
  wchar_t *_Dst;
  int local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  LPCWSTR local_20;
  wchar_t *local_1c;
  LPWSTR local_18;
  LPWSTR local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x1001d5c2;
  if (*(int *)(this + 0x98) != 1) {
    return;
  }
  iVar1 = (**(code **)(**(int **)(this + 0xa4) + 0x50))(*(int **)(this + 0xa4),&local_28);
  if (iVar1 < 0) {
    if ((*(uint *)(*(int *)(this + 0x94) + 0x34) & 0x200) == 0) goto LAB_1001d91a;
    local_34 = (int *)0x0;
    iVar1 = (**(code **)**(undefined4 **)(this + 0xa4))
                      (*(undefined4 **)(this + 0xa4),&DAT_1011fa0c,&local_34);
    if (iVar1 < 0) goto LAB_1001d91a;
    local_30 = (int *)0x0;
    iVar1 = (**(code **)(*local_34 + 0x6c))(local_34,&local_30);
    local_28 = local_34;
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*local_30 + 0x24))(local_30,&local_2c);
      if (-1 < iVar1) {
        local_38 = 0;
        iVar1 = (**(code **)(*local_2c + 0xc))(local_2c,1,&local_24,&local_38);
        if (iVar1 == 0) {
          ppuVar4 = FUN_1000ad47();
          FUN_10005e00(&local_18,(int *)ppuVar4);
          local_8 = 1;
          _Dst = *(wchar_t **)(*(int *)(this + 0x94) + 0x1c);
          local_14[0] = (LPWSTR)0x0;
          iVar1 = (**(code **)(*local_24 + 0x14))(local_24,0x80058000,local_14);
          if (-1 < iVar1) {
            PathRemoveFileSpecW(local_14[0]);
            _wcsncpy_s(_Dst,*(int *)(*(int *)(this + 0x94) + 0x20) - 1,local_14[0],0xffffffff);
            sVar3 = _wcslen(local_14[0]);
            _Dst = _Dst + sVar3 + 1;
            CoTaskMemFree(local_14[0]);
          }
          do {
            local_14[0] = (LPWSTR)0x0;
            iVar1 = (**(code **)(*local_24 + 0x14))(local_24,0x80058000,local_14);
            if (-1 < iVar1) {
              FUN_100022b0(&local_18,local_14[0]);
              if (1 < *(int *)(local_18 + -2)) {
                FUN_10001130(&local_18,*(int *)(local_18 + -6));
              }
              pWVar5 = local_18;
              PathRemoveFileSpecW(local_18);
              ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer
                        ((CSimpleStringT<wchar_t,0> *)&local_18,-1);
              iVar1 = *(int *)(pWVar5 + -6);
              if (local_14[0][iVar1] == L'\\') {
                iVar1 = iVar1 + 1;
              }
              _wcsncpy_s(_Dst,(*(int *)(*(int *)(this + 0x94) + 0x20) -
                              ((int)_Dst - *(int *)(*(int *)(this + 0x94) + 0x1c) >> 1)) - 1,
                         local_14[0] + iVar1,0xffffffff);
              sVar3 = _wcslen(local_14[0] + iVar1);
              _Dst = _Dst + sVar3 + 1;
              CoTaskMemFree(local_14[0]);
            }
            (**(code **)(*local_24 + 8))(local_24);
          } while ((_Dst < (wchar_t *)
                           (*(int *)(*(int *)(this + 0x94) + 0x1c) + -2 +
                           *(int *)(*(int *)(this + 0x94) + 0x20) * 2)) &&
                  (iVar1 = (**(code **)(*local_2c + 0xc))(local_2c,1,&local_24,&local_38),
                  iVar1 == 0));
          if (_Dst < (wchar_t *)
                     (*(int *)(*(int *)(this + 0x94) + 0x1c) + -2 +
                     *(int *)(*(int *)(this + 0x94) + 0x20) * 2)) {
            *_Dst = L'\0';
          }
          else {
            *(undefined2 *)
             (*(int *)(*(int *)(this + 0x94) + 0x1c) + -4 +
             *(int *)(*(int *)(this + 0x94) + 0x20) * 2) = 0;
            *(undefined2 *)
             (*(int *)(*(int *)(this + 0x94) + 0x1c) + -2 +
             *(int *)(*(int *)(this + 0x94) + 0x20) * 2) = 0;
          }
          local_8 = 0xffffffff;
          FUN_10001030((undefined4 *)(local_18 + -8));
        }
        (**(code **)(*local_2c + 8))(local_2c);
      }
      (**(code **)(*local_30 + 8))(local_30);
      local_28 = local_34;
    }
  }
  else {
    pIVar2 = GetIFileSaveDialog(this);
    if (pIVar2 != (IFileSaveDialog *)0x0) {
      local_18 = (LPWSTR)0x0;
      iVar1 = (**(code **)(*(int *)pIVar2 + 0x78))(pIVar2,&local_18);
      if (-1 < iVar1) {
        (**(code **)(*(int *)pIVar2 + 0x7c))
                  (pIVar2,local_28,local_18,*(undefined4 *)(this + 0x20),0);
        (**(code **)(*(int *)local_18 + 8))(local_18);
      }
      (**(code **)(*(int *)pIVar2 + 8))(pIVar2);
    }
    local_1c = (wchar_t *)0x0;
    iVar1 = (**(code **)(*local_28 + 0x14))(local_28,0x80058000,&local_1c);
    if (-1 < iVar1) {
      FUN_10006ce0(&local_18,local_1c);
      local_8 = 0;
      if (1 < *(int *)(local_18 + -2)) {
        FUN_10001130(&local_18,*(int *)(local_18 + -6));
      }
      PathRemoveFileSpecW(local_18);
      ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer((CSimpleStringT<wchar_t,0> *)&local_18,-1);
      iVar1 = *(int *)(local_18 + -6);
      if (local_1c[iVar1] == L'\\') {
        iVar1 = iVar1 + 1;
      }
      _wcsncpy_s(*(wchar_t **)(*(int *)(this + 0x94) + 0x1c),
                 *(int *)(*(int *)(this + 0x94) + 0x20) - 1,local_1c,0xffffffff);
      _wcsncpy_s(*(wchar_t **)(*(int *)(this + 0x94) + 0x24),
                 *(rsize_t *)(*(int *)(this + 0x94) + 0x28),local_1c + iVar1,0xffffffff);
      iVar1 = *(int *)(this + 0x94);
      sVar3 = _wcslen(*(wchar_t **)(iVar1 + 0x1c));
      *(undefined2 *)(*(int *)(iVar1 + 0x1c) + 2 + sVar3 * 2) = 0;
      CoTaskMemFree(local_1c);
      local_8 = 0xffffffff;
      FUN_10001030((undefined4 *)(local_18 + -8));
    }
  }
  (**(code **)(*local_28 + 8))(local_28);
LAB_1001d91a:
  GetPathName(this);
  local_8 = 2;
  ppuVar4 = FUN_1000ad47();
  FUN_10005e00(&local_38,(int *)ppuVar4);
  local_8 = CONCAT31(local_8._1_3_,3);
  pWVar5 = PathFindFileNameW(local_20);
  if (pWVar5 != (LPWSTR)0x0) {
    FUN_100022b0(&local_38,pWVar5);
  }
  ppuVar4 = FUN_1000ad47();
  FUN_10005e00(&local_34,(int *)ppuVar4);
  local_8 = CONCAT31(local_8._1_3_,4);
  pWVar5 = PathFindExtensionW(local_20);
  if ((pWVar5 != (LPWSTR)0x0) && (*pWVar5 == L'.')) {
    FUN_100022b0(&local_34,pWVar5 + 1);
  }
  iVar1 = local_38;
  *(WCHAR *)(*(int *)(this + 0x94) + 0x38) = local_20[-6] - *(short *)(local_38 + -0xc);
  *(WCHAR *)(*(int *)(this + 0x94) + 0x3a) = local_20[-6] - (short)local_34[-3];
  FUN_10001030(local_34 + -4);
  FUN_10001030((undefined4 *)(iVar1 + -0x10));
  FUN_10001030((undefined4 *)(local_20 + -8));
  return;
}

