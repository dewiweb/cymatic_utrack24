// rea decompile_all
// name: _AfxFindPopupMenuFromID
// address: 0x1001030d
// body: available
// range: 0x1001030d-0x10010382 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001031c to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    class CMenu * __stdcall _AfxFindPopupMenuFromID(class CMenu *,unsigned int)
   
   Library: Visual Studio 2010 Release */

CMenu * _AfxFindPopupMenuFromID(CMenu *param_1,uint param_2)

{
  int iVar1;
  HMENU pHVar2;
  CMenu *pCVar3;
  UINT UVar4;
  int nPos;
  
  if (param_1 == (CMenu *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  iVar1 = GetMenuItemCount(*(HMENU *)(param_1 + 4));
  nPos = 0;
  if (0 < iVar1) {
    do {
      pHVar2 = GetSubMenu(*(HMENU *)(param_1 + 4),nPos);
      pCVar3 = CMenu::FromHandle(pHVar2);
      if (pCVar3 == (CMenu *)0x0) {
        UVar4 = GetMenuItemID(*(HMENU *)(param_1 + 4),nPos);
        if (UVar4 == param_2) goto LAB_10010379;
      }
      else {
        if (*(uint *)(pCVar3 + 4) == param_2) {
LAB_10010379:
          pCVar3 = CMenu::FromHandlePermanent(*(HMENU__ **)(param_1 + 4));
          return pCVar3;
        }
        pCVar3 = _AfxFindPopupMenuFromID(pCVar3,param_2);
        if (pCVar3 != (CMenu *)0x0) {
          return pCVar3;
        }
      }
      nPos = nPos + 1;
    } while (nPos < iVar1);
  }
  return (CMenu *)0x0;
}

