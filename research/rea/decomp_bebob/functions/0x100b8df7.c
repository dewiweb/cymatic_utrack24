// rea decompile_all
// name: FUN_100b8df7
// address: 0x100b8df7
// body: available
// range: 0x100b8df7-0x100b8fe6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100b8fe2 to 0x10001000 FUN_10001000 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __thiscall FUN_100b8df7(void *this,CWnd *param_1,CAccessibilityData *param_2)

{
  CAccessibilityData *this_00;
  CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_> *this_01;
  int iVar1;
  wchar_t *pwVar2;
  int *piVar3;
  undefined4 *puVar4;
  CSimpleStringT<wchar_t,0> *this_02;
  CWnd *pCVar5;
  int local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  this_00 = param_2;
  uStack_4 = 4;
  local_8 = 0x100b8e03;
  CAccessibilityData::Clear(param_2);
  piVar3 = (int *)((int)this + 4);
  if (*(int *)(*piVar3 + -0xc) == 0) {
    piVar3 = (int *)((int)this + 0x10);
  }
  FUN_10007c90(this_00,piVar3);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)this_00,L'&');
  this_01 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::TrimRight
                      ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)this_00
                      );
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::TrimLeft
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)this_01);
  iVar1 = CMFCRibbonBaseElement::IsMenuMode(this);
  *(uint *)(this_00 + 0x18) = (-(uint)(iVar1 != 0) & 0xffffffe1) + 0x2b;
  FUN_10007c90(this_00 + 8,(undefined4 *)((int)this + 0x14));
  *(undefined4 *)(this_00 + 0x20) = 1;
  iVar1 = CMFCRibbonBaseElement::IsMenuMode(this);
  pwVar2 = L"Execute";
  if (iVar1 == 0) {
    pwVar2 = L"Press";
  }
  FUN_100022b0(this_00 + 0x14,pwVar2);
  *(undefined4 *)(this_00 + 0x1c) = 0x100000;
  iVar1 = (**(code **)(*(int *)this + 0x3c))();
  if (iVar1 != 0) {
    *(uint *)(this_00 + 0x1c) = *(uint *)(this_00 + 0x1c) | 0x10;
  }
  iVar1 = (**(code **)(*(int *)this + 0x38))();
  if (iVar1 != 0) {
    *(uint *)(this_00 + 0x1c) = *(uint *)(this_00 + 0x1c) | 1;
  }
  iVar1 = (**(code **)(*(int *)this + 0x34))();
  if (iVar1 == 0) {
    iVar1 = CMFCRibbonBaseElement::IsMenuMode(this);
    if (iVar1 == 0) goto LAB_100b8ec8;
    iVar1 = (**(code **)(*(int *)this + 0x2c))();
    if (iVar1 == 0) goto LAB_100b8ec8;
  }
  *(uint *)(this_00 + 0x1c) = *(uint *)(this_00 + 0x1c) | 4;
LAB_100b8ec8:
  ((tagRECT *)(this_00 + 0x24))->left = *(LONG *)((int)this + 0x18);
  *(undefined4 *)(this_00 + 0x28) = *(undefined4 *)((int)this + 0x1c);
  *(undefined4 *)(this_00 + 0x2c) = *(undefined4 *)((int)this + 0x20);
  *(undefined4 *)(this_00 + 0x30) = *(undefined4 *)((int)this + 0x24);
  CWnd::ClientToScreen(param_1,(tagRECT *)(this_00 + 0x24));
  piVar3 = FUN_10005e30((int *)(*(int *)((int)this + 8) + -0x10));
  pCVar5 = (CWnd *)(piVar3 + 4);
  local_8 = 0;
  param_1 = pCVar5;
  if (((*(int *)((int)this + 0x68) == 0) && (*(int *)((int)this + 0x38) != 0)) && (piVar3[1] < 2)) {
    iVar1 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                      ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       ((int)this + 4),L'&',0);
    if ((-1 < iVar1) && (iVar1 < *(int *)(*(int *)((int)this + 4) + -0xc) + -1)) {
      iVar1 = iVar1 + 1;
      if ((iVar1 < 0) || (*(int *)(*(int *)((int)this + 4) + -0xc) < iVar1)) {
                    /* WARNING: Subroutine does not return */
        FUN_10001000((undefined4 *)0x80070057);
      }
      if (*(short *)(*(int *)((int)this + 4) + iVar1 * 2) != 0x26) {
        puVar4 = (undefined4 *)
                 ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
                           ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                            ((int)this + 4),(int)local_14,iVar1);
        local_8._0_1_ = 1;
        FUN_10007c90(&param_1,puVar4);
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_10001030((undefined4 *)(local_14[0] + -0x10));
        pCVar5 = param_1;
      }
    }
  }
  if (*(int *)(pCVar5 + -0xc) != 0) {
    this_02 = (CSimpleStringT<wchar_t,0> *)(param_2 + 0xc);
    FUN_100022b0(this_02,L"Alt, ");
    if (*(int *)((int)this + 0x2c) != 0) {
      puVar4 = (undefined4 *)
               ATL::operator+((CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>
                               *)&param_2,(wchar_t *)(*(int *)((int)this + 0x2c) + 0x3c));
      local_8._0_1_ = 2;
      ATL::CSimpleStringT<wchar_t,0>::Append
                (this_02,(wchar_t *)*puVar4,*(int *)((wchar_t *)*puVar4 + -6));
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_10001030((undefined4 *)(param_2 + -0x10));
    }
    ATL::CSimpleStringT<wchar_t,0>::Append(this_02,(wchar_t *)pCVar5,*(int *)(pCVar5 + -0xc));
  }
  FUN_10001030((undefined4 *)(pCVar5 + -0x10));
  return 1;
}

