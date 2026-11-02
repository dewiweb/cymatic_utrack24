// rea decompile_all
// name: FUN_100e8de2
// address: 0x100e8de2
// body: available
// range: 0x100e8de2-0x100e8e65 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100e8e61 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_100e8de2(void *this,int param_1)

{
  LRESULT LVar1;
  int iVar2;
  int iVar3;
  
  if (-1 < param_1) {
    LVar1 = SendMessageW(*(HWND *)((int)this + 0x20),0x18b,0,0);
    CArray<int,int>::SetSize((CArray<int,int> *)((int)this + 0x7c),LVar1,-1);
    iVar2 = LVar1 + -1;
    if (param_1 < iVar2) {
      iVar3 = LVar1 + -2;
      do {
        if ((((iVar3 < 0) || (*(int *)((int)this + 0x84) <= iVar3)) || (iVar2 < 0)) ||
           (*(int *)((int)this + 0x84) <= iVar2)) goto LAB_100e8e61;
        *(undefined4 *)(*(int *)((int)this + 0x80) + iVar2 * 4) =
             *(undefined4 *)(*(int *)((int)this + 0x80) + -4 + iVar2 * 4);
        iVar2 = iVar2 + -1;
        iVar3 = iVar3 + -1;
      } while (param_1 < iVar2);
    }
    if (*(int *)((int)this + 0x84) <= param_1) {
LAB_100e8e61:
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    *(undefined4 *)(*(int *)((int)this + 0x80) + param_1 * 4) = 1;
  }
  return;
}

