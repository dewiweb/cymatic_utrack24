// rea decompile_all
// name: FUN_004b2220
// address: 0x4b2220
// body: available
// range: 0x4b2220-0x4b23ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b2220(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float *pfVar2;
  undefined4 *puVar3;
  int in_EDX;
  float fVar4;
  undefined1 local_48 [16];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [28];
  
  if (*(int *)(in_EDX + 0x24) != 0) {
    pfVar2 = (float *)FUN_006cf480(local_20);
    local_38 = *pfVar2;
    local_34 = pfVar2[1];
    local_28 = pfVar2[4];
    local_2c = pfVar2[3];
    fVar4 = local_38 * local_28 - local_34 * local_2c;
    if (fVar4 == 0.0) {
      local_30 = pfVar2[2];
      local_24 = pfVar2[5];
    }
    else {
      fVar4 = 1.0 / fVar4;
      fVar1 = local_28 * fVar4;
      local_2c = -local_2c * fVar4;
      local_34 = -local_34 * fVar4;
      local_28 = local_38 * fVar4;
      local_30 = -(pfVar2[2] * fVar1) - pfVar2[5] * local_34;
      local_24 = -(pfVar2[2] * local_2c) - pfVar2[5] * local_28;
      local_38 = fVar1;
    }
    puVar3 = (undefined4 *)FUN_004744d0(local_48,&local_38);
    param_1 = *puVar3;
    param_2 = puVar3[1];
    param_3 = puVar3[2];
    param_4 = puVar3[3];
  }
  FUN_004b2810(param_1,param_2,param_3,param_4);
  return;
}

