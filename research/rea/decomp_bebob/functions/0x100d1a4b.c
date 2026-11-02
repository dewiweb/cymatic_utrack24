// rea decompile_all
// name: AddItem
// address: 0x100d1a4b
// body: available
// range: 0x100d1a4b-0x100d1b38 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100d1a5c to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CMFCToolBarComboBoxButton::AddItem(char const *,unsigned long)
    public: virtual int __thiscall CMFCToolBarComboBoxButton::AddItem(wchar_t const *,unsigned long)
   
   Library: Visual Studio 2010 Release */

int __thiscall AddItem(void *this,wchar_t *param_1,HWND__ *param_2)

{
  int iVar1;
  WPARAM wParam;
  
  if (param_1 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  if (*(int *)(*(int *)((int)this + 0xb8) + -0xc) == 0) {
    FUN_100022b0((void *)((int)this + 0xb8),param_1);
    if (*(CWnd **)((int)this + 0xb0) != (CWnd *)0x0) {
      CWnd::SetWindowTextW(*(CWnd **)((int)this + 0xb0),*(wchar_t **)((int)this + 0xb8));
    }
  }
  iVar1 = FindItem(this,param_1);
  if (iVar1 < 0) {
    AddTail((void *)((int)this + 0xbc),param_1);
    CList<HWND__*,HWND__*>::AddTail((CList<HWND__*,HWND__*> *)((int)this + 0xd8),param_2);
  }
  iVar1 = *(int *)((int)this + 0xb4);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x20) != 0)) {
    wParam = SendMessageW(*(HWND *)(iVar1 + 0x20),0x158,0xffffffff,(LPARAM)param_1);
    if (wParam == 0xffffffff) {
      wParam = SendMessageW(*(HWND *)(*(int *)((int)this + 0xb4) + 0x20),0x143,0,(LPARAM)param_1);
    }
    SendMessageW(*(HWND *)(*(int *)((int)this + 0xb4) + 0x20),0x14e,wParam,0);
    SendMessageW(*(HWND *)(*(int *)((int)this + 0xb4) + 0x20),0x151,wParam,(LPARAM)param_2);
    CComboBox::SetEditSel(*(CComboBox **)((int)this + 0xb4),-1,0);
  }
  return *(int *)((int)this + 200) + -1;
}

