// rea decompile_all
// name: CMFCMaskedEdit::CheckChar
// address: 0x1004cce7
// body: available
// range: 0x1004cce7-0x1004cd89 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004cd7c to 0x10001000 FUN_10001000 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: int __thiscall CMFCMaskedEdit::CheckChar(wchar_t,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCMaskedEdit::CheckChar(CMFCMaskedEdit *this,wchar_t param_1,int param_2)

{
  int iVar1;
  undefined2 in_stack_00000006;
  
  iVar1 = *(int *)(*(int *)(this + 0x78) + -0xc);
  if (iVar1 == 0) {
    if (*(int *)(*(int *)(this + 0x84) + -0xc) != 0) {
      iVar1 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                        ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         (this + 0x84),param_1,0);
      return (uint)(iVar1 != -1);
    }
    return 1;
  }
  if ((-1 < param_2) && (param_2 <= *(int *)(*(int *)(this + 0x7c) + -0xc))) {
    if (*(short *)(param_2 * 2 + *(int *)(this + 0x7c)) == 0x5f) {
      if (iVar1 < param_2) goto LAB_1004cd77;
      iVar1 = (**(code **)(*(int *)this + 0x160))
                        (_param_1,*(undefined2 *)(param_2 * 2 + *(int *)(this + 0x78)));
      if (*(int *)(*(int *)(this + 0x84) + -0xc) == 0) {
        return iVar1;
      }
      if ((iVar1 != 0) &&
         (iVar1 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             (this + 0x84),param_1,0), iVar1 != -1)) {
        return 1;
      }
    }
    return 0;
  }
LAB_1004cd77:
                    /* WARNING: Subroutine does not return */
  FUN_10001000((undefined4 *)0x80070057);
}

