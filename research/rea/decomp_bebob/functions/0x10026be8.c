// rea decompile_all
// name: FUN_10026be8
// address: 0x10026be8
// body: available
// range: 0x10026be8-0x10026c4e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10026c4a to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_10026be8(void *this,int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  
  *(undefined4 *)((int)this + 0xb78) = 0xffffffff;
  *(undefined4 *)((int)this + 0xb7c) = 0xffffffff;
  *(undefined4 *)((int)this + 0xb80) = 0xffffffff;
  puVar1 = *(undefined4 **)((int)this + 0xbcc);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
    if (puVar1 == (undefined4 *)0x0) break;
    piVar2 = (int *)puVar1[2];
    puVar1 = (undefined4 *)*puVar1;
    if (piVar2 == (int *)0x0) break;
    (**(code **)(*piVar2 + 0x58))();
    if ((piVar2[9] & 0x40000U) == 0) {
      (**(code **)(*piVar2 + 0x98))(param_1 == 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

