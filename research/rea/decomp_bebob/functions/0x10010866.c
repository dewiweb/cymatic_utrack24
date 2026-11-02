// rea decompile_all
// name: CWnd::CenterWindow
// address: 0x10010866
// body: available
// range: 0x10010866-0x10010a5d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CWnd::CenterWindow(class CWnd *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CWnd::CenterWindow(CWnd *this,CWnd *param_1)

{
  ulong uVar1;
  HWND pHVar2;
  uint uVar3;
  CWnd *pCVar4;
  HMONITOR pHVar5;
  int iVar6;
  HWND hWnd;
  HWND pHVar7;
  int iVar8;
  tagMONITORINFO *ptVar9;
  tagMONITORINFO local_60;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  uVar1 = GetExStyle(this);
  pHVar7 = (HWND)0x0;
  if (param_1 == (CWnd *)0x0) {
    if ((uVar1 & 0x40000000) == 0) {
      hWnd = GetWindow(*(HWND *)(this + 0x20),4);
    }
    else {
      hWnd = GetParent(*(HWND *)(this + 0x20));
    }
    if (hWnd != (HWND)0x0) {
      pHVar2 = (HWND)SendMessageW(hWnd,0x36b,0,0);
      if (pHVar2 != (HWND)0x0) {
        hWnd = pHVar2;
      }
    }
  }
  else {
    hWnd = *(HWND *)(param_1 + 0x20);
  }
  local_38.left = 0;
  local_38.top = 0;
  local_38.right = 0;
  local_38.bottom = 0;
  GetWindowRect(*(HWND *)(this + 0x20),&local_38);
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  if ((uVar1 & 0x40000000) == 0) {
    if (hWnd != (HWND)0x0) {
      uVar3 = GetWindowLongW(hWnd,-0x10);
      if (((uVar3 & 0x10000000) == 0) || ((uVar3 & 0x20000000) != 0)) {
        hWnd = (HWND)0x0;
      }
    }
    local_60.cbSize = 0x28;
    if (hWnd == (HWND)0x0) {
      pCVar4 = AfxGetMainWnd();
      if (pCVar4 != (CWnd *)0x0) {
        pHVar7 = *(HWND *)(pCVar4 + 0x20);
      }
      ptVar9 = &local_60;
      pHVar5 = MonitorFromWindow(pHVar7,1);
      GetMonitorInfoW(pHVar5,ptVar9);
      CopyRect(&local_28,&local_60.rcWork);
      CopyRect(&local_18,&local_60.rcWork);
    }
    else {
      GetWindowRect(hWnd,&local_28);
      ptVar9 = &local_60;
      pHVar5 = MonitorFromWindow(hWnd,2);
      GetMonitorInfoW(pHVar5,ptVar9);
      CopyRect(&local_18,&local_60.rcWork);
    }
  }
  else {
    pHVar7 = GetParent(*(HWND *)(this + 0x20));
    GetClientRect(pHVar7,&local_18);
    GetClientRect(hWnd,&local_28);
    ::MapWindowPoints(hWnd,pHVar7,(LPPOINT)&local_28,2);
  }
  iVar6 = (local_28.left + local_28.right) / 2 - (local_38.right - local_38.left) / 2;
  iVar8 = (local_28.top + local_28.bottom) / 2 - (local_38.bottom - local_38.top) / 2;
  if (local_18.right < (local_38.right - local_38.left) + iVar6) {
    iVar6 = (local_38.left - local_38.right) + local_18.right;
  }
  if (iVar6 < local_18.left) {
    iVar6 = local_18.left;
  }
  if (local_18.bottom < (local_38.bottom - local_38.top) + iVar8) {
    iVar8 = (local_38.top - local_38.bottom) + local_18.bottom;
  }
  if (iVar8 < local_18.top) {
    iVar8 = local_18.top;
  }
  SetWindowPos(this,(CWnd *)0x0,iVar6,iVar8,-1,-1,0x15);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

