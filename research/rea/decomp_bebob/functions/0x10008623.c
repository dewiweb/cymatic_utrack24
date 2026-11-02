// rea decompile_all
// name: AfxUnmergeMenus
// address: 0x10008623
// body: available
// range: 0x10008623-0x100086e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    void __stdcall AfxUnmergeMenus(struct HMENU__ *,struct HMENU__ *,struct HMENU__ *)
   
   Library: Visual Studio 2010 Release */

void AfxUnmergeMenus(HMENU__ *param_1,HMENU__ *param_2,HMENU__ *param_3)

{
  int iVar1;
  UINT uPosition;
  HMENU hMenu;
  int iVar2;
  HMENU pHVar3;
  UINT local_8;
  
  iVar1 = GetMenuItemCount(param_2);
  uPosition = GetMenuItemCount(param_1);
joined_r0x10008643:
  do {
    do {
      uPosition = uPosition - 1;
      if ((int)uPosition < 0) {
        return;
      }
      hMenu = GetSubMenu(param_1,uPosition);
    } while (hMenu == (HMENU)0x0);
    if (param_3 != (HMENU)0x0) {
      iVar2 = GetMenuItemCount(hMenu);
      local_8 = 0;
      if (0 < iVar2) {
        do {
          pHVar3 = GetSubMenu(hMenu,local_8);
          if (pHVar3 == param_3) {
            RemoveMenu(hMenu,local_8,0x400);
            param_3 = (HMENU__ *)0x0;
            break;
          }
          local_8 = local_8 + 1;
        } while ((int)local_8 < iVar2);
      }
      goto joined_r0x10008643;
    }
    local_8 = 0;
    if (0 < iVar1) {
      do {
        pHVar3 = GetSubMenu(param_2,local_8);
        if (pHVar3 == hMenu) {
          RemoveMenu(param_1,uPosition,0x400);
          break;
        }
        local_8 = local_8 + 1;
      } while ((int)local_8 < iVar1);
    }
  } while( true );
}

