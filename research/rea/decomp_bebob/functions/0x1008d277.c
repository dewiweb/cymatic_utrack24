// rea decompile_all
// name: FUN_1008d277
// address: 0x1008d277
// body: available
// range: 0x1008d277-0x1008d438 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1008d434 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __thiscall FUN_1008d277(void *this,CMFCToolBarMenuButton *param_1)

{
  CMFCToolBarMenuButton *pCVar1;
  undefined4 uVar2;
  int iVar3;
  HMENU pHVar4;
  int *piVar5;
  undefined **ppuVar6;
  HMODULE pHVar7;
  int iVar8;
  undefined4 *puVar9;
  LPCWSTR lpNewItem;
  undefined **local_2c;
  HMENU local_28;
  void *local_24;
  int local_20;
  uint local_1c;
  undefined4 *local_18;
  LPCWSTR local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  pCVar1 = param_1;
  uStack_4 = 0x1c;
  local_8 = 0x1008d283;
  if ((*(int *)((int)this + 0x70) == 0) ||
     (local_24 = this, iVar3 = CMFCToolBarButton::ExportToMenuButton(this,param_1), iVar3 == 0)) {
    uVar2 = 0;
  }
  else {
    local_2c = CMenu::vftable;
    local_28 = (HMENU)0x0;
    local_8 = 0;
    pHVar4 = CreatePopupMenu();
    CMenu::Attach((CMenu *)&local_2c,pHVar4);
    puVar9 = *(undefined4 **)(*(int *)((int)this + 0x70) + 0xbcc);
    while (puVar9 != (undefined4 *)0x0) {
      if (puVar9 == (undefined4 *)0x0) {
LAB_1008d434:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      local_18 = (undefined4 *)*puVar9;
      iVar3 = puVar9[2];
      if (iVar3 == 0) goto LAB_1008d434;
      if ((*(byte *)(iVar3 + 0x24) & 1) == 0) {
        puVar9 = local_18;
        if ((*(int *)(iVar3 + 0x20) != 0) && (*(int *)(iVar3 + 0x20) != -1)) {
          piVar5 = FUN_10005e30((int *)(*(int *)(iVar3 + 0x2c) + -0x10));
          lpNewItem = (LPCWSTR)(piVar5 + 4);
          local_8._0_1_ = 1;
          local_14[0] = lpNewItem;
          if (piVar5[1] == 0) {
            ppuVar6 = FUN_1000ad47();
            FUN_10005e00(&param_1,(int *)ppuVar6);
            local_1c = *(uint *)(iVar3 + 0x20);
            local_8._0_1_ = 2;
            pHVar7 = (HMODULE)FUN_1000ac62();
            if (((pHVar7 != (HMODULE)0x0) &&
                (iVar8 = FUN_10006200(&param_1,pHVar7,local_1c), iVar8 != 0)) &&
               (iVar8 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                        Find((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             &param_1,L'\n',0), iVar8 != -1)) {
              puVar9 = (undefined4 *)
                       ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
                                 ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                   *)&param_1,(int)&local_20);
              local_8._0_1_ = 3;
              FUN_10007c90(local_14,puVar9);
              FUN_10001030((undefined4 *)(local_20 + -0x10));
              lpNewItem = local_14[0];
            }
            FUN_10001030((undefined4 *)(param_1 + -0x10));
          }
          AppendMenuW(local_28,0,*(UINT_PTR *)(iVar3 + 0x20),lpNewItem);
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_10001030((undefined4 *)(lpNewItem + -8));
          puVar9 = local_18;
          this = local_24;
        }
      }
      else {
        AppendMenuW(local_28,0x800,0,(LPCWSTR)0x0);
        puVar9 = local_18;
      }
    }
    *(undefined4 *)(pCVar1 + 0x20) = 0;
    FUN_10007c90(pCVar1 + 0x2c,(undefined4 *)((int)this + 0x74));
    (**(code **)(*(int *)pCVar1 + 0xbc))(0xffffffff);
    *(undefined4 *)(pCVar1 + 0xc) = 0;
    (**(code **)(*(int *)pCVar1 + 0xcc))(local_28);
    CMenu::DestroyMenu((CMenu *)&local_2c);
    local_8 = 0xffffffff;
    local_2c = CMenu::vftable;
    CMenu::DestroyMenu((CMenu *)&local_2c);
    uVar2 = 1;
  }
  return uVar2;
}

