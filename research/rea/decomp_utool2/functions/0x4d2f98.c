// rea decompile_all
// name: __crt_stdio_input::format_string_parser<char>::scan_optional_length_modifier
// address: 0x4d2f98
// body: available
// range: 0x4d2f98-0x4d30b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: void __thiscall
   __crt_stdio_input::format_string_parser<char>::scan_optional_length_modifier(void)
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

void __thiscall
__crt_stdio_input::format_string_parser<char>::scan_optional_length_modifier
          (format_string_parser<char> *this)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(this + 8);
  bVar1 = *pbVar2;
  if (bVar1 < 0x6b) {
    if (bVar1 == 0x6a) {
      *(undefined4 *)(this + 0x20) = 5;
      *(byte **)(this + 8) = pbVar2 + 1;
      return;
    }
    if (bVar1 == 0x49) {
      bVar1 = pbVar2[1];
      if ((bVar1 == 0x33) && (pbVar2[2] == 0x32)) {
        *(byte **)(this + 8) = pbVar2 + 3;
      }
      else {
        if ((bVar1 == 0x36) && (pbVar2[2] == 0x34)) {
          *(undefined4 *)(this + 0x20) = 10;
          *(byte **)(this + 8) = pbVar2 + 3;
          return;
        }
        if ((((bVar1 != 100) && (bVar1 != 0x69)) && (bVar1 != 0x6f)) &&
           (((bVar1 != 0x75 && (bVar1 != 0x78)) && (bVar1 != 0x58)))) {
          return;
        }
        *(byte **)(this + 8) = pbVar2 + 1;
      }
      *(undefined4 *)(this + 0x20) = 9;
      return;
    }
    if (bVar1 == 0x4c) {
      *(undefined4 *)(this + 0x20) = 8;
      *(byte **)(this + 8) = pbVar2 + 1;
      return;
    }
    if (bVar1 == 0x54) {
      *(undefined4 *)(this + 0x20) = 0xb;
      *(byte **)(this + 8) = pbVar2 + 1;
      return;
    }
    if (bVar1 != 0x68) {
      return;
    }
    if (pbVar2[1] == 0x68) {
      *(undefined4 *)(this + 0x20) = 1;
      *(byte **)(this + 8) = pbVar2 + 2;
      return;
    }
    *(undefined4 *)(this + 0x20) = 2;
  }
  else {
    if (bVar1 != 0x6c) {
      if (bVar1 == 0x74) {
        *(undefined4 *)(this + 0x20) = 7;
        *(byte **)(this + 8) = pbVar2 + 1;
        return;
      }
      if (bVar1 != 0x7a) {
        return;
      }
      *(undefined4 *)(this + 0x20) = 6;
      *(byte **)(this + 8) = pbVar2 + 1;
      return;
    }
    if (pbVar2[1] == 0x6c) {
      *(undefined4 *)(this + 0x20) = 4;
      *(byte **)(this + 8) = pbVar2 + 2;
      return;
    }
    *(undefined4 *)(this + 0x20) = 3;
  }
  *(byte **)(this + 8) = pbVar2 + 1;
  return;
}

