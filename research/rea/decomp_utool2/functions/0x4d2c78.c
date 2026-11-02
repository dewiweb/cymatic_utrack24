// rea decompile_all
// name: __crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::process_literal_character_tchar
// address: 0x4d2c78
// body: available
// range: 0x4d2c78-0x4d2ccd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::string_input_adapter<char> >::process_literal_character_tchar(char)
   
   Library: Visual Studio 2015 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
process_literal_character_tchar
          (input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *this,char param_1)

{
  string_input_adapter<char> *this_00;
  ushort *puVar1;
  uint uVar2;
  bool bVar3;
  
  puVar1 = ___pctype_func();
  if ((puVar1[(byte)param_1] & 0x8000) == 0) {
    bVar3 = true;
  }
  else {
    this_00 = (string_input_adapter<char> *)(this + 8);
    uVar2 = string_input_adapter<char>::get(this_00);
    bVar3 = uVar2 == (byte)this[0x2d];
    if (!bVar3) {
      string_input_adapter<char>::unget(this_00,uVar2);
      string_input_adapter<char>::unget(this_00,(int)param_1);
    }
  }
  return bVar3;
}

