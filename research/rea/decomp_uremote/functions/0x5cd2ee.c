// rea decompile_all
// name: FID_conflict:runtime_error
// address: 0x5cd2ee
// body: available
// range: 0x5cd2ee-0x5cd322 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    public: __thiscall std::logic_error::logic_error(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const &)
    public: __thiscall std::runtime_error::runtime_error(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const &)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void FID_conflict_runtime_error
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                *param_1)

{
  exception *in_ECX;
  
  std::exception::exception(in_ECX);
  *(undefined ***)in_ECX = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(in_ECX + 0xc),
             param_1);
  return;
}

