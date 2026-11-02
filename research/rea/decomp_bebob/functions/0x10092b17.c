// rea decompile_all
// name: FUN_10092b17
// address: 0x10092b17
// body: available
// range: 0x10092b17-0x10092c0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10092c09 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_10092b17(void *this,int param_1,int param_2)

{
  int iVar1;
  CObject *pCVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == param_2) {
    return;
  }
  if ((-1 < param_1) && (iVar1 = *(int *)((int)this + 0x90), param_1 < iVar1)) {
    pCVar2 = *(CObject **)(*(int *)((int)this + 0x8c) + param_1 * 4);
    iVar3 = *(int *)((int)this + 0xa0);
    if ((-1 < iVar3) && (iVar3 < iVar1)) {
      iVar3 = *(int *)(*(int *)((int)this + 0x8c) + iVar3 * 4);
      if (param_2 == -1) {
        CObArray::SetAtGrow((CObArray *)((int)this + 0x88),iVar1,pCVar2);
        FUN_1006cfdb((void *)((int)this + 0x88),param_1,1);
      }
      else {
        FUN_1006cfdb((CObArray *)((int)this + 0x88),param_1,1);
        FUN_1000a2f0((void *)((int)this + 0x88),param_2,pCVar2,1);
      }
      iVar1 = *(int *)((int)this + 0x90);
      iVar4 = 0;
      if (0 < iVar1) {
        do {
          if ((iVar4 < 0) || (iVar1 <= iVar4)) goto LAB_10092c09;
          if (iVar3 == *(int *)(*(int *)((int)this + 0x8c) + iVar4 * 4)) {
            if (iVar4 != *(int *)((int)this + 0xa0)) {
              (**(code **)(*(int *)this + 0x210))(iVar4);
              (**(code **)(*(int *)this + 0x26c))(*(undefined4 *)((int)this + 0xa0));
            }
            break;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar1);
      }
      (**(code **)(*(int *)this + 0x180))();
      return;
    }
  }
LAB_10092c09:
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

