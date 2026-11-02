// rea decompile_all
// name: CMFCToolBarsCustomizeDialog::CMFCToolBarsCustomizeDialog
// address: 0x1009786d
// body: available
// range: 0x1009786d-0x10097cef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10097953 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: __thiscall CMFCToolBarsCustomizeDialog::CMFCToolBarsCustomizeDialog(class CFrameWnd
   *,int,unsigned int,class CList<struct CRuntimeClass *,struct CRuntimeClass *> *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCToolBarsCustomizeDialog::CMFCToolBarsCustomizeDialog
          (CMFCToolBarsCustomizeDialog *this,CFrameWnd *param_1,int param_2,uint param_3,
          CList<CRuntimeClass*,CRuntimeClass*> *param_4)

{
  undefined4 *puVar1;
  CMFCToolBarsOptionsPropertyPage *pCVar2;
  undefined **ppuVar3;
  undefined4 uVar4;
  CObject *pCVar5;
  CPropertyPage *pCVar6;
  HMODULE pHVar7;
  int iVar8;
  CMFCToolBarButton *pCVar9;
  uint uVar10;
  undefined4 *puVar11;
  wchar_t *local_104;
  CMFCToolBarsOptionsPropertyPage *local_100;
  CMFCToolBarMenuButton local_fc [244];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xf8;
  local_8 = 0x1009787c;
  local_100 = (CMFCToolBarsOptionsPropertyPage *)param_1;
  CPropertySheet::CPropertySheet((CPropertySheet *)this,(wchar_t *)&PTR_1011d390,(CWnd *)param_1,0);
  local_8 = 0;
  *(undefined ***)this = vftable;
  CMap<>(this + 0xcc,10);
  local_8._0_1_ = 1;
  CStringList::CStringList((CStringList *)(this + 0xe8),10);
  CList<CPropertyPage*,CPropertyPage*>::CList<CPropertyPage*,CPropertyPage*>
            ((CList<CPropertyPage*,CPropertyPage*> *)(this + 0x120),10);
  local_8._0_1_ = 3;
  ppuVar3 = FUN_1000ad47();
  FUN_10005e00(this + 0x13c,(int *)ppuVar3);
  *(int *)(this + 0x144) = param_2;
  local_8._0_1_ = 4;
  *(uint *)(this + 0x148) = param_3;
  CMFCButton::CMFCButton((CMFCButton *)(this + 0x150));
  local_8._0_1_ = 5;
  *(uint *)(this + 0x14c) = (byte)this[0x148] >> 6 & 1;
  if (param_4 != (CList<CRuntimeClass*,CRuntimeClass*> *)0x0) {
    puVar11 = *(undefined4 **)(param_4 + 4);
    while (puVar11 != (undefined4 *)0x0) {
      puVar1 = puVar11 + 2;
      puVar11 = (undefined4 *)*puVar11;
      pCVar5 = CRuntimeClass::CreateObject((CRuntimeClass *)*puVar1);
      CList<HWND__*,HWND__*>::AddTail((CList<HWND__*,HWND__*> *)(this + 0x120),(HWND__ *)pCVar5);
    }
  }
  pCVar2 = local_100;
  if (local_100 == (CMFCToolBarsOptionsPropertyPage *)0x0) goto LAB_10097953;
  *(CMFCToolBarsOptionsPropertyPage **)(this + 0x140) = local_100;
  local_100 = FUN_1000858a(0x1a8);
  local_8._0_1_ = 6;
  if (local_100 == (CMFCToolBarsOptionsPropertyPage *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = CMFCToolBarsCommandsPropertyPage::CMFCToolBarsCommandsPropertyPage
                      ((CMFCToolBarsCommandsPropertyPage *)local_100);
  }
  local_8._0_1_ = 5;
  *(undefined4 *)(this + 0x104) = uVar4;
  local_100 = FUN_1000858a(0x38c);
  local_8._0_1_ = 7;
  if (local_100 == (CMFCToolBarsOptionsPropertyPage *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = CMFCToolBarsListPropertyPage::CMFCToolBarsListPropertyPage
                      ((CMFCToolBarsListPropertyPage *)local_100,*(CFrameWnd **)(this + 0x140));
  }
  local_8._0_1_ = 5;
  *(undefined4 *)(this + 0x108) = uVar4;
  local_100 = FUN_1000858a(0x500);
  local_8._0_1_ = 8;
  if (local_100 == (CMFCToolBarsOptionsPropertyPage *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = CMFCToolBarsKeyboardPropertyPage::CMFCToolBarsKeyboardPropertyPage
                      ((CMFCToolBarsKeyboardPropertyPage *)local_100,*(CFrameWnd **)(this + 0x140),
                       *(int *)(this + 0x144));
  }
  local_8._0_1_ = 5;
  *(undefined4 *)(this + 0x10c) = uVar4;
  local_100 = FUN_1000858a(0x564);
  local_8._0_1_ = 9;
  if (local_100 == (CMFCToolBarsOptionsPropertyPage *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = CMFCToolBarsMenuPropertyPage::CMFCToolBarsMenuPropertyPage
                      ((CMFCToolBarsMenuPropertyPage *)local_100,*(CFrameWnd **)(this + 0x140),
                       *(int *)(this + 0x144));
  }
  local_8._0_1_ = 5;
  *(undefined4 *)(this + 0x110) = uVar4;
  local_100 = FUN_1000858a(0x214);
  local_8._0_1_ = 10;
  if (local_100 == (CMFCToolBarsOptionsPropertyPage *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = CMFCMousePropertyPage::CMFCMousePropertyPage((CMFCMousePropertyPage *)local_100);
  }
  local_8._0_1_ = 5;
  *(undefined4 *)(this + 0x114) = uVar4;
  CPropertySheet::AddPage((CPropertySheet *)this,*(CPropertyPage **)(this + 0x104));
  CPropertySheet::AddPage((CPropertySheet *)this,*(CPropertyPage **)(this + 0x108));
  if (((byte)this[0x148] & 0x20) == 0) {
    local_100 = FUN_1000858a(0x1350);
    local_8._0_1_ = 0xb;
    if (local_100 == (CMFCToolBarsOptionsPropertyPage *)0x0) {
      pCVar6 = (CPropertyPage *)0x0;
    }
    else {
      pCVar6 = (CPropertyPage *)
               CMFCToolBarsToolsPropertyPage::CMFCToolBarsToolsPropertyPage
                         ((CMFCToolBarsToolsPropertyPage *)local_100);
    }
    *(CPropertyPage **)(this + 0x11c) = pCVar6;
    local_8._0_1_ = 5;
    if (DAT_101685b0 != 0) {
      CPropertySheet::AddPage((CPropertySheet *)this,pCVar6);
    }
  }
  else {
    *(undefined4 *)(this + 0x11c) = 0;
  }
  if ((DAT_1016788c != 0) && (*(int *)(pCVar2 + 0x80) != 0)) {
    CPropertySheet::AddPage((CPropertySheet *)this,*(CPropertyPage **)(this + 0x10c));
  }
  uVar10 = 0;
  pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10120c48,
                              *(CObject **)(this + 0x140));
  if (pCVar5 == (CObject *)0x0) {
    pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWndEx_1012126c,
                                *(CObject **)(this + 0x140));
    if (pCVar5 != (CObject *)0x0) {
      iVar8 = *(int *)(pCVar5 + 0x1d0);
      goto LAB_10097b26;
    }
  }
  else {
    iVar8 = *(int *)(pCVar5 + 1000);
LAB_10097b26:
    uVar10 = (uint)(iVar8 != 0);
  }
  if ((DAT_101688d8 != 0) || (uVar10 != 0)) {
    CPropertySheet::AddPage((CPropertySheet *)this,*(CPropertyPage **)(this + 0x110));
  }
  if (DAT_10169d3c != 0) {
    CPropertySheet::AddPage((CPropertySheet *)this,*(CPropertyPage **)(this + 0x114));
  }
  puVar11 = *(undefined4 **)(this + 0x124);
  while (puVar11 != (undefined4 *)0x0) {
    puVar1 = puVar11 + 2;
    puVar11 = (undefined4 *)*puVar11;
    CPropertySheet::AddPage((CPropertySheet *)this,(CPropertyPage *)*puVar1);
  }
  local_100 = FUN_1000858a(0x3ec);
  local_8._0_1_ = 0xc;
  if (local_100 == (CMFCToolBarsOptionsPropertyPage *)0x0) {
    pCVar6 = (CPropertyPage *)0x0;
  }
  else {
    pCVar6 = (CPropertyPage *)
             CMFCToolBarsOptionsPropertyPage::CMFCToolBarsOptionsPropertyPage(local_100,uVar10);
  }
  local_8._0_1_ = 5;
  *(CPropertyPage **)(this + 0x118) = pCVar6;
  CPropertySheet::AddPage((CPropertySheet *)this,pCVar6);
  ppuVar3 = FUN_1000ad47();
  FUN_10005e00(&local_104,(int *)ppuVar3);
  local_8._0_1_ = 0xd;
  pHVar7 = (HMODULE)FUN_1000ac62();
  iVar8 = 0;
  if (pHVar7 != (HMODULE)0x0) {
    iVar8 = FUN_10006200(&local_104,pHVar7,0x3ee7);
  }
  if (iVar8 != 0) {
    pHVar7 = (HMODULE)FUN_1000ac62();
    iVar8 = 0;
    if (pHVar7 != (HMODULE)0x0) {
      iVar8 = FUN_10006200(this + 0x13c,pHVar7,0x3eee);
    }
    if (iVar8 != 0) {
      SetAllCategory(*(void **)(this + 0x104),*(short **)(this + 0x13c));
      if (*(void **)(this + 0x10c) != (void *)0x0) {
        SetAllCategory(*(void **)(this + 0x10c),*(short **)(this + 0x13c));
      }
      CPropertySheet::SetTitle((CPropertySheet *)this,local_104,0);
      if (*(int *)(this + 0x144) != 0) {
        SetupFromMenus(this);
      }
      ppuVar3 = FUN_1000ad47();
      FUN_10005e00(&local_100,(int *)ppuVar3);
      local_8._0_1_ = 0xe;
      pHVar7 = (HMODULE)FUN_1000ac62();
      iVar8 = 0;
      if (pHVar7 != (HMODULE)0x0) {
        iVar8 = FUN_10006200(&local_100,pHVar7,0x3e8e);
      }
      pCVar2 = local_100;
      if (iVar8 != 0) {
        pCVar9 = (CMFCToolBarButton *)
                 CMFCToolBarMenuButton::CMFCToolBarMenuButton
                           (local_fc,0,(HMENU__ *)0x0,-1,(wchar_t *)local_100,0);
        local_8._0_1_ = 0xf;
        AddButton(this,(wchar_t *)pCVar2,pCVar9,-1);
        local_8 = CONCAT31(local_8._1_3_,0xe);
        CMFCToolBarMenuButton::~CMFCToolBarMenuButton(local_fc);
        FUN_10001030((undefined4 *)(pCVar2 + -0x10));
        FUN_10001030((undefined4 *)(local_104 + -8));
        FUN_100f90cf();
        return;
      }
    }
  }
LAB_10097953:
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

