// rea decompile_all
// name: CMFCToolBarButton::GetClipboardFormat
// address: 0x100866ac
// body: available
// range: 0x100866ac-0x10086725 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1008670d to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: static unsigned short __stdcall CMFCToolBarButton::GetClipboardFormat(void)
   
   Library: Visual Studio 2010 Release */

ushort CMFCToolBarButton::GetClipboardFormat(void)

{
  LPCWSTR pWVar1;
  ushort extraout_AX;
  int *piVar2;
  LPCWSTR local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  UINT UVar3;
  
  uStack_4 = 4;
  local_8 = 0x100866b8;
  if (DAT_1016899c == 0) {
    piVar2 = FUN_10005e30((int *)(DAT_101689a4 + -0x10));
    local_14[0] = (LPCWSTR)(piVar2 + 4);
    local_8 = 0;
    if (piVar2[1] == 0) {
      AfxGetMainWnd();
      FUN_100022f0(local_14,L"ToolbarButton%p");
    }
    pWVar1 = local_14[0];
    UVar3 = RegisterClipboardFormatW(local_14[0]);
    extraout_AX = (ushort)UVar3;
    DAT_1016899c = extraout_AX;
    if (extraout_AX == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    FUN_10001030((undefined4 *)(pWVar1 + -8));
  }
  return DAT_1016899c;
}

