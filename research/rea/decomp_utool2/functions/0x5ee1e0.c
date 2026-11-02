// rea decompile_all
// name: FUN_005ee1e0
// address: 0x5ee1e0
// body: available
// range: 0x5ee1e0-0x5ee264 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005ee1e0(undefined4 param_1,undefined4 *param_2,uint *param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(*(int *)(param_4 + 4) + 0x2e1c);
  if (*(int *)(*(int *)(param_4 + 4) + 0x2de8) != 0) {
    *param_3 = 4;
    *param_2 = 0x43614c66;
    *(undefined4 *)(*(int *)(param_4 + 4) + 0x2de8) = 0;
    return 0;
  }
  if (uVar2 == 0) {
    return 2;
  }
  if (uVar2 < *param_3) {
    *param_3 = uVar2;
  }
  FUN_004c2c30(param_2,*(undefined4 *)(*(int *)(param_4 + 4) + 0x2e14),*param_3);
  piVar1 = (int *)(*(int *)(param_4 + 4) + 0x2e14);
  *piVar1 = *piVar1 + *param_3;
  piVar1 = (int *)(*(int *)(param_4 + 4) + 0x2e1c);
  *piVar1 = *piVar1 - *param_3;
  return 0;
}

