// rea decompile_all
// name: CMFCToolBarMenuButton::CreateMenu
// address: 0x1007e05c
// body: available
// range: 0x1007e05c-0x1007e23f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007e202 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual struct HMENU__ * __thiscall CMFCToolBarMenuButton::CreateMenu(void)const 
   
   Library: Visual Studio 2010 Release */

HMENU__ * __thiscall CMFCToolBarMenuButton::CreateMenu(CMFCToolBarMenuButton *this)

{
  int *piVar1;
  UINT_PTR uIDNewItem;
  undefined4 *puVar2;
  HMENU pHVar3;
  int iVar4;
  BOOL BVar5;
  int *piVar6;
  HMENU__ *hMenu;
  uint uFlags;
  undefined **local_28;
  HMENU local_24;
  UINT_PTR local_20;
  undefined4 *local_1c;
  UINT_PTR local_18;
  LPCWSTR local_14 [3];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  if ((((*(int *)(this + 0x7c) != 0) || (*(int *)(this + 0x20) == -1)) ||
      (*(int *)(this + 0x20) == 0)) || (*(int *)(this + 0xa8) != 0)) {
    local_28 = CMenu::vftable;
    local_24 = (HMENU)0x0;
    local_8 = 0;
    pHVar3 = ::CreatePopupMenu();
    iVar4 = CMenu::Attach((CMenu *)&local_28,pHVar3);
    if (iVar4 != 0) {
      local_18 = 0xffffffff;
      puVar2 = *(undefined4 **)(this + 0x74);
joined_r0x1007e0c7:
      do {
        if (puVar2 == (undefined4 *)0x0) {
          hMenu = CMenu::Detach((CMenu *)&local_28);
          if (local_18 != 0xffffffff) {
            SetMenuDefaultItem(hMenu,local_18,0);
          }
          local_8 = 0xffffffff;
          local_28 = CMenu::vftable;
          CMenu::DestroyMenu((CMenu *)&local_28);
          return hMenu;
        }
        local_1c = (undefined4 *)*puVar2;
        piVar1 = (int *)puVar2[2];
        if (piVar1 == (int *)0x0) {
LAB_1007e202:
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        uFlags = 0;
        if ((piVar1[9] & 0x20000000U) != 0) {
          uFlags = 0x40;
        }
        if ((piVar1[9] & 0x40000U) != 0) {
          uFlags = uFlags | 2;
        }
        iVar4 = (**(code **)(*piVar1 + 0xf0))();
        if (iVar4 != 0) {
          uFlags = uFlags | 0x20;
        }
        uIDNewItem = piVar1[8];
        if (uIDNewItem == 0) {
          BVar5 = AppendMenuW(local_24,0x800,0,(LPCWSTR)0x0);
          puVar2 = local_1c;
          if (BVar5 != 0) goto joined_r0x1007e0c7;
          GetLastError();
          iVar4 = 0;
        }
        else {
          if (uIDNewItem != 0xffffffff) {
            if (piVar1[0x26] != 0) {
              local_18 = uIDNewItem;
            }
            BVar5 = AppendMenuW(local_24,uFlags,uIDNewItem,(LPCWSTR)piVar1[0xb]);
            puVar2 = local_1c;
            if (BVar5 == 0) {
              GetLastError();
              break;
            }
            goto joined_r0x1007e0c7;
          }
          local_20 = (**(code **)(*piVar1 + 0xd0))();
          if (local_20 == 0) goto LAB_1007e202;
          piVar6 = FUN_10005e30((int *)(piVar1[0xb] + -0x10));
          local_14[0] = (LPCWSTR)(piVar6 + 4);
          local_8 = CONCAT31(local_8._1_3_,1);
          if ((piVar1[0x2f] != 0) && (DAT_101697f4 != (CMenuTearOffManager *)0x0)) {
            CMenuTearOffManager::Build
                      (DAT_101697f4,piVar1[0x2f],
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       local_14);
          }
          iVar4 = AppendMenuW(local_24,uFlags | 0x10,local_20,local_14[0]);
          if (iVar4 == 0) {
            GetLastError();
          }
          local_8 = local_8 & 0xffffff00;
          FUN_10001030((undefined4 *)(local_14[0] + -8));
        }
        puVar2 = local_1c;
      } while (iVar4 != 0);
    }
    local_28 = CMenu::vftable;
    local_8 = 0xffffffff;
    CMenu::DestroyMenu((CMenu *)&local_28);
  }
  return (HMENU__ *)0x0;
}

