// rea decompile_all
// name: CMFCTabCtrl::OnNotify
// address: 0x10075832
// body: available
// range: 0x10075832-0x100758cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10075851 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCTabCtrl::OnNotify(unsigned int,long,long *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCTabCtrl::OnNotify(CMFCTabCtrl *this,uint param_1,long param_2,long *param_3)

{
  CWnd *pCVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = CWnd::OnNotify((CWnd *)this,param_1,param_2,param_3);
  if (param_2 != 0) {
    if (*(int *)(param_2 + 8) == -0x209) {
      pCVar1 = *(CWnd **)(this + 0xd8);
      if ((pCVar1 != (CWnd *)0x0) && (*(int *)(pCVar1 + 0x20) != 0)) {
        CWnd::SetWindowPos(pCVar1,(CWnd *)&DAT_101665c0,-1,-1,-1,-1,0x13);
      }
      pCVar1 = *(CWnd **)(this + 0xdc);
      iVar3 = 0;
      if ((pCVar1 != (CWnd *)0x0) && (*(int *)(pCVar1 + 0x20) != 0)) {
        if (pCVar1 != (CWnd *)0x0) {
          iVar3 = *(int *)(pCVar1 + 0x20);
        }
        if (*(int *)param_2 == iVar3) {
          CWnd::SetWindowPos(pCVar1,(CWnd *)&DAT_101665c0,-1,-1,-1,-1,0x13);
        }
      }
    }
    if (*(int *)(param_2 + 8) == -0x141) {
      SynchronizeScrollBar(this,(tagSCROLLINFO *)0x0);
    }
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

