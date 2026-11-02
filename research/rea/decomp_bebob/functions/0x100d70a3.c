// rea decompile_all
// name: CComCtlWrapper::_PropertySheetW
// address: 0x100d70a3
// body: available
// range: 0x100d70a3-0x100d711a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100d70f7 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall CComCtlWrapper::_PropertySheetW(struct _PROPSHEETHEADERW_V2 const *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CComCtlWrapper::_PropertySheetW(CComCtlWrapper *this,_PROPSHEETHEADERW_V2 *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  BOOL BVar2;
  ULONG_PTR *lpCookie;
  int local_28 [7];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_10157698;
  uStack_c = 0x100d70af;
  local_28[1] = 0;
  lpCookie = (ULONG_PTR *)(local_28 + 1);
  pAVar1 = AfxGetModuleState();
  BVar2 = ActivateActCtx(*(HANDLE *)(pAVar1 + 0x80),lpCookie);
  local_28[2] = 0xffffffff;
  if (BVar2 == 0) {
    local_28[2] = -1;
  }
  else {
    local_8 = (undefined *)0x0;
    FID_conflict_GetProcAddress_PropertySheetA(this,local_28);
    if (*(code **)(this + 0x184) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    local_28[2] = (**(code **)(this + 0x184))(param_1);
    local_8 = (undefined *)0xfffffffe;
    FUN_100d711b();
  }
  return local_28[2];
}

