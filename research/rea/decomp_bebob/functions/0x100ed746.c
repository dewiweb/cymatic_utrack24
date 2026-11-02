// rea decompile_all
// name: FUN_100ed746
// address: 0x100ed746
// body: available
// range: 0x100ed746-0x100ed893 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100ed88f to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100ed746(CMFCToolBar *param_1)

{
  undefined4 *puVar1;
  CObject *this;
  BOOL BVar2;
  int iVar3;
  CObject *pCVar4;
  int local_28;
  CObject *local_20;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  pCVar4 = (CObject *)0x0;
  if (((param_1 != (CMFCToolBar *)0x0) && (*(HWND *)(param_1 + 0x20) != (HWND)0x0)) &&
     (BVar2 = IsWindow(*(HWND *)(param_1 + 0x20)), BVar2 != 0)) {
    CMFCToolBar::AdjustLocations(param_1);
    puVar1 = *(undefined4 **)(param_1 + 0xbcc);
    local_20 = (CObject *)0x0;
    while (puVar1 != (undefined4 *)0x0) {
      if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      this = (CObject *)puVar1[2];
      puVar1 = (undefined4 *)*puVar1;
      if (((byte)this[0x24] & 1) == 0) {
        iVar3 = CObject::IsKindOf(this,(CRuntimeClass *)&PTR_s_CTasksPaneNavigateButton_101631b8);
        if (iVar3 == 0) {
          iVar3 = CObject::IsKindOf(this,(CRuntimeClass *)&PTR_s_CTasksPaneMenuButton_101631f0);
          if (iVar3 != 0) {
            pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CTasksPaneMenuButton_101631f0,this);
          }
        }
        else {
          if (*(int *)(this + 4) == 0) {
            iVar3 = *(int *)(this + 0x34);
          }
          else {
            iVar3 = *(int *)(this + 0x38);
          }
          if (iVar3 == 3) {
            local_20 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CTasksPaneNavigateButton_101631b8,
                                          this);
          }
        }
      }
    }
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(param_1 + 0x20),&local_18);
    if (pCVar4 != (CObject *)0x0) {
      local_28 = (*(int *)(pCVar4 + 0x60) - *(int *)(pCVar4 + 0x58)) * 3 + *(int *)(pCVar4 + 0x54);
      if (local_28 <= local_18.right + -1) {
        local_28 = local_18.right + -1;
      }
      *(int *)(pCVar4 + 0x54) = *(int *)(pCVar4 + 0x54);
      *(int *)(pCVar4 + 0x58) = *(int *)(pCVar4 + 0x58);
      *(int *)(pCVar4 + 0x5c) = local_28;
      *(int *)(pCVar4 + 0x60) = *(int *)(pCVar4 + 0x60);
      (**(code **)(*(int *)pCVar4 + 0x30))();
      if ((local_20 != (CObject *)0x0) && (*(int *)(local_20 + 0x40) != 1)) {
        *(int *)(local_20 + 0x40) = 1;
        (**(code **)(*(int *)local_20 + 0x84))(0);
      }
    }
    CMFCToolBar::UpdateTooltips(param_1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

