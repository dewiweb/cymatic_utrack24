// rea decompile_all
// name: CMFCRibbonKeyTip::Show
// address: 0x100db393
// body: available
// range: 0x100db393-0x100db5b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100db404 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: int __thiscall CMFCRibbonKeyTip::Show(int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCRibbonKeyTip::Show(CMFCRibbonKeyTip *this,int param_1)

{
  POINT pt;
  CWnd *this_00;
  BOOL BVar1;
  HMONITOR hMonitor;
  HCURSOR pHVar2;
  _AFX_THREAD_STATE *p_Var3;
  CMFCVisualManager *pCVar4;
  int iVar5;
  int dx;
  HBRUSH pHVar6;
  tagMONITORINFO *lpmi;
  HICON pHVar7;
  CClientDC local_78 [20];
  CMFCRibbonKeyTip *local_64;
  CPen *local_60;
  tagMONITORINFO local_5c;
  tagRECT local_34;
  RECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x68;
  local_8 = 0x100db39f;
  local_64 = this;
  if (((this != (CMFCRibbonKeyTip *)0x0) && (*(int *)(this + 0x20) != 0)) && (param_1 == 0)) {
    CWnd::ShowWindow((CWnd *)this,4);
    goto LAB_100db5af;
  }
  this_00 = (CWnd *)(**(code **)(**(int **)(this + 0x74) + 0x90))();
  if ((this_00 == (CWnd *)0x0) || (*(int *)(this_00 + 0x20) == 0)) goto LAB_100db5af;
  CClientDC::CClientDC(local_78,(CWnd *)0x0);
  local_8 = 0;
  local_60 = CDC::SelectObject((CDC *)local_78,(CPen *)&DAT_10166bb4);
  if (local_60 == (CPen *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  (**(code **)(**(int **)(this + 0x74) + 0x138))(&local_24,local_78,*(undefined4 *)(this + 0x88));
  CDC::SelectObject((CDC *)local_78,local_60);
  BVar1 = IsRectEmpty(&local_24);
  if (BVar1 == 0) {
    CWnd::ClientToScreen(this_00,&local_24);
    lpmi = &local_5c;
    local_34.left = 0;
    local_34.top = 0;
    local_34.right = 0;
    local_34.bottom = 0;
    local_5c.cbSize = 0x28;
    pt.y = local_24.top;
    pt.x = local_24.left;
    hMonitor = MonitorFromPoint(pt,2);
    BVar1 = GetMonitorInfoW(hMonitor,lpmi);
    if (BVar1 == 0) {
      SystemParametersInfoW(0x30,0,&local_34,0);
    }
    else {
      CopyRect(&local_34,&local_5c.rcWork);
    }
    if (local_34.right < local_24.right) {
      iVar5 = local_34.right - local_24.right;
LAB_100db4c0:
      OffsetRect(&local_24,iVar5,0);
    }
    else if (local_24.left < local_34.left) {
      iVar5 = local_34.left - local_24.left;
      goto LAB_100db4c0;
    }
    if (local_34.bottom < local_24.bottom) {
      iVar5 = local_34.bottom - local_24.bottom;
      dx = 0;
LAB_100db4e4:
      OffsetRect(&local_24,dx,iVar5);
    }
    else if (local_24.top < local_34.top) {
      dx = local_34.top - local_24.top;
      iVar5 = 0;
      goto LAB_100db4e4;
    }
    if (*(int *)(DAT_10169a0c + -0xc) == 0) {
      pHVar7 = (HICON)0x0;
      pHVar6 = (HBRUSH)0x10;
      pHVar2 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
      p_Var3 = AfxRegisterWndClass(0x800,pHVar2,pHVar6,pHVar7);
      FUN_100022b0(&DAT_10169a0c,(short *)p_Var3);
    }
    local_60 = (CPen *)0x88;
    iVar5 = (**(code **)(**(int **)(this + 0x74) + 0x38))();
    if (iVar5 != 0) {
      pCVar4 = CMFCVisualManager::GetInstance();
      iVar5 = (**(code **)(*(int *)pCVar4 + 0x2a8))();
      if (iVar5 != 0) {
        local_60 = (CPen *)0x80088;
      }
    }
    iVar5 = (**(code **)(*(int *)this + 0x58))
                      (local_60,DAT_10169a0c,&PTR_1011d390,0x80000000,&local_24,0,0,0);
    if (iVar5 != 0) {
      *(LONG *)(this + 0x78) = local_24.left;
      *(LONG *)(this + 0x7c) = local_24.top;
      *(LONG *)(this + 0x80) = local_24.right;
      *(LONG *)(this + 0x84) = local_24.bottom;
      if (((uint)local_60 & 0x80000) != 0) {
        SetLayeredWindowAttributes(*(HWND *)(local_64 + 0x20),0,0x80,2);
      }
      CWnd::ShowWindow((CWnd *)local_64,4);
      local_8 = 0xffffffff;
      CClientDC::~CClientDC(local_78);
      goto LAB_100db5af;
    }
  }
  local_8 = 0xffffffff;
  CClientDC::~CClientDC(local_78);
LAB_100db5af:
  iVar5 = FUN_100f90cf();
  return iVar5;
}

