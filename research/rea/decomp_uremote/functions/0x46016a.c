// rea decompile_all
// name: Copy_s
// address: 0x46016a
// body: available
// range: 0x46016a-0x460185 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: static unsigned short * __cdecl std::char_traits<unsigned short>::_Copy_s(unsigned short
   *,unsigned int,unsigned short const *,unsigned int)
    public: static wchar_t * __cdecl std::char_traits<wchar_t>::_Copy_s(wchar_t *,unsigned
   int,wchar_t const *,unsigned int)
   
   Library: Visual Studio 2005 Release */

void * Copy_s(void *param_1,rsize_t param_2,void *param_3,rsize_t param_4)

{
  _memcpy_s(param_1,param_2,param_3,param_4);
  return param_1;
}

