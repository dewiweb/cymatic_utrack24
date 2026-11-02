// rea decompile_all
// name: ShowPopupMenu
// address: 0x10021409
// body: available
// range: 0x10021409-0x10021448 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: int __thiscall CFrameWndEx::ShowPopupMenu(class CMFCPopupMenu *)
    protected: int __thiscall COleDocIPFrameWndEx::ShowPopupMenu(class CMFCPopupMenu *)
    protected: int __thiscall COleIPFrameWndEx::ShowPopupMenu(class CMFCPopupMenu *)
   
   Library: Visual Studio 2010 Release */

undefined4 __thiscall ShowPopupMenu(void *this,CMFCPopupMenu *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CFrameImpl::OnShowPopupMenu((CFrameImpl *)((int)this + 0x194),param_1,this);
  uVar2 = 0;
  if (iVar1 != 0) {
    if ((param_1 == (CMFCPopupMenu *)0x0) || (*(int *)(param_1 + 0xebc) == 0)) {
      uVar2 = (**(code **)(*(int *)this + 0x1e4))(param_1);
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

