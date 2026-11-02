// rea decompile_all
// name: FUN_0042e630
// address: 0x42e630
// body: available
// range: 0x42e630-0x42e70b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042e630(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0x18;
  in_ECX[1] = 4;
  *(undefined2 *)(in_ECX + 2) = 0x100;
  switch(param_1) {
  case 0:
    in_ECX[1] = 2;
  case 8:
    *(undefined1 *)((int)in_ECX + 9) = 0;
  case 0x18:
    *in_ECX = 0x10;
    return;
  case 1:
    in_ECX[1] = 3;
  case 9:
  case 10:
  case 0xb:
    *(undefined1 *)((int)in_ECX + 9) = 0;
    return;
  case 2:
    *in_ECX = 0x20;
    *(undefined1 *)((int)in_ECX + 9) = 0;
    return;
  case 3:
    *in_ECX = 0x20;
    *(undefined2 *)(in_ECX + 2) = 1;
    return;
  case 4:
    *in_ECX = 0x40;
    in_ECX[1] = 8;
    *(undefined1 *)((int)in_ECX + 9) = 0;
    return;
  default:
    return;
  case 0x10:
    in_ECX[1] = 2;
    *in_ECX = 0x10;
    return;
  case 0x11:
    in_ECX[1] = 3;
    return;
  case 0x12:
    *in_ECX = 0x20;
    return;
  case 0x13:
    *in_ECX = 0x20;
    *(undefined1 *)(in_ECX + 2) = 1;
    return;
  case 0x14:
    *in_ECX = 0x40;
    in_ECX[1] = 8;
    return;
  }
}

