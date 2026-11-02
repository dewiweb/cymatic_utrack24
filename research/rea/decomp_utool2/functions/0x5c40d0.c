// rea decompile_all
// name: FUN_005c40d0
// address: 0x5c40d0
// body: available
// range: 0x5c40d0-0x5c4172 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c40d0(byte *param_1)

{
  int iVar1;
  char cVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = *(int *)(param_1 + 0x10);
  pbVar3 = param_1;
  if (4 < iVar1) {
    pbVar3 = *(byte **)param_1;
  }
  if ((*pbVar3 & 0xf0) == 0xb0) {
    pbVar3 = param_1;
    if (4 < iVar1) {
      pbVar3 = *(byte **)param_1;
    }
    pbVar4 = param_1;
    if (4 < iVar1) {
      pbVar4 = *(byte **)param_1;
    }
    if (4 < iVar1) {
      param_1 = *(byte **)param_1;
    }
    if ((*param_1 & 0xf0) == 0xf0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = (*param_1 & 0xf) + 1;
    }
    cVar2 = FUN_005c47e0(cVar2,pbVar4[1],pbVar3[2],&local_20);
    if (cVar2 != '\0') {
      FUN_005c4060(local_20,uStack_1c,uStack_18,uStack_14);
    }
  }
  return;
}

