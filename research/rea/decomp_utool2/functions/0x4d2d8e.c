// rea decompile_all
// name: __crt_stdio_input::format_string_parser<char>::scan_conversion_specifier
// address: 0x4d2d8e
// body: available
// range: 0x4d2d8e-0x4d2ef8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4d2e40 to 0x4d312b __crt_stdio_input::format_string_parser<char>::scan_scanset_range (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: bool __thiscall
   __crt_stdio_input::format_string_parser<char>::scan_conversion_specifier(void)
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

bool __thiscall
__crt_stdio_input::format_string_parser<char>::scan_conversion_specifier
          (format_string_parser<char> *this)

{
  byte bVar1;
  bool bVar2;
  
  bVar1 = **(byte **)(this + 8);
  if (bVar1 < 0x65) {
    if (bVar1 == 100) {
      *(undefined4 *)(this + 0x28) = 3;
      goto LAB_004d2e4c;
    }
    if (bVar1 < 0x54) {
      if (bVar1 == 0x53) goto LAB_004d2ee3;
      if (bVar1 != 0x41) {
        if (bVar1 == 0x43) goto LAB_004d2e07;
        if (bVar1 < 0x45) {
LAB_004d2eb1:
          *(undefined4 *)(this + 0xc) = 0x16;
          *(undefined4 *)(this + 0x10) = 0;
          *(undefined2 *)(this + 0x14) = 0;
          this[0x16] = (format_string_parser<char>)0x0;
          *(undefined4 *)(this + 0x18) = 0;
          *(undefined4 *)(this + 0x1c) = 0;
          *(undefined4 *)(this + 0x20) = 0;
          this[0x24] = (format_string_parser<char>)0x0;
          *(undefined4 *)(this + 0x28) = 0;
          return false;
        }
        if (0x47 < bVar1) {
          if (bVar1 != 0x49) goto LAB_004d2eb1;
          goto LAB_004d2ddd;
        }
      }
    }
    else {
      if (bVar1 == 0x58) goto LAB_004d2e98;
      if (bVar1 == 0x5b) {
        set_wide_for_c_s_or_scanset(this);
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        *(undefined4 *)(this + 0x28) = 8;
        bVar2 = scan_scanset_range(this);
        return bVar2;
      }
      if (bVar1 != 0x61) {
        if (bVar1 != 99) goto LAB_004d2eb1;
LAB_004d2e07:
        if (*(int *)(this + 0x18) == 0 && *(int *)(this + 0x1c) == 0) {
          *(undefined4 *)(this + 0x18) = 1;
          *(undefined4 *)(this + 0x1c) = 0;
        }
        set_wide_for_c_s_or_scanset(this);
        *(undefined4 *)(this + 0x28) = 0;
        goto LAB_004d2ef1;
      }
    }
LAB_004d2e88:
    *(undefined4 *)(this + 0x28) = 7;
  }
  else {
    if (bVar1 < 0x71) {
      if (bVar1 != 0x70) {
        if (0x67 < bVar1) {
          if (bVar1 != 0x69) {
            if (bVar1 == 0x6e) {
              *(undefined4 *)(this + 0x28) = 9;
            }
            else {
              if (bVar1 != 0x6f) goto LAB_004d2eb1;
              *(undefined4 *)(this + 0x28) = 4;
            }
            goto LAB_004d2e4c;
          }
LAB_004d2ddd:
          *(undefined4 *)(this + 0x28) = 2;
          goto LAB_004d2e4c;
        }
        goto LAB_004d2e88;
      }
      *(undefined4 *)(this + 0x20) = 9;
    }
    else {
      if (bVar1 == 0x73) {
LAB_004d2ee3:
        set_wide_for_c_s_or_scanset(this);
        *(undefined4 *)(this + 0x28) = 1;
LAB_004d2ef1:
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        return true;
      }
      if (bVar1 == 0x75) {
        *(undefined4 *)(this + 0x28) = 5;
        goto LAB_004d2e4c;
      }
      if (bVar1 != 0x78) goto LAB_004d2eb1;
    }
LAB_004d2e98:
    *(undefined4 *)(this + 0x28) = 6;
  }
LAB_004d2e4c:
  *(byte **)(this + 8) = *(byte **)(this + 8) + 1;
  return true;
}

