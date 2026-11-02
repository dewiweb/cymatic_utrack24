// rea decompile_all
// name: CMFCToolBarCmdUI::SetText
// address: 0x1002fa76
// body: available
// range: 0x1002fa76-0x1002fb60 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002fa90 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBarCmdUI::SetText(wchar_t const *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCToolBarCmdUI::SetText(CMFCToolBarCmdUI *this,wchar_t *param_1)

{
  int *this_00;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  ushort *local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x1002fa82;
  if ((param_1 != (wchar_t *)0x0) && (this_00 = *(int **)(this + 0x14), this_00 != (int *)0x0)) {
    if (this_00[0x2d4] == 0) {
      iVar1 = FUN_100261ef(this_00,*(int *)(this + 8));
      if (iVar1 != 0) {
        FUN_10006ce0(local_14,param_1);
        local_8 = 0;
        iVar2 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                          ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           local_14,L'\t',0);
        if (iVar2 != -1) {
          puVar3 = (undefined4 *)
                   ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Left
                             ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                              local_14,(int)&param_1);
          local_8._0_1_ = 1;
          FUN_10007c90(local_14,puVar3);
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_10001030((undefined4 *)(param_1 + -8));
        }
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::SpanExcluding
                  ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (iVar1 + 0x2c),(wchar_t *)&param_1);
        local_8 = CONCAT31(local_8._1_3_,2);
        iVar2 = FUN_10005720(&param_1,local_14[0]);
        if (iVar2 != 0) {
          FUN_10007c90((void *)(iVar1 + 0x2c),local_14);
          (**(code **)(*this_00 + 0x208))();
        }
        FUN_10001030((undefined4 *)(param_1 + -8));
        FUN_10001030((undefined4 *)(local_14[0] + -8));
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

