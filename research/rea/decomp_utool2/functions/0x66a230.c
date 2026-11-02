// rea decompile_all
// name: FUN_0066a230
// address: 0x66a230
// body: available
// range: 0x66a230-0x66a267 inclusive
// range: 0x66a270-0x66a2d0 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066a230(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[0x52];
  if (param_2 != 2) {
    *(undefined4 *)(*param_1 + 0x14) = 4;
    (**(code **)*param_1)(param_1);
  }
  *(undefined4 *)(iVar1 + 8) = 0;
  iVar1 = param_1[0x52];
  if (1 < param_1[0x39]) {
    *(undefined4 *)(iVar1 + 0x14) = 1;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    return;
  }
  if (*(uint *)(iVar1 + 8) < param_1[0x38] - 1U) {
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_1[0x3a] + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    return;
  }
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_1[0x3a] + 0x48);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  return;
}

