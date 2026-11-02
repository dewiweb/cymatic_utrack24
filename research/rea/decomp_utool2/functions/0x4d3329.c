// rea decompile_all
// name: __crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::unget
// address: 0x4d3329
// body: available
// range: 0x4d3329-0x4d3369 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::string_input_adapter<char> >::unget(char)
   
   Library: Visual Studio 2015 Release */

void __thiscall
__crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::unget
          (input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_> *this,
          char param_1)

{
  input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_> *piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = this + 0x10;
  iVar2 = *(int *)piVar1;
  *(int *)piVar1 = *(int *)piVar1 + -1;
  *(uint *)(this + 0x14) = *(int *)(this + 0x14) + -1 + (uint)(iVar2 != 0);
  uVar3 = *(uint *)(this + 0xc);
  if ((((*(uint *)(this + 8) == 0 && uVar3 == 0) ||
       ((*(uint *)(this + 0x14) <= uVar3 &&
        ((*(uint *)(this + 0x14) < uVar3 || (*(uint *)(this + 0x10) <= *(uint *)(this + 8))))))) &&
      (param_1 != '\0')) && (param_1 != -1)) {
    __crt_stdio_input::string_input_adapter<char>::unget
              (*(string_input_adapter<char> **)this,(int)param_1);
  }
  return;
}

