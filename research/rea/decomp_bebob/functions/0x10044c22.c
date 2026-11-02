// rea decompile_all
// name: CVSListBoxBase::OnCommand
// address: 0x10044c22
// body: available
// range: 0x10044c22-0x10044c8a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10044c5b to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CVSListBoxBase::OnCommand(unsigned int,long)
   
   Library: Visual Studio 2010 Release */

int __thiscall CVSListBoxBase::OnCommand(CVSListBoxBase *this,uint param_1,long param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  HWND__ *pHVar3;
  CWnd *this_00;
  int iVar4;
  
  puVar2 = *(undefined4 **)(this + 0x78);
  iVar4 = 0;
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      iVar4 = CWnd::OnCommand((CWnd *)this,param_1,param_2);
      return iVar4;
    }
    piVar1 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
    if (*piVar1 == 0) break;
    if (*(int *)(*piVar1 + 0x20) == param_2) {
      pHVar3 = (HWND__ *)(**(code **)(*(int *)this + 0x1c0))();
      this_00 = CWnd::FromHandle(pHVar3);
      if (this_00 != (CWnd *)0x0) {
        CWnd::SetFocus(this_00);
      }
      (**(code **)(*(int *)this + 400))(iVar4);
      return 1;
    }
    iVar4 = iVar4 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

