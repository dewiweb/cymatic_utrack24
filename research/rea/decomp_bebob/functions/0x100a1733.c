// rea decompile_all
// name: FUN_100a1733
// address: 0x100a1733
// body: available
// range: 0x100a1733-0x100a188a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100a1886 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

HMENU__ * __fastcall FUN_100a1733(int param_1)

{
  CObject *this;
  undefined4 *puVar1;
  HMENU pHVar2;
  int iVar3;
  int *piVar4;
  HMENU__ *hMenu;
  UINT uFlags;
  UINT_PTR uIDNewItem;
  LPCWSTR lpNewItem;
  undefined **local_2c;
  HMENU local_28;
  int local_24;
  UINT_PTR local_20;
  undefined4 *local_1c;
  UINT local_18;
  LPCWSTR local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_2c = CMenu::vftable;
  local_28 = (HMENU)0x0;
  local_8 = 0;
  local_24 = param_1;
  pHVar2 = CreatePopupMenu();
  CMenu::Attach((CMenu *)&local_2c,pHVar2);
  puVar1 = *(undefined4 **)(param_1 + 0xbcc);
joined_r0x100a176a:
  if (puVar1 == (undefined4 *)0x0) {
    hMenu = CMenu::Detach((CMenu *)&local_2c);
    SetMenuDefaultItem(hMenu,*(UINT *)(param_1 + 0xcd0),0);
    local_8 = 0xffffffff;
    local_2c = CMenu::vftable;
    CMenu::DestroyMenu((CMenu *)&local_2c);
    return hMenu;
  }
  if (puVar1 == (undefined4 *)0x0) {
LAB_100a1886:
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  local_1c = (undefined4 *)*puVar1;
  this = (CObject *)puVar1[2];
  if (this == (CObject *)0x0) goto LAB_100a1886;
  if (((byte)this[0x24] & 1) == 0) goto LAB_100a17ac;
  lpNewItem = (LPCWSTR)0x0;
  uIDNewItem = 0;
  uFlags = 0x800;
  goto LAB_100a1842;
LAB_100a17ac:
  iVar3 = CObject::IsKindOf(this,(CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_10161420);
  puVar1 = local_1c;
  param_1 = local_24;
  if (iVar3 != 0) {
    local_20 = (**(code **)(*(int *)this + 0xd0))();
    if (local_20 == 0) {
      lpNewItem = *(LPCWSTR *)(this + 0x2c);
      uIDNewItem = *(UINT_PTR *)(this + 0x20);
      uFlags = 0;
LAB_100a1842:
      AppendMenuW(local_28,uFlags,uIDNewItem,lpNewItem);
      puVar1 = local_1c;
      param_1 = local_24;
    }
    else {
      local_18 = 0x10;
      if ((*(uint *)(this + 0x24) & 0x20000000) != 0) {
        local_18 = 0x50;
      }
      piVar4 = FUN_10005e30((int *)(*(int *)(this + 0x2c) + -0x10));
      local_14[0] = (LPCWSTR)(piVar4 + 4);
      local_8._0_1_ = 1;
      if ((*(uint *)(this + 0xbc) != 0) && (DAT_101697f4 != (CMenuTearOffManager *)0x0)) {
        CMenuTearOffManager::Build
                  (DAT_101697f4,*(uint *)(this + 0xbc),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14);
      }
      AppendMenuW(local_28,local_18,local_20,local_14[0]);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_10001030((undefined4 *)(local_14[0] + -8));
      puVar1 = local_1c;
      param_1 = local_24;
    }
  }
  goto joined_r0x100a176a;
}

