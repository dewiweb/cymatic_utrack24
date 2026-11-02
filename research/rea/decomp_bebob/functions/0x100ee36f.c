// rea decompile_all
// name: CMFCTasksPane::OnCancel
// address: 0x100ee36f
// body: available
// range: 0x100ee36f-0x100ee41d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100ee416 to 0x10014dc5 CWnd::SetFocus (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCTasksPane::OnCancel(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCTasksPane::OnCancel(CMFCTasksPane *this)

{
  int iVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  BOOL BVar4;
  CWnd *pCVar5;
  tagMSG *ptVar6;
  
  iVar1 = (**(code **)(*(int *)this + 0x3c8))();
  if (iVar1 == 0) {
    pHVar2 = GetFocus();
    pCVar3 = CWnd::FromHandle(pHVar2);
    if ((pCVar3 != (CWnd *)0x0) &&
       (BVar4 = IsChild(*(HWND *)(this + 0x20),*(HWND *)(pCVar3 + 0x20)), BVar4 != 0)) {
      while (pCVar3 != (CWnd *)this) {
        pHVar2 = GetParent(*(HWND *)(pCVar3 + 0x20));
        pCVar5 = CWnd::FromHandle(pHVar2);
        if (pCVar5 == (CWnd *)this) {
          ptVar6 = CWnd::GetCurrentMessage();
          SendMessageW(*(HWND *)(pCVar3 + 0x20),0x111,ptVar6->wParam,ptVar6->lParam);
          break;
        }
        pHVar2 = GetParent(*(HWND *)(pCVar3 + 0x20));
        pCVar3 = CWnd::FromHandle(pHVar2);
      }
    }
    pCVar3 = DAT_10168578;
    if (DAT_10168578 == (CWnd *)0x0) {
      pCVar3 = (CWnd *)CWnd::GetTopLevelFrame((CWnd *)this);
    }
    pHVar2 = (HWND)0x0;
    if (pCVar3 != (CWnd *)0x0) {
      pHVar2 = *(HWND *)(pCVar3 + 0x20);
    }
    BVar4 = IsWindow(pHVar2);
    if (BVar4 != 0) {
      CWnd::SetFocus(pCVar3);
      return;
    }
  }
  return;
}

