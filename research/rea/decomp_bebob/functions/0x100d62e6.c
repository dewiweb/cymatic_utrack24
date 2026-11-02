// rea decompile_all
// name: CMenuTearOffManager::SetupTearOffMenus
// address: 0x100d62e6
// body: available
// range: 0x100d62e6-0x100d6401 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100d6303 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x100d63ea to 0x10001000 FUN_10001000 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CMenuTearOffManager::SetupTearOffMenus(struct HMENU__ *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMenuTearOffManager::SetupTearOffMenus(CMenuTearOffManager *this,HMENU__ *param_1)

{
  CMenu *this_00;
  int iVar1;
  UINT UVar2;
  undefined **ppuVar3;
  uint uVar4;
  HMENU pHVar5;
  CMenu *pCVar6;
  uint uId;
  
  uId = 0;
  if (param_1 == (HMENU__ *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  this_00 = CMenu::FromHandle(param_1);
  if ((this_00 != (CMenu *)0x0) && (iVar1 = GetMenuItemCount(*(HMENU *)(this_00 + 4)), 0 < iVar1)) {
    do {
      UVar2 = GetMenuItemID(*(HMENU *)(this_00 + 4),uId);
      if (UVar2 == 0xffffffff) {
        UVar2 = GetMenuState(*(HMENU *)(this_00 + 4),uId,0x400);
        if ((UVar2 & 0x20) != 0) {
          ppuVar3 = FUN_1000ad47();
          FUN_10005e00(&param_1,(int *)ppuVar3);
          CMenu::GetMenuStringW
                    (this_00,uId,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&param_1,
                     0x400);
          if (param_1[-3].unused < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_10001000((undefined4 *)0x80070057);
          }
          if ((short)param_1->unused != 1) {
            uVar4 = FUN_100d6049((int)this);
            if (uVar4 == 0) {
              FUN_10001030(param_1 + -4);
              return;
            }
            Build(this,uVar4,
                  (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&param_1);
            ModifyMenuW(*(HMENU *)(this_00 + 4),uId,0x400,uId,(LPCWSTR)param_1);
          }
          FUN_10001030(param_1 + -4);
        }
        pHVar5 = GetSubMenu(*(HMENU *)(this_00 + 4),uId);
        pCVar6 = CMenu::FromHandle(pHVar5);
        if (pCVar6 != (CMenu *)0x0) {
          SetupTearOffMenus(this,*(HMENU__ **)(pCVar6 + 4));
        }
      }
      uId = uId + 1;
    } while ((int)uId < iVar1);
  }
  return;
}

