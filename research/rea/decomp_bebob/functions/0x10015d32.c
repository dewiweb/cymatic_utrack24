// rea decompile_all
// name: ATL::CTime::GetLocalTm
// address: 0x10015d32
// body: available
// range: 0x10015d32-0x10015d88 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10015d51 to 0x10001000 FUN_10001000 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: struct tm * __thiscall ATL::CTime::GetLocalTm(struct tm *)const 
   
   Library: Visual Studio 2010 Release */

tm * __thiscall ATL::CTime::GetLocalTm(CTime *this,tm *param_1)

{
  errno_t eVar1;
  tm *ptVar2;
  int iVar3;
  tm local_2c;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (param_1 != (tm *)0x0) {
    eVar1 = FUN_100fb6c4(&local_2c,(uint *)this);
    if (eVar1 == 0) {
      ptVar2 = &local_2c;
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        param_1->tm_sec = ptVar2->tm_sec;
        ptVar2 = (tm *)&ptVar2->tm_min;
        param_1 = (tm *)&param_1->tm_min;
      }
    }
    ptVar2 = (tm *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return ptVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10001000((undefined4 *)0x80004005);
}

