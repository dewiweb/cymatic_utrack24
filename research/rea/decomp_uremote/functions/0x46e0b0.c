// rea decompile_all
// name: ~basic_streambuf<>
// address: 0x46e0b0
// body: available
// range: 0x46e0b0-0x46e0d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x46e0d4 to 0x5cd50d std::_Mutex::~_Mutex (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual __thiscall std::basic_streambuf<char,struct std::char_traits<char>
   >::~basic_streambuf<char,struct std::char_traits<char> >(void)
    public: virtual __thiscall std::basic_streambuf<unsigned short,struct std::char_traits<unsigned
   short> >::~basic_streambuf<unsigned short,struct std::char_traits<unsigned short> >(void)
    public: virtual __thiscall std::basic_streambuf<wchar_t,struct std::char_traits<wchar_t>
   >::~basic_streambuf<wchar_t,struct std::char_traits<wchar_t> >(void)
   
   Library: Visual Studio 2010 Release */

void ~basic_streambuf<>(void)

{
  locale *this;
  undefined4 *in_ECX;
  
  this = (locale *)in_ECX[0xe];
  *in_ECX = std::basic_streambuf<char,std::char_traits<char>_>::vftable;
  if (this != (locale *)0x0) {
    std::locale::~locale(this);
    FUN_005af7b6(this);
  }
  std::_Mutex::~_Mutex((_Mutex *)(in_ECX + 1));
  return;
}

