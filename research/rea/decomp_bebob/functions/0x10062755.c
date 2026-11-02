// rea decompile_all
// name: CFrameImpl::ShowQuickCustomizePane
// address: 0x10062755
// body: available
// range: 0x10062755-0x10062ae1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006284e to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CFrameImpl::ShowQuickCustomizePane(class CMFCPopupMenu *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CFrameImpl::ShowQuickCustomizePane(CFrameImpl *this,CMFCPopupMenu *param_1)

{
  CFrameImpl *pCVar1;
  CMFCPopupMenu *pCVar2;
  CWnd *pCVar3;
  int iVar4;
  CMFCToolBarMenuButton *pCVar5;
  undefined *puVar6;
  wchar_t *pwVar7;
  CMFCToolBarsCustomizeDialog *this_00;
  uint uVar8;
  CObject *pCVar9;
  int *piVar10;
  short *psVar11;
  undefined **ppuVar12;
  HMODULE pHVar13;
  uint uVar14;
  undefined4 *puVar15;
  int *local_234;
  wchar_t *local_230;
  CWnd *local_22c;
  uint local_228;
  CFrameImpl *local_224;
  CWnd *local_220;
  CMFCCustomizeMenuButton local_21c [260];
  CMFCCustomizeMenuButton local_118 [272];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x22c;
  local_8 = 0x10062764;
  local_224 = this;
  pCVar2 = CMFCPopupMenu::GetParentPopupMenu(param_1);
  if ((pCVar2 != (CMFCPopupMenu *)0x0) &&
     (pCVar2 = CMFCPopupMenu::GetParentPopupMenu(pCVar2), pCVar2 != (CMFCPopupMenu *)0x0)) {
    pCVar9 = *(CObject **)(pCVar2 + 0x148);
    if (pCVar9 == (CObject *)0x0) {
      pCVar3 = CWnd::GetOwner((CWnd *)pCVar2);
      if ((pCVar3 == (CWnd *)0x0) ||
         (iVar4 = CObject::IsKindOf((CObject *)pCVar3,(CRuntimeClass *)&PTR_s_CPaneFrameWnd_101606a0
                                   ), iVar4 == 0)) goto LAB_10062ada;
      pCVar3 = (CWnd *)(**(code **)(*(int *)pCVar3 + 0x1a4))();
    }
    else {
      iVar4 = CObject::IsKindOf(pCVar9,(CRuntimeClass *)&PTR_s_CMFCCustomizeButton_10161a18);
      if (iVar4 == 0) goto LAB_10062ada;
      local_220 = *(CWnd **)(pCVar9 + 0xf8);
      pCVar5 = CMFCPopupMenu::GetMenuItem(param_1,0);
      local_230 = (wchar_t *)FUN_100faccd(*(wchar_t **)(pCVar5 + 0x2c));
      puVar6 = FUN_10026ef9();
      puVar15 = *(undefined4 **)(puVar6 + 4);
      do {
        pCVar3 = local_220;
        if (puVar15 == (undefined4 *)0x0) break;
        if (puVar15 == (undefined4 *)0x0) goto LAB_1006284e;
        pCVar3 = (CWnd *)puVar15[2];
        puVar15 = (undefined4 *)*puVar15;
        if (pCVar3 == (CWnd *)0x0) goto LAB_1006284e;
        pwVar7 = (wchar_t *)CWnd::GetDlgCtrlID(pCVar3);
      } while ((local_230 != pwVar7) || (*(int *)(pCVar3 + 0xb54) == 0));
    }
    local_22c = pCVar3;
    CMFCPopupMenu::RemoveAllItems(param_1);
    this_00 = FUN_1000858a(0x8a0);
    local_8 = 0;
    if (this_00 == (CMFCToolBarsCustomizeDialog *)0x0) {
      local_234 = (int *)0x0;
    }
    else {
      local_234 = (int *)CMFCToolBarsCustomizeDialog::CMFCToolBarsCustomizeDialog
                                   (this_00,*(CFrameWnd **)(local_224 + 0xb0),1,0x40,
                                    (CList<CRuntimeClass*,CRuntimeClass*> *)0x0);
    }
    pCVar3 = local_22c;
    local_8 = 0xffffffff;
    DAT_1016977c = local_22c;
    local_220 = (CWnd *)0x0;
    CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)&PTR_vftable_10162684);
    uVar8 = FUN_100268b9((int)pCVar3);
    local_228 = 0;
    if (uVar8 != 0) {
      do {
        pCVar9 = (CObject *)FUN_100261ef(local_22c,local_228);
        iVar4 = CObject::IsKindOf(pCVar9,(CRuntimeClass *)&PTR_s_CMFCCustomizeButton_10161a18);
        if ((iVar4 == 0) && (((byte)pCVar9[0x24] & 1) == 0)) {
          piVar10 = CMap<unsigned_int,unsigned_int,int,int>::operator[]
                              ((CMap<unsigned_int,unsigned_int,int,int> *)&PTR_vftable_10162684,
                               *(uint *)(pCVar9 + 0x20));
          *piVar10 = 0;
          piVar10 = FUN_10005e30((int *)(*(int *)(pCVar9 + 0x2c) + -0x10));
          local_230 = (wchar_t *)(piVar10 + 4);
          local_8 = 1;
          if (*(int *)(*(int *)(pCVar9 + 0x2c) + -0xc) == 0) {
            psVar11 = (short *)GetCommandName(local_234,*(int *)(pCVar9 + 0x20));
            FUN_100022b0(&local_230,psVar11);
          }
          pwVar7 = local_230;
          uVar14 = *(uint *)(pCVar9 + 0x20);
          if ((uVar14 == 0) || (uVar14 == 0xffffffff)) {
            uVar14 = 0xffffffec;
          }
          if (*(int *)(pCVar9 + 4) == 0) {
            iVar4 = *(int *)(pCVar9 + 0x34);
          }
          else {
            iVar4 = *(int *)(pCVar9 + 0x38);
          }
          CMFCCustomizeMenuButton
                    (local_21c,uVar14,(HMENU__ *)0x0,iVar4,local_230,*(int *)(pCVar9 + 4));
          local_8._0_1_ = 2;
          CMFCCustomizeMenuButton::SetItemIndex(local_21c,local_228,1,0);
          CMFCPopupMenu::InsertItem(param_1,(CMFCToolBarMenuButton *)local_21c,-1);
          local_220 = local_220 + 1;
          local_8 = CONCAT31(local_8._1_3_,1);
          FUN_100d3eea((CMFCToolBarMenuButton *)local_21c);
          local_8 = 0xffffffff;
          FUN_10001030((undefined4 *)(pwVar7 + -8));
        }
        local_228 = local_228 + 1;
      } while (local_228 < uVar8);
    }
    if (local_234 != (int *)0x0) {
      (**(code **)(*local_234 + 4))(1);
    }
    *(undefined4 *)(param_1 + 0x10b8) = 0;
    OnShowCustomizePane(local_224,param_1,*(uint *)(local_22c + 0xca4));
    if (local_220 != (CWnd *)0x0) {
      CMFCPopupMenu::InsertSeparator(param_1,-1);
    }
    ppuVar12 = FUN_1000ad47();
    FUN_10005e00(&local_224,(int *)ppuVar12);
    local_8 = 3;
    pHVar13 = (HMODULE)FUN_1000ac62();
    if (pHVar13 == (HMODULE)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_10006200(&local_224,pHVar13,0x3fac);
    }
    pCVar1 = local_224;
    if (iVar4 == 0) {
LAB_1006284e:
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    CMFCCustomizeMenuButton(local_118,0xffffffec,(HMENU__ *)0x0,-1,(wchar_t *)local_224,0);
    local_8._0_1_ = 4;
    CMFCCustomizeMenuButton::SetItemIndex(local_118,0x4278,1,0);
    CMFCPopupMenu::InsertItem(param_1,(CMFCToolBarMenuButton *)local_118,-1);
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_100d3eea((CMFCToolBarMenuButton *)local_118);
    FUN_10001030((undefined4 *)(pCVar1 + -0x10));
  }
LAB_10062ada:
  FUN_100f90cf();
  return;
}

