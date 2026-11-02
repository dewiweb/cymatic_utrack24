// rea decompile_all
// name: QueryDWORDValue
// address: 0x1009aeca
// body: available
// range: 0x1009aeca-0x1009af03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: long __thiscall ATL::CRegKey::QueryDWORDValue(char const *,unsigned long &)
    public: long __thiscall ATL::CRegKey::QueryDWORDValue(wchar_t const *,unsigned long &)
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release */

uint __thiscall QueryDWORDValue(void *this,LPCWSTR param_1,LPBYTE param_2)

{
  uint uVar1;
  DWORD local_8;
  
  local_8 = 4;
  uVar1 = RegQueryValueExW(*(HKEY *)this,param_1,(LPDWORD)0x0,(LPDWORD)&param_2,param_2,&local_8);
  if (uVar1 == 0) {
    uVar1 = -(uint)(param_2 != (LPBYTE)0x4) & 0xd;
  }
  return uVar1;
}

