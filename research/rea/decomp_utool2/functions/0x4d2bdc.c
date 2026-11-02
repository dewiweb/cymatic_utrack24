// rea decompile_all
// name: __crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::process_integer_specifier
// address: 0x4d2bdc
// body: available
// range: 0x4d2bdc-0x4d2c41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::string_input_adapter<char> >::process_integer_specifier(unsigned int,bool)
   
   Library: Visual Studio 2015 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
process_integer_specifier
          (input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *this,uint param_1,
          bool param_2)

{
  bool bVar1;
  __uint64 _Var2;
  undefined1 auStack_38 [24];
  undefined4 uStack_20;
  undefined4 uStack_8;
  
  uStack_8 = this;
  process_whitespace(this);
  uStack_8 = (input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *)
             ((uint)uStack_8 & 0xffffff);
  make_input_adapter_character_source<>
            (auStack_38,this + 8,*(undefined4 *)(this + 0x30),*(undefined4 *)(this + 0x34),
             (int)&uStack_8 + 3);
  _Var2 = __crt_strtox::
          parse_integer<unsigned___int64,__crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>_>
                    (*(undefined4 *)(this + 0x68));
  if (uStack_8._3_1_ == '\0') {
    bVar1 = false;
  }
  else if (this[0x2e] == (input_processor<char,__crt_stdio_input::string_input_adapter<char>_>)0x0)
  {
    uStack_20 = 0x4d2c3b;
    bVar1 = write_integer(this,_Var2,true);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

