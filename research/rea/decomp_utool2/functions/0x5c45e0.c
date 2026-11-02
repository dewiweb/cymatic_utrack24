// rea decompile_all
// name: FUN_005c45e0
// address: 0x5c45e0
// body: available
// range: 0x5c45e0-0x5c4627 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c45e0(short param_1,short param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  short *in_ECX;
  
  *in_ECX = param_1 * 0x80 + param_2;
  *(undefined4 *)(in_ECX + 2) = param_3;
  *(undefined4 *)(in_ECX + 4) = param_4;
  *(undefined4 *)(in_ECX + 6) = param_5;
  *(undefined4 *)(in_ECX + 8) = param_6;
  *(char *)(in_ECX + 1) = (char)param_1;
  *(char *)((int)in_ECX + 3) = (char)param_2;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  *(undefined4 *)(in_ECX + 0x10) = param_7;
  return;
}

