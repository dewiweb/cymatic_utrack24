// rea decompile_all
// name: ATL::CTime::CTime
// address: 0x10015c63
// body: available
// range: 0x10015c63-0x10015cbc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: __thiscall ATL::CTime::CTime(struct _SYSTEMTIME const &,int)
   
   Library: Visual Studio 2010 Release */

CTime * __thiscall ATL::CTime::CTime(CTime *this,_SYSTEMTIME *param_1,int param_2)

{
  CTime *local_c;
  CTime *local_8;
  
  if (param_1->wYear < 0x76c) {
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
  }
  else {
    local_c = this;
    local_8 = this;
    CTime((CTime *)&local_c,(uint)param_1->wYear,(uint)param_1->wMonth,(uint)param_1->wDay,
          (uint)param_1->wHour,(uint)param_1->wMinute,(uint)param_1->wSecond,param_2);
    *(CTime **)this = local_c;
    *(CTime **)(this + 4) = local_8;
  }
  return this;
}

