// rea decompile_all
// name: std::ctype<char>::_Do_narrow_s
// address: 0x4605fb
// body: available
// range: 0x4605fb-0x460628 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual char const * __thiscall std::ctype<char>::_Do_narrow_s(char const *,char
   const *,char,char *,unsigned int)const 
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

char * __thiscall
std::ctype<char>::_Do_narrow_s
          (ctype<char> *this,char *param_1,char *param_2,char param_3,char *param_4,uint param_5)

{
  if (param_5 < (uint)((int)param_2 - (int)param_1)) {
    FUN_005afe9b();
  }
  _memcpy_s(param_4,param_5,param_1,(int)param_2 - (int)param_1);
  return param_2;
}

