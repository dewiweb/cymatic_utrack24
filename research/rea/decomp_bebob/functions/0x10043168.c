// rea decompile_all
// name: ATL::CTime::GetAsSystemTime
// address: 0x10043168
// body: available
// range: 0x10043168-0x100431e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: bool __thiscall ATL::CTime::GetAsSystemTime(struct _SYSTEMTIME &)const 
   
   Library: Visual Studio 2010 Release */

bool __thiscall ATL::CTime::GetAsSystemTime(CTime *this,_SYSTEMTIME *param_1)

{
  undefined1 uVar1;
  tm *ptVar2;
  tm local_2c;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  ptVar2 = GetLocalTm(this,&local_2c);
  if (ptVar2 != (tm *)0x0) {
    param_1->wYear = (short)ptVar2->tm_year + 0x76c;
    param_1->wMonth = (short)ptVar2->tm_mon + 1;
    param_1->wDayOfWeek = (WORD)ptVar2->tm_wday;
    param_1->wDay = (WORD)ptVar2->tm_mday;
    param_1->wHour = (WORD)ptVar2->tm_hour;
    param_1->wMinute = (WORD)ptVar2->tm_min;
    param_1->wSecond = (WORD)ptVar2->tm_sec;
    param_1->wMilliseconds = 0;
  }
  uVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar1;
}

