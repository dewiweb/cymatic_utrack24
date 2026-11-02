// rea decompile_all
// name: FUN_1006e506
// address: 0x1006e506
// body: available
// range: 0x1006e506-0x1006e61a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006e611 to 0x10001000 FUN_10001000 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1006e616 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __thiscall FUN_1006e506(void *this,int param_1)

{
  CMFCRibbonKeyTip *this_00;
  short *psVar1;
  BOOL BVar2;
  int iVar3;
  ushort *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x1006e512;
  iVar3 = 0;
  if (0 < *(int *)((int)this + 0x750)) {
    do {
      if ((iVar3 < 0) || (*(int *)((int)this + 0x750) <= iVar3)) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      this_00 = *(CMFCRibbonKeyTip **)(*(int *)((int)this + 0x74c) + iVar3 * 4);
      if (*(int *)((int)this + 0x2c4) == 0) {
LAB_1006e59f:
        CMFCRibbonKeyTip::Show(this_00,param_1);
      }
      else {
        if (*(int *)(this_00 + 0x88) == 0) {
          psVar1 = *(short **)(*(int *)(this_00 + 0x74) + 8);
        }
        else {
          psVar1 = *(short **)(*(int *)(this_00 + 0x74) + 0xc);
        }
        FUN_10006ce0(local_14,psVar1);
        local_8 = 0;
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::MakeUpper
                  ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14);
        if (1 < *(int *)(local_14[0] + -6)) {
          if (*(int *)(local_14[0] + -6) < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_10001000((undefined4 *)0x80070057);
          }
          if ((uint)*local_14[0] == *(uint *)((int)this + 0x2c4)) {
            local_8 = 0xffffffff;
            FUN_10001030((undefined4 *)(local_14[0] + -8));
            goto LAB_1006e59f;
          }
        }
        CMFCRibbonKeyTip::Hide(this_00);
        local_8 = 0xffffffff;
        FUN_10001030((undefined4 *)(local_14[0] + -8));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)this + 0x750));
  }
  iVar3 = *(int *)((int)this + 0x7a8);
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x20) != 0)) {
    BVar2 = IsWindowVisible(*(HWND *)(iVar3 + 0x20));
    if (BVar2 != 0) {
      CWnd::SetWindowPos(*(CWnd **)((int)this + 0x7a8),(CWnd *)&DAT_101666b0,-1,-1,-1,-1,0x13);
    }
  }
  return;
}

