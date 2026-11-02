// rea decompile_all
// name: std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
// address: 0x46e881
// body: available
// range: 0x46e881-0x46e912 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::assign(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   const &,unsigned int,unsigned int)
   
   Library: Visual Studio 2008 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
          uint param_2,uint param_3)

{
  bool bVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  uint uVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar4;
  
  if (*(uint *)(param_1 + 0x14) < param_2) {
    FUN_005cd447();
  }
  uVar3 = *(int *)(param_1 + 0x14) - param_2;
  if (param_3 < *(int *)(param_1 + 0x14) - param_2) {
    uVar3 = param_3;
  }
  if (this == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_1) {
    erase(this,uVar3 + param_2,0xffffffff);
    erase(this,0,param_2);
  }
  else {
    bVar1 = _Grow(this,uVar3,false);
    if (bVar1) {
      if (*(uint *)(param_1 + 0x18) < 0x10) {
        pbVar4 = param_1 + 4;
      }
      else {
        pbVar4 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                  (param_1 + 4);
      }
      if (*(uint *)(this + 0x18) < 0x10) {
        pbVar2 = this + 4;
      }
      else {
        pbVar2 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(this + 4);
      }
      Copy_s(pbVar2,*(uint *)(this + 0x18),pbVar4 + param_2,uVar3);
      _Eos(this,uVar3);
    }
  }
  return (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)this;
}

