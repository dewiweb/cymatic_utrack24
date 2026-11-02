// rea decompile_all
// name: std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos
// address: 0x46f3fe
// body: available
// range: 0x46f3fe-0x46f419 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::_Eos(unsigned int)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release */

void __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,uint param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  
  *(uint *)(this + 0x14) = param_1;
  if (*(uint *)(this + 0x18) < 0x10) {
    pbVar1 = this + 4;
  }
  else {
    pbVar1 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(this + 4);
  }
  pbVar1[param_1] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
  return;
}

