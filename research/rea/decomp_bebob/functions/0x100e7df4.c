// rea decompile_all
// name: FUN_100e7df4
// address: 0x100e7df4
// body: available
// range: 0x100e7df4-0x100e7e99 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100e7e95 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

bool __thiscall FUN_100e7df4(void *this,int param_1)

{
  CWnd *this_00;
  undefined4 *puVar1;
  int iVar2;
  CObject *pCVar3;
  bool bVar4;
  CObList local_2c [4];
  undefined4 *local_28;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x100e7e00;
  this_00 = *(CWnd **)((int)this + 0x78);
  if (((this_00 == (CWnd *)0x0) || (*(int *)(this_00 + 0x20) == 0)) || (param_1 != 0x400)) {
    bVar4 = false;
  }
  else {
    CWnd::GetWindowTextW
              (this_00,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       ((int)this + 0x7c));
    CObList::CObList(local_2c,10);
    local_8 = 0;
    iVar2 = FUN_1002643c(*(int *)((int)this + 0x20),local_2c);
    if (0 < iVar2) {
      while (local_28 != (undefined4 *)0x0) {
        if (local_28 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        puVar1 = (undefined4 *)*local_28;
        pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarEditBoxButton_10162f54,
                                    (CObject *)local_28[2]);
        local_28 = puVar1;
        if ((pCVar3 != (CObject *)0x0) && (pCVar3 != this)) {
          (**(code **)(*(int *)pCVar3 + 0xcc))
                    ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     ((int)this + 0x7c));
        }
      }
    }
    local_8 = 0xffffffff;
    FUN_1001e259(local_2c);
    bVar4 = *(int *)((int)this + 0x80) == 0;
  }
  return bVar4;
}

