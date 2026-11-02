// rea decompile_all
// name: FUN_100a902e
// address: 0x100a902e
// body: available
// range: 0x100a902e-0x100a939f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100a939b to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100a902e(CMFCToolBar *param_1)

{
  undefined4 *puVar1;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  CObject *local_44;
  undefined4 *local_40;
  CObject *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if ((((param_1 != (CMFCToolBar *)0x0) && (*(HWND *)(param_1 + 0x20) != (HWND)0x0)) &&
      (BVar2 = IsWindow(*(HWND *)(param_1 + 0x20)), BVar2 != 0)) && (*(int *)(param_1 + 0xb68) == 0)
     ) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(param_1 + 0x20),&local_18);
    InflateRect(&local_18,-(*(int *)(param_1 + 0xd64) + *(int *)(param_1 + 0xd74)),
                -(*(int *)(param_1 + 0xd68) + *(int *)(param_1 + 0xd70)));
    local_34 = 0;
    if ((*(int *)(*(int *)(param_1 + 0xdd8) + -0xc) == 0) ||
       (local_38 = 0, *(int *)(param_1 + 0xdd0) != -1)) {
      local_38 = 1;
    }
    puVar1 = *(undefined4 **)(param_1 + 0xbcc);
    local_2c = local_18.left;
    local_30 = local_18.top;
    iVar6 = local_18.left;
    iVar4 = local_18.top;
joined_r0x100a90f0:
    if (puVar1 != (undefined4 *)0x0) {
      local_28.left = 0;
      local_28.top = 0;
      local_28.right = 0;
      local_28.bottom = 0;
      if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      local_40 = (undefined4 *)*puVar1;
      local_44 = (CObject *)puVar1[2];
      if (((byte)local_44[0x24] & 1) == 0) goto LAB_100a9190;
      if (local_34 == 0) {
        local_64 = iVar6;
        if (local_18.left < iVar6) {
          iVar4 = iVar4 + *(int *)(param_1 + 0xdc4) + *(int *)(param_1 + 0xd70);
          local_64 = local_18.left;
          local_30 = iVar4;
        }
        local_58 = iVar4 + 2;
        local_5c = (local_18.right - local_18.left) + local_64;
        local_30 = local_30 + 4;
        local_60 = iVar4;
        local_2c = local_18.left;
        local_28.left = local_64;
        local_28.top = iVar4;
        local_28.right = local_5c;
        local_28.bottom = local_58;
      }
      else {
        SetRectEmpty(&local_28);
      }
      local_34 = 1;
      goto LAB_100a9363;
    }
    CMFCToolBar::UpdateTooltips(param_1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
LAB_100a9190:
  local_3c = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarColorButton_10161ca4,local_44);
  puVar1 = local_40;
  if (local_3c != (CObject *)0x0) {
    if (((*(int *)(local_3c + 0x84) == 0) || (*(int *)(param_1 + 0xd84) != 0)) ||
       (iVar3 = (**(code **)(*(int *)param_1 + 0x16c))(), iVar3 != 0)) {
      if (((*(int *)(local_3c + 0x78) == 0) && (*(int *)(local_3c + 0x7c) == 0)) &&
         (*(int *)(local_3c + 0x80) == 0)) {
        iVar3 = *(int *)(param_1 + 0xdc0);
        if (local_18.right < iVar3 + iVar6) {
          iVar4 = iVar4 + *(int *)(param_1 + 0xdc4);
          local_2c = local_18.left;
          iVar6 = local_18.left;
          local_30 = iVar4;
        }
        if ((*(int *)(local_3c + 0x88) == 0) || (local_38 != 0)) {
          local_2c = local_2c + iVar3;
          local_28.bottom = *(int *)(param_1 + 0xdc4) + iVar4;
          local_34 = 0;
          local_28.right = iVar6 + iVar3;
          local_28.left = iVar6;
          local_28.top = iVar4;
        }
        else {
          SetRectEmpty(&local_28);
        }
        if ((*(int *)(local_3c + 0x70) == *(int *)(param_1 + 0xdd0)) &&
           (*(int *)(local_3c + 0x88) == 0)) {
          local_38 = 0;
        }
      }
      else {
        if (local_18.left < iVar6) {
          iVar4 = iVar4 + *(int *)(param_1 + 0xdc4) + *(int *)(param_1 + 0xd70);
          iVar6 = local_18.left;
          local_30 = iVar4;
        }
        if ((*(int *)(local_3c + 0x7c) == 0) || (local_38 == 0)) {
          iVar3 = *(int *)(param_1 + 0xd6c) - *(int *)(param_1 + 0xd70) / 2;
          local_30 = local_30 + iVar3;
          local_6c = (local_18.right - local_18.left) + iVar6;
          local_70 = iVar4;
          local_74 = iVar6;
          local_68 = iVar3 + iVar4;
          piVar5 = &local_74;
          local_2c = local_18.left;
        }
        else {
          local_48 = (*(int *)(param_1 + 0xd6c) - *(int *)(param_1 + 0xd70) / 2) + iVar4;
          local_4c = ((local_18.right - *(int *)(param_1 + 0xdc0)) - local_18.left) + iVar6;
          local_50 = iVar4;
          local_30 = local_30 + ((local_48 - *(int *)(param_1 + 0xdc4)) - local_30) / 2;
          local_54 = iVar6;
          piVar5 = &local_54;
          local_2c = local_4c;
        }
        local_28.left = *piVar5;
        local_28.top = piVar5[1];
        local_28.right = piVar5[2];
        local_28.bottom = piVar5[3];
        if (*(int *)(local_3c + 0x7c) != 0) {
          InflateRect(&local_28,-(*(int *)(param_1 + 0xd74) / 2),-(*(int *)(param_1 + 0xd70) / 2));
        }
        local_34 = 0;
      }
    }
    else {
      SetRectEmpty(&local_28);
    }
LAB_100a9363:
    *(LONG *)(local_44 + 0x54) = local_28.left;
    *(LONG *)(local_44 + 0x58) = local_28.top;
    *(LONG *)(local_44 + 0x5c) = local_28.right;
    *(LONG *)(local_44 + 0x60) = local_28.bottom;
    (**(code **)(*(int *)local_44 + 0x30))();
    puVar1 = local_40;
    iVar6 = local_2c;
    iVar4 = local_30;
  }
  goto joined_r0x100a90f0;
}

