// rea decompile_all
// name: FUN_004b09c0
// address: 0x4b09c0
// body: available
// range: 0x4b09c0-0x4b0a8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004b09c0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint3 uVar6;
  float *in_ECX;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar5 = 0;
  fVar1 = *in_ECX;
  fVar2 = *param_1;
  fVar9 = param_1[2] + fVar2;
  if (fVar2 <= fVar1) {
    uVar5 = (uint)(fVar1 < fVar9);
  }
  fVar3 = param_1[1];
  fVar4 = in_ECX[1];
  fVar10 = param_1[3] + fVar3;
  if ((fVar3 <= fVar4) && (fVar4 < fVar10)) {
    uVar5 = uVar5 | 2;
  }
  fVar7 = in_ECX[2] + fVar1;
  if ((fVar2 <= fVar7) && (fVar7 < fVar9)) {
    uVar5 = uVar5 | 4;
  }
  fVar8 = fVar4 + in_ECX[3];
  if ((fVar3 <= fVar8) && (fVar8 < fVar10)) {
    uVar5 = uVar5 | 8;
  }
  uVar6 = (uint3)(uVar5 - 7 >> 8);
  switch(uVar5 - 7) {
  case 0:
    in_ECX[1] = fVar10;
    in_ECX[3] = fVar8 - fVar10;
    return CONCAT31(uVar6,1);
  default:
    return (uint)uVar6 << 8;
  case 4:
    *in_ECX = fVar9;
    in_ECX[2] = fVar7 - fVar9;
    return CONCAT31(uVar6,1);
  case 6:
    in_ECX[3] = fVar3 - fVar4;
    return CONCAT31(uVar6,1);
  case 7:
    in_ECX[2] = fVar2 - fVar1;
    return CONCAT31(uVar6,1);
  }
}

