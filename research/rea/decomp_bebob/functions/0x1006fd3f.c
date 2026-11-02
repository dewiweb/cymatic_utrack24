// rea decompile_all
// name: FUN_1006fd3f
// address: 0x1006fd3f
// body: available
// range: 0x1006fd3f-0x1006fdd8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006fdd4 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_1006fd3f(HMENU__ *param_1,UINT param_2,
            CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_3)

{
  CMenu *this;
  int iVar1;
  UINT UVar2;
  HMENU pHVar3;
  CMenu *pCVar4;
  int iVar5;
  uint nPos;
  
  nPos = 0;
  if ((((param_1 != (HMENU__ *)0x0) && (param_2 != 0)) && (param_2 != 0xffffffff)) &&
     ((this = CMenu::FromHandle(param_1), this != (CMenu *)0x0 &&
      (iVar1 = GetMenuItemCount(*(HMENU *)(this + 4)), 0 < iVar1)))) {
    do {
      UVar2 = GetMenuItemID(*(HMENU *)(this + 4),nPos);
      if (UVar2 == param_2) {
        CMenu::GetMenuStringW(this,nPos,param_3,0x400);
        return 1;
      }
      if (UVar2 == 0xffffffff) {
        pHVar3 = GetSubMenu(*(HMENU *)(this + 4),nPos);
        pCVar4 = CMenu::FromHandle(pHVar3);
        if (pCVar4 == (CMenu *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        iVar5 = FUN_1006fd3f(*(HMENU__ **)(pCVar4 + 4),param_2,param_3);
        if (iVar5 != 0) {
          return 1;
        }
      }
      nPos = nPos + 1;
    } while ((int)nPos < iVar1);
  }
  return 0;
}

