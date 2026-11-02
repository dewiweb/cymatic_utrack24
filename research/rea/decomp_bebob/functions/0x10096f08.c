// rea decompile_all
// name: CMFCToolBarsCustomizeDialog::AddButton
// address: 0x10096f08
// body: available
// range: 0x10096f08-0x1009722b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10097186 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CMFCToolBarsCustomizeDialog::AddButton(wchar_t const *,class
   CMFCToolBarButton const &,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCToolBarsCustomizeDialog::AddButton
          (CMFCToolBarsCustomizeDialog *this,wchar_t *param_1,CMFCToolBarButton *param_2,int param_3
          )

{
  uint uVar1;
  CMFCToolBarsCustomizeDialog *pCVar2;
  bool bVar3;
  int iVar4;
  undefined **ppuVar5;
  HMODULE pHVar6;
  undefined4 *puVar7;
  undefined3 extraout_var;
  CObList *pCVar8;
  CRuntimeClass *this_00;
  CObject *pCVar9;
  __POSITION *p_Var10;
  int iVar11;
  int *piVar12;
  CObList *local_28;
  int local_24;
  CMFCToolBarButton *local_20;
  CObList *local_1c;
  CMFCToolBarsCustomizeDialog *local_18;
  int *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x10096f14;
  uVar1 = *(uint *)(param_2 + 0x20);
  local_18 = this;
  iVar4 = (**(code **)(*(int *)param_2 + 0x60))();
  if (iVar4 == 0) {
    return;
  }
  iVar4 = CMFCToolBar::IsCommandPermitted(*(uint *)(param_2 + 0x20));
  if (iVar4 == 0) {
    return;
  }
  local_20 = param_2 + 0x2c;
  local_14[0] = FUN_10005e30((int *)(*(int *)local_20 + -0x10));
  local_14[0] = local_14[0] + 4;
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::TrimLeft
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::TrimRight
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14);
  local_24 = 0;
  if (((DAT_101685b0 == (void *)0x0) || (uVar1 < *(uint *)((int)DAT_101685b0 + 0x24))) ||
     (*(uint *)((int)DAT_101685b0 + 0x28) < uVar1)) {
LAB_10096fa1:
    if (local_14[0][-3] == 0) {
      ppuVar5 = FUN_1000ad47();
      FUN_10005e00(&local_1c,(int *)ppuVar5);
      uVar1 = *(uint *)(param_2 + 0x20);
      local_8._0_1_ = 1;
      pHVar6 = (HMODULE)FUN_1000ac62();
      if (((pHVar6 != (HMODULE)0x0) && (iVar4 = FUN_10006200(&local_1c,pHVar6,uVar1), iVar4 != 0))
         && (iVar4 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                               ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                 *)&local_1c,L'\n',0), iVar4 != -1)) {
        puVar7 = (undefined4 *)
                 ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
                           ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                            &local_1c,(int)&local_28);
        local_8._0_1_ = 2;
        FUN_10007c90(local_14,puVar7);
        local_8._0_1_ = 1;
        FUN_10001030((undefined4 *)(local_28 + -0x10));
      }
      piVar12 = local_14[0];
      pCVar8 = local_1c;
      if ((local_14[0][-3] == 0) &&
         (iVar4 = FUN_10005720(local_18 + 0x13c,(ushort *)param_1), pCVar8 = local_1c, iVar4 == 0))
      {
        FUN_10001030((undefined4 *)(local_1c + -0x10));
        piVar12 = piVar12 + -4;
        goto LAB_1009721f;
      }
LAB_1009708d:
      local_8._0_1_ = 0;
      FUN_10001030((undefined4 *)(pCVar8 + -0x10));
    }
    else {
      if (*(int *)(local_18 + 0x14c) == 0) {
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
                  ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14,
                   L'&');
      }
      iVar4 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                        ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         local_14,L'\t',0);
      if (iVar4 != -1) {
        puVar7 = (undefined4 *)
                 ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Left
                           ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                            local_14,(int)&local_28);
        local_8._0_1_ = 3;
        FUN_10007c90(local_14,puVar7);
        pCVar8 = local_28;
        goto LAB_1009708d;
      }
    }
    pCVar2 = local_18;
    if (local_14[0][-3] == 0) {
      piVar12 = local_14[0] + -4;
      goto LAB_1009721f;
    }
    bVar3 = Lookup(local_18 + 0xcc,param_1,&local_1c);
    if (CONCAT31(extraout_var,bVar3) == 0) {
      local_28 = FUN_1000858a(0x1c);
      local_8._0_1_ = 4;
      if (local_28 == (CObList *)0x0) {
        pCVar8 = (CObList *)0x0;
      }
      else {
        pCVar8 = (CObList *)CObList::CObList(local_28,10);
      }
      local_8._0_1_ = 0;
      local_1c = pCVar8;
      puVar7 = (undefined4 *)FID_conflict_operator__(pCVar2 + 0xcc,param_1);
      pCVar2 = local_18;
      *puVar7 = pCVar8;
      iVar4 = FUN_10005720(local_18 + 0x13c,(ushort *)param_1);
      if (iVar4 != 0) {
        AddTail(pCVar2 + 0xe8,param_1);
      }
LAB_10097120:
      this_00 = (CRuntimeClass *)(*(code *)**(undefined4 **)param_2)();
      if ((this_00 == (CRuntimeClass *)0x0) ||
         (pCVar9 = CRuntimeClass::CreateObject(this_00), pCVar9 == (CObject *)0x0)) {
LAB_10097186:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      (**(code **)(*(int *)pCVar9 + 0x14))(param_2);
      FUN_10007c90(pCVar9 + 0x2c,local_14);
      if (local_24 != 0) {
        (**(code **)(*(int *)pCVar9 + 0xbc))(0);
      }
      if ((param_3 == -1) ||
         (p_Var10 = CObList::FindIndex(local_1c,param_3), p_Var10 == (__POSITION *)0x0)) {
        CObList::AddTail(local_1c,pCVar9);
      }
      else {
        CObList::InsertBefore(local_1c,p_Var10,pCVar9);
      }
      pCVar2 = local_18;
      iVar4 = FUN_10005720(local_18 + 0x13c,(ushort *)param_1);
      if (iVar4 != 0) {
        AddButton(pCVar2,*(wchar_t **)(pCVar2 + 0x13c),param_2,-1);
      }
      (**(code **)(*(int *)pCVar9 + 0x44))();
    }
    else {
      if (local_1c == (CObList *)0x0) goto LAB_10097186;
      puVar7 = *(undefined4 **)(local_1c + 4);
      do {
        if (puVar7 == (undefined4 *)0x0) goto LAB_10097120;
        if (puVar7 == (undefined4 *)0x0) goto LAB_10097186;
        iVar4 = puVar7[2];
        puVar7 = (undefined4 *)*puVar7;
        if (iVar4 == 0) goto LAB_10097186;
        iVar11 = *(int *)(iVar4 + 0x20);
      } while (((iVar11 != *(int *)(param_2 + 0x20)) || (iVar11 == -1)) &&
              ((iVar11 != -1 ||
               (iVar11 = FUN_10005720((void *)(iVar4 + 0x2c),*(ushort **)local_20), iVar11 != 0))));
      if (*(int *)(*(int *)(iVar4 + 0x2c) + -0xc) == 0) {
        FUN_10007c90((int *)(iVar4 + 0x2c),(undefined4 *)local_20);
      }
    }
  }
  else {
    iVar4 = FUN_1006a40b(DAT_101685b0,uVar1);
    if (iVar4 != 0) {
      FUN_10007c90(local_14,(undefined4 *)(iVar4 + 4));
      local_24 = 1;
      goto LAB_10096fa1;
    }
  }
  piVar12 = local_14[0] + -4;
LAB_1009721f:
  FUN_10001030(piVar12);
  return;
}

