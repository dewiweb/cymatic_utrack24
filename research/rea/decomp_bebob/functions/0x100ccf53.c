// rea decompile_all
// name: CListCtrl::InsertItem
// address: 0x100ccf53
// body: available
// range: 0x100ccf53-0x100ccfa0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CListCtrl::InsertItem(unsigned int,int,wchar_t const *,unsigned
   int,unsigned int,int,long)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CListCtrl::InsertItem
          (CListCtrl *this,uint param_1,int param_2,wchar_t *param_3,uint param_4,uint param_5,
          int param_6,long param_7)

{
  LRESULT LVar1;
  uint local_40;
  int local_3c;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  wchar_t *local_2c;
  int local_24;
  long local_20;
  
  local_40 = param_1;
  local_3c = param_2;
  local_38 = 0;
  local_2c = param_3;
  local_34 = param_4;
  local_30 = param_5;
  local_24 = param_6;
  local_20 = param_7;
  LVar1 = SendMessageW(*(HWND *)(this + 0x20),0x104d,0,(LPARAM)&local_40);
  return LVar1;
}

