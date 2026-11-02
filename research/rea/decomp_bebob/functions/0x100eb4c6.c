// rea decompile_all
// name: CMFCColorPopupMenu
// address: 0x100eb4c6
// body: available
// range: 0x100eb4c6-0x100eb52d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall CMFCColorPopupMenu::CMFCColorPopupMenu(class CArray<unsigned long,unsigned
   long> const &,unsigned long,char const *,char const *,char const *,class CList<unsigned
   long,unsigned long> &,int,int,int,unsigned long,unsigned int,int)
    public: __thiscall CMFCColorPopupMenu::CMFCColorPopupMenu(class CArray<unsigned long,unsigned
   long> const &,unsigned long,wchar_t const *,wchar_t const *,wchar_t const *,class CList<unsigned
   long,unsigned long> &,int,int,int,unsigned long,unsigned int,int)
   
   Library: Visual Studio 2010 Release */

CMFCPopupMenu * __thiscall
CMFCColorPopupMenu(void *this,int param_1,undefined4 param_2,undefined **param_3,undefined **param_4
                  ,undefined **param_5,CList<struct_HWND__*,struct_HWND__*> *param_6,int param_7,
                  undefined4 param_8,undefined4 param_9,undefined4 param_10,undefined4 param_11,
                  undefined4 param_12)

{
  CMFCPopupMenu::CMFCPopupMenu(this);
  *(undefined ***)this = CMFCColorPopupMenu::vftable;
  FUN_100aa9f2((void *)((int)this + 0x10c4),param_1,param_2,param_3,param_4,param_5,param_6,param_7,
               param_8,param_9,param_10,param_11,0);
  *(undefined4 *)((int)this + 0x1eb4) = 0;
  *(undefined4 *)((int)this + 0x1e3c) = param_12;
  return this;
}

