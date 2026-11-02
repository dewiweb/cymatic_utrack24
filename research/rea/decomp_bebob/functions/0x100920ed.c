// rea decompile_all
// name: CMFCToolBarSystemMenuButton::CreateMenu
// address: 0x100920ed
// body: available
// range: 0x100920ed-0x100921ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10092101 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual struct HMENU__ * __thiscall CMFCToolBarSystemMenuButton::CreateMenu(void)const 
   
   Library: Visual Studio 2010 Release */

HMENU__ * __thiscall CMFCToolBarSystemMenuButton::CreateMenu(CMFCToolBarSystemMenuButton *this)

{
  HMENU__ *pHVar1;
  CMenu *pCVar2;
  CMenu *pCVar3;
  int iVar4;
  UINT UVar5;
  UINT uIDCheckItem;
  UINT local_8;
  
  if (*(int *)(this + 0xec) != 0) {
    pHVar1 = CMFCToolBarMenuButton::CreateMenu((CMFCToolBarMenuButton *)this);
    if (pHVar1 != (HMENU__ *)0x0) {
      pCVar2 = CMenu::FromHandle(pHVar1);
      pCVar3 = CMenu::FromHandle(*(HMENU__ **)(this + 0xec));
      iVar4 = GetMenuItemCount(*(HMENU *)(pCVar3 + 4));
      local_8 = 0;
      if (0 < iVar4) {
        do {
          UVar5 = GetMenuState(*(HMENU *)(pCVar3 + 4),local_8,0x400);
          uIDCheckItem = GetMenuItemID(*(HMENU *)(pCVar3 + 4),local_8);
          if ((UVar5 & 8) != 0) {
            CheckMenuItem(*(HMENU *)(pCVar2 + 4),uIDCheckItem,8);
          }
          if ((UVar5 & 2) != 0) {
            EnableMenuItem(*(HMENU *)(pCVar2 + 4),uIDCheckItem,2);
          }
          if ((UVar5 & 1) != 0) {
            EnableMenuItem(*(HMENU *)(pCVar2 + 4),uIDCheckItem,1);
          }
          local_8 = local_8 + 1;
        } while ((int)local_8 < iVar4);
      }
    }
    return pHVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

