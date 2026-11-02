// rea decompile_all
// name: CMFCRibbonColorButton::UpdateColor
// address: 0x100ec294
// body: available
// range: 0x100ec294-0x100ec3a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100ec390 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CMFCRibbonColorButton::UpdateColor(unsigned long)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCRibbonColorButton::UpdateColor(CMFCRibbonColorButton *this,ulong param_1)

{
  CMFCRibbonBar *this_00;
  CObject *pCVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  CFrameWnd *pCVar4;
  int iVar5;
  undefined **local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x100ec2a0;
  if (*(ulong *)(this + 0x30c) != param_1) {
    *(ulong *)(this + 0x30c) = param_1;
    this_00 = CMFCRibbonBaseElement::GetTopLevelRibbonBar((CMFCRibbonBaseElement *)this);
    if (this_00 != (CMFCRibbonBar *)0x0) {
      local_24 = CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>::vftable;
      local_20 = 0;
      local_14 = 0;
      local_18 = 0;
      local_1c = 0;
      local_8 = 0;
      FUN_1006d515(this_00,*(int *)(this + 0x48),(CArray<int,int> *)&local_24);
      iVar5 = 0;
      if (0 < local_1c) {
        do {
          if ((iVar5 < 0) || (local_1c <= iVar5)) {
                    /* WARNING: Subroutine does not return */
            FUN_10009068();
          }
          pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonColorButton_1013e494,
                                      *(CObject **)(local_20 + iVar5 * 4));
          if ((pCVar1 != (CObject *)0x0) && (pCVar1 != (CObject *)this)) {
            *(ulong *)(pCVar1 + 0x30c) = param_1;
            (**(code **)(*(int *)pCVar1 + 0x118))();
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < local_1c);
      }
      local_8 = 0xffffffff;
      FUN_1006d033(&local_24);
    }
    iVar5 = *(int *)(this + 0x38);
    if (iVar5 == 0) {
      (**(code **)(*(int *)this + 0x118))();
    }
    else {
      if (*(int *)(iVar5 + 0xd70) != 0) {
        pHVar2 = GetParent(*(HWND *)(iVar5 + 0x20));
        pCVar3 = CWnd::FromHandle(pHVar2);
        pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonMiniToolBar_101384d0,
                                    (CObject *)pCVar3);
        if ((pCVar1 != (CObject *)0x0) && (*(int *)(pCVar1 + 0x1f00) == 0)) {
          return;
        }
      }
      pCVar4 = AFXGetParentFrame(*(CWnd **)(this + 0x38));
      PostMessageW(*(HWND *)(pCVar4 + 0x20),0x10,0,0);
    }
  }
  return;
}

