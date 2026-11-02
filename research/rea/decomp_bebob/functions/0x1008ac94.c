// rea decompile_all
// name: CMFCToolBarButtonCustomizeDialog::EnableControls
// address: 0x1008ac94
// body: available
// range: 0x1008ac94-0x1008aded inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarButtonCustomizeDialog::EnableControls(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCToolBarButtonCustomizeDialog::EnableControls(CMFCToolBarButtonCustomizeDialog *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(*(int *)(this + 0x47c) + 0x3c);
  iVar3 = 0;
  if ((*(int *)(this + 0x490) == 0) ||
     (((*(int *)(this + 0x494) != 0 && (*(int *)(this + 0x4cc) != 0)) || (DAT_10166e68 != 0)))) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  CWnd::EnableWindow((CWnd *)(this + 0x1f0),iVar2);
  if (((*(int *)(this + 0x48c) == 0) || (*(int *)(this + 0x480) == 0)) ||
     ((*(int *)(this + 0x498) == 0 || (iVar1 != 0)))) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  CWnd::EnableWindow((CWnd *)(this + 0x2d8),iVar2);
  if (((*(int *)(this + 0x48c) == 0) || (*(int *)(this + 0x480) == 0)) ||
     ((*(int *)(this + 0x498) == 0 ||
      ((*(int *)(*(int *)(this + 0x480) + 0x20) != 0 || (iVar1 != 0)))))) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  CWnd::EnableWindow((CWnd *)(this + 0x264),iVar2);
  if (((((*(int *)(this + 0x48c) == 0) || (*(int *)(this + 0x480) == 0)) ||
       (*(int *)(this + 0x488) < 0)) ||
      ((*(int *)(this + 0x498) == 0 || (*(int *)(*(int *)(this + 0x480) + 0x20) != 0)))) ||
     (iVar1 != 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  CWnd::EnableWindow((CWnd *)(this + 0x400),iVar2);
  if (((*(int *)(this + 0x48c) == 0) || (*(int *)(this + 0x480) == 0)) || (iVar1 != 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  CWnd::EnableWindow((CWnd *)(this + 0x108),iVar2);
  if (*(int *)(this + 0x4cc) == 0) {
    if (*(int *)(this + 0x48c) == 0) goto LAB_1008adcc;
    iVar2 = CMFCToolBar::GetDefaultImage(*(uint *)(*(int *)(this + 0x47c) + 0x20));
    if ((iVar2 < 0) || (iVar1 != 0)) goto LAB_1008adcc;
  }
  iVar3 = 1;
LAB_1008adcc:
  CWnd::EnableWindow((CWnd *)(this + 0x94),iVar3);
  InvalidateRect(*(HWND *)(this + 0x20),(RECT *)(this + 0x4b8),1);
  return;
}

