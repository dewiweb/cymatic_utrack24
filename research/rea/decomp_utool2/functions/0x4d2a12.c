// rea decompile_all
// name: __crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::is_character_allowed_in_string
// address: 0x4d2a12
// body: available
// range: 0x4d2a12-0x4d2a57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::string_input_adapter<char> >::is_character_allowed_in_string(enum
   __crt_stdio_input::conversion_mode,int)const 
   
   Library: Visual Studio 2015 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
is_character_allowed_in_string
          (input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *this,
          conversion_mode param_1,int param_2)

{
  bool bVar1;
  
  if (param_2 != -1) {
    if (param_1 == 0) {
      return true;
    }
    if (param_1 == 1) {
      if (4 < param_2 - 9U) {
        bVar1 = param_2 == 0x20;
        goto LAB_004d2a4d;
      }
    }
    else if (param_1 == 8) {
      bVar1 = scanset_buffer<unsigned_char>::test
                        ((scanset_buffer<unsigned_char> *)(this + 0x44),(uchar)param_2);
      bVar1 = !bVar1;
LAB_004d2a4d:
      return !bVar1;
    }
  }
  return false;
}

