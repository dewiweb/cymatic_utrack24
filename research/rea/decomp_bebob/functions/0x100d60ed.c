// rea decompile_all
// name: CMenuTearOffManager::Parse
// address: 0x100d60ed
// body: available
// range: 0x100d60ed-0x100d6178 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100d610c to 0x10001000 FUN_10001000 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: unsigned int __thiscall CMenuTearOffManager::Parse(class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > &)
   
   Library: Visual Studio 2010 Release */

uint __thiscall
CMenuTearOffManager::Parse
          (CMenuTearOffManager *this,
          CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_1)

{
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  this_00 = param_1;
  uStack_4 = 4;
  local_8 = 0x100d60f9;
  iVar3 = *(int *)(*(short **)param_1 + -6);
  if (iVar3 != 0) {
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10001000((undefined4 *)0x80070057);
    }
    if (**(short **)param_1 == 1) {
      puVar1 = (undefined4 *)
               ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
                         (param_1,(int)&param_1);
      uVar2 = __wtol((wchar_t *)*puVar1);
      FUN_10001030((undefined4 *)(param_1 + -0x10));
      iVar3 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::ReverseFind
                        (this_00,L'\x01');
      if (iVar3 != -1) {
        puVar1 = (undefined4 *)
                 ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
                           (this_00,(int)local_14);
        local_8 = 0;
        FUN_10007c90(this_00,puVar1);
        FUN_10001030((undefined4 *)(local_14[0] + -0x10));
        return uVar2;
      }
    }
  }
  return 0;
}

