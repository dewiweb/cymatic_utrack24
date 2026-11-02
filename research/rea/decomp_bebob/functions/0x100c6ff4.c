// rea decompile_all
// name: CMultiPaneFrameWnd::AddRecentPane
// address: 0x100c6ff4
// body: available
// range: 0x100c6ff4-0x100c716e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMultiPaneFrameWnd::AddRecentPane(class CDockablePane *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMultiPaneFrameWnd::AddRecentPane(CMultiPaneFrameWnd *this,CDockablePane *param_1)

{
  CDockablePane *this_00;
  CPaneContainer *pCVar1;
  CWnd *pCVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  this_00 = param_1;
  pCVar1 = CRecentDockSiteInfo::GetRecentPaneContainer((CRecentDockSiteInfo *)(param_1 + 0x1d4),0);
  param_1 = (CDockablePane *)
            CRecentDockSiteInfo::GetRecentTabContainer((CRecentDockSiteInfo *)(this_00 + 0x1d4),0);
  if (pCVar1 == (CPaneContainer *)0x0) {
    if (param_1 == (CDockablePane *)0x0) {
      return 0;
    }
    CWnd::SetParent((CWnd *)this_00,(CWnd *)this);
    CPaneFrameWnd::AddRemovePaneFromGlobalList((CBasePane *)this_00,1);
    iVar3 = CRecentDockSiteInfo::IsRecentLeftPane((CRecentDockSiteInfo *)(this_00 + 0x1d4),0);
    if (iVar3 == 0) {
      piVar5 = *(int **)(param_1 + 8);
    }
    else {
      piVar5 = *(int **)(param_1 + 4);
    }
    if (piVar5 == (int *)0x0) {
      uVar4 = (**(code **)(*(int *)(this + 0x180) + 0x20))(this_00,param_1);
      (**(code **)(*(int *)this + 0x1e4))(uVar4,1);
    }
    else {
      param_1 = (CDockablePane *)0x0;
      (**(code **)(*(int *)this_00 + 0x34c))(piVar5,2,1,&param_1);
      (**(code **)(*piVar5 + 0x220))(1,0,1);
      (**(code **)(*(int *)this + 0x1c8))();
    }
  }
  else {
    CWnd::SetParent((CWnd *)this_00,(CWnd *)this);
    CPaneFrameWnd::AddRemovePaneFromGlobalList((CBasePane *)this_00,1);
    param_1 = (CDockablePane *)(**(code **)(*(int *)(this + 0x180) + 0x20))(this_00,pCVar1);
    pCVar2 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 200));
    if ((param_1 != (CDockablePane *)0x0) && (pCVar2 == (CWnd *)0x0)) {
      *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 0x20);
    }
    iVar3 = (**(code **)(*(int *)(this + 0x180) + 0x54))();
    if ((iVar3 == 1) && (this_00 == param_1)) {
      CWnd::MoveWindow((CWnd *)this,*(int *)(this + 0xcc),*(int *)(this + 0xd0),
                       *(int *)(this + 0xd4) - *(int *)(this + 0xcc),
                       *(int *)(this + 0xd8) - *(int *)(this + 0xd0),1);
    }
    if (param_1 != (CDockablePane *)0x0) {
      (**(code **)(*(int *)this + 0x1e4))(param_1,1);
    }
  }
  (**(code **)(*(int *)this + 0x1f0))();
  return 1;
}

