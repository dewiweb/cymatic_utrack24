// rea decompile_all
// name: FUN_100a567a
// address: 0x100a567a
// body: available
// range: 0x100a567a-0x100a5879 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100a5875 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100a567a(CMFCToolBar *param_1)

{
  CObject *pCVar1;
  int iVar2;
  int *piVar3;
  CObject *pCVar4;
  int extraout_ECX;
  int iVar5;
  undefined4 extraout_ECX_00;
  int iVar6;
  undefined4 extraout_EDX;
  ulonglong uVar7;
  undefined4 local_40;
  int local_3c;
  CMFCToolBar *local_38;
  int local_34;
  undefined8 local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_30 = _DAT_10166c7c;
  if (DAT_10166c84 == 0) {
    local_30 = 1.0;
  }
  local_38 = param_1;
  CMFCToolBar::GetImageSize(param_1);
  iVar5 = extraout_ECX;
  if ((local_20 == 0) && (iVar5 = extraout_ECX, local_1c == 0)) {
    local_20 = 0x10;
    local_1c = 0x10;
    iVar5 = local_20;
  }
  iVar2 = local_20 + 10;
  local_24 = local_1c + 0xe;
  if (local_30 != 1.0) {
    local_28 = iVar2;
    uVar7 = FUN_100f8660(iVar5,extraout_EDX);
    iVar2 = (int)uVar7;
    uVar7 = FUN_100f8660(extraout_ECX_00,(int)(uVar7 >> 0x20));
    local_24 = (int)uVar7;
  }
  local_20 = 0;
  local_1c = 0;
  local_28 = iVar2;
  if (*(int *)(param_1 + 0xca0) != 0) {
    local_1c = local_24;
    local_20 = iVar2;
    piVar3 = (int *)FUN_10037b18((undefined4 *)&local_30);
    if (iVar2 <= *piVar3 + 10) {
      piVar3 = (int *)FUN_10037b18(&local_40);
      local_20 = *piVar3 + 10;
    }
  }
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)(param_1 + 0x20),&local_18);
  if ((local_20 == 0) && (local_1c == 0)) {
    local_34 = *(int *)(param_1 + 0xbd4);
  }
  else {
    local_34 = *(int *)(param_1 + 0xbd4) + -1;
  }
  local_34 = local_34 - (((local_18.right - local_18.left) - local_20) + 2) / (iVar2 + -2);
  iVar5 = (local_18.right - local_20) + 2;
  iVar2 = *(int *)(param_1 + 0xbd0);
  while( true ) {
    local_3c = iVar5;
    if (iVar2 == 0) {
      CMFCToolBar::UpdateTooltips(param_1);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (iVar2 == 0) break;
    pCVar1 = *(CObject **)(iVar2 + 8);
    local_30 = (double)CONCAT44(*(undefined4 *)(iVar2 + 4),SUB84(local_30,0));
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCCustomizeButton_10161a18,pCVar1);
    if ((local_34 < 1) || (pCVar4 != (CObject *)0x0)) {
      iVar2 = local_24;
      iVar6 = local_28;
      if (pCVar1 == *(CObject **)(param_1 + 0xca0)) {
        iVar2 = local_1c;
        iVar6 = local_20;
      }
      *(int *)(pCVar1 + 0x54) = iVar5;
      *(undefined4 *)(pCVar1 + 0x58) = 0xffffffff;
      *(int *)(pCVar1 + 0x5c) = iVar6 + iVar5;
      *(int *)(pCVar1 + 0x60) = iVar2;
      (**(code **)(*(int *)pCVar1 + 0x30))();
      local_3c = local_3c + (2 - local_28);
    }
    else {
      if (*(int *)(param_1 + 0xca0) != 0) {
        CObList::AddHead((CObList *)(*(int *)(param_1 + 0xca0) + 0x110),pCVar1);
      }
      *(undefined4 *)(pCVar1 + 0x54) = 0;
      *(undefined4 *)(pCVar1 + 0x58) = 0;
      *(undefined4 *)(pCVar1 + 0x5c) = 0;
      *(undefined4 *)(pCVar1 + 0x60) = 0;
      (**(code **)(*(int *)pCVar1 + 0x30))();
      local_34 = local_34 + -1;
    }
    iVar5 = local_3c;
    iVar2 = local_30._4_4_;
    param_1 = local_38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

