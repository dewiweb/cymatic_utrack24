// rea decompile_all
// name: CMFCRibbonPanel::RepositionMenu
// address: 0x100b3225
// body: available
// range: 0x100b3225-0x100b34a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100b33ed to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonPanel::RepositionMenu(class CDC *,class CRect const
   &)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCRibbonPanel::RepositionMenu(CMFCRibbonPanel *this,CDC *param_1,CRect *param_2)

{
  int iVar1;
  int *piVar2;
  CMFCVisualManager *pCVar3;
  BOOL BVar4;
  int iVar5;
  undefined4 extraout_ECX;
  int iVar6;
  undefined4 extraout_ECX_00;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int local_58 [9];
  CDC *local_34;
  CObject *local_30;
  RECT *local_2c;
  int local_28;
  int local_24;
  CObject *local_20;
  int local_1c;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_34 = param_1;
  local_2c = (RECT *)param_2;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  local_30 = (CObject *)0x0;
  local_58[8] = 0;
  if (*(CMFCRibbonCategory **)(this + 0xa8) != (CMFCRibbonCategory *)0x0) {
    piVar2 = (int *)CMFCRibbonCategory::GetImageSize
                              (*(CMFCRibbonCategory **)(this + 0xa8),(int)&local_24);
    local_58[8] = *piVar2;
  }
  local_28 = 0;
  local_1c = 0;
  if (0 < *(int *)(this + 0x25c)) {
    do {
      if ((local_1c < 0) || (*(int *)(this + 0x25c) <= local_1c)) goto LAB_100b33ed;
      piVar2 = *(int **)(*(int *)(this + 600) + local_1c * 4);
      if (local_1c < *(int *)(this + 0x58)) {
        local_58[4] = 0xffffffff;
        local_58[5] = 0xffffffff;
        local_58[6] = 0xffffffff;
        local_58[7] = 0xffffffff;
        piVar7 = local_58 + 4;
LAB_100b32bb:
        piVar2[6] = *piVar7;
        piVar2[7] = piVar7[1];
        piVar2[8] = piVar7[2];
        piVar2[9] = piVar7[3];
      }
      else {
        (**(code **)(*piVar2 + 0xe0))(local_34);
        (**(code **)(*piVar2 + 0x48))(0);
        (**(code **)(*piVar2 + 0x18))(1);
        (**(code **)(*piVar2 + 0x50))(&local_24,local_34);
        if ((local_24 == 0) && (local_20 == (CObject *)0x0)) {
          local_58[0] = 0;
          local_58[1] = 0;
          local_58[2] = 0;
          local_58[3] = 0;
          piVar7 = local_58;
          goto LAB_100b32bb;
        }
        BVar4 = IsRectEmpty((RECT *)param_2);
        if ((BVar4 == 0) &&
           (local_24 = ((RECT *)param_2)->right - ((RECT *)param_2)->left,
           *(int *)(this + 0x20) != 0)) {
          uVar8 = FUN_10026c8e(extraout_ECX,local_24,&local_18.right);
          piVar2[0x14] = *(int *)uVar8;
        }
        iVar5 = ((RECT *)param_2)->top;
        iVar1 = *(int *)(this + 0x54);
        iVar6 = *(int *)(this + 0x50) + ((RECT *)param_2)->left;
        piVar2[6] = iVar6;
        piVar2[7] = (int)(local_30 + iVar1 + iVar5);
        piVar2[8] = iVar6 + local_24;
        piVar2[9] = (int)(local_30 + iVar1 + iVar5 + (int)local_20);
        if (local_28 <= local_24) {
          local_28 = local_24;
        }
        local_30 = local_30 + (int)local_20;
        if (local_2c->bottom < (int)local_30) {
          *(undefined4 *)(this + 0x3c) = 1;
        }
      }
      local_1c = local_1c + 1;
      param_2 = (CRect *)local_2c;
    } while (local_1c < *(int *)(this + 0x25c));
  }
  if (*(int *)(this + 0x20) != 0) {
    pCVar3 = CMFCVisualManager::GetInstance();
    uVar8 = (**(code **)(*(int *)pCVar3 + 0x2d0))();
    uVar9 = FUN_10026c8e(extraout_ECX_00,(int)((ulonglong)uVar8 >> 0x20),&local_18.right);
    local_28 = local_28 + *(int *)uVar9 + (int)uVar8 * 2;
  }
  *(int *)(this + 0x48) = local_28;
  BVar4 = IsRectEmpty((RECT *)param_2);
  if ((BVar4 != 0) && (local_1c = 0, 0 < *(int *)(this + 0x25c))) {
    do {
      if ((local_1c < 0) || (*(int *)(this + 0x25c) <= local_1c)) {
LAB_100b33ed:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      local_20 = *(CObject **)(*(int *)(this + 600) + local_1c * 4);
      local_18.left = *(LONG *)(local_20 + 0x18);
      local_18.top = *(LONG *)(local_20 + 0x1c);
      local_18.right = *(LONG *)(local_20 + 0x20);
      local_18.bottom = *(LONG *)(local_20 + 0x24);
      BVar4 = IsRectEmpty(&local_18);
      if (BVar4 == 0) {
        local_18.right = local_18.left + local_28;
        if ((0 < local_58[8]) &&
           (iVar5 = CObject::IsKindOf(local_20,(CRuntimeClass *)&PTR_s_CMFCRibbonSeparator_1013327c)
           , iVar5 != 0)) {
          local_18.left = local_18.left + *(int *)(this + 0x50) + local_58[8];
        }
        *(LONG *)(local_20 + 0x18) = local_18.left;
        *(LONG *)(local_20 + 0x1c) = local_18.top;
        *(LONG *)(local_20 + 0x20) = local_18.right;
        *(LONG *)(local_20 + 0x24) = local_18.bottom;
      }
      (**(code **)(*(int *)local_20 + 0x80))(local_34);
      local_1c = local_1c + 1;
      param_2 = (CRect *)local_2c;
    } while (local_1c < *(int *)(this + 0x25c));
  }
  *(LONG *)(this + 0x6c) = ((RECT *)param_2)->left;
  *(LONG *)(this + 0x70) = ((RECT *)param_2)->top;
  *(LONG *)(this + 0x74) = ((RECT *)param_2)->right;
  *(LONG *)(this + 0x78) = ((RECT *)param_2)->bottom;
  *(CObject **)(this + 0x78) = local_30 + *(int *)(this + 0x70);
  *(int *)(this + 0x74) = *(int *)(this + 0x6c) + *(int *)(this + 0x48);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

