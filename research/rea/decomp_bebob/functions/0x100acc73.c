// rea decompile_all
// name: FUN_100acc73
// address: 0x100acc73
// body: available
// range: 0x100acc73-0x100ace07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100ace03 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_100acc73(void *this,int param_1)

{
  undefined4 *puVar1;
  CRuntimeClass *this_00;
  CObject *pCVar2;
  int local_8;
  
  FUN_10007c90((void *)((int)this + 0x30),(undefined4 *)(param_1 + 0x30));
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  local_8 = 0;
  if (0 < *(int *)(param_1 + 1000)) {
    do {
      if ((local_8 < 0) || (*(int *)(param_1 + 1000) <= local_8)) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x3e4) + local_8 * 4);
      this_00 = (CRuntimeClass *)(**(code **)*puVar1)();
      pCVar2 = CRuntimeClass::CreateObject(this_00);
      (**(code **)(*(int *)pCVar2 + 0xc))(puVar1);
      (**(code **)(*(int *)(pCVar2 + 0xb8) + 200))(puVar1 + 0x2e);
      (**(code **)(*(int *)(pCVar2 + 0xb8) + 0xd0))(puVar1 + 0x2e);
      CArray<int,int>::SetAtGrow
                ((CArray<int,int> *)((int)this + 0x3e0),*(int *)((int)this + 1000),(int)pCVar2);
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(param_1 + 1000));
  }
  *(undefined4 *)((int)this + 0x3c0) = *(undefined4 *)(param_1 + 0x3c0);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  (**(code **)(*(int *)((int)this + 0x34) + 200))(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x3c4) = *(undefined4 *)(param_1 + 0x3c4);
  CMFCToolBarImages::CopyTo
            ((CMFCToolBarImages *)(param_1 + 0x3f8),(CMFCToolBarImages *)((int)this + 0x3f8));
  CMFCToolBarImages::CopyTo
            ((CMFCToolBarImages *)(param_1 + 0x504),(CMFCToolBarImages *)((int)this + 0x504));
  CArray<int,int>::SetSize((CArray<int,int> *)((int)this + 0x3cc),0,-1);
  CArray<int,int>::Copy((CArray<int,int> *)((int)this + 0x3cc),(CArray<int,int> *)(param_1 + 0x3cc))
  ;
  (**(code **)(*(int *)((int)this + 0xec) + 200))(param_1 + 0xec);
  *(void **)((int)this + 0x118) = this;
  (**(code **)(*(int *)((int)this + 0x254) + 200))(param_1 + 0x254);
  *(void **)((int)this + 0x280) = this;
  *(undefined4 *)((int)this + 0x624) = *(undefined4 *)(param_1 + 0x624);
  *(undefined4 *)((int)this + 0x628) = *(undefined4 *)(param_1 + 0x628);
  return;
}

