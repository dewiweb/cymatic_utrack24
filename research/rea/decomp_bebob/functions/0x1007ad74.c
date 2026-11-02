// rea decompile_all
// name: CDockablePane::OnUpdateCmdUI
// address: 0x1007ad74
// body: available
// range: 0x1007ad74-0x1007ade7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CDockablePane::OnUpdateCmdUI(class CFrameWnd *,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CDockablePane::OnUpdateCmdUI(CDockablePane *this,CFrameWnd *param_1,int param_2)

{
  int iVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  BOOL BVar4;
  int iVar5;
  
  CWnd::UpdateDialogControls((CWnd *)this,(CCmdTarget *)param_1,param_2);
  pHVar2 = GetFocus();
  pCVar3 = CWnd::FromHandle(pHVar2);
  iVar1 = *(int *)(this + 0x2c8);
  if ((pCVar3 != (CWnd *)0x0) && (*(HWND *)(pCVar3 + 0x20) != (HWND)0x0)) {
    BVar4 = IsChild(*(HWND *)(this + 0x20),*(HWND *)(pCVar3 + 0x20));
    if ((BVar4 != 0) || (*(int *)(pCVar3 + 0x20) == *(int *)(this + 0x20))) {
      iVar5 = 1;
      goto LAB_1007adc5;
    }
  }
  iVar5 = 0;
LAB_1007adc5:
  *(int *)(this + 0x2c8) = iVar5;
  if (iVar5 != iVar1) {
    SendMessageW(*(HWND *)(this + 0x20),0x85,0,0);
  }
  return;
}

