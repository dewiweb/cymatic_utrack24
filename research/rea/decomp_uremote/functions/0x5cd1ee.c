// rea decompile_all
// name: std::_Locinfo::_Locinfo_ctor
// address: 0x5cd1ee
// body: available
// range: 0x5cd1ee-0x5cd249 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static void __cdecl std::_Locinfo::_Locinfo_ctor(class std::_Locinfo *,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
   
   Library: Visual Studio 2008 Release */

void __cdecl
std::_Locinfo::_Locinfo_ctor
          (_Locinfo *param_1,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  char *pcVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *_Locale;
  
  if (*(uint *)(param_2 + 0x18) < 0x10) {
    _Locale = param_2 + 4;
  }
  else {
    _Locale = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 4);
  }
  pcVar1 = _setlocale(0,(char *)0x0);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x3c),
             pcVar1);
  if (_Locale != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    pcVar1 = _setlocale(0,(char *)_Locale);
    if (pcVar1 != (char *)0x0) goto LAB_005cd23d;
  }
  pcVar1 = "*";
LAB_005cd23d:
  basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x58),
             pcVar1);
  return;
}

