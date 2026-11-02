// rea decompile_all
// name: FID_conflict:_Tidy
// address: 0x46e930
// body: available
// range: 0x46e930-0x46e97a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Different Base Names
    protected: void __thiscall std::basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >::_Tidy(bool,unsigned int)
    protected: void __thiscall std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::_Tidy(bool,unsigned int)
   
   Library: Visual Studio 2005 Release */

void FID_conflict__Tidy(char param_1,uint param_2)

{
  undefined4 uVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *in_ECX;
  
  if ((param_1 != '\0') && (0xf < *(uint *)(in_ECX + 0x18))) {
    uVar1 = *(undefined4 *)(in_ECX + 4);
    if (param_2 != 0) {
      Copy_s(in_ECX + 4,0x10,uVar1,param_2);
    }
    FUN_005af7b6(uVar1);
  }
  *(undefined4 *)(in_ECX + 0x18) = 0xf;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos(in_ECX,param_2);
  return;
}

