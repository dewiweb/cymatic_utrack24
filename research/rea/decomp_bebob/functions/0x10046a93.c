// rea decompile_all
// name: CMFCShellTreeCtrl::GetRootItems
// address: 0x10046a93
// body: available
// range: 0x10046a93-0x10046bbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10046ab2 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: int __thiscall CMFCShellTreeCtrl::GetRootItems(void)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCShellTreeCtrl::GetRootItems(CMFCShellTreeCtrl *this)

{
  HWND hWnd;
  HRESULT HVar1;
  undefined4 *puVar2;
  _ITEMIDLIST *p_Var3;
  LRESULT lParam;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80 [15];
  undefined4 local_44 [4];
  int local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  IShellFolder *local_1c;
  _ITEMIDLIST *local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x78;
  local_8 = 0x10046a9f;
  if (DAT_10169594 != (CShellManager *)0x0) {
    HVar1 = SHGetSpecialFolderLocation((HWND)0x0,0,&local_18);
    if ((HVar1 < 0) || (HVar1 = SHGetDesktopFolder(&local_1c), HVar1 < 0)) {
      return 0;
    }
    local_44[0] = 0x67;
    puVar2 = GlobalAlloc(0x40,0xc);
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[2] = local_18;
      p_Var3 = CShellManager::CopyItem(DAT_10169594,local_18);
      puVar2[1] = p_Var3;
      *puVar2 = 0;
      local_20 = puVar2;
      (**(code **)(*(int *)this + 0x160))(local_14,puVar2);
      local_8 = 0;
      local_34 = FUN_10002140(local_14,*(int *)(local_14[0] + -0xc));
      local_2c = (**(code **)(*(int *)this + 0x164))(puVar2,0);
      local_28 = (**(code **)(*(int *)this + 0x164))(puVar2,1);
      local_24 = 1;
      hWnd = *(HWND *)(this + 0x20);
      puVar2 = local_44;
      puVar5 = local_80;
      for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
      local_84 = 0xffff0002;
      local_88 = 0xffff0000;
      lParam = SendMessageW(hWnd,0x1132,0,(LPARAM)&local_88);
      SendMessageW(*(HWND *)(this + 0x20),0x1102,2,lParam);
      (*local_1c->lpVtbl->Release)(local_1c);
      FUN_10001030((undefined4 *)(local_14[0] + -0x10));
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

