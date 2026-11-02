// rea decompile_all
// name: CDockSite::OnRemoveRow
// address: 0x10090994
// body: available
// range: 0x10090994-0x100909df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100909a0 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CDockSite::OnRemoveRow(struct __POSITION *,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CDockSite::OnRemoveRow(CDockSite *this,__POSITION *param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_1 == (__POSITION *)0x0) {
LAB_100909a0:
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  puVar4 = *(undefined4 **)param_1;
  piVar2 = *(int **)(param_1 + 8);
  iVar3 = (**(code **)(*piVar2 + 0x58))();
  if ((iVar3 != 0) || (param_2 != 0)) {
    iVar3 = piVar2[3];
    while (puVar4 != (undefined4 *)0x0) {
      if (puVar4 == (undefined4 *)0x0) goto LAB_100909a0;
      puVar1 = puVar4 + 2;
      puVar4 = (undefined4 *)*puVar4;
      (**(code **)(*(int *)*puVar1 + 0x38))(-iVar3);
    }
  }
  return;
}

