// rea decompile_all
// name: __crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::process
// address: 0x4d2a99
// body: available
// range: 0x4d2a99-0x4d2b1d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::string_input_adapter<char> >::process(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::process
          (input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *this)

{
  string_input_adapter<char> *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  this_00 = (string_input_adapter<char> *)(this + 8);
  bVar1 = string_input_adapter<char>::validate(this_00);
  if (bVar1) {
    bVar1 = format_string_parser<char>::validate((format_string_parser<char> *)(this + 0x18));
    if (bVar1) {
      do {
        bVar1 = format_string_parser<char>::advance((format_string_parser<char> *)(this + 0x18));
        if (!bVar1) break;
        bVar1 = process_state(this);
      } while (bVar1);
      iVar2 = *(int *)(this + 0x70);
      if (*(int *)(this + 0x74) == 0) {
        iVar3 = string_input_adapter<char>::get(this_00);
        if (iVar3 == -1) {
          iVar2 = -1;
        }
        string_input_adapter<char>::unget(this_00,iVar3);
      }
      if (((*(uint *)this & 1) != 0) && (iVar3 = *(int *)(this + 0x24), iVar3 != 0)) {
        piVar4 = __errno();
        *piVar4 = iVar3;
        FUN_004d0d1c();
      }
    }
    else {
      iVar2 = -1;
    }
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}

