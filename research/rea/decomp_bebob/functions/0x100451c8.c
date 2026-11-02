// rea decompile_all
// name: CVSListBox::EditItem
// address: 0x100451c8
// body: available
// range: 0x100451c8-0x100452f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100452db to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CVSListBox::EditItem(int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CVSListBox::EditItem(CVSListBox *this,int param_1)

{
  undefined4 *puVar1;
  CEdit *this_00;
  int iVar2;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  *(undefined4 *)(this + 0x1cc) = 0;
  *(undefined4 *)(this + 0x1c8) = 0;
  if (((this != (CVSListBox *)0x0) && (*(int *)(this + 0x20) != 0)) &&
     (*(CWnd **)(this + 0x104) != (CWnd *)0x0)) {
    CWnd::SetFocus(*(CWnd **)(this + 0x104));
    this_00 = CListCtrl::EditLabel(*(CListCtrl **)(this + 0x104),param_1);
    if (this_00 != (CEdit *)0x0) {
      CWnd::SubclassWindow((CWnd *)(this + 0x110),*(HWND__ **)(this_00 + 0x20));
      EnableBrowseButton(this + 0x110,*(int *)(this + 0xd4),(short *)&DAT_10123cf8);
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      CListCtrl::GetItemRect(*(CListCtrl **)(this + 0x104),param_1,&local_18,2);
      local_28.left = 0;
      local_28.top = 0;
      local_28.right = 0;
      local_28.bottom = 0;
      GetClientRect(*(HWND *)(this_00 + 0x20),&local_28);
      CWnd::SetWindowPos((CWnd *)this_00,(CWnd *)0x0,-1,-1,local_18.right - local_18.left,
                         local_28.bottom - local_28.top,0x16);
      *(CVSListBox **)(this + 0x1cc) = this;
      *(undefined4 *)(this + 0x1c8) = 1;
      iVar2 = *(int *)(this + 0x7c);
      while (iVar2 != 0) {
        puVar1 = (undefined4 *)(iVar2 + 8);
        iVar2 = *(int *)(iVar2 + 4);
        if ((CWnd *)*puVar1 == (CWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        CWnd::EnableWindow((CWnd *)*puVar1,0);
      }
    }
  }
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

