// rea decompile_all
// name: CMFCShellListCtrl::OnSetColumns
// address: 0x100436a3
// body: available
// range: 0x100436a3-0x10043724 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCShellListCtrl::OnSetColumns(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCShellListCtrl::OnSetColumns(CMFCShellListCtrl *this)

{
  int iVar1;
  wchar_t *local_18 [4];
  int local_8;
  
  iVar1 = (**(code **)(*(int *)this + 0x164))();
  iVar1 = SendMessageW(*(HWND *)(iVar1 + 0x20),0x1200,0,0);
  if (0 < iVar1) {
    do {
      local_8 = iVar1;
      SendMessageW(*(HWND *)(this + 0x20),0x101c,0,0);
      local_8 = local_8 + -1;
      iVar1 = local_8;
    } while (local_8 != 0);
  }
  local_18[0] = L"Name";
  local_18[1] = L"Size";
  local_18[2] = L"Type";
  local_18[3] = L"Modified";
  iVar1 = 0;
  do {
    CListCtrl::InsertColumn((CListCtrl *)this,iVar1,local_18[iVar1],(uint)(iVar1 == 1),100,iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return;
}

