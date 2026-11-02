// rea decompile_all
// name: FUN_100621eb
// address: 0x100621eb
// body: available
// range: 0x100621eb-0x100623f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100623f1 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __thiscall FUN_100621eb(void *this,CMFCPopupMenu *param_1)

{
  int *piVar1;
  CObject *this_00;
  CMFCToolBarsCustomizeDialog *pCVar2;
  int iVar3;
  CObject *pCVar4;
  undefined4 *puVar5;
  wchar_t *pwVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  int local_12c;
  CMFCPopupMenu *local_128;
  CMFCToolBarsCustomizeDialog *local_124;
  int *local_120;
  uint local_11c;
  CMFCCustomizeMenuButton local_118 [272];
  undefined4 local_8;
  undefined4 uStack_4;
  
  iVar3 = DAT_1016977c;
  uStack_4 = 0x11c;
  local_8 = 0x100621fa;
  local_128 = param_1;
  if (DAT_1016977c != 0) {
    local_124 = FUN_1000858a(0x8a0);
    local_8 = 0;
    if (local_124 == (CMFCToolBarsCustomizeDialog *)0x0) {
      local_120 = (int *)0x0;
    }
    else {
      local_120 = (int *)CMFCToolBarsCustomizeDialog::CMFCToolBarsCustomizeDialog
                                   (local_124,*(CFrameWnd **)((int)this + 0xb0),1,0x40,
                                    (CList<CRuntimeClass*,CRuntimeClass*> *)0x0);
    }
    local_8 = 0xffffffff;
    local_11c = 0;
    pCVar2 = *(CMFCToolBarsCustomizeDialog **)(iVar3 + 0xc04);
    while (pCVar2 != (CMFCToolBarsCustomizeDialog *)0x0) {
      if (pCVar2 == (CMFCToolBarsCustomizeDialog *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      this_00 = *(CObject **)(pCVar2 + 8);
      local_124 = *(CMFCToolBarsCustomizeDialog **)pCVar2;
      uVar7 = *(uint *)(this_00 + 0x20);
      if (((((byte)this_00[0x24] & 1) == 0) &&
          (iVar3 = CObject::IsKindOf(this_00,(CRuntimeClass *)&PTR_s_CMFCCustomizeButton_10161a18),
          iVar3 == 0)) &&
         (iVar3 = CMap<unsigned_int,unsigned_int,int,int>::Lookup
                            ((CMap<unsigned_int,unsigned_int,int,int> *)&PTR_vftable_10162684,uVar7,
                             &local_12c), iVar3 == 0)) {
        iVar3 = CObject::IsKindOf(this_00,(CRuntimeClass *)&PTR_s_CMFCDropDownToolbarButton_10161638
                                 );
        if (iVar3 != 0) {
          pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCDropDownToolbarButton_10161638,
                                      this_00);
          if ((*(void **)(pCVar4 + 0x70) != (void *)0x0) &&
             (iVar3 = FUN_1002605c(*(void **)(pCVar4 + 0x70),uVar7,0), iVar3 != -1))
          goto LAB_100623da;
        }
        iVar3 = CObject::IsKindOf(this_00,(CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_10161420);
        if ((iVar3 != 0) &&
           (pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_10161420,
                                        this_00), *(int *)(pCVar4 + 0xb0) != 0)) {
          puVar5 = *(undefined4 **)(pCVar4 + 0x74);
          bVar9 = false;
          do {
            if (puVar5 == (undefined4 *)0x0) break;
            piVar1 = puVar5 + 2;
            puVar5 = (undefined4 *)*puVar5;
            bVar9 = *(uint *)(*piVar1 + 0x20) == uVar7;
          } while (!bVar9);
          if (bVar9) goto LAB_100623da;
        }
        iVar3 = *(int *)(this_00 + 0x20);
        if ((iVar3 == 0) || (iVar3 == -1)) {
          uVar7 = 0xffffffec;
        }
        iVar10 = *(int *)(this_00 + 4);
        if (iVar10 == 0) {
          iVar8 = *(int *)(this_00 + 0x34);
        }
        else {
          iVar8 = *(int *)(this_00 + 0x38);
        }
        pwVar6 = (wchar_t *)GetCommandName(local_120,iVar3);
        CMFCCustomizeMenuButton(local_118,uVar7,(HMENU__ *)0x0,iVar8,pwVar6,iVar10);
        local_8 = 1;
        CMFCCustomizeMenuButton::SetItemIndex(local_118,local_11c,0,0);
        iVar3 = CMFCPopupMenu::InsertItem(local_128,(CMFCToolBarMenuButton *)local_118,local_11c);
        if (iVar3 == -1) {
          CMFCPopupMenu::InsertItem(local_128,(CMFCToolBarMenuButton *)local_118,-1);
        }
        local_8 = 0xffffffff;
        FUN_100d3eea((CMFCToolBarMenuButton *)local_118);
      }
LAB_100623da:
      local_11c = local_11c + 1;
      pCVar2 = local_124;
    }
    if (local_120 != (int *)0x0) {
      (**(code **)(*local_120 + 4))(1);
    }
  }
  FUN_100f90cf();
  return;
}

