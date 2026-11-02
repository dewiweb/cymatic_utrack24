// rea decompile_all
// name: HashKey
// address: 0x10058bec
// body: available
// range: 0x10058bec-0x10058c3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10058bfb to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: unsigned int __thiscall CMapStringToOb::HashKey(wchar_t const *)const 
    public: unsigned int __thiscall CMapStringToPtr::HashKey(wchar_t const *)const 
   
   Library: Visual Studio 2010 Release */

uint HashKey(wchar_t *param_1)

{
  wchar_t *_Str;
  size_t sVar1;
  uint uVar2;
  
  _Str = param_1;
  if (param_1 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  param_1 = (wchar_t *)0x811c9dc5;
  uVar2 = 0;
  sVar1 = _wcslen(_Str);
  if (sVar1 != 0) {
    do {
      param_1 = (wchar_t *)((uint)(ushort)_Str[uVar2] ^ (int)param_1 * 0x1000193);
      uVar2 = uVar2 + sVar1 / 10 + 1;
    } while (uVar2 < sVar1);
  }
  return (uint)param_1;
}

