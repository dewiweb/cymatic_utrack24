// rea decompile_all
// name: CMDIClientAreaWnd::EnableMDITabs
// address: 0x1006646d
// body: available
// range: 0x1006646d-0x1006655a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMDIClientAreaWnd::EnableMDITabs(int,class CMDITabInfo const &)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMDIClientAreaWnd::EnableMDITabs(CMDIClientAreaWnd *this,int param_1,CMDITabInfo *param_2)

{
  CWnd *this_00;
  CFrameWnd *pCVar1;
  int iVar2;
  CMDIClientAreaWnd *pCVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (*(int *)(this + 0x2908) != 0) {
    EnableMDITabbedGroups(this,0,param_2);
  }
  *(int *)(this + 0x287c) = param_1;
  *(int *)(this + 0x2878) = param_1;
  pCVar3 = this + 0x28a4;
  for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pCVar3 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    pCVar3 = pCVar3 + 4;
  }
  this_00 = (CWnd *)(this + 0x74);
  ApplyParams(this,(CMFCTabCtrl *)this_00);
  if (param_1 == 0) {
    iVar2 = IsKeepClientEdge(this);
    if (iVar2 != 0) goto LAB_100664ea;
    uVar5 = 0x200;
    uVar4 = 0;
  }
  else {
    UpdateTabs(this,0);
    iVar2 = IsKeepClientEdge(this);
    if (iVar2 != 0) goto LAB_100664ea;
    uVar5 = 0;
    uVar4 = 0x200;
  }
  CWnd::ModifyStyleEx((CWnd *)this,uVar4,uVar5,0);
LAB_100664ea:
  if ((this_00 != (CWnd *)0x0) && (*(int *)(this + 0x94) != 0)) {
    CWnd::ShowWindow(this_00,5);
  }
  BringWindowToTop(*(HWND *)(this + 0x20));
  if (*(int *)(this + 0x20) != 0) {
    pCVar1 = CWnd::GetParentFrame((CWnd *)this);
    if (pCVar1 != (CFrameWnd *)0x0) {
      pCVar1 = CWnd::GetParentFrame((CWnd *)this);
      (**(code **)(*(int *)pCVar1 + 0x174))(1);
      if ((this_00 != (CWnd *)0x0) && (*(int *)(this + 0x94) != 0)) {
        RedrawWindow(*(HWND *)(this + 0x94),(RECT *)0x0,(HRGN)0x0,0x585);
      }
      RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x585);
    }
  }
  return;
}

