// rea decompile_all
// name: CMFCToolBarsKeyboardPropertyPage::AddKeyEntry
// address: 0x100e47c0
// body: available
// range: 0x100e47c0-0x100e4853 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100e47dc to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarsKeyboardPropertyPage::AddKeyEntry(struct tagACCEL *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCToolBarsKeyboardPropertyPage::AddKeyEntry
          (CMFCToolBarsKeyboardPropertyPage *this,tagACCEL *param_1)

{
  undefined **ppuVar1;
  WPARAM wParam;
  CMFCAcceleratorKey local_1c [8];
  LPARAM local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x100e47cc;
  if (param_1 == (tagACCEL *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  CMFCAcceleratorKey::CMFCAcceleratorKey(local_1c,param_1);
  local_8 = 0;
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00(local_14,(int *)ppuVar1);
  local_8 = CONCAT31(local_8._1_3_,1);
  CMFCAcceleratorKey::Format
            (local_1c,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14
            );
  wParam = SendMessageW(*(HWND *)(this + 0x324),0x180,0,local_14[0]);
  SendMessageW(*(HWND *)(this + 0x324),0x19a,wParam,(LPARAM)param_1);
  FUN_10001030((undefined4 *)(local_14[0] + -0x10));
  local_8 = 0xffffffff;
  FUN_100c185e((undefined4 *)local_1c);
  return;
}

