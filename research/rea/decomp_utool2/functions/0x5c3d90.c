// rea decompile_all
// name: FUN_005c3d90
// address: 0x5c3d90
// body: available
// range: 0x5c3d90-0x5c3e71 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c3d90(byte *param_1)

{
  int iVar1;
  byte *pbVar2;
  
  FUN_005c40d0(param_1);
  iVar1 = *(int *)(param_1 + 0x10);
  pbVar2 = param_1;
  if (4 < iVar1) {
    pbVar2 = *(byte **)param_1;
  }
  if ((*pbVar2 & 0xf0) == 0x90) {
    FUN_005c3c40(param_1);
    return;
  }
  pbVar2 = param_1;
  if (4 < iVar1) {
    pbVar2 = *(byte **)param_1;
  }
  if ((*pbVar2 & 0xf0) == 0x80) {
    FUN_005c3b80(param_1);
    return;
  }
  pbVar2 = param_1;
  if (4 < iVar1) {
    pbVar2 = *(byte **)param_1;
  }
  if (((*pbVar2 & 0xf0) == 0xb0) && (pbVar2[1] == 0x7b)) {
    FUN_005c36e0(param_1);
    return;
  }
  pbVar2 = param_1;
  if (4 < iVar1) {
    pbVar2 = *(byte **)param_1;
  }
  if ((*pbVar2 & 0xf0) == 0xe0) {
    FUN_005c3b20(param_1);
    return;
  }
  pbVar2 = param_1;
  if (4 < iVar1) {
    pbVar2 = *(byte **)param_1;
  }
  if ((*pbVar2 & 0xf0) != 0xd0) {
    pbVar2 = param_1;
    if (4 < iVar1) {
      pbVar2 = *(byte **)param_1;
    }
    if ((*pbVar2 & 0xf0) == 0xb0) {
      FUN_005c3870(param_1);
    }
    return;
  }
  FUN_005c3a90(param_1);
  return;
}

