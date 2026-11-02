// rea decompile_all
// name: ATL::CTime::CTime
// address: 0x10015bba
// body: available
// range: 0x10015bba-0x10015c62 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10015bdd to 0x10001000 FUN_10001000 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: __thiscall ATL::CTime::CTime(int,int,int,int,int,int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
ATL::CTime::CTime(CTime *this,int param_1,int param_2,int param_3,int param_4,int param_5,
                 int param_6,int param_7)

{
  __time64_t _Var1;
  undefined4 *puVar2;
  tm local_2c;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (0x76b < param_1) {
    if ((((param_2 - 1U < 0xc) && (param_3 - 1U < 0x1f)) && ((uint)param_4 < 0x18)) &&
       (((uint)param_5 < 0x3c && ((uint)param_6 < 0x3c)))) {
      local_2c.tm_sec = param_6;
      local_2c.tm_year = param_1 + -0x76c;
      local_2c.tm_isdst = param_7;
      local_2c.tm_mon = param_2 + -1;
      local_2c.tm_min = param_5;
      local_2c.tm_hour = param_4;
      local_2c.tm_mday = param_3;
      _Var1 = __mktime64(&local_2c);
      *(__time64_t *)this = _Var1;
      if (_Var1 != -1) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      puVar2 = (undefined4 *)0x80070057;
      goto LAB_10015bdd;
    }
  }
  puVar2 = (undefined4 *)0x80004005;
LAB_10015bdd:
                    /* WARNING: Subroutine does not return */
  FUN_10001000(puVar2);
}

