// rea decompile_all
// name: __crt_stdio_input::format_string_parser<char>::advance
// address: 0x4d2884
// body: available
// range: 0x4d2884-0x4d29a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: bool __thiscall __crt_stdio_input::format_string_parser<char>::advance(void)
   
   Library: Visual Studio 2015 Release */

bool __thiscall
__crt_stdio_input::format_string_parser<char>::advance(format_string_parser<char> *this)

{
  format_string_parser<char> *pfVar1;
  format_string_parser<char> *pfVar2;
  bool bVar3;
  int iVar4;
  
  if (*(int *)(this + 0xc) == 0) {
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined2 *)(this + 0x14) = 0;
    this[0x16] = (format_string_parser<char>)0x0;
    *(undefined4 *)(this + 0x18) = 0;
    *(undefined4 *)(this + 0x1c) = 0;
    *(undefined4 *)(this + 0x20) = 0;
    this[0x24] = (format_string_parser<char>)0x0;
    *(undefined4 *)(this + 0x28) = 0;
    if (**(byte **)(this + 8) == 0) {
      *(undefined4 *)(this + 0x10) = 1;
    }
    else {
      iVar4 = _isspace((uint)**(byte **)(this + 8));
      if (iVar4 != 0) {
        *(undefined4 *)(this + 0x10) = 2;
        while (iVar4 = _isspace((uint)**(byte **)(this + 8)), iVar4 != 0) {
          *(int *)(this + 8) = *(int *)(this + 8) + 1;
        }
        return true;
      }
      pfVar2 = *(format_string_parser<char> **)(this + 8);
      if ((*pfVar2 != (format_string_parser<char>)0x25) ||
         (pfVar1 = pfVar2 + 1, *pfVar1 == (format_string_parser<char>)0x25)) {
        *(undefined4 *)(this + 0x10) = 3;
        this[0x14] = *pfVar2;
        *(format_string_parser<char> **)(this + 8) =
             pfVar2 + (*pfVar2 == (format_string_parser<char>)0x25) + 1;
        bVar3 = scan_optional_literal_character_trail_bytes_tchar(this,'\0');
        return bVar3;
      }
      *(undefined4 *)(this + 0x10) = 4;
      *(format_string_parser<char> **)(this + 8) = pfVar1;
      if (*pfVar1 == (format_string_parser<char>)0x2a) {
        this[0x16] = (format_string_parser<char>)0x1;
        *(format_string_parser<char> **)(this + 8) = pfVar2 + 2;
      }
      bVar3 = scan_optional_field_width(this);
      if (bVar3) {
        scan_optional_length_modifier(this);
        scan_optional_wide_modifier(this);
        bVar3 = scan_conversion_specifier(this);
        if (bVar3) {
          if ((&DAT_007312a0)[*(int *)(this + 0x20) + *(int *)(this + 0x28) * 0xc] != '\0') {
            return true;
          }
          *(undefined4 *)(this + 0x10) = 0;
          *(undefined2 *)(this + 0x14) = 0;
          this[0x16] = (format_string_parser<char>)0x0;
          *(undefined4 *)(this + 0x18) = 0;
          *(undefined4 *)(this + 0x1c) = 0;
          *(undefined4 *)(this + 0x20) = 0;
          this[0x24] = (format_string_parser<char>)0x0;
          *(undefined4 *)(this + 0x28) = 0;
          *(undefined4 *)(this + 0xc) = 0x16;
        }
      }
    }
  }
  return false;
}

