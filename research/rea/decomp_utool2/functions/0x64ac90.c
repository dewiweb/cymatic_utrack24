// rea decompile_all
// name: FUN_0064ac90
// address: 0x64ac90
// body: available
// range: 0x64ac90-0x64adc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064ac90(void)

{
  int in_ECX;
  int in_EDX;
  
  if (((in_ECX != 0) && (in_EDX != 0)) && ((*(uint *)(in_ECX + 0x28) & 0x400) == 0)) {
    FUN_00649820();
    if (((*(uint *)(in_ECX + 0x28) & 0x1000) != 0) && (*(int *)(in_ECX + 0x21c) != 0)) {
      FUN_006563b0();
      *(undefined4 *)(in_ECX + 0x21c) = 0;
    }
    FUN_00648be0(*(undefined4 *)(in_EDX + 4),*(undefined1 *)(in_EDX + 0x18),
                 *(undefined1 *)(in_EDX + 0x19),*(undefined1 *)(in_EDX + 0x1a),
                 *(undefined1 *)(in_EDX + 0x1b),*(undefined1 *)(in_EDX + 0x1c));
    if (((-1 < (short)*(ushort *)(in_EDX + 0x72)) && ((*(ushort *)(in_EDX + 0x72) & 8) != 0)) &&
       ((*(byte *)(in_EDX + 8) & 1) != 0)) {
      FUN_006487d0();
    }
    if (-1 < *(short *)(in_EDX + 0x72)) {
      if ((*(uint *)(in_EDX + 8) & 0x1000) == 0) {
        if ((-1 < *(short *)(in_EDX + 0x72)) && ((*(uint *)(in_EDX + 8) & 0x800) != 0)) {
          FUN_00648760();
        }
      }
      else {
        if ((*(uint *)(in_EDX + 8) & 0x800) != 0) {
          FUN_006561a0();
        }
        FUN_00648640(*(undefined4 *)(in_EDX + 0x78));
      }
    }
    if ((*(byte *)(in_EDX + 8) & 2) != 0) {
      FUN_00648370(*(undefined1 *)(in_EDX + 0x19));
    }
    if (((-1 < (short)*(ushort *)(in_EDX + 0x72)) && ((*(ushort *)(in_EDX + 0x72) & 0x10) != 0)) &&
       ((*(byte *)(in_EDX + 8) & 4) != 0)) {
      FUN_00648210();
    }
    FUN_0064add0(1);
    *(uint *)(in_ECX + 0x28) = *(uint *)(in_ECX + 0x28) | 0x400;
  }
  return;
}

