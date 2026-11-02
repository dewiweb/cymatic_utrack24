// rea decompile_all
// name: FUN_00473e90
// address: 0x473e90
// body: available
// range: 0x473e90-0x474009 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00473e90(undefined4 *param_1)

{
  float fVar1;
  undefined4 *puVar2;
  float *in_ECX;
  float fVar3;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  if (*(char *)(in_ECX + 8) == '\0') {
    local_20 = *in_ECX;
    local_1c = in_ECX[1];
    local_10 = in_ECX[4];
    local_14 = in_ECX[3];
    fVar3 = local_20 * local_10 - local_1c * local_14;
    if (fVar3 == 0.0) {
      local_18 = in_ECX[2];
      local_c = in_ECX[5];
    }
    else {
      fVar3 = 1.0 / fVar3;
      fVar1 = local_10 * fVar3;
      local_14 = -local_14 * fVar3;
      local_1c = -local_1c * fVar3;
      local_10 = local_20 * fVar3;
      local_18 = -(in_ECX[2] * fVar1) - in_ECX[5] * local_1c;
      local_c = -(in_ECX[2] * local_14) - in_ECX[5] * local_10;
      local_20 = fVar1;
    }
    puVar2 = (undefined4 *)FUN_004744d0(local_30,&local_20);
  }
  else {
    puVar2 = (undefined4 *)FUN_00474700(local_40,in_ECX[6],in_ECX[7]);
  }
  *param_1 = *puVar2;
  param_1[1] = puVar2[1];
  param_1[2] = puVar2[2];
  param_1[3] = puVar2[3];
  return;
}

