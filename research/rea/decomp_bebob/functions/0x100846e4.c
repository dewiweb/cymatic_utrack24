// rea decompile_all
// name: CMFCToolBarImages::Load
// address: 0x100846e4
// body: available
// range: 0x100846e4-0x10084be4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1008471d to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: int __thiscall CMFCToolBarImages::Load(wchar_t const *,unsigned long)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCToolBarImages::Load(CMFCToolBarImages *this,wchar_t *param_1,ulong param_2)

{
  CMFCToolBarImages *pCVar1;
  DWORD DVar2;
  size_t sVar3;
  AFX_MODULE_STATE *pAVar4;
  HANDLE h;
  uint uVar5;
  HDC pHVar6;
  COLORREF color;
  int iVar7;
  undefined1 local_aa0 [18];
  ushort local_a8e;
  undefined1 local_a88 [4];
  LPCWSTR local_a84;
  int local_a80;
  short local_a76;
  COLORREF local_a70;
  CDC local_a6c [4];
  HDC local_a68;
  CDC local_a5c [4];
  HDC local_a58;
  int local_a4c;
  int local_a48;
  CMFCToolBarImages *local_a44;
  int local_a40;
  LPCWSTR local_a3c;
  HBITMAP local_a38;
  wchar_t *local_a34;
  LPCWSTR local_a30;
  wchar_t local_a2c [256];
  WCHAR local_82c [260];
  wchar_t local_624 [256];
  wchar_t local_424 [256];
  wchar_t local_224 [260];
  HGDIOBJ local_1c [5];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xa90;
  local_8 = 0x100846f3;
  local_a34 = param_1;
  local_a44 = this;
  if (*(int *)(this + 0x24) != 0) goto LAB_10084bdd;
  if (param_1 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  pCVar1 = this + 0x88;
  AfxDeleteObject((void **)pCVar1);
  FUN_10006ce0(&local_a30,local_a34);
  local_8 = 0;
  iVar7 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                    ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_a30,L"\\",0);
  if ((((iVar7 == -1) &&
       (iVar7 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                          ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_a30,L"/",0), iVar7 == -1)) &&
      (iVar7 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                         ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                          &local_a30,L":",0), iVar7 == -1)) &&
     (DVar2 = GetModuleFileNameW((HMODULE)0x0,local_82c,0x104), DVar2 != 0)) {
    __wsplitpath_s(local_82c,(wchar_t *)local_1c,3,local_624,0x100,(wchar_t *)0x0,0,(wchar_t *)0x0,0
                  );
    __wsplitpath_s(local_a34,(wchar_t *)0x0,0,(wchar_t *)0x0,0,local_424,0x100,local_a2c,0x100);
    __wmakepath_s(local_224,0x104,(wchar_t *)local_1c,local_624,local_424,local_a2c);
    sVar3 = _wcslen(local_224);
    FUN_10002180(&local_a30,local_224,sVar3);
    this = local_a44;
  }
  if ((param_2 == 0) ||
     (local_a38 = CreateFileW(local_a34,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0),
     local_a38 == (HBITMAP)0xffffffff)) {
LAB_100848a2:
    local_a38 = (HBITMAP)0x2010;
    if (*(int *)(this + 0x30) != 0) {
      local_a38 = (HBITMAP)0x3010;
    }
    local_a3c = local_a30;
    pAVar4 = AfxGetModuleState();
    h = LoadImageW(*(HINSTANCE *)(pAVar4 + 8),local_a3c,0,0,0,(UINT)local_a38);
    *(HANDLE *)pCVar1 = h;
    if (h != (HANDLE)0x0) {
      iVar7 = GetObjectW(h,0x18,local_aa0);
      if (iVar7 != 0) {
        *(undefined4 *)(this + 0x14) = 1;
        FUN_10007c90(this + 0x94,&local_a30);
        DVar2 = GetFileAttributesW(local_a30);
        if ((DVar2 & 1) != 0) {
          *(undefined4 *)(this + 0x20) = 1;
        }
        uVar5 = (uint)local_a8e;
        *(uint *)(this + 8) = uVar5;
        if (((8 < uVar5) && (uVar5 < 0x20)) && (*(void **)pCVar1 != (void *)0x0)) {
          FUN_1001714b((undefined4 *)local_a5c);
          local_8._0_1_ = 1;
          pHVar6 = CreateCompatibleDC((HDC)0x0);
          CDC::Attach(local_a5c,pHVar6);
          iVar7 = GetObjectW(*(HANDLE *)pCVar1,0x18,local_a88);
          if (iVar7 == 0) {
            local_8 = (uint)local_8._1_3_ << 8;
            CDC::~CDC(local_a5c);
          }
          else {
            if (*(HGDIOBJ *)pCVar1 == (HGDIOBJ)0x0) {
              local_a34 = (wchar_t *)0x0;
            }
            else {
              local_a34 = SelectObject(local_a58,*(HGDIOBJ *)pCVar1);
            }
            if (local_a34 != (wchar_t *)0x0) {
              local_a3c = local_a84;
              local_a4c = local_a80;
              local_a38 = CreateCompatibleBitmap(local_a58,(int)local_a84,local_a80);
              if (local_a38 == (HBITMAP)0x0) {
                SelectObject(local_a58,local_a34);
              }
              else {
                FUN_1001714b((undefined4 *)local_a6c);
                local_8 = CONCAT31(local_8._1_3_,2);
                pHVar6 = CreateCompatibleDC(local_a58);
                CDC::Attach(local_a6c,pHVar6);
                local_1c[0] = SelectObject(local_a68,local_a38);
                if (local_1c[0] == (HGDIOBJ)0x0) {
                  SelectObject(local_a58,local_a34);
                  DeleteObject(local_a38);
                }
                else {
                  BitBlt(local_a68,0,0,(int)local_a3c,local_a4c,local_a58,0,0,0xcc0020);
                  local_a40 = 0;
                  if (0 < (int)local_a3c) {
                    do {
                      local_a48 = 0;
                      if (0 < local_a4c) {
                        do {
                          local_a70 = GetPixel(local_a68,local_a40,local_a48);
                          if ((local_a76 == 0x18) && (DAT_10161460 == 0)) {
                            color = FUN_10080351(local_a70);
                          }
                          else {
                            color = MapToSysColor(local_a70,0);
                          }
                          if (local_a70 != color) {
                            SetPixel(local_a68,local_a40,local_a48,color);
                          }
                          local_a48 = local_a48 + 1;
                        } while (local_a48 < local_a4c);
                      }
                      local_a40 = local_a40 + 1;
                    } while (local_a40 < (int)local_a3c);
                  }
                  SelectObject(local_a68,local_1c[0]);
                  SelectObject(local_a58,local_a34);
                  DeleteObject(*(HGDIOBJ *)pCVar1);
                  *(HBITMAP *)pCVar1 = local_a38;
                }
                local_8._0_1_ = 1;
                CDC::~CDC(local_a6c);
              }
            }
            local_8 = (uint)local_8._1_3_ << 8;
            CDC::~CDC(local_a5c);
            this = local_a44;
          }
        }
        if (0x1f < local_a8e) {
          PreMultiplyAlpha(*(HBITMAP__ **)pCVar1,*(int *)(this + 0x38));
        }
        UpdateCount(this);
        AfxDeleteObject((void **)(this + 0x8c));
        *(void **)(this + 0x8c) = (void *)0x0;
        AfxDeleteObject((void **)(this + 0x90));
        *(undefined4 *)(this + 0x90) = 0;
        FUN_10001030((undefined4 *)(local_a30 + -8));
        goto LAB_10084bdd;
      }
      DeleteObject(*(HGDIOBJ *)pCVar1);
      *(void **)pCVar1 = (void *)0x0;
    }
  }
  else {
    local_a3c = (LPCWSTR)GetFileSize(local_a38,(LPDWORD)0x0);
    CloseHandle(local_a38);
    if (local_a3c <= param_2) goto LAB_100848a2;
  }
  FUN_10001030((undefined4 *)(local_a30 + -8));
LAB_10084bdd:
  iVar7 = FUN_100f90cf();
  return iVar7;
}

