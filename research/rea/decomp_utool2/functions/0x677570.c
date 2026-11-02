// rea decompile_all
// name: FUN_00677570
// address: 0x677570
// body: available
// range: 0x677570-0x67771e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00677570(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint *in_ECX;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = param_2[2];
  if ((0.0 < fVar1) && (fVar2 = param_2[3], 0.0 < fVar2)) {
    fVar3 = param_3[2];
    fVar4 = param_3[3];
    fVar6 = *param_3;
    fVar10 = param_3[1];
    uVar5 = *in_ECX;
    fVar7 = fVar3 / fVar1;
    fVar9 = fVar4 / fVar2;
    if ((uVar5 & 0x40) == 0) {
      if ((char)uVar5 < '\0') {
        if (fVar9 <= fVar7) {
          fVar9 = fVar7;
        }
      }
      else if (fVar7 <= fVar9) {
        fVar9 = fVar7;
      }
      fVar8 = fVar9;
      if (((uVar5 & 0x100) != 0) && (fVar8 = 1.0, fVar9 <= 1.0)) {
        fVar8 = fVar9;
      }
      fVar7 = fVar8;
      if (((uVar5 & 0x200) != 0) && (fVar7 = 1.0, 1.0 <= fVar8)) {
        fVar7 = fVar8;
      }
      if ((uVar5 & 2) == 0) {
        if ((uVar5 & 1) == 0) {
          fVar6 = (fVar3 - fVar1 * fVar7) * 0.5 + fVar6;
        }
      }
      else {
        fVar6 = (fVar3 - fVar1 * fVar7) + fVar6;
      }
      fVar9 = fVar7;
      if ((uVar5 & 0x10) == 0) {
        if ((uVar5 & 8) == 0) {
          fVar10 = fVar10 + (fVar4 - fVar2 * fVar7) * 0.5;
        }
      }
      else {
        fVar10 = fVar10 + (fVar4 - fVar2 * fVar7);
      }
    }
    fVar1 = *param_2;
    fVar2 = param_2[1];
    *param_1 = fVar7;
    param_1[1] = fVar7 * (float)(undefined *)0x0;
    param_1[3] = fVar9 * (float)(undefined *)0x0;
    param_1[4] = fVar9;
    param_1[2] = -fVar1 * fVar7 + fVar6;
    param_1[5] = -fVar2 * fVar9 + fVar10;
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

