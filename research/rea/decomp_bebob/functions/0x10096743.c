// rea decompile_all
// name: FUN_10096743
// address: 0x10096743
// body: available
// range: 0x10096743-0x10096841 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1009683d to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __thiscall FUN_10096743(void *this,int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  WPARAM WVar4;
  undefined4 *puVar5;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x1009674f;
  puVar5 = *(undefined4 **)((int)this + 0xec);
  do {
    if (puVar5 == (undefined4 *)0x0) {
      Lookup((void *)((int)this + 0xcc),*(wchar_t **)((int)this + 0x13c),local_14);
      WVar4 = SendMessageW(*(HWND *)(param_1 + 0x20),0x180,0,*(LPARAM *)((int)this + 0x13c));
      SendMessageW(*(HWND *)(param_1 + 0x20),0x19a,WVar4,local_14[0]);
      return;
    }
    if (puVar5 == (undefined4 *)0x0) {
LAB_1009683d:
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    piVar2 = puVar5 + 2;
    puVar5 = (undefined4 *)*puVar5;
    piVar2 = FUN_10005e30((int *)(*piVar2 + -0x10));
    local_8 = 0;
    Lookup((void *)((int)this + 0xcc),(wchar_t *)(piVar2 + 4),local_14);
    if (param_2 == 0) {
      puVar3 = *(undefined4 **)(local_14[0] + 4);
      do {
        if (puVar3 == (undefined4 *)0x0) goto LAB_100967e7;
        if (puVar3 == (undefined4 *)0x0) goto LAB_1009683d;
        piVar1 = puVar3 + 2;
        puVar3 = (undefined4 *)*puVar3;
      } while ((*(int *)(*piVar1 + 0x20) == 0) || (*(int *)(*piVar1 + 0x20) == -1));
    }
    WVar4 = SendMessageW(*(HWND *)(param_1 + 0x20),0x180,0,(LPARAM)(piVar2 + 4));
    SendMessageW(*(HWND *)(param_1 + 0x20),0x19a,WVar4,local_14[0]);
LAB_100967e7:
    local_8 = 0xffffffff;
    FUN_10001030(piVar2);
  } while( true );
}

