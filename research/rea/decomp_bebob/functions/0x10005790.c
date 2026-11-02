// rea decompile_all
// name: FUN_10005790
// address: 0x10005790
// body: available
// range: 0x10005790-0x100058e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000579e to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10005885 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_10005790(void *this,int param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_1;
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  if (-1 < param_2) {
    *(int *)((int)this + 0x10) = param_2;
  }
  if (param_1 != 0) {
    if (*(int *)((int)this + 4) == 0) {
      if (param_1 <= *(int *)((int)this + 0x10)) {
        param_1 = *(int *)((int)this + 0x10);
      }
      pvVar2 = (void *)FUN_100085c4(param_1 * 4);
      *(void **)((int)this + 4) = pvVar2;
      _memset(pvVar2,0,param_1 * 4);
      *(int *)((int)this + 8) = iVar1;
      *(int *)((int)this + 0xc) = param_1;
      return;
    }
    iVar1 = *(int *)((int)this + 0xc);
    if (iVar1 < param_1) {
      iVar3 = *(int *)((int)this + 0x10);
      if (iVar3 == 0) {
        iVar3 = (int)(*(int *)((int)this + 8) + (*(int *)((int)this + 8) >> 0x1f & 7U)) >> 3;
        if (iVar3 < 4) {
          iVar3 = 4;
        }
        else if (0x400 < iVar3) {
          iVar3 = 0x400;
        }
      }
      iVar4 = param_1;
      if (param_1 < iVar3 + iVar1) {
        iVar4 = iVar3 + iVar1;
      }
      if (iVar4 < iVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      pvVar2 = (void *)FUN_100085c4(iVar4 * 4);
      FUN_10004cd0(pvVar2,iVar4 * 4,*(void **)((int)this + 4),*(int *)((int)this + 8) * 4);
      _memset((void *)((int)pvVar2 + *(int *)((int)this + 8) * 4),0,
              (param_1 - *(int *)((int)this + 8)) * 4);
      FUN_100085b9(*(void **)((int)this + 4));
      *(void **)((int)this + 4) = pvVar2;
      *(int *)((int)this + 0xc) = iVar4;
    }
    else {
      iVar1 = *(int *)((int)this + 8);
      if (iVar1 < param_1) {
        _memset((void *)(*(int *)((int)this + 4) + iVar1 * 4),0,(param_1 - iVar1) * 4);
        *(int *)((int)this + 8) = param_1;
        return;
      }
    }
    *(int *)((int)this + 8) = param_1;
    return;
  }
  if (*(void **)((int)this + 4) != (void *)0x0) {
    FUN_100085b9(*(void **)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return;
}

