// rea decompile_all
// name: COleCntrFrameWnd::RecalcLayout
// address: 0x1006978a
// body: available
// range: 0x1006978a-0x10069824 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100697c7 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall COleCntrFrameWnd::RecalcLayout(int)
   
   Library: Visual Studio 2010 Release */

void __thiscall COleCntrFrameWnd::RecalcLayout(COleCntrFrameWnd *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(this + 0xe8) == 0) {
    *(uint *)(this + 0x10c) = *(uint *)(this + 0x10c) & 0xfffffff3;
    *(undefined4 *)(this + 0xe8) = 1;
    piVar2 = (int *)(**(code **)(**(int **)(this + 0x110) + 0x168))();
    iVar3 = FUN_1000c31d();
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    if ((piVar2 != (int *)0x0) && (iVar1 = *(int *)(this + 0x110), *(int *)(iVar3 + 0x24) == iVar1))
    {
      if (this == *(COleCntrFrameWnd **)(iVar1 + 0x130)) {
        (**(code **)(*piVar2 + 0x18c))(0,*(undefined4 *)(iVar1 + 0x128),1);
      }
      if (this == *(COleCntrFrameWnd **)(*(int *)(this + 0x110) + 0x134)) {
        (**(code **)(*piVar2 + 0x18c))(0,*(undefined4 *)(*(int *)(this + 0x110) + 300),0);
      }
    }
    *(undefined4 *)(this + 0xe8) = 0;
  }
  return;
}

