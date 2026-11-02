// rea decompile_all
// name: CMenuTearOffManager::Reset
// address: 0x100d61d2
// body: available
// range: 0x100d61d2-0x100d62e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100d6211 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CMenuTearOffManager::Reset(struct HMENU__ *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMenuTearOffManager::Reset(CMenuTearOffManager *this,HMENU__ *param_1)

{
  int iVar1;
  CMenu *this_00;
  undefined **ppuVar2;
  uint uVar3;
  UINT UVar4;
  HMENU pHVar5;
  CMenu *pCVar6;
  HMENU__ *pHVar7;
  int iVar8;
  uint nPos;
  
  nPos = 0;
  iVar1 = (*(int *)(this + 8) - *(int *)(this + 4)) + 1;
  if (param_1 == (HMENU__ *)0x0) {
    iVar8 = 0;
    if (0 < iVar1) {
      do {
        if ((iVar8 < 0) || (*(int *)(this + 0x18) <= iVar8)) {
LAB_100d6211:
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        *(undefined4 *)(*(int *)(this + 0x14) + iVar8 * 4) = 0;
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar1);
    }
  }
  else {
    this_00 = CMenu::FromHandle(param_1);
    if ((this_00 != (CMenu *)0x0) && (iVar1 = GetMenuItemCount(*(HMENU *)(this_00 + 4)), 0 < iVar1))
    {
      do {
        ppuVar2 = FUN_1000ad47();
        FUN_10005e00(&param_1,(int *)ppuVar2);
        CMenu::GetMenuStringW
                  (this_00,nPos,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&param_1,
                   0x400);
        uVar3 = Parse(this,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &param_1);
        if ((*(uint *)(this + 4) <= uVar3) && (uVar3 <= *(uint *)(this + 8))) {
          iVar8 = uVar3 - *(uint *)(this + 4);
          if ((iVar8 < 0) || (*(int *)(this + 0x18) <= iVar8)) goto LAB_100d6211;
          *(undefined4 *)(*(int *)(this + 0x14) + iVar8 * 4) = 0;
        }
        UVar4 = GetMenuItemID(*(HMENU *)(this_00 + 4),nPos);
        if (UVar4 == 0xffffffff) {
          pHVar5 = GetSubMenu(*(HMENU *)(this_00 + 4),nPos);
          pCVar6 = CMenu::FromHandle(pHVar5);
          if (pCVar6 == (CMenu *)0x0) goto LAB_100d6211;
          pHVar7 = (HMENU__ *)0x0;
          if (pCVar6 != (CMenu *)0x0) {
            pHVar7 = *(HMENU__ **)(pCVar6 + 4);
          }
          Reset(this,pHVar7);
        }
        FUN_10001030(param_1 + -4);
        nPos = nPos + 1;
      } while ((int)nPos < iVar1);
    }
  }
  return;
}

