// rea decompile_all
// name: CMFCShellTreeCtrl::SelectPath
// address: 0x1004679e
// body: available
// range: 0x1004679e-0x10046a92 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: int __thiscall CMFCShellTreeCtrl::SelectPath(struct _ITEMIDLIST const *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCShellTreeCtrl::SelectPath(CMFCShellTreeCtrl *this,_ITEMIDLIST *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  _ITEMIDLIST *p_Var3;
  LRESULT LVar4;
  ulong uVar5;
  DWORD_PTR DVar6;
  int iVar7;
  _TREEITEM *p_Var8;
  undefined **local_5b4;
  undefined4 *local_5b0;
  undefined4 local_5ac;
  undefined4 local_5a8;
  undefined4 local_5a4;
  undefined4 local_5a0;
  undefined4 local_59c;
  undefined4 local_598;
  undefined4 *local_594;
  _ITEMIDLIST *local_590;
  int local_58c;
  _TREEITEM *local_588;
  _TREEITEM *local_584;
  _TREEITEM *local_580;
  SHFILEINFOW local_57c;
  SHFILEINFOW local_2c8;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x5a4;
  local_8 = 0x100467ad;
  local_584 = (_TREEITEM *)param_1;
  local_598 = 0;
  if (param_1 != (_ITEMIDLIST *)0x0) {
    local_580 = (_TREEITEM *)SendMessageW(*(HWND *)(this + 0x20),0x110a,0,0);
    SendMessageW(*(HWND *)(this + 0x20),0xb,0,0);
    uVar2 = CShellManager::GetItemCount(DAT_10169594,(_ITEMIDLIST *)local_584);
    if (uVar2 != 0) {
      local_5b4 = CList<_ITEMIDLIST*,_ITEMIDLIST*>::vftable;
      local_5a8 = 0;
      local_5a4 = 0;
      local_5ac = 0;
      local_5b0 = (undefined4 *)0x0;
      local_5a0 = 0;
      local_59c = 10;
      local_8 = 0;
      p_Var3 = CShellManager::CopyItem(DAT_10169594,(_ITEMIDLIST *)local_584);
      CList<_ITEMIDLIST*,_ITEMIDLIST*>::AddHead
                ((CList<_ITEMIDLIST*,_ITEMIDLIST*> *)&local_5b4,p_Var3);
      p_Var8 = local_584;
      while (iVar7 = CShellManager::GetParentItem
                               (DAT_10169594,(_ITEMIDLIST *)p_Var8,(_ITEMIDLIST **)&local_588),
            puVar1 = local_5b0, 0 < iVar7) {
        CList<_ITEMIDLIST*,_ITEMIDLIST*>::AddHead
                  ((CList<_ITEMIDLIST*,_ITEMIDLIST*> *)&local_5b4,(_ITEMIDLIST *)local_588);
        p_Var8 = local_588;
      }
      while (puVar1 != (undefined4 *)0x0) {
        local_594 = (undefined4 *)*puVar1;
        local_590 = (_ITEMIDLIST *)puVar1[2];
        if (local_580 != (_TREEITEM *)0x0) {
          LVar4 = SendMessageW(*(HWND *)(this + 0x20),0x110a,4,(LPARAM)local_580);
          if (LVar4 == 0) {
            SendMessageW(*(HWND *)(this + 0x20),0x1102,2,(LPARAM)local_580);
          }
          local_58c = 0;
          local_584 = (_TREEITEM *)SendMessageW(*(HWND *)(this + 0x20),0x110a,4,(LPARAM)local_580);
          do {
            if (local_584 == (_TREEITEM *)0x0) break;
            uVar5 = CTreeCtrl::GetItemData((CTreeCtrl *)this,local_584);
            if ((((uVar5 != 0) &&
                 (DVar6 = SHGetFileInfoW(*(LPCWSTR *)(uVar5 + 4),0,&local_57c,0x2b4,0x208),
                 DVar6 != 0)) &&
                (DVar6 = SHGetFileInfoW((LPCWSTR)local_590,0,&local_2c8,0x2b4,0x208), DVar6 != 0))
               && (iVar7 = lstrcmpW(local_57c.szDisplayName,local_2c8.szDisplayName), iVar7 == 0)) {
              local_58c = 1;
              local_580 = local_584;
            }
            local_584 = (_TREEITEM *)SendMessageW(*(HWND *)(this + 0x20),0x110a,1,(LPARAM)local_584)
            ;
          } while (local_58c == 0);
          if (local_58c == 0) {
            local_580 = (_TREEITEM *)0x0;
          }
        }
        CShellManager::FreeItem(DAT_10169594,local_590);
        puVar1 = local_594;
      }
      local_8 = 0xffffffff;
      local_5b4 = CList<_ITEMIDLIST*,_ITEMIDLIST*>::vftable;
      CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)&local_5b4);
    }
    if (local_580 != (_TREEITEM *)0x0) {
      *(undefined4 *)(this + 0x78) = 1;
      SendMessageW(*(HWND *)(this + 0x20),0x110b,9,(LPARAM)local_580);
      LVar4 = SendMessageW(*(HWND *)(this + 0x20),0x110a,4,(LPARAM)local_580);
      if (LVar4 == 0) {
        SendMessageW(*(HWND *)(this + 0x20),0x1102,2,(LPARAM)local_580);
      }
      SendMessageW(*(HWND *)(this + 0x20),0x1114,0,(LPARAM)local_580);
      *(undefined4 *)(this + 0x78) = 0;
      local_598 = 1;
    }
    SendMessageW(*(HWND *)(this + 0x20),0xb,1,0);
    RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
  }
  iVar7 = FUN_100f90cf();
  return iVar7;
}

