// rea decompile_all
// name: FUN_100932c2
// address: 0x100932c2
// body: available
// range: 0x100932c2-0x1009337d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10093379 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100932c2(CWnd *param_1)

{
  int *piVar1;
  CToolTipCtrl *this;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe8) = 1;
  iVar2 = *(int *)(param_1 + 0x9c);
  while( true ) {
    if (iVar2 < 1) {
      CUIntArray::SetSize((CUIntArray *)(param_1 + 0x88),0,-1);
      (**(code **)(*(int *)param_1 + 0x268))();
      (**(code **)(*(int *)param_1 + 0x180))();
      (**(code **)(*(int *)param_1 + 0x26c))(0xffffffff);
      return;
    }
    iVar2 = *(int *)(param_1 + 0x9c) + -1;
    if ((iVar2 < 0) || (*(int *)(param_1 + 0x90) <= iVar2)) break;
    piVar1 = *(int **)(*(int *)(param_1 + 0x8c) + iVar2 * 4);
    this = *(CToolTipCtrl **)(param_1 + 0xd8);
    *(int *)(param_1 + 0x9c) = iVar2;
    if ((this != (CToolTipCtrl *)0x0) && (*(int *)(this + 0x20) != 0)) {
      CToolTipCtrl::DelTool(this,param_1,piVar1[10]);
    }
    if (*(int *)(param_1 + 0xfc) != 0) {
      (**(code **)(*(int *)piVar1[8] + 0x60))();
    }
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(1);
    }
    iVar2 = *(int *)(param_1 + 0x9c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

