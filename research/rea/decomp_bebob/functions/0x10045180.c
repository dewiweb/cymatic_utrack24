// rea decompile_all
// name: CVSListBox::OnEndLabelEdit
// address: 0x10045180
// body: available
// range: 0x10045180-0x100451c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004518f to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CVSListBox::OnEndLabelEdit(struct tagNMHDR *,long *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CVSListBox::OnEndLabelEdit(CVSListBox *this,tagNMHDR *param_1,long *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((param_1 != (tagNMHDR *)0x0) && (param_1 != (tagNMHDR *)0xfffffff4)) {
    (**(code **)(*(int *)this + 0x198))(*(undefined4 *)(param_1 + 0x20));
    iVar2 = *(int *)(this + 0x7c);
    while( true ) {
      if (iVar2 == 0) {
        *param_2 = 0;
        return;
      }
      puVar1 = (undefined4 *)(iVar2 + 8);
      iVar2 = *(int *)(iVar2 + 4);
      if ((CWnd *)*puVar1 == (CWnd *)0x0) break;
      CWnd::EnableWindow((CWnd *)*puVar1,1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

