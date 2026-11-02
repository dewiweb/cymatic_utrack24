// rea decompile_all
// name: std::locale::_Init
// address: 0x5cd154
// body: available
// range: 0x5cd154-0x5cd1ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    private: static class std::locale::_Locimp * __cdecl std::locale::_Init(void)
   
   Library: Visual Studio 2008 Release */

_Locimp * __cdecl std::locale::_Init(void)

{
  _Locimp *p_Var1;
  _Lockit local_14 [12];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x5cd160;
  p_Var1 = DAT_0095d46c;
  if (DAT_0095d46c == (_Locimp *)0x0) {
    _Lockit::_Lockit(local_14,0);
    local_8 = 0;
    p_Var1 = DAT_0095d46c;
    if (DAT_0095d46c == (_Locimp *)0x0) {
      p_Var1 = (_Locimp *)FUN_005af82d(0x34);
      local_8._0_1_ = 1;
      if (p_Var1 == (_Locimp *)0x0) {
        p_Var1 = (_Locimp *)0x0;
      }
      else {
        p_Var1 = (_Locimp *)_Locimp::_Locimp(p_Var1,false);
      }
      local_8 = (uint)local_8._1_3_ << 8;
      _Setgloballocale(p_Var1);
      *(undefined4 *)(p_Var1 + 0x10) = 0x3f;
      basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(p_Var1 + 0x18),
                 "C");
      DAT_0095d470 = (facet *)p_Var1;
      facet::_Incref((facet *)p_Var1);
      _DAT_0095d488 = DAT_0095d470;
    }
    local_8 = 0xffffffff;
    FUN_005cd2d7();
  }
  return p_Var1;
}

