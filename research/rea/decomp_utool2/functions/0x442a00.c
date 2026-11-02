// rea decompile_all
// name: FUN_00442a00
// address: 0x442a00
// body: available
// range: 0x442a00-0x442a72 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00442a00(int param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  undefined4 *in_ECX;
  
  pbVar1 = (byte *)*in_ECX;
  if ((param_2 == pbVar1) && (param_1 < 4)) {
    pbVar1 = pbVar1 + param_3 * 4;
    param_2 = param_2 + param_1 * param_3;
    while (param_3 = param_3 + -1, -1 < param_3) {
      param_2 = param_2 + -param_1;
      pbVar1 = pbVar1 + -4;
      *(uint *)pbVar1 = (*param_2 + 0x80) * 0x1000000;
    }
  }
  else {
    while (param_3 = param_3 + -1, -1 < param_3) {
      *(uint *)pbVar1 = (*param_2 + 0x80) * 0x1000000;
      param_2 = param_2 + param_1;
      pbVar1 = pbVar1 + 4;
    }
  }
  return;
}

