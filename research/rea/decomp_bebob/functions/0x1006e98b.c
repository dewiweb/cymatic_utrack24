// rea decompile_all
// name: FUN_1006e98b
// address: 0x1006e98b
// body: available
// range: 0x1006e98b-0x1006eb48 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006eb10 to 0x10001000 FUN_10001000 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1006eb44 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __thiscall FUN_1006e98b(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  short *psVar4;
  HWND pHVar5;
  ANIMATION_TYPE AVar6;
  int iVar7;
  BOOL BVar8;
  ushort *local_18;
  HWND local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x1006e997;
  (**(code **)(*(int *)this + 0x360))(&param_1);
  local_14 = (HWND)0x0;
  if (0 < *(int *)((int)this + 0x750)) {
    do {
      if (((int)local_14 < 0) || (*(int *)((int)this + 0x750) <= (int)local_14)) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      iVar7 = *(int *)(*(int *)((int)this + 0x74c) + (int)local_14 * 4);
      piVar1 = *(int **)(iVar7 + 0x74);
      if (*(int *)(iVar7 + 0x88) == 0) {
        psVar4 = (short *)piVar1[2];
      }
      else {
        psVar4 = (short *)piVar1[3];
      }
      FUN_10006ce0(&local_18,psVar4);
      local_8 = 0;
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::MakeUpper
                ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_18);
      iVar2 = *(int *)(local_18 + -6);
      if (iVar2 != 0) {
        if (*(uint *)((int)this + 0x2c4) == 0) {
          if (iVar2 < 0) {
LAB_1006eb0b:
                    /* WARNING: Subroutine does not return */
            FUN_10001000((undefined4 *)0x80070057);
          }
          if (*local_18 == param_1) {
            if (*(int *)(local_18 + -6) < 2) {
LAB_1006ea55:
              uVar3 = *(undefined4 *)(iVar7 + 0x88);
              local_8 = 0xffffffff;
              FUN_10001030((undefined4 *)(local_18 + -8));
              local_14 = *(HWND *)((int)this + 0x20);
              pHVar5 = GetFocus();
              if (pHVar5 != local_14) {
                CWnd::SetFocus(this);
              }
              AVar6 = CMFCPopupMenu::GetAnimationType(0);
              DAT_10168438 = 0;
              local_14 = *(HWND *)((int)this + 0x20);
              local_8 = 1;
              iVar7 = (**(code **)(*piVar1 + 0x13c))(uVar3);
              if ((iVar7 != 0) && (BVar8 = IsWindow(local_14), BVar8 != 0)) {
                CMFCRibbonBar::DeactivateKeyboardFocus(this,1);
              }
              DAT_10168438 = AVar6;
              return 1;
            }
            if (-1 < *(int *)(local_18 + -6)) {
              *(uint *)((int)this + 0x2c4) = (uint)*local_18;
              FUN_1006e506(this,0);
              FUN_10001030((undefined4 *)(local_18 + -8));
              return 1;
            }
            goto LAB_1006eb0b;
          }
        }
        else if (1 < iVar2) {
          if (iVar2 < 0) goto LAB_1006eb0b;
          if ((uint)*local_18 == *(uint *)((int)this + 0x2c4)) {
            if (*(int *)(local_18 + -6) < 1) goto LAB_1006eb0b;
            if (local_18[1] == param_1) goto LAB_1006ea55;
          }
        }
      }
      local_8 = 0xffffffff;
      FUN_10001030((undefined4 *)(local_18 + -8));
      local_14 = (HWND)((int)local_14 + 1);
    } while ((int)local_14 < *(int *)((int)this + 0x750));
  }
  return 0;
}

