// rea decompile_all
// name: CMFCMenuBar::GetRowHeight
// address: 0x100703c1
// body: available
// range: 0x100703c1-0x10070467 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCMenuBar::GetRowHeight(void)const 
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCMenuBar::GetRowHeight(CMFCMenuBar *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(this + 0xcfc) == 0) {
    if (DAT_10160418 < 1) {
      iVar1 = DAT_101603f0 + -2;
    }
    else {
      iVar1 = DAT_10160418 + -2;
    }
  }
  else {
    iVar1 = CMFCToolBar::GetButtonSize((CMFCToolBar *)this);
    iVar1 = *(int *)(iVar1 + 4);
  }
  uVar2 = (**(code **)(*(int *)this + 400))();
  iVar3 = DAT_10166c6c;
  if ((uVar2 & 0xa000) == 0) {
    iVar3 = DAT_10166c70;
  }
  if (iVar1 < iVar3) {
    uVar2 = (**(code **)(*(int *)this + 400))();
    iVar1 = DAT_10166c70;
    if ((uVar2 & 0xa000) != 0) {
      iVar1 = DAT_10166c6c;
    }
  }
  else if (*(int *)(this + 0xcfc) == 0) {
    iVar1 = DAT_10160418;
    if (DAT_10160418 < 1) {
      iVar1 = DAT_101603f0;
    }
    iVar1 = iVar1 + -2;
  }
  else {
    iVar1 = CMFCToolBar::GetButtonSize((CMFCToolBar *)this);
    iVar1 = *(int *)(iVar1 + 4);
  }
  return iVar1;
}

