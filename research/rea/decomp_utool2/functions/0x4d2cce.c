// rea decompile_all
// name: __crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::process_state
// address: 0x4d2cce
// body: available
// range: 0x4d2cce-0x4d2d03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4d2cf9 to 0x4d2c42 __crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::process_literal_character (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4d2cff to 0x4d2d4c __crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::process_whitespace (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::string_input_adapter<char> >::process_state(void)
   
   Library: Visual Studio 2015 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
process_state(input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  iVar1 = *(int *)(this + 0x28);
  if (iVar1 == 2) {
    bVar3 = process_whitespace(this);
    return bVar3;
  }
  if (iVar1 == 3) {
    bVar3 = process_literal_character(this);
    return bVar3;
  }
  if (iVar1 == 4) {
    cVar2 = FUN_004d2b38();
    if (cVar2 != '\0') {
      *(int *)(this + 0x74) = *(int *)(this + 0x74) + 1;
      return (bool)cVar2;
    }
  }
  return false;
}

