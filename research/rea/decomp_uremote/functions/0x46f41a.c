// rea decompile_all
// name: std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
// address: 0x46f41a
// body: available
// range: 0x46f41a-0x46f477 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: bool __thiscall std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::_Grow(unsigned int,bool)
   
   Library: Visual Studio 2008 Release */

bool __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,uint param_1,
          bool param_2)

{
  uint uVar1;
  
  if (param_1 == 0xffffffff) {
    FUN_005cd40f();
  }
  if (*(uint *)(this + 0x18) < param_1) {
    FUN_0046fe33(param_1,*(undefined4 *)(this + 0x14));
  }
  else if ((param_2) && (param_1 < 0x10)) {
    uVar1 = *(uint *)(this + 0x14);
    if (param_1 < *(uint *)(this + 0x14)) {
      uVar1 = param_1;
    }
    FID_conflict__Tidy(1,uVar1);
  }
  else if (param_1 == 0) {
    _Eos(this,0);
  }
  return param_1 != 0;
}

