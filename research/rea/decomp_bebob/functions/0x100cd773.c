// rea decompile_all
// name: CShellManager::ConcatenateItem
// address: 0x100cd773
// body: available
// range: 0x100cd773-0x100cd7d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: struct _ITEMIDLIST * __thiscall CShellManager::ConcatenateItem(struct _ITEMIDLIST const
   *,struct _ITEMIDLIST const *)
   
   Library: Visual Studio 2010 Release */

_ITEMIDLIST * __thiscall
CShellManager::ConcatenateItem(CShellManager *this,_ITEMIDLIST *param_1,_ITEMIDLIST *param_2)

{
  uint uVar1;
  _ITEMIDLIST *_Dst;
  size_t _Size;
  
  _Size = 0;
  if (param_1 != (_ITEMIDLIST *)0x0) {
    uVar1 = GetItemSize(this,param_1);
    _Size = uVar1 - 2;
  }
  uVar1 = GetItemSize(this,param_2);
  _Dst = CreateItem(this,uVar1 + _Size);
  if (_Dst != (_ITEMIDLIST *)0x0) {
    if (param_1 != (_ITEMIDLIST *)0x0) {
      FID_conflict__memcpy(_Dst,param_1,_Size);
    }
    FID_conflict__memcpy((_Dst->mkid).abID + (_Size - 2),param_2,uVar1);
  }
  return _Dst;
}

