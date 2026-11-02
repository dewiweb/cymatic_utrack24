// rea decompile_all
// name: FUN_1007d38f
// address: 0x1007d38f
// body: available
// range: 0x1007d38f-0x1007d47d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007d479 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_1007d38f(void *this,CMFCToolBarButton *param_1)

{
  undefined4 *puVar1;
  CRuntimeClass *this_00;
  CObject *pCVar2;
  undefined4 *puVar3;
  
  CMFCToolBarButton::CopyFrom(this,param_1);
  *(undefined4 *)((int)this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)((int)this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)((int)this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)((int)this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  (**(code **)(*(int *)this + 0xf4))(*(undefined4 *)(param_1 + 0xbc));
  while (*(int *)((int)this + 0x7c) != 0) {
    pCVar2 = CObList::RemoveHead((CObList *)((int)this + 0x70));
    if (pCVar2 != (CObject *)0x0) {
      (**(code **)(*(int *)pCVar2 + 4))(1);
    }
  }
  puVar3 = *(undefined4 **)(param_1 + 0x74);
  while( true ) {
    if (puVar3 == (undefined4 *)0x0) {
      return;
    }
    if (puVar3 == (undefined4 *)0x0) break;
    puVar1 = (undefined4 *)puVar3[2];
    puVar3 = (undefined4 *)*puVar3;
    if (puVar1 == (undefined4 *)0x0) break;
    this_00 = (CRuntimeClass *)(**(code **)*puVar1)();
    if (this_00 == (CRuntimeClass *)0x0) break;
    pCVar2 = CRuntimeClass::CreateObject(this_00);
    if (pCVar2 == (CObject *)0x0) break;
    (**(code **)(*(int *)pCVar2 + 0x14))(puVar1);
    CObList::AddTail((CObList *)((int)this + 0x70),pCVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

