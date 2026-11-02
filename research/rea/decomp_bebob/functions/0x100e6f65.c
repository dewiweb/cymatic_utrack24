// rea decompile_all
// name: CMFCMousePropertyPage::OnInitDialog
// address: 0x100e6f65
// body: available
// range: 0x100e6f65-0x100e7259 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100e6f84 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual int __thiscall CMFCMousePropertyPage::OnInitDialog(void)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCMousePropertyPage::OnInitDialog(CMFCMousePropertyPage *this)

{
  int *piVar1;
  wchar_t *pwVar2;
  AFX_MODULE_STATE *pAVar3;
  LRESULT LVar4;
  int iVar5;
  HWND pHVar6;
  CWnd *pCVar7;
  CObject *pCVar8;
  _IMAGELIST *p_Var9;
  _IMAGEINFO *p_Var10;
  CStringList local_8c [4];
  undefined4 *local_88;
  int local_80;
  undefined4 *local_70;
  int local_6c;
  LRESULT local_68;
  int local_64;
  wchar_t *local_60;
  int local_5c;
  HICON local_58;
  _IMAGEINFO local_54 [16];
  RECT local_44;
  tagRECT local_34;
  tagRECT local_24;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x7c;
  local_8 = 0x100e6f71;
  if (DAT_10169d3c != (CMouseManager *)0x0) {
    CDialog::OnInitDialog((CDialog *)this);
    CStringList::CStringList(local_8c,10);
    local_8 = 0;
    CMouseManager::GetViewNames(DAT_10169d3c,local_8c);
    CImageList::Create((CImageList *)(this + 0xac),DAT_10166bac,DAT_10166bb0,1,local_80,1);
    CListCtrl::SetImageList((CListCtrl *)(this + 0xb4),(CImageList *)(this + 0xac),1);
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    GetClientRect(*(HWND *)(this + 0xd4),&local_24);
    CListCtrl::InsertColumn
              ((CListCtrl *)(this + 0xb4),0,(wchar_t *)&PTR_1011d390,0,
               (local_24.right - local_24.left) + -1,-1);
    local_68 = 0;
    while (local_88 != (undefined4 *)0x0) {
      if (local_88 == (undefined4 *)0x0) goto LAB_100e6f84;
      local_70 = (undefined4 *)*local_88;
      piVar1 = FUN_10005e30((int *)(local_88[2] + -0x10));
      local_60 = (wchar_t *)(piVar1 + 4);
      local_6c = -1;
      local_8 = CONCAT31(local_8._1_3_,1);
      pwVar2 = GetViewIdByName(DAT_10169d3c,local_60);
      local_58 = (HICON)CMouseManager::GetViewIconId(DAT_10169d3c,(int)pwVar2);
      if (local_58 != (HICON)0x0) {
        AfxGetModuleState();
        pAVar3 = AfxGetModuleState();
        local_58 = LoadIconW(*(HINSTANCE *)(pAVar3 + 0xc),(LPCWSTR)((uint)local_58 & 0xffff));
        if (local_58 != (HICON)0x0) {
          local_6c = CImageList::Add((CImageList *)(this + 0xac),local_58);
          DestroyIcon(local_58);
        }
      }
      local_58 = (HICON)SendMessageW(*(HWND *)(this + 0xd4),0x1004,0,0);
      local_5c = 0;
      LVar4 = SendMessageW(*(HWND *)(this + 0xd4),0x1004,0,0);
      if (0 < LVar4) {
        do {
          CListCtrl::GetItemText((CListCtrl *)(this + 0xb4),(int)&local_64,local_5c);
          local_8._0_1_ = 2;
          iVar5 = FUN_10005720(&local_64,(ushort *)local_60);
          local_8 = CONCAT31(local_8._1_3_,1);
          if (0 < iVar5) {
            local_58 = (HICON)local_5c;
            FUN_10001030((undefined4 *)(local_64 + -0x10));
            break;
          }
          FUN_10001030((undefined4 *)(local_64 + -0x10));
          local_5c = local_5c + 1;
          LVar4 = SendMessageW(*(HWND *)(this + 0xd4),0x1004,0,0);
        } while (local_5c < LVar4);
      }
      CListCtrl::InsertItem((CListCtrl *)(this + 0xb4),3,(int)local_58,local_60,0,0,local_6c,0);
      pwVar2 = GetViewIdByName(DAT_10169d3c,local_60);
      SetItem(this + 0xb4,(int)local_58,0,4,(wchar_t *)0x0,0,0,0,(long)pwVar2);
      LVar4 = SendMessageW(*(HWND *)(this + 0xd4),0x1057,0,(LPARAM)local_60);
      if (local_68 < LVar4) {
        local_68 = LVar4;
      }
      local_8 = local_8 & 0xffffff00;
      FUN_10001030((undefined4 *)(local_60 + -8));
      local_88 = local_70;
    }
    p_Var9 = *(_IMAGELIST **)(this + 0xb0);
    p_Var10 = local_54;
    iVar5 = 0;
    pAVar3 = AfxGetModuleState();
    CComCtlWrapper::_ImageList_GetImageInfo
              ((CComCtlWrapper *)**(undefined4 **)(pAVar3 + 0x78),p_Var9,iVar5,p_Var10);
    CopyRect(&local_34,&local_44);
    SendMessageW(*(HWND *)(this + 0xd4),0x101e,0,
                 local_68 + 10 + (local_34.right - local_34.left) & 0xffff);
    pHVar6 = GetParent(*(HWND *)(this + 0x20));
    pCVar7 = CWnd::FromHandle(pHVar6);
    pCVar8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarsCustomizeDialog_1012e830,
                                (CObject *)pCVar7);
    if (pCVar8 != (CObject *)0x0) {
      (**(code **)(*(int *)pCVar8 + 0x170))(this + 0x128);
      CListCtrl::SetItemState((CListCtrl *)(this + 0xb4),0,3,3);
      SendMessageW(*(HWND *)(this + 0xd4),0x1013,0,0);
      local_8 = 0xffffffff;
      FUN_100541e5((undefined4 *)local_8c);
      iVar5 = FUN_100f90cf();
      return iVar5;
    }
  }
LAB_100e6f84:
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

