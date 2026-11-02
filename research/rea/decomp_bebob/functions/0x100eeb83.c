// rea decompile_all
// name: CMFCTasksPane::OnMouseMove
// address: 0x100eeb83
// body: available
// range: 0x100eeb83-0x100eeecb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCTasksPane::OnMouseMove(unsigned int,class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCTasksPane::OnMouseMove(CMFCTasksPane *this,undefined4 param_1,LONG param_3,LONG param_4)

{
  CMFCTasksPaneTask *pCVar1;
  int iVar2;
  POINT pt;
  POINT pt_00;
  bool bVar3;
  BOOL BVar4;
  int iVar5;
  CMFCTasksPaneTask *pCVar6;
  CWnd *pCVar7;
  HWND pHVar8;
  RECT *lprc;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  CDockablePane::OnMouseMove((CDockablePane *)this,param_1,param_3,param_4);
  bVar3 = false;
  if (*(int *)(this + 0x35c) != 0) {
    lprc = (RECT *)(this + 0x40c);
    pt.y = param_4;
    pt.x = param_3;
    BVar4 = PtInRect(lprc,pt);
    if ((BVar4 == 0) || (*(int *)(this + 0x380) < 1)) {
      lprc = (RECT *)(this + 0x41c);
      pt_00.y = param_4;
      pt_00.x = param_3;
      BVar4 = PtInRect(lprc,pt_00);
      if (BVar4 != 0) {
        iVar5 = IsScrollDnAvailable(this);
        if (iVar5 != 0) {
          *(undefined4 *)(this + 0x378) = 1;
          goto LAB_100eec0e;
        }
      }
      *(undefined4 *)(this + 0x378) = 0;
    }
    else {
      *(undefined4 *)(this + 0x378) = 0xffffffff;
LAB_100eec0e:
      InvalidateRect(*(HWND *)(this + 0x20),lprc,1);
    }
    if (*(int *)(this + 0x378) != 0) {
      SetTimer(*(HWND *)(this + 0x20),5,0x50,(TIMERPROC)0x0);
      goto LAB_100eeebb;
    }
  }
  iVar5 = (**(code **)(*(int *)this + 1000))(param_3,param_4);
  pCVar6 = TaskHitTest(this,param_3,param_4);
  pCVar1 = *(CMFCTasksPaneTask **)(this + 0x444);
  if ((pCVar1 == pCVar6) && (*(int *)(this + 0x518) == iVar5)) goto LAB_100eeebb;
  if (pCVar6 == (CMFCTasksPaneTask *)0x0) {
    if (iVar5 != 0) {
LAB_100eed46:
      iVar2 = *(int *)(this + 0x518);
      if (iVar2 == 0) {
        pHVar8 = GetCapture();
        pCVar7 = CWnd::FromHandle(pHVar8);
        if (pCVar7 != (CWnd *)0x0) goto LAB_100eeebb;
        pHVar8 = SetCapture(*(HWND *)(this + 0x20));
        CWnd::FromHandle(pHVar8);
      }
      else {
        local_18.left = *(LONG *)(iVar2 + 0x34);
        local_18.top = *(LONG *)(iVar2 + 0x38);
        local_18.right = *(LONG *)(iVar2 + 0x3c);
        local_18.bottom = *(LONG *)(iVar2 + 0x40);
        *(undefined4 *)(this + 0x518) = 0;
        RedrawWindow(*(HWND *)(this + 0x20),&local_18,(HRGN)0x0,5);
      }
      iVar2 = *(int *)(this + 0x444);
      if (iVar2 != 0) {
        local_18.left = *(LONG *)(iVar2 + 0xc);
        local_18.top = *(LONG *)(iVar2 + 0x10);
        local_18.right = *(LONG *)(iVar2 + 0x14);
        local_18.bottom = *(LONG *)(iVar2 + 0x18);
        *(undefined4 *)(this + 0x444) = 0;
        RedrawWindow(*(HWND *)(this + 0x20),&local_18,(HRGN)0x0,5);
      }
      *(int *)(this + 0x518) = iVar5;
      RedrawWindow(*(HWND *)(this + 0x20),(RECT *)(iVar5 + 0x34),(HRGN)0x0,5);
      goto LAB_100eeeb2;
    }
    iVar5 = *(int *)(this + 0x518);
    if (iVar5 != 0) {
      local_18.left = *(LONG *)(iVar5 + 0x34);
      local_18.top = *(LONG *)(iVar5 + 0x38);
      local_18.right = *(LONG *)(iVar5 + 0x3c);
      local_18.bottom = *(LONG *)(iVar5 + 0x40);
      *(undefined4 *)(this + 0x518) = 0;
      if (*(int *)(this + 0x51c) == 0) {
        ReleaseCapture();
      }
      RedrawWindow(*(HWND *)(this + 0x20),&local_18,(HRGN)0x0,5);
      bVar3 = true;
    }
    iVar5 = *(int *)(this + 0x444);
    if (iVar5 != 0) {
      local_18.left = *(LONG *)(iVar5 + 0xc);
      local_18.top = *(LONG *)(iVar5 + 0x10);
      local_18.right = *(LONG *)(iVar5 + 0x14);
      local_18.bottom = *(LONG *)(iVar5 + 0x18);
      *(undefined4 *)(this + 0x444) = 0;
      if (*(int *)(this + 0x448) == 0) {
        ReleaseCapture();
      }
      RedrawWindow(*(HWND *)(this + 0x20),&local_18,(HRGN)0x0,0x105);
      bVar3 = true;
    }
    pCVar7 = CWnd::GetOwner((CWnd *)this);
    SendMessageW(*(HWND *)(pCVar7 + 0x20),0x362,0xe001,0);
    if (!bVar3) goto LAB_100eeebb;
    pHVar8 = *(HWND *)(this + 0x20);
  }
  else {
    if (iVar5 != 0) goto LAB_100eed46;
    if (*(int *)(pCVar6 + 0x38) == 0) {
      pCVar7 = CWnd::GetOwner((CWnd *)this);
      SendMessageW(*(HWND *)(pCVar7 + 0x20),0x362,0xe001,0);
      goto LAB_100eeebb;
    }
    if (pCVar1 == (CMFCTasksPaneTask *)0x0) {
      pHVar8 = GetCapture();
      pCVar7 = CWnd::FromHandle(pHVar8);
      if (pCVar7 != (CWnd *)0x0) goto LAB_100eeebb;
      pHVar8 = SetCapture(*(HWND *)(this + 0x20));
      CWnd::FromHandle(pHVar8);
    }
    else {
      local_18.left = *(LONG *)(pCVar1 + 0xc);
      local_18.top = *(LONG *)(pCVar1 + 0x10);
      local_18.right = *(LONG *)(pCVar1 + 0x14);
      local_18.bottom = *(LONG *)(pCVar1 + 0x18);
      *(undefined4 *)(this + 0x444) = 0;
      RedrawWindow(*(HWND *)(this + 0x20),&local_18,(HRGN)0x0,5);
    }
    iVar5 = *(int *)(this + 0x518);
    if (iVar5 != 0) {
      local_18.left = *(LONG *)(iVar5 + 0x34);
      local_18.top = *(LONG *)(iVar5 + 0x38);
      local_18.right = *(LONG *)(iVar5 + 0x3c);
      local_18.bottom = *(LONG *)(iVar5 + 0x40);
      *(undefined4 *)(this + 0x518) = 0;
      RedrawWindow(*(HWND *)(this + 0x20),&local_18,(HRGN)0x0,5);
    }
    *(CMFCTasksPaneTask **)(this + 0x444) = pCVar6;
    RedrawWindow(*(HWND *)(this + 0x20),(RECT *)(pCVar6 + 0xc),(HRGN)0x0,5);
    if (*(int *)(pCVar6 + 0x24) != 0) {
      (**(code **)(*(int *)this + 0x3c0))(*(int *)(pCVar6 + 0x24));
    }
LAB_100eeeb2:
    pHVar8 = *(HWND *)(this + 0x20);
  }
  UpdateWindow(pHVar8);
LAB_100eeebb:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

