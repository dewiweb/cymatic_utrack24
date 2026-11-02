// rea decompile_all
// name: FUN_100a0780
// address: 0x100a0780
// body: available
// range: 0x100a0780-0x100a08a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100a08a0 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_100a0780(void *this,undefined4 param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  CObject *pCVar6;
  undefined3 extraout_var;
  int *piVar7;
  int iVar8;
  CMFCVisualManager *pCVar9;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (((DAT_10166e54 == 0) && (DAT_101611ec != 0)) && (*(int *)((int)this + 0xd00) == 0)) {
    pHVar4 = GetParent(*(HWND *)((int)this + 0x20));
    pCVar5 = CWnd::FromHandle(pHVar4);
    pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_10160df8,(CObject *)pCVar5);
    if ((pCVar6 != (CObject *)0x0) &&
       (bVar3 = FUN_1005a8d4((int)pCVar6), CONCAT31(extraout_var,bVar3) != 0)) {
      piVar7 = *(int **)((int)this + 0xbcc);
      bVar3 = true;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
joined_r0x100a07ed:
      if (piVar7 != (int *)0x0) {
        do {
          if (piVar7 == (int *)0x0) {
LAB_100a08a0:
                    /* WARNING: Subroutine does not return */
            FUN_10009068();
          }
          iVar1 = piVar7[2];
          piVar7 = (int *)*piVar7;
          if (iVar1 == 0) goto LAB_100a08a0;
          if ((((*(byte *)(iVar1 + 0x24) & 1) != 0) && (piVar7 != (int *)0x0)) &&
             (iVar8 = CMFCToolBar::IsCommandRarelyUsed(*(uint *)(piVar7[2] + 0x20)), iVar8 != 0))
          goto joined_r0x100a07ed;
          iVar8 = CMFCToolBar::IsCommandRarelyUsed(*(uint *)(iVar1 + 0x20));
          if (iVar8 == 0) {
            bVar2 = !bVar3;
            if (bVar2) {
              local_10 = *(undefined4 *)(iVar1 + 0x58);
            }
            bVar3 = true;
            if (!bVar2) goto joined_r0x100a07ed;
            goto LAB_100a0872;
          }
          if (bVar3) {
            bVar3 = false;
            local_1c = *(undefined4 *)(iVar1 + 0x54);
            local_18 = *(undefined4 *)(iVar1 + 0x58);
            local_14 = *(undefined4 *)(iVar1 + 0x5c);
            local_10 = *(undefined4 *)(iVar1 + 0x60);
          }
        } while (piVar7 != (int *)0x0);
        local_10 = *(undefined4 *)(iVar1 + 0x60);
LAB_100a0872:
        pCVar9 = CMFCVisualManager::GetInstance();
        (**(code **)(*(int *)pCVar9 + 0xa0))(param_1,local_1c,local_18,local_14,local_10);
        goto joined_r0x100a07ed;
      }
    }
  }
  return;
}

