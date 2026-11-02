// rea decompile_all
// name: CMFCRibbonPanelMenuBar::OnChangeHighlighted
// address: 0x100a3208
// body: available
// range: 0x100a3208-0x100a34db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCRibbonPanelMenuBar::OnChangeHighlighted(class
   CMFCRibbonBaseElement *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCRibbonPanelMenuBar::OnChangeHighlighted
          (CMFCRibbonPanelMenuBar *this,CMFCRibbonBaseElement *param_1)

{
  POINT pt;
  CObject *pCVar1;
  BOOL BVar2;
  int iVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  tagMSG *ptVar6;
  CFrameWnd *pCVar7;
  CMFCRibbonPanelMenuBar *pCVar8;
  tagPOINT local_2c;
  CObject *local_24;
  CObject *local_20;
  CObject *local_1c;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  iVar3 = *(int *)(this + 0xe20);
  local_24 = (CObject *)param_1;
  if ((iVar3 == 0) || (*(int *)(iVar3 + 0x1c) == 0)) goto LAB_100a34cd;
  pCVar1 = (CObject *)FUN_100b3c4d(iVar3);
  pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonButton_10133868,pCVar1);
  local_1c = pCVar1;
  local_20 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonButton_10133868,local_24);
  if ((pCVar1 != (CObject *)0x0) && (local_24 == (CObject *)0x0)) goto LAB_100a34cd;
  local_2c.y = (LONG)(pCVar1 != local_24);
  if ((local_20 != (CObject *)0x0) && (pCVar1 == local_20)) {
    local_18.left = *(LONG *)(local_20 + 0xc4);
    local_18.top = *(LONG *)(local_20 + 200);
    local_18.right = *(LONG *)(local_20 + 0xcc);
    local_18.bottom = *(LONG *)(local_20 + 0xd0);
    BVar2 = IsRectEmpty(&local_18);
    pCVar1 = local_1c;
    if ((BVar2 == 0) &&
       (iVar3 = (**(code **)(*(int *)local_20 + 0x1b4))(), pCVar1 = local_1c, iVar3 == 0)) {
      local_2c.y = 1;
    }
  }
  if (local_2c.y == 0) {
    if ((local_20 != (CObject *)0x0) && (local_20 == *(CObject **)(this + 0xe28))) {
      *(int *)(*(CObject **)(this + 0xe28) + 0x128) = 0;
      *(undefined4 *)(this + 0xe28) = 0;
      KillTimer(*(HWND *)(this + 0x20),2);
    }
  }
  else {
    pHVar4 = GetParent(*(HWND *)(this + 0x20));
    pCVar5 = CWnd::FromHandle(pHVar4);
    local_1c = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonPanelMenu_1012fd88,
                                  (CObject *)pCVar5);
    if (pCVar1 != (CObject *)0x0) {
      ptVar6 = CWnd::GetCurrentMessage();
      if ((DAT_10166e54 == 0) && ((ptVar6 == (tagMSG *)0x0 || (ptVar6->message != 0x100)))) {
        *(CObject **)(this + 0xe28) = pCVar1;
        *(int *)(pCVar1 + 0x128) = 1;
        SetTimer(*(HWND *)(this + 0x20),2,DAT_10161b38 - 1,(TIMERPROC)0x0);
        (**(code **)(*(int *)pCVar1 + 0x118))();
      }
      else {
        KillTimer(*(HWND *)(this + 0x20),2);
        *(undefined4 *)(this + 0xe28) = 0;
        (**(code **)(*(int *)pCVar1 + 0xf8))();
        if (local_1c != (CObject *)0x0) {
          pCVar7 = DAT_10168578;
          if (DAT_10168578 == (CFrameWnd *)0x0) {
            pCVar7 = CWnd::GetTopLevelFrame((CWnd *)this);
          }
          CMFCPopupMenu::ActivatePopupMenu(pCVar7,(CMFCPopupMenu *)local_1c);
        }
      }
    }
    pCVar1 = local_20;
    if ((local_20 != (CObject *)0x0) &&
       (iVar3 = (**(code **)(*(int *)local_20 + 0x98))(), iVar3 != 0)) {
      if (*(int *)(this + 0xe2c) != 0) {
        KillTimer(*(HWND *)(this + 0x20),1);
      }
      *(CObject **)(this + 0xe2c) = pCVar1;
      if (pCVar1 == *(CObject **)(this + 0xe28)) {
        local_18.left = *(LONG *)(pCVar1 + 0xc4);
        local_18.top = *(LONG *)(pCVar1 + 200);
        local_18.right = *(LONG *)(pCVar1 + 0xcc);
        local_18.bottom = *(LONG *)(pCVar1 + 0xd0);
        BVar2 = IsRectEmpty(&local_18);
        if (BVar2 == 0) {
          local_2c.x = 0;
          local_2c.y = 0;
          GetCursorPos(&local_2c);
          ScreenToClient(*(HWND *)(this + 0x20),&local_2c);
          pt.y = local_2c.y;
          pt.x = local_2c.x;
          BVar2 = PtInRect(&local_18,pt);
          pCVar1 = local_20;
          if (BVar2 == 0) goto LAB_100a3414;
        }
        (**(code **)(*(int *)this + 0x440))();
        *(undefined4 *)(this + 0xe2c) = 0;
        pCVar1 = local_20;
      }
      else {
        SetTimer(*(HWND *)(this + 0x20),1,DAT_10161b38,(TIMERPROC)0x0);
      }
    }
LAB_100a3414:
    if (local_1c != (CObject *)0x0) {
      pCVar8 = CMFCRibbonPanelMenu::GetParentRibbonMenuBar((CMFCRibbonPanelMenu *)local_1c);
      if ((pCVar8 != (CMFCRibbonPanelMenuBar *)0x0) &&
         (*(int *)(pCVar8 + 0xe28) == *(int *)(local_1c + 0x10bc))) {
        (**(code **)(*(int *)pCVar8 + 0x440))();
      }
      if (*(int **)(local_1c + 0x10bc) != (int *)0x0) {
        (**(code **)(**(int **)(local_1c + 0x10bc) + 0x15c))(this,pCVar1);
      }
    }
  }
  if (local_24 == (CObject *)0x0) {
    pHVar4 = GetParent(*(HWND *)(this + 0x20));
    pCVar5 = CWnd::FromHandle(pHVar4);
    pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonPanelMenu_1012fd88,
                                (CObject *)pCVar5);
    if ((pCVar1 != (CObject *)0x0) && (*(int **)(pCVar1 + 0x10bc) != (int *)0x0)) {
      (**(code **)(**(int **)(pCVar1 + 0x10bc) + 0x15c))(this,0);
    }
  }
LAB_100a34cd:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

