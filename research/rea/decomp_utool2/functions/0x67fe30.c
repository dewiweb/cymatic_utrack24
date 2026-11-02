// rea decompile_all
// name: FUN_0067fe30
// address: 0x67fe30
// body: available
// range: 0x67fe30-0x680052 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0067fe30(float *param_1,float param_2,float param_3,char param_4,uint param_5)

{
  float in_XMM2_Da;
  float in_XMM3_Da;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  fVar3 = in_XMM2_Da;
  FUN_00683770(&local_18);
  if (param_4 == '\0') {
    param_2 = param_2 / local_10;
    param_3 = param_3 / local_c;
    *param_1 = param_2;
    param_1[1] = param_2 * 0.0;
    param_1[2] = -local_18 * param_2 + fVar3;
    param_1[3] = param_3 * 0.0;
    param_1[4] = param_3;
    param_1[5] = -local_14 * param_3 + in_XMM3_Da;
    return;
  }
  if ((((0.0 < param_2) && (0.0 < param_3)) && (0.0 < local_10)) && (0.0 < local_c)) {
    fVar3 = local_c / local_10;
    if (fVar3 <= param_3 / param_2) {
      fVar4 = fVar3 * param_2;
      fVar3 = param_2;
    }
    else {
      fVar4 = param_3;
      fVar3 = param_3 / fVar3;
    }
    fVar1 = fVar3;
    if (((param_5 & 1) == 0) && (fVar1 = param_2, (param_5 >> 1 & 1) != 0)) {
      fVar1 = param_2 - fVar3 * 0.5;
    }
    else {
      fVar1 = fVar1 * 0.5;
    }
    fVar2 = fVar4;
    if (((param_5 >> 3 & 1) == 0) && (fVar2 = param_3, (param_5 >> 4 & 1) != 0)) {
      fVar2 = param_3 - fVar4 * 0.5;
    }
    else {
      fVar2 = fVar2 * 0.5;
    }
    fVar3 = fVar3 / local_10;
    fVar4 = fVar4 / local_c;
    *param_1 = fVar3;
    param_1[1] = fVar3 * (float)(undefined *)0x0;
    param_1[3] = fVar4 * (float)(undefined *)0x0;
    param_1[4] = fVar4;
    param_1[2] = fVar1 + in_XMM2_Da + (local_10 * -0.5 - local_18) * fVar3;
    param_1[5] = fVar2 + in_XMM3_Da + (local_c * -0.5 - local_14) * fVar4;
    return;
  }
  *param_1 = 1.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[4] = 1.0;
  param_1[5] = 0.0;
  return;
}

