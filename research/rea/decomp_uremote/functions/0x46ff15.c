// rea decompile_all
// name: std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Inside
// address: 0x46ff15
// body: available
// range: 0x46ff15-0x46ff4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: bool __thiscall std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::_Inside(char const *)
   
   Library: Visual Studio 2008 Release */

bool __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Inside
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,char *param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  
  if (param_1 != (char *)0x0) {
    pbVar1 = this + 4;
    pbVar2 = pbVar1;
    if (0xf < *(uint *)(this + 0x18)) {
      pbVar2 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)pbVar1;
    }
    if (pbVar2 <= param_1) {
      if (0xf < *(uint *)(this + 0x18)) {
        pbVar1 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)pbVar1;
      }
      if (param_1 < pbVar1 + *(int *)(this + 0x14)) {
        return true;
      }
    }
  }
  return false;
}

