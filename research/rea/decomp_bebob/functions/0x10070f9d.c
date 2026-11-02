// rea decompile_all
// name: CMFCMenuBar::CreateFromMenu
// address: 0x10070f9d
// body: available
// range: 0x10070f9d-0x1007137d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10070fc2 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCMenuBar::CreateFromMenu(struct HMENU__ *,int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCMenuBar::CreateFromMenu(CMFCMenuBar *this,HMENU__ *param_1,int param_2,int param_3)

{
  HMENU__ *pHVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  CFrameWnd *this_00;
  int iVar4;
  undefined4 uVar5;
  CMenu *this_01;
  UINT UVar6;
  undefined **ppuVar7;
  HMENU pHVar8;
  CMenu *pCVar9;
  CObject *pCVar10;
  CMDIChildWnd *pCVar11;
  int iVar12;
  uint local_188;
  uint local_184;
  undefined **local_180;
  CHelpComboBoxButton local_17c [248];
  CMFCToolBarButton local_84 [8];
  undefined4 local_7c;
  undefined4 local_78;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x188;
  local_8 = 0x10070fac;
  if (*(int *)(this + 0xd14) == 0) {
LAB_10070fc2:
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  pHVar2 = GetFocus();
  pCVar3 = CWnd::FromHandle(pHVar2);
  if (pCVar3 == (CWnd *)this) {
    this_00 = CWnd::GetParentFrame((CWnd *)this);
    CWnd::SetFocus((CWnd *)this_00);
  }
  pHVar1 = *(HMENU__ **)(this + 0xcd4);
  if (((pHVar1 == param_1) && (DAT_10166e54 == 0)) && (param_3 == 0)) {
    if (*(int *)(this + 0xcf8) != 0) {
      SetMaximizeMode(this,0,(CWnd *)0x0,0);
      SetMaximizeMode(this,1,(CWnd *)0x0,0);
      CMFCToolBar::InvalidateButton((CMFCToolBar *)this,0);
      iVar12 = 0;
      if (0 < *(int *)(this + 0xcec)) {
        local_180 = (undefined **)0xffffffff;
        do {
          iVar4 = FUN_100268b9((int)this);
          CMFCToolBar::InvalidateButton((CMFCToolBar *)this,iVar4 + (int)local_180);
          iVar12 = iVar12 + 1;
          local_180 = (undefined **)((int)local_180 + -1);
        } while (iVar12 < *(int *)(this + 0xcec));
      }
    }
  }
  else {
    if ((DAT_101697f4 != (CMenuTearOffManager *)0x0) && (pHVar1 != (HMENU__ *)0x0)) {
      CMenuTearOffManager::Reset(DAT_101697f4,pHVar1);
    }
    CMenuHash::SaveMenuBar
              ((CMenuHash *)&DAT_10168048,*(HMENU__ **)(this + 0xcd4),(CMFCToolBar *)this);
    iVar12 = *(int *)(this + 0xcf8);
    *(undefined4 *)(this + 0xcf8) = 0;
    *(HMENU__ **)(this + 0xcd4) = param_1;
    if (param_2 != 0) {
      *(HMENU__ **)(this + 0xcd8) = param_1;
    }
    uVar5 = (**(code **)(*(int *)this + 400))();
    iVar4 = CMenuHash::LoadMenuBar((CMenuHash *)&DAT_10168048,param_1,(CMFCToolBar *)this);
    if ((iVar4 == 0) || (param_3 != 0)) {
      this_01 = CMenu::FromHandle(param_1);
      if (this_01 == (CMenu *)0x0) goto LAB_10071376;
      if (DAT_101697f4 != (CMenuTearOffManager *)0x0) {
        CMenuTearOffManager::SetupTearOffMenus(DAT_101697f4,param_1);
      }
      (**(code **)(*(int *)this + 0x350))();
      iVar4 = GetMenuItemCount(*(HMENU *)(this_01 + 4));
      local_188 = 0;
      if (0 < iVar4) {
        do {
          UVar6 = GetMenuItemID(*(HMENU *)(this_01 + 4),local_188);
          ppuVar7 = FUN_1000ad47();
          FUN_10005e00(&local_180,(int *)ppuVar7);
          local_8 = 0;
          CMenu::GetMenuStringW
                    (this_01,local_188,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_180,0x400);
          if (UVar6 == 0) {
            (**(code **)(*(int *)this + 0x348))(0xffffffff);
          }
          else if (UVar6 == 0xffffffff) {
            pHVar8 = GetSubMenu(*(HMENU *)(this_01 + 4),local_188);
            pCVar9 = CMenu::FromHandle(pHVar8);
            if (pCVar9 == (CMenu *)0x0) goto LAB_10070fc2;
            local_184 = 0;
            if (DAT_101697f4 != (CMenuTearOffManager *)0x0) {
              local_184 = CMenuTearOffManager::Parse
                                    (DAT_101697f4,
                                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                      *)&local_180);
            }
            pCVar10 = CRuntimeClass::CreateObject(*(CRuntimeClass **)(this + 0xd14));
            if (pCVar9 == (CMenu *)0x0) {
              uVar5 = 0;
            }
            else {
              uVar5 = *(undefined4 *)(pCVar9 + 4);
            }
            Initialize(pCVar10,0,uVar5,0xffffffff,local_180,0);
            *(undefined4 *)(pCVar10 + 8) = 1;
            *(undefined4 *)(pCVar10 + 0xc) = 0;
            (**(code **)(*(int *)pCVar10 + 0xf4))(local_184);
            (**(code **)(*(int *)this + 0x344))(pCVar10,0xffffffff);
            (**(code **)(*(int *)pCVar10 + 4))(1);
          }
          else {
            CMFCToolBarButton::CMFCToolBarButton(local_84,UVar6,-1,(wchar_t *)local_180,0,0);
            local_8._0_1_ = 1;
            local_7c = 1;
            local_78 = 0;
            (**(code **)(*(int *)this + 0x344))(local_84,0xffffffff);
            local_8 = (uint)local_8._1_3_ << 8;
            CMFCToolBarButton::~CMFCToolBarButton(local_84);
          }
          local_8 = 0xffffffff;
          FUN_10001030(local_180 + -4);
          local_188 = local_188 + 1;
        } while ((int)local_188 < iVar4);
      }
      if ((*(int *)(this + 0xce8) != 0) &&
         (iVar4 = FUN_1002605c(this,*(int *)(this + 0xce8),0), iVar4 < 0)) {
        CHelpComboBoxButton(local_17c,*(uint *)(this + 0xce8),*(int *)(this + 0xcf4),
                            *(undefined ***)(this + 0xd0c));
        local_8 = 2;
        (**(code **)(*(int *)this + 0x344))(local_17c,0xffffffff);
        local_8 = 0xffffffff;
        CHelpComboBoxButton::~CHelpComboBoxButton(local_17c);
      }
    }
    else {
      (**(code **)(*(int *)this + 0x1dc))(uVar5);
    }
    if ((iVar12 != 0) &&
       (pCVar10 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWnd_10127cb4,
                                     *(CObject **)(this + 0xcd0)), pCVar10 != (CObject *)0x0)) {
      iVar12 = 1;
      pCVar11 = CMDIFrameWnd::MDIGetActive((CMDIFrameWnd *)pCVar10,(int *)0x0);
      SetMaximizeMode(this,1,(CWnd *)pCVar11,iVar12);
    }
    if (*(int *)(this + 0x20) != 0) {
      (**(code **)(*(int *)this + 0x208))();
    }
    FUN_1002de91((int)this);
  }
  if (*(int *)(this + 0x168) == 0) {
    (**(code **)(*(int *)this + 0x2d4))(1);
  }
LAB_10071376:
  FUN_100f90cf();
  return;
}

