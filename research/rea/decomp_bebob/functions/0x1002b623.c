// rea decompile_all
// name: CMFCToolBar::OnWindowPosChanged
// address: 0x1002b623
// body: available
// range: 0x1002b623-0x1002b6a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCToolBar::OnWindowPosChanged(struct tagWINDOWPOS *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCToolBar::OnWindowPosChanged(CMFCToolBar *this,tagWINDOWPOS *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  HWND pHVar3;
  CWnd *this_00;
  int iVar4;
  
  if ((*(int *)(this + 0xbc0) < *(int *)(param_1 + 0x10)) ||
     (*(int *)(this + 0xbc4) < *(int *)(param_1 + 0x14))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(int *)(this + 0xbc0) = *(int *)(param_1 + 0x10);
  *(undefined4 *)(this + 0xbc4) = uVar1;
  CWnd::Default((CWnd *)this);
  pHVar3 = GetParent(*(HWND *)(this + 0x20));
  this_00 = CWnd::FromHandle(pHVar3);
  if (!bVar2) {
    if (this_00 == (CWnd *)0x0) goto LAB_1002b69b;
    iVar4 = CObject::IsKindOf((CObject *)this_00,(CRuntimeClass *)&PTR_s_CMFCReBar_1012e7f8);
    if (iVar4 == 0) goto LAB_1002b69b;
  }
  RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x585);
LAB_1002b69b:
  RedrawCustomizeButton(this);
  return;
}

