// rea decompile_all
// name: FUN_10003930
// address: 0x10003930
// body: available
// range: 0x10003930-0x100039cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000397a to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1000399c to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __thiscall FUN_10003930(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  void *_Dst;
  void *local_8;
  
  uVar2 = param_1;
  local_8 = this;
  piVar3 = FUN_100035e0(this,param_1,(uint *)&local_8,&param_1);
  if (piVar3 == (int *)0x0) {
    if (*(int *)((int)this + 4) == 0) {
      uVar1 = *(uint *)((int)this + 8);
      _Dst = (void *)FUN_100085c4(-(uint)((int)((ulonglong)uVar1 * 4 >> 0x20) != 0) |
                                  (uint)((ulonglong)uVar1 * 4));
      *(void **)((int)this + 4) = _Dst;
      if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      _memset(_Dst,0,uVar1 * 4);
      *(uint *)((int)this + 8) = uVar1;
      if (*(int *)((int)this + 4) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
    }
    piVar3 = (int *)FUN_10003880(this,uVar2);
    piVar3[9] = param_1;
    piVar3[8] = *(int *)(*(int *)((int)this + 4) + (int)local_8 * 4);
    *(int **)(*(int *)((int)this + 4) + (int)local_8 * 4) = piVar3;
  }
  return piVar3 + 1;
}

