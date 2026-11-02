// rea decompile_all
// name: CMFCRibbonBaseElement::GetToolTipText
// address: 0x100b8fe8
// body: available
// range: 0x100b8fe8-0x100b918f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > > __thiscall CMFCRibbonBaseElement::GetToolTipText(void)const 
   
   Library: Visual Studio 2010 Release */

undefined4 * __thiscall CMFCRibbonBaseElement::GetToolTipText(CMFCRibbonBaseElement *this)

{
  int iVar1;
  int *piVar2;
  undefined **ppuVar3;
  CFrameWnd *pCVar4;
  CFrameWnd *this_00;
  size_t sVar5;
  int *piVar6;
  CWnd *pCVar7;
  undefined4 *in_stack_00000004;
  wchar_t *local_18;
  int *local_14 [3];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x100b8ff4;
  local_14[0] = (int *)0x0;
  iVar1 = (**(code **)(*(int *)this + 0x40))();
  if (iVar1 != 0) {
    FUN_10006ce0(in_stack_00000004,(short *)&PTR_1011d390);
    return in_stack_00000004;
  }
  piVar2 = FUN_10005e30((int *)(*(int *)(this + 0x10) + -0x10));
  local_14[0] = piVar2 + 4;
  local_8 = 0;
  if ((*(int *)(this + 0x68) != 0) && (piVar2[1] == 0)) {
    FUN_10007c90(local_14,(undefined4 *)(this + 4));
    FUN_10006ce0(&local_18,(short *)&DAT_1012bb58);
    local_8._0_1_ = 1;
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14,L"&&",
               local_18);
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14,L'&');
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14,
               local_18,L"&");
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_10001030((undefined4 *)(local_18 + -8));
  }
  pCVar7 = *(CWnd **)(this + 0x28);
  if (((pCVar7 == (CWnd *)0x0) && (pCVar7 = *(CWnd **)(this + 0x38), pCVar7 == (CWnd *)0x0)) &&
     (pCVar7 = (CWnd *)0x0, *(int *)(this + 0x2c) != 0)) {
    pCVar7 = *(CWnd **)(*(int *)(this + 0x2c) + 0x3c0);
  }
  if (*(int *)(this + 0xa8) == 0) goto LAB_100b916a;
  ppuVar3 = FUN_1000ad47();
  FUN_10005e00(&local_18,(int *)ppuVar3);
  local_8 = CONCAT31(local_8._1_3_,2);
  pCVar4 = AFXGetParentFrame(pCVar7);
  if (pCVar4 != (CFrameWnd *)0x0) {
    this_00 = AFXGetParentFrame(pCVar7);
    pCVar4 = DAT_10168578;
    if (DAT_10168578 == (CFrameWnd *)0x0) {
      pCVar4 = CWnd::GetTopLevelFrame((CWnd *)this_00);
    }
    if (pCVar4 != (CFrameWnd *)0x0) {
      iVar1 = CKeyboardManager::FindDefaultAccelerator
                        (*(uint *)(this + 0x48),
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_18,pCVar4,1);
      if (iVar1 == 0) {
        iVar1 = 0;
        pCVar4 = (CFrameWnd *)(**(code **)(*(int *)pCVar4 + 0x16c))();
        iVar1 = CKeyboardManager::FindDefaultAccelerator
                          (*(uint *)(this + 0x48),
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_18,pCVar4,iVar1);
        if (iVar1 == 0) goto LAB_100b915c;
      }
      sVar5 = _wcslen(L" (");
      ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)local_14,L" (",sVar5);
      ATL::CSimpleStringT<wchar_t,0>::Append
                ((CSimpleStringT<wchar_t,0> *)local_14,local_18,*(int *)(local_18 + -6));
      ATL::CSimpleStringT<wchar_t,0>::AppendChar((CSimpleStringT<wchar_t,0> *)local_14,L')');
    }
  }
LAB_100b915c:
  local_8 = local_8 & 0xffffff00;
  FUN_10001030((undefined4 *)(local_18 + -8));
LAB_100b916a:
  piVar6 = local_14[0] + -4;
  piVar2 = FUN_10005e30(piVar6);
  *in_stack_00000004 = piVar2 + 4;
  FUN_10001030(piVar6);
  return in_stack_00000004;
}

