// rea decompile_all
// name: CControlBar::OnTimer
// address: 0x10057c06
// body: available
// range: 0x10057c06-0x10057d78 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10057c7a to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CControlBar::OnTimer(unsigned int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CControlBar::OnTimer(CControlBar *this,uint param_1)

{
  POINT Point;
  SHORT SVar1;
  AFX_MODULE_THREAD_STATE *pAVar2;
  CWnd *this_00;
  int iVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  BOOL BVar6;
  HWND pHVar7;
  int iVar8;
  tagPOINT local_14;
  AFX_MODULE_THREAD_STATE *local_c;
  int local_8;
  
  SVar1 = GetKeyState(1);
  if (SVar1 < 0) {
    return;
  }
  pAVar2 = AfxGetModuleThreadState();
  local_14.x = 0;
  local_14.y = 0;
  local_c = pAVar2;
  GetCursorPos(&local_14);
  ScreenToClient(*(HWND *)(this + 0x20),&local_14);
  local_8 = (**(code **)(*(int *)this + 0x74))(local_14.x,local_14.y,0);
  if (local_8 < 0) {
    *(undefined4 *)(pAVar2 + 0x4c) = 0xffffffff;
  }
  else {
    this_00 = CWnd::GetTopLevelParent((CWnd *)this);
    iVar3 = CWnd::IsTopParentActive((CWnd *)this);
    if (iVar3 == 0) {
LAB_10057c8a:
      local_8 = -1;
    }
    else {
      if (this_00 == (CWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      iVar3 = CWnd::IsWindowEnabled(this_00);
      if (iVar3 == 0) goto LAB_10057c8a;
    }
    if (*(int *)(pAVar2 + 0x3c) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(pAVar2 + 0x3c) + 0x20);
    }
    pHVar4 = GetCapture();
    pCVar5 = CWnd::FromHandle(pHVar4);
    if (pCVar5 != (CWnd *)this) {
      if (pCVar5 == (CWnd *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(pCVar5 + 0x20);
      }
      if ((iVar8 != iVar3) && (pCVar5 = CWnd::GetTopLevelParent(pCVar5), pCVar5 == this_00)) {
        local_8 = -1;
      }
    }
  }
  if (-1 < local_8) {
    ClientToScreen(*(HWND *)(this + 0x20),&local_14);
    Point.y = local_14.y;
    Point.x = local_14.x;
    pHVar4 = WindowFromPoint(Point);
    if (pHVar4 == (HWND)0x0) {
LAB_10057d1f:
      local_8 = -1;
      *(undefined4 *)(local_c + 0x4c) = 0xffffffff;
    }
    else if ((pHVar4 != *(HWND *)(this + 0x20)) &&
            (BVar6 = IsChild(*(HWND *)(this + 0x20),pHVar4), BVar6 == 0)) {
      pHVar7 = (HWND)0x0;
      if (*(int *)(local_c + 0x3c) != 0) {
        pHVar7 = *(HWND *)(*(int *)(local_c + 0x3c) + 0x20);
      }
      if (pHVar7 != pHVar4) goto LAB_10057d1f;
    }
    if (-1 < local_8) goto LAB_10057d4f;
  }
  if (*(int *)(local_c + 0x4c) == -1) {
    KillTimer(*(HWND *)(this + 0x20),0xe001);
  }
  (**(code **)(*(int *)this + 0x19c))(0xffffffff);
LAB_10057d4f:
  if ((param_1 == 0xe000) && (KillTimer(*(HWND *)(this + 0x20),0xe000), -1 < local_8)) {
    (**(code **)(*(int *)this + 0x19c))(local_8);
  }
  return;
}

