// rea decompile_all
// name: FUN_10006450
// address: 0x10006450
// body: available
// range: 0x10006450-0x100064d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100064c3 to 0x10001000 FUN_10001000 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


CSimpleStringT<wchar_t,0> * __thiscall FUN_10006450(void *this,LPCSTR param_1)

{
  int iVar1;
  
  if (param_1 != (LPCSTR)0x0) {
    iVar1 = MultiByteToWideChar(3,0,param_1,-1,(LPWSTR)0x0,0);
    iVar1 = iVar1 + -1;
    if (0 < iVar1) {
      if ((int)(1U - *(int *)(*(int *)this + -4) | *(int *)(*(int *)this + -8) - iVar1) < 0) {
        FUN_10001f40(this,iVar1);
      }
      MultiByteToWideChar(3,0,param_1,-1,*(LPWSTR *)this,iVar1);
      if (iVar1 <= *(int *)(*(int *)this + -8)) {
        *(int *)(*(int *)this + -0xc) = iVar1;
        *(undefined2 *)(*(int *)this + iVar1 * 2) = 0;
        return this;
      }
                    /* WARNING: Subroutine does not return */
      FUN_10001000((undefined4 *)0x80070057);
    }
  }
  ATL::CSimpleStringT<wchar_t,0>::Empty(this);
  return this;
}

