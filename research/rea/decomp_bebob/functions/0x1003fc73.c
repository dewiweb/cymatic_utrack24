// rea decompile_all
// name: FUN_1003fc73
// address: 0x1003fc73
// body: available
// range: 0x1003fc73-0x1003fdbc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003fdb8 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_1003fc73(void *this,int param_1)

{
  undefined4 *puVar1;
  CObject *this_00;
  CWnd *this_01;
  undefined4 *puVar2;
  int iVar3;
  BOOL BVar4;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      return;
    }
    if (puVar2 == (undefined4 *)0x0) break;
    puVar1 = (undefined4 *)*puVar2;
    this_00 = (CObject *)puVar2[2];
    puVar2 = puVar1;
    if ((DAT_10160714 == 0) && (iVar3 = CDockingManager::IsOLEContainerMode(this), iVar3 != 0)) {
      iVar3 = (**(code **)(*(int *)this_00 + 0x178))();
      if ((((iVar3 != 0) && (iVar3 = (**(code **)(*(int *)this_00 + 0x248))(), iVar3 != 0)) &&
          (iVar3 = CObject::IsKindOf(this_00,(CRuntimeClass *)&PTR_s_CDockablePane_1016138c),
          iVar3 == 0)) &&
         ((iVar3 = CObject::IsKindOf(this_00,(CRuntimeClass *)&PTR_s_CAutoHideDockSite_10135b64),
          iVar3 == 0 &&
          (iVar3 = CObject::IsKindOf(this_00,(CRuntimeClass *)&PTR_s_CPaneDivider_1012b088),
          iVar3 == 0)))) {
        (**(code **)(*(int *)this_00 + 0x220))(0,1,0);
        CObList::AddTail((CObList *)((int)this + 0x134),this_00);
      }
    }
    else {
      iVar3 = (**(code **)(*(int *)this_00 + 0x178))();
      if ((iVar3 != 0) && (iVar3 = (**(code **)(*(int *)this_00 + 0x248))(), iVar3 != 0)) {
        (**(code **)(*(int *)this_00 + 0x220))(0,1,0);
        CObList::AddTail((CObList *)((int)this + 0x134),this_00);
      }
      puVar1 = *(undefined4 **)((int)this + 0xcc);
      while (puVar1 != (undefined4 *)0x0) {
        if (puVar1 == (undefined4 *)0x0) goto LAB_1003fdb8;
        this_01 = (CWnd *)puVar1[2];
        puVar1 = (undefined4 *)*puVar1;
        BVar4 = IsWindowVisible(*(HWND *)(this_01 + 0x20));
        if (BVar4 != 0) {
          CWnd::ShowWindow(this_01,0);
          CObList::AddTail((CObList *)((int)this + 0x134),(CObject *)this_01);
        }
      }
    }
  }
LAB_1003fdb8:
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

