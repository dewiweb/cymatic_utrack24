// rea decompile_all
// name: CMFCTasksPaneToolBarCmdUI::SetText
// address: 0x100f204c
// body: available
// range: 0x100f204c-0x100f212e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100f2068 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCTasksPaneToolBarCmdUI::SetText(wchar_t const *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCTasksPaneToolBarCmdUI::SetText(CMFCTasksPaneToolBarCmdUI *this,wchar_t *param_1)

{
  CMFCTasksPane *this_00;
  int iVar1;
  undefined4 *puVar2;
  CMFCTasksPaneTaskGroup *pCVar3;
  int iVar4;
  int local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x100f2058;
  if (param_1 != (wchar_t *)0x0) {
    this_00 = *(CMFCTasksPane **)(this + 0x14);
    if (this_00 != (CMFCTasksPane *)0x0) {
      FUN_10006ce0(&param_1,param_1);
      local_8 = 0;
      iVar1 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                        ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &param_1,L'\t',0);
      if (iVar1 != -1) {
        puVar2 = (undefined4 *)
                 ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Left
                           ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                            &param_1,(int)local_14);
        local_8._0_1_ = 1;
        FUN_10007c90(&param_1,puVar2);
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_10001030((undefined4 *)(local_14[0] + -0x10));
      }
      pCVar3 = CMFCTasksPane::GetTaskGroup(this_00,*(int *)(this + 8));
      if (pCVar3 != (CMFCTasksPaneTaskGroup *)0x0) {
        puVar2 = *(undefined4 **)(pCVar3 + 0x10);
        while (puVar2 != (undefined4 *)0x0) {
          if (puVar2 == (undefined4 *)0x0) goto LAB_100f2068;
          iVar1 = puVar2[2];
          puVar2 = (undefined4 *)*puVar2;
          if (*(int *)(iVar1 + 0x24) == *(int *)(this + 4)) {
            iVar4 = FUN_10005720((void *)(iVar1 + 8),(ushort *)param_1);
            if (iVar4 != 0) {
              FUN_10007c90((void *)(iVar1 + 8),&param_1);
              InvalidateRect(*(HWND *)(this_00 + 0x20),(RECT *)(iVar1 + 0xc),1);
            }
          }
        }
      }
      FUN_10001030((undefined4 *)(param_1 + -8));
      return;
    }
  }
LAB_100f2068:
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

