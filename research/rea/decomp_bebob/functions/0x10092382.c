// rea decompile_all
// name: FUN_10092382
// address: 0x10092382
// body: available
// range: 0x10092382-0x10092453 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1009244f to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10092382(int param_1)

{
  int *piVar1;
  BOOL BVar2;
  int iVar3;
  int local_8;
  
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0x9c)) {
    do {
      if ((local_8 < 0) || (*(int *)(param_1 + 0x90) <= local_8)) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      piVar1 = *(int **)(*(int *)(param_1 + 0x8c) + local_8 * 4);
      if ((*(HWND *)(piVar1[8] + 0x20) == (HWND)0x0) ||
         (BVar2 = IsWindow(*(HWND *)(piVar1[8] + 0x20)), BVar2 != 0)) {
        iVar3 = CObject::IsKindOf((CObject *)piVar1[8],(CRuntimeClass *)&PTR_s_CPane_1012cc40);
        if (*(int *)(param_1 + 0xfc) != 0) {
          (**(code **)(*(int *)piVar1[8] + 0x60))();
        }
        if ((iVar3 == 0) || (*(int *)(param_1 + 0xfc) == 0)) {
          (**(code **)(*piVar1 + 4))(1);
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(param_1 + 0x9c));
  }
  CTooltipManager::DeleteToolTip((CToolTipCtrl **)(param_1 + 0xd8));
  CTooltipManager::DeleteToolTip((CToolTipCtrl **)(param_1 + 0xdc));
  CUIntArray::SetSize((CUIntArray *)(param_1 + 0x88),0,-1);
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  return;
}

