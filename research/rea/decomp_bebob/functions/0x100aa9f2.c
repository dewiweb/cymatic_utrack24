// rea decompile_all
// name: FUN_100aa9f2
// address: 0x100aa9f2
// body: available
// range: 0x100aa9f2-0x100aabdd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100aabd9 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

CMFCPopupMenuBar * __thiscall
FUN_100aa9f2(void *this,int param_1,undefined4 param_2,undefined **param_3,undefined **param_4,
            undefined **param_5,CList<struct_HWND__*,struct_HWND__*> *param_6,int param_7,
            undefined4 param_8,undefined4 param_9,undefined4 param_10,undefined4 param_11,
            undefined4 param_12)

{
  int iVar1;
  
  CMFCPopupMenuBar::CMFCPopupMenuBar(this);
  *(int *)((int)this + 0xd58) = param_7;
  *(undefined4 *)((int)this + 0xd5c) = param_8;
  *(undefined4 *)((int)this + 0xd60) = param_9;
  *(undefined ***)this = CMFCColorBar::vftable;
  *(undefined4 *)((int)this + 0xd78) = 0;
  *(undefined4 *)((int)this + 0xd80) = 0;
  *(undefined4 *)((int)this + 0xd8c) = param_11;
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
  *(undefined4 *)((int)this + 0xdd0) = param_2;
  *(undefined4 *)((int)this + 0xdd4) = param_10;
  if (param_3 == (undefined **)0x0) {
    param_3 = &PTR_1011d390;
  }
  FUN_10006ce0((void *)((int)this + 0xdd8),(short *)param_3);
  if (param_4 == (undefined **)0x0) {
    param_4 = &PTR_1011d390;
  }
  FUN_10006ce0((void *)((int)this + 0xddc),(short *)param_4);
  if (param_5 == (undefined **)0x0) {
    param_5 = &PTR_1011d390;
  }
  FUN_10006ce0((void *)((int)this + 0xde0),(short *)param_5);
  *(undefined4 *)((int)this + 0xde4) = param_12;
  *(undefined4 *)((int)this + 0xde8) = 0;
  *(undefined4 *)((int)this + 0xdec) = 0;
  FUN_10005790((void *)((int)this + 0xd90),*(int *)(param_1 + 8),-1);
  iVar1 = *(int *)(param_1 + 8);
  param_7 = 0;
  if (0 < iVar1) {
    do {
      if (((param_7 < 0) || (iVar1 <= param_7)) || (*(int *)((int)this + 0xd98) <= param_7)) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      *(undefined4 *)(*(int *)((int)this + 0xd94) + param_7 * 4) =
           *(undefined4 *)(*(int *)(param_1 + 4) + param_7 * 4);
      iVar1 = *(int *)(param_1 + 8);
      param_7 = param_7 + 1;
    } while (param_7 < iVar1);
  }
  CList<HWND__*,HWND__*>::AddTail((CList<HWND__*,HWND__*> *)((int)this + 0xda4),param_6);
  *(undefined4 *)((int)this + 0xb04) = 1;
  *(undefined4 *)((int)this + 0xd7c) = 1;
  *(undefined4 *)((int)this + 0xd84) = 1;
  if (*(int *)((int)this + 0xde4) != 0) {
    *(uint *)((int)this + 0xd78) = (uint)(*(int *)(*(int *)((int)this + 0xde4) + 0x7a4) == 0);
  }
  *(undefined4 *)((int)this + 0xd70) = 4;
  *(undefined4 *)((int)this + 0xd74) = 4;
  *(undefined4 *)((int)this + 0xd68) = 0;
  *(undefined4 *)((int)this + 0xd64) = 0;
  *(undefined4 *)((int)this + 0xd88) = 0;
  return this;
}

