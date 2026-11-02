// rea decompile_all
// name: __crt_stdio_input::format_string_parser<char>::scan_scanset_range
// address: 0x4d312b
// body: available
// range: 0x4d312b-0x4d3231 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_input::format_string_parser<char>::scan_scanset_range(void)
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

bool __thiscall
__crt_stdio_input::format_string_parser<char>::scan_scanset_range(format_string_parser<char> *this)

{
  scanset_buffer<unsigned_char> *this_00;
  uchar uVar1;
  byte bVar2;
  uchar *puVar3;
  uchar *puVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  scanset_buffer<unsigned_char> *psVar10;
  bool bVar11;
  byte bVar9;
  
  this_00 = (scanset_buffer<unsigned_char> *)(this + 0x2c);
  if (this_00 == (scanset_buffer<unsigned_char> *)0x0) {
    *(undefined4 *)(this + 0xc) = 0xc;
  }
  else {
    psVar10 = this_00;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)psVar10 = 0;
      psVar10 = psVar10 + 4;
    }
    bVar11 = **(char **)(this + 8) == '^';
    if (bVar11) {
      *(char **)(this + 8) = *(char **)(this + 8) + 1;
    }
    if (**(char **)(this + 8) == ']') {
      *(char **)(this + 8) = *(char **)(this + 8) + 1;
      this[0x37] = (format_string_parser<char>)((byte)this[0x37] | 0x20);
    }
    puVar3 = *(uchar **)(this + 8);
    uVar1 = *puVar3;
    while (uVar1 != ']') {
      puVar4 = *(uchar **)(this + 8);
      uVar1 = *puVar4;
      if (uVar1 == '\0') break;
      if (((uVar1 == '-') && (puVar4 != puVar3)) && (bVar9 = puVar4[1], bVar9 != 0x5d)) {
        bVar2 = puVar4[-1];
        bVar7 = bVar2;
        if (bVar9 < bVar2) {
          bVar7 = bVar9;
          bVar9 = bVar2;
        }
        uVar8 = (uint)CONCAT11(bVar9 + 1,bVar7);
        if (bVar7 != (byte)(bVar9 + 1)) {
          do {
            scanset_buffer<unsigned_char>::set(this_00,bVar7);
            bVar7 = (char)uVar8 + 1;
            uVar5 = uVar8 >> 8;
            uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar7);
          } while (bVar7 != (byte)uVar5);
        }
      }
      else {
        scanset_buffer<unsigned_char>::set((scanset_buffer<unsigned_char> *)(this + 0x2c),uVar1);
      }
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      uVar1 = **(uchar **)(this + 8);
    }
    if (**(char **)(this + 8) != '\0') {
      if (bVar11) {
        scanset_buffer<unsigned_char>::invert((scanset_buffer<unsigned_char> *)(this + 0x2c));
      }
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      return true;
    }
    *(undefined4 *)(this + 0xc) = 0x16;
  }
  *(undefined4 *)(this + 0x28) = 0;
  this[0x24] = (format_string_parser<char>)0x0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  this[0x16] = (format_string_parser<char>)0x0;
  *(undefined2 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  return false;
}

