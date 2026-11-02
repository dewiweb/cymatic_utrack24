// rea decompile_all
// name: std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
// address: 0x46f38f
// body: available
// range: 0x46f38f-0x46f3fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::erase(unsigned int,unsigned int)
   
   Library: Visual Studio 2008 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,uint param_1,
          uint param_2)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  uint uVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  
  if (*(uint *)(this + 0x14) < param_1) {
    FUN_005cd447();
  }
  uVar2 = *(int *)(this + 0x14) - param_1;
  if (uVar2 < param_2) {
    param_2 = uVar2;
  }
  if (param_2 != 0) {
    pbVar3 = this + 4;
    pbVar1 = pbVar3;
    if (0xf < *(uint *)(this + 0x18)) {
      pbVar1 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)pbVar3;
      pbVar3 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)pbVar3;
    }
    char_traits<char>::_Move_s
              ((char *)(pbVar3 + param_1),*(uint *)(this + 0x18) - param_1,
               (char *)(pbVar1 + param_2 + param_1),uVar2 - param_2);
    _Eos(this,*(int *)(this + 0x14) - param_2);
  }
  return (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)this;
}

