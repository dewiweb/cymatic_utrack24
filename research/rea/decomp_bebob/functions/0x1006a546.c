// rea decompile_all
// name: CFrameWnd::SetHelpCapture
// address: 0x1006a546
// body: available
// range: 0x1006a546-0x1006a660 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: struct HWND__ * __thiscall CFrameWnd::SetHelpCapture(struct tagPOINT,int *)
   
   Library: Visual Studio 2010 Release */

HWND__ * __thiscall CFrameWnd::SetHelpCapture(CFrameWnd *this,tagPOINT param_1,int *param_2)

{
  HWND pHVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  DWORD DVar6;
  int iVar7;
  DWORD DVar8;
  HCURSOR hCursor;
  int local_14;
  
  DVar8 = 0;
  if (*(int *)(this + 0x88) == 0) {
    return (HWND__ *)0x0;
  }
  pHVar1 = GetCapture();
  pHVar2 = WindowFromPoint(param_1);
  pCVar3 = CWnd::FromHandle(pHVar2);
  if (pCVar3 == (CWnd *)0x0) {
    pHVar2 = (HWND)0x0;
  }
  else {
    pHVar2 = *(HWND *)(pCVar3 + 0x20);
  }
  pCVar3 = CWnd::GetTopLevelParent(pCVar3);
  pHVar4 = GetActiveWindow();
  pCVar5 = CWnd::FromHandle(pHVar4);
  pCVar5 = CWnd::GetTopLevelParent(pCVar5);
  local_14 = 0;
  DVar6 = GetCurrentThreadId();
  if (pHVar2 != (HWND)0x0) {
    DVar8 = GetWindowThreadProcessId(pHVar2,(LPDWORD)0x0);
  }
  if ((pCVar5 == (CWnd *)0x0) || (pHVar4 = GetDesktopWindow(), pHVar2 == pHVar4)) {
    hCursor = DAT_10164b60;
    if (pHVar1 == *(HWND *)(this + 0x20)) {
      ReleaseCapture();
      hCursor = DAT_10164b60;
    }
LAB_1006a646:
    SetCursor(hCursor);
    goto LAB_1006a64c;
  }
  if (pHVar2 == (HWND)0x0) {
LAB_1006a615:
    if (DVar6 != DVar8) goto LAB_1006a61a;
  }
  else {
    if (DVar6 == DVar8) {
      iVar7 = AfxIsDescendant(*(HWND__ **)(this + 0x20),pHVar2);
      if (iVar7 != 0) {
        local_14 = 1;
        if (pCVar5 != pCVar3) {
          pHVar2 = (HWND__ *)0x0;
          goto LAB_1006a64c;
        }
        hCursor = DAT_10164b64;
        if (pHVar1 != *(HWND *)(this + 0x20)) {
          SetCapture(*(HWND *)(this + 0x20));
          hCursor = DAT_10164b64;
        }
        goto LAB_1006a646;
      }
      goto LAB_1006a615;
    }
LAB_1006a61a:
    pHVar2 = (HWND)0x0;
  }
  if (pHVar1 == *(HWND *)(this + 0x20)) {
    ReleaseCapture();
  }
LAB_1006a64c:
  if (param_2 != (int *)0x0) {
    *param_2 = local_14;
  }
  return pHVar2;
}

