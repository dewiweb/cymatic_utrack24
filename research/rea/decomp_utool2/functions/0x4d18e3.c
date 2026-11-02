// rea decompile_all
// name: make_input_adapter_character_source<>
// address: 0x4d18e3
// body: available
// range: 0x4d18e3-0x4d1900 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    class __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<char> > __cdecl
   __crt_strtox::make_input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<char> >(class
   __crt_stdio_input::console_input_adapter<char> * const,unsigned __int64,bool * const)
    class __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> > __cdecl
   __crt_strtox::make_input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >(class
   __crt_stdio_input::console_input_adapter<wchar_t> * const,unsigned __int64,bool * const)
    class __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::stream_input_adapter<char> > __cdecl
   __crt_strtox::make_input_adapter_character_source<class
   __crt_stdio_input::stream_input_adapter<char> >(class
   __crt_stdio_input::stream_input_adapter<char> * const,unsigned __int64,bool * const)
    class __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::stream_input_adapter<wchar_t> > __cdecl
   __crt_strtox::make_input_adapter_character_source<class
   __crt_stdio_input::stream_input_adapter<wchar_t> >(class
   __crt_stdio_input::stream_input_adapter<wchar_t> * const,unsigned __int64,bool * const)
     6 names - too many to list
   
   Library: Visual Studio 2015 Release */

undefined4
make_input_adapter_character_source<>
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  input_adapter_character_source<>(param_2,param_3,param_4,param_5);
  return param_1;
}

