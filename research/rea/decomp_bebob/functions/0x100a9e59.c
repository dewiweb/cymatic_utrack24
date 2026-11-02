// rea decompile_all
// name: FUN_100a9e59
// address: 0x100a9e59
// body: available
// range: 0x100a9e59-0x100aa04b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100aa047 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

CMFCPopupMenuBar * __thiscall FUN_100a9e59(void *this,int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_1;
  CMFCPopupMenuBar::CMFCPopupMenuBar(this);
  *(undefined ***)this = CMFCColorBar::vftable;
  *(undefined4 *)((int)this + 0xd58) = *(undefined4 *)(param_1 + 0xd58);
  *(undefined4 *)((int)this + 0xd5c) = *(undefined4 *)(param_1 + 0xd5c);
  *(undefined4 *)((int)this + 0xd60) = *(undefined4 *)(param_1 + 0xd60);
  *(undefined4 *)((int)this + 0xd78) = *(undefined4 *)(param_1 + 0xd78);
  *(undefined4 *)((int)this + 0xd80) = 1;
  *(undefined4 *)((int)this + 0xd8c) = param_2;
  *(undefined ***)((int)this + 0xd90) = CArray<unsigned_long,unsigned_long>::vftable;
  *(undefined4 *)((int)this + 0xd94) = 0;
  *(undefined4 *)((int)this + 0xda0) = 0;
  *(undefined4 *)((int)this + 0xd9c) = 0;
  *(undefined4 *)((int)this + 0xd98) = 0;
  CList<unsigned_long,unsigned_long>::CList<unsigned_long,unsigned_long>
            ((CList<unsigned_long,unsigned_long> *)((int)this + 0xda4),10);
  *(undefined4 *)((int)this + 0xdc0) = 0;
  *(undefined4 *)((int)this + 0xdc4) = 0;
  *(undefined4 *)((int)this + 0xdcc) = 0;
  *(undefined ***)((int)this + 0xdc8) = CPalette::vftable;
  *(undefined4 *)((int)this + 0xdd0) = *(undefined4 *)(param_1 + 0xdd0);
  *(undefined4 *)((int)this + 0xdd4) = *(undefined4 *)(param_1 + 0xdd4);
  piVar2 = FUN_10005e30((int *)(*(int *)(param_1 + 0xdd8) + -0x10));
  *(int **)((int)this + 0xdd8) = piVar2 + 4;
  piVar2 = FUN_10005e30((int *)(*(int *)(param_1 + 0xddc) + -0x10));
  *(int **)((int)this + 0xddc) = piVar2 + 4;
  piVar2 = FUN_10005e30((int *)(*(int *)(param_1 + 0xde0) + -0x10));
  *(int **)((int)this + 0xde0) = piVar2 + 4;
  FUN_10005790((void *)((int)this + 0xd90),*(int *)(param_1 + 0xd98),-1);
  param_1 = 0;
  if (0 < *(int *)(iVar1 + 0xd98)) {
    do {
      if (((param_1 < 0) || (*(int *)(iVar1 + 0xd98) <= param_1)) ||
         (*(int *)((int)this + 0xd98) <= param_1)) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      *(undefined4 *)(*(int *)((int)this + 0xd94) + param_1 * 4) =
           *(undefined4 *)(*(int *)(iVar1 + 0xd94) + param_1 * 4);
      param_1 = param_1 + 1;
    } while (param_1 < *(int *)(iVar1 + 0xd98));
  }
  CList<HWND__*,HWND__*>::AddTail
            ((CList<HWND__*,HWND__*> *)((int)this + 0xda4),
             (CList<struct_HWND__*,struct_HWND__*> *)(iVar1 + 0xda4));
  *(undefined4 *)((int)this + 0xb04) = 1;
  *(undefined4 *)((int)this + 0xd7c) = 1;
  *(undefined4 *)((int)this + 0xd84) = 0;
  *(undefined4 *)((int)this + 0xde4) = 0;
  *(undefined4 *)((int)this + 0xdec) = 0;
  *(undefined4 *)((int)this + 0xde8) = 0;
  *(undefined4 *)((int)this + 0xd68) = 0;
  *(undefined4 *)((int)this + 0xd64) = 0;
  *(undefined4 *)((int)this + 0xd88) = 0;
  *(undefined4 *)((int)this + 0xd70) = 4;
  *(undefined4 *)((int)this + 0xd74) = 4;
  return this;
}

