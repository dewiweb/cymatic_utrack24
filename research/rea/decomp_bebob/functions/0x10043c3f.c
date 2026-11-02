// rea decompile_all
// name: CMFCShellListCtrl::EnumObjects
// address: 0x10043c3f
// body: available
// range: 0x10043c3f-0x10043e06 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual long __thiscall CMFCShellListCtrl::EnumObjects(struct IShellFolder *,struct
   _ITEMIDLIST *)
   
   Library: Visual Studio 2010 Release */

long __thiscall
CMFCShellListCtrl::EnumObjects(CMFCShellListCtrl *this,IShellFolder *param_1,_ITEMIDLIST *param_2)

{
  IShellFolder *This;
  int iVar1;
  undefined4 *puVar2;
  _ITEMIDLIST *p_Var3;
  LRESULT LVar4;
  undefined4 *puVar5;
  uint local_6c [3];
  uint local_60;
  uint local_5c;
  undefined **local_58;
  undefined4 local_50;
  undefined4 *local_4c;
  HRESULT local_30;
  LRESULT local_2c;
  int local_28;
  LRESULT local_24;
  SFGAOF local_20;
  IEnumIDList *local_1c;
  _ITEMIDLIST *local_18;
  ULONG local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  This = param_1;
  uStack_4 = 0x5c;
  local_8 = 0x10043c4b;
  local_1c = (IEnumIDList *)0x0;
  local_30 = (*param_1->lpVtbl->EnumObjects)(param_1,(HWND)0x0,*(SHCONTF *)(this + 0x140),&local_1c)
  ;
  if ((-1 < local_30) && (local_1c != (IEnumIDList *)0x0)) {
    local_14[0] = 1;
    iVar1 = (*local_1c->lpVtbl->Next)(local_1c,1,&local_18,local_14);
    while ((iVar1 == 0 && (local_14[0] != 0))) {
      _memset(local_6c,0,0x3c);
      local_6c[0] = 0xf;
      (*This->lpVtbl->AddRef)(This);
      puVar2 = GlobalAlloc(0x40,0xc);
      puVar2[2] = local_18;
      p_Var3 = CShellManager::ConcatenateItem(DAT_10169594,param_2,local_18);
      puVar2[1] = p_Var3;
      *puVar2 = This;
      local_58 = &PTR_1011d390;
      local_4c = puVar2;
      LVar4 = SendMessageW(*(HWND *)(this + 0x20),0x1004,0,0);
      local_50 = (**(code **)(*(int *)this + 0x198))(LVar4,puVar2);
      local_20 = 0xfc000;
      (*This->lpVtbl->GetAttributesOf)(This,1,&local_18,&local_20);
      if ((local_20 & 0x20000) != 0) {
        local_6c[0] = local_6c[0] | 8;
        local_5c = local_5c | 0xf00;
        local_60 = local_60 | 0x100;
      }
      if ((local_20 & 0x8000) != 0) {
        local_6c[0] = local_6c[0] | 8;
        local_5c = local_5c | 4;
        local_60 = local_60 | 4;
      }
      local_24 = SendMessageW(*(HWND *)(this + 0x20),0x104d,0,(LPARAM)local_6c);
      if (-1 < local_24) {
        local_2c = SendMessageW(*(HWND *)(this + 0x94),0x1200,0,0);
        param_1 = (IShellFolder *)0x0;
        if (0 < local_2c) {
          do {
            puVar5 = (undefined4 *)
                     (**(code **)(*(int *)this + 0x194))(&local_28,local_24,param_1,puVar2);
            local_8 = 0;
            CListCtrl::SetItemText((CListCtrl *)this,local_24,(int)param_1,(wchar_t *)*puVar5);
            local_8 = 0xffffffff;
            FUN_10001030((undefined4 *)(local_28 + -0x10));
            param_1 = (IShellFolder *)((int)&param_1->lpVtbl + 1);
          } while ((int)param_1 < local_2c);
        }
      }
      local_14[0] = 0;
      iVar1 = (*local_1c->lpVtbl->Next)(local_1c,1,&local_18,local_14);
    }
    (*local_1c->lpVtbl->Release)(local_1c);
  }
  return local_30;
}

