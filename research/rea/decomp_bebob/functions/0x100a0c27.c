// rea decompile_all
// name: CMFCPopupMenuBar::InvokeMenuCommand
// address: 0x100a0c27
// body: available
// range: 0x100a0c27-0x100a0ed0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPopupMenuBar::InvokeMenuCommand(unsigned int,class
   CMFCToolBarButton const *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCPopupMenuBar::InvokeMenuCommand(CMFCPopupMenuBar *this,uint param_1,CMFCToolBarButton *param_2)

{
  CMFCRibbonBaseElement *this_00;
  CMFCToolBarMenuButton *this_01;
  HWND pHVar1;
  CWnd *pCVar2;
  CObject *pCVar3;
  CObject *pCVar4;
  int iVar5;
  CCommandManager *this_02;
  CFrameWnd *pCVar6;
  int iVar7;
  CObject *local_20;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  pHVar1 = GetParent(*(HWND *)(this + 0x20));
  pCVar2 = CWnd::FromHandle(pHVar1);
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_10160df8,(CObject *)pCVar2);
  if ((pCVar3 == (CObject *)0x0) || (pCVar2 = *(CWnd **)(pCVar3 + 0x124), pCVar2 == (CWnd *)0x0)) {
    pCVar2 = CWnd::GetOwner((CWnd *)this);
  }
  SendMessageW(*(HWND *)(pCVar2 + 0x20),0x362,0xe001,0);
  if (pCVar3 != (CObject *)0x0) {
    local_20 = (CObject *)0x0;
    pCVar4 = pCVar3;
    do {
      if (*(int *)(pCVar4 + 0x148) == 0) break;
      local_20 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_10160470,
                                    *(CObject **)(*(int *)(pCVar4 + 0x148) + 0x6c));
      pCVar4 = (CObject *)CMFCPopupMenu::GetParentPopupMenu((CMFCPopupMenu *)pCVar4);
    } while (pCVar4 != (CObject *)0x0);
    if (local_20 != (CObject *)0x0) {
      (**(code **)(*(int *)local_20 + 0x360))();
    }
  }
  if (param_1 != 0) {
    SetInCommand(this,1);
    AFXPlaySystemSound(1);
    if (*(int *)(this + 0xd08) == 0) {
      if (*(int *)(this + 0xcf8) == 0) {
        pHVar1 = GetParent(*(HWND *)(this + 0x20));
        pCVar2 = CWnd::FromHandle(pHVar1);
        pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_10160df8,(CObject *)pCVar2
                                   );
        if (pCVar3 != (CObject *)0x0) {
          pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCCustomizeButton_10161a18,
                                      *(CObject **)(pCVar3 + 0x148));
          if (pCVar4 != (CObject *)0x0) {
            iVar5 = (**(code **)(*(int *)pCVar4 + 0xf8))(this,param_2);
            if (iVar5 != 0) goto LAB_100a0df5;
          }
        }
        CMFCToolBar::AddCommandUsage(param_1);
        if (pCVar3 != (CObject *)0x0) {
          iVar5 = CMFCPopupMenu::PostCommand((CMFCPopupMenu *)pCVar3,param_1);
          if (iVar5 == 0) {
            if (DAT_101685b0 != (CUserToolsManager *)0x0) {
              iVar5 = CUserToolsManager::InvokeTool(DAT_101685b0,param_1);
              if (iVar5 != 0) goto LAB_100a0df5;
            }
            pCVar2 = CWnd::GetOwner((CWnd *)this);
            PostMessageW(*(HWND *)(pCVar2 + 0x20),(param_1 - 0xf000 < 0x1f0) + 0x111,param_1,0);
            this_00 = *(CMFCRibbonBaseElement **)(pCVar3 + 0x10bc);
            if (this_00 != (CMFCRibbonBaseElement *)0x0) {
              CMFCRibbonBaseElement::SetDroppedDown(this_00,(CMFCPopupMenu *)0x0);
              *(undefined4 *)(pCVar3 + 0x10bc) = 0;
              CMFCRibbonBaseElement::PostMenuCommand(this_00,param_1);
            }
          }
        }
      }
      else if (DAT_101688d8 != 0) {
        *(uint *)(DAT_101688d8 + 0x58) = param_1;
      }
    }
    else if (pCVar3 != (CObject *)0x0) {
      (**(code **)(*(int *)pCVar3 + 0x1f8))(param_1);
    }
  }
LAB_100a0df5:
  if (param_2 == (CMFCToolBarButton *)0x0) {
    DAT_10161b3c = -1;
  }
  else {
    DAT_10161b3c = FUN_10026099(this,(int)param_2);
  }
  if (*(int *)(this + 0xd00) != 0) {
    pHVar1 = GetParent(*(HWND *)(this + 0x20));
    pCVar2 = CWnd::FromHandle(pHVar1);
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_10160df8,(CObject *)pCVar2);
    if (((pCVar3 != (CObject *)0x0) &&
        (this_01 = *(CMFCToolBarMenuButton **)(pCVar3 + 0x148),
        this_01 != (CMFCToolBarMenuButton *)0x0)) && (*(int *)(this_01 + 0x6c) != 0)) {
      iVar5 = *(int *)this_01;
      iVar7 = 0;
      *(uint *)(this_01 + 0x20) = param_1;
      this_02 = (CCommandManager *)FUN_10037712();
      iVar7 = CCommandManager::GetCmdImage(this_02,param_1,iVar7);
      (**(code **)(iVar5 + 0xbc))(iVar7);
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      CMFCToolBarMenuButton::GetImageRect(this_01,(CRect *)&local_18);
      InvalidateRect(*(HWND *)(*(int *)(this_01 + 0x6c) + 0x20),&local_18,1);
      UpdateWindow(*(HWND *)(*(int *)(this_01 + 0x6c) + 0x20));
    }
  }
  pCVar6 = AFXGetParentFrame((CWnd *)this);
  SetInCommand(this,0);
  (**(code **)(*(int *)pCVar6 + 0x60))();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

