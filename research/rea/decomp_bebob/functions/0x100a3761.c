// rea decompile_all
// name: CMFCRibbonPanelMenuBar::OnTimer
// address: 0x100a3761
// body: available
// range: 0x100a3761-0x100a3a0e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonPanelMenuBar::OnTimer(unsigned int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCRibbonPanelMenuBar::OnTimer(CMFCRibbonPanelMenuBar *this,uint param_1)

{
  int *piVar1;
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  POINT pt_02;
  POINT pt_03;
  BOOL BVar2;
  int iVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  CObject *pCVar6;
  CFrameWnd *pCVar7;
  int iVar8;
  tagPOINT local_20;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_20.x = 0;
  local_20.y = 0;
  GetCursorPos(&local_20);
  ScreenToClient(*(HWND *)(this + 0x20),&local_20);
  if (param_1 == 1) {
    KillTimer(*(HWND *)(this + 0x20),1);
    pCVar5 = *(CWnd **)(this + 0xc94);
    if ((pCVar5 != (CWnd *)0x0) && (*(int *)(pCVar5 + 0x20) != 0)) {
      CWnd::ShowWindow(pCVar5,0);
    }
    iVar3 = *(int *)(this + 0xe28);
    if (iVar3 != 0) {
      local_18.left = *(LONG *)(iVar3 + 0x18);
      local_18.top = *(LONG *)(iVar3 + 0x1c);
      local_18.right = *(LONG *)(iVar3 + 0x20);
      local_18.bottom = *(LONG *)(iVar3 + 0x24);
      pt.y = local_20.y;
      pt.x = local_20.x;
      BVar2 = PtInRect(&local_18,pt);
      if (BVar2 != 0) goto LAB_100a39fe;
    }
    (**(code **)(*(int *)this + 0x43c))();
    piVar1 = *(int **)(this + 0xe2c);
    *(undefined4 *)(this + 0xe2c) = 0;
    if ((piVar1 != (int *)0x0) && (iVar3 = (**(code **)(*piVar1 + 0x2c))(), iVar3 != 0)) {
      (**(code **)(*piVar1 + 0x9c))();
    }
  }
  else if (param_1 == 2) {
    KillTimer(*(HWND *)(this + 0x20),2);
    if (*(int *)(this + 0xe28) != 0) {
      pHVar4 = GetParent(*(HWND *)(this + 0x20));
      pCVar5 = CWnd::FromHandle(pHVar4);
      pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_10160df8,(CObject *)pCVar5);
      iVar3 = *(int *)(this + 0xe28);
      local_18.left = *(LONG *)(iVar3 + 0x18);
      local_18.top = *(LONG *)(iVar3 + 0x1c);
      local_18.right = *(LONG *)(iVar3 + 0x20);
      local_18.bottom = *(LONG *)(iVar3 + 0x24);
      pt_00.y = local_20.y;
      pt_00.x = local_20.x;
      BVar2 = PtInRect(&local_18,pt_00);
      if (BVar2 == 0) {
        (**(code **)(**(int **)(this + 0xe28) + 0xf8))();
        *(undefined4 *)(this + 0xe28) = 0;
        if (pCVar6 != (CObject *)0x0) {
          pCVar7 = DAT_10168578;
          if (DAT_10168578 == (CFrameWnd *)0x0) {
            pCVar7 = CWnd::GetTopLevelFrame((CWnd *)this);
          }
          CMFCPopupMenu::ActivatePopupMenu(pCVar7,(CMFCPopupMenu *)pCVar6);
        }
      }
    }
  }
  else if (param_1 == 0x14) {
    KillTimer(*(HWND *)(this + 0x20),0x14);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_18);
    pt_01.y = local_20.y;
    pt_01.x = local_20.x;
    BVar2 = PtInRect(&local_18,pt_01);
    if ((((BVar2 != 0) && (iVar3 = HitTestEx(this,local_20.x,local_20.y), iVar3 != -1)) &&
        (*(int *)(this + 0xb98) == iVar3)) && (*(int *)(this + 0xb98) != -1)) {
      GetCursorPos(&local_20);
      iVar8 = (**(code **)(*(int *)this + 0x250))
                        (CONCAT22((undefined2)local_20.y,(undefined2)local_20.x));
      if (iVar8 != 0) {
        NotifyWinEvent(0x8005,*(HWND *)(this + 0x20),-4,iVar3 + 1);
      }
    }
  }
  else if (param_1 == 3) {
    pt_02.y = local_20.y;
    pt_02.x = local_20.x;
    BVar2 = PtInRect((RECT *)(this + 0xd90),pt_02);
    if (BVar2 == 0) {
      *(undefined4 *)(this + 0xe34) = 0;
      KillTimer(*(HWND *)(this + 0x20),3);
      SetRectEmpty((RECT *)(this + 0xd90));
    }
    else {
      iVar3 = *(int *)(this + 0xe34);
      if (iVar3 != 0) {
        local_18.left = *(LONG *)(iVar3 + 0x18);
        local_18.top = *(LONG *)(iVar3 + 0x1c);
        local_18.right = *(LONG *)(iVar3 + 0x20);
        local_18.bottom = *(LONG *)(iVar3 + 0x24);
        pt_03.y = local_20.y;
        pt_03.x = local_20.x;
        BVar2 = PtInRect(&local_18,pt_03);
        if ((BVar2 != 0) && (iVar3 = (**(code **)(**(int **)(this + 0xe34) + 0xb0))(), iVar3 == 0))
        {
          KillTimer(*(HWND *)(this + 0x20),3);
        }
      }
    }
  }
LAB_100a39fe:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

