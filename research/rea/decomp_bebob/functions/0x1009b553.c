// rea decompile_all
// name: CreateKey
// address: 0x1009b553
// body: available
// range: 0x1009b553-0x1009b5a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CSettingsStore::CreateKey(char const *)
    public: virtual int __thiscall CSettingsStore::CreateKey(wchar_t const *)
   
   Library: Visual Studio 2010 Release */

bool __thiscall CreateKey(void *this,short *param_1)

{
  char cVar1;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *pCVar2;
  int iVar3;
  
  if (*(int *)((int)this + 0x14) == 0) {
    pCVar2 = FUN_1009b4c5((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                          &param_1,param_1);
    iVar3 = Create((undefined4 *)((int)this + 4),*(HKEY *)((int)this + 4),*(LPCWSTR *)pCVar2,
                   (LPWSTR)0x0,0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0,(undefined4 *)0x0);
    FUN_10001030((undefined4 *)(param_1 + -8));
    cVar1 = '\x01' - (iVar3 != 0);
  }
  else {
    cVar1 = '\0';
  }
  return (bool)cVar1;
}

