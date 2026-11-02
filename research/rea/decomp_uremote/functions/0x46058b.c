// rea decompile_all
// name: std::ctype<char>::do_widen
// address: 0x46058b
// body: available
// range: 0x46058b-0x4605a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual char const * __thiscall std::ctype<char>::do_widen(char const *,char const
   *,char *)const 
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

char * __thiscall
std::ctype<char>::do_widen(ctype<char> *this,char *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)(**(code **)(*(int *)this + 0x1c))
                             (param_1,param_2,param_3,(int)param_2 - (int)param_1);
  return pcVar1;
}

