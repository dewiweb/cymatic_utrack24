// rea decompile_all
// name: ATL::CTime::CTime
// address: 0x10015cbd
// body: available
// range: 0x10015cbd-0x10015d31 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10015cf0 to 0x10001000 FUN_10001000 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: __thiscall ATL::CTime::CTime(struct _FILETIME const &,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall ATL::CTime::CTime(CTime *this,_FILETIME *param_1,int param_2)

{
  BOOL BVar1;
  _FILETIME local_28;
  undefined4 local_20;
  undefined4 local_1c;
  _SYSTEMTIME local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  BVar1 = FileTimeToLocalFileTime(param_1,&local_28);
  if (BVar1 != 0) {
    BVar1 = FileTimeToSystemTime(&local_28,&local_18);
    if (BVar1 != 0) {
      CTime((CTime *)&local_20,&local_18,param_2);
      *(undefined4 *)this = local_20;
      *(undefined4 *)(this + 4) = local_1c;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_10001000((undefined4 *)0x80070057);
}

