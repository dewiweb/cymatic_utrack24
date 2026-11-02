// rea decompile_all
// name: FUN_004f2c00
// address: 0x4f2c00
// body: available
// range: 0x4f2c00-0x4f2cab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f2c00(float *param_1)

{
  float fVar1;
  int in_ECX;
  float fVar2;
  float fVar3;
  float in_XMM2_Da;
  float in_XMM3_Da;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)(in_ECX + 0x18);
  fVar2 = (float)*(int *)(*(int *)(in_ECX + 4) + 0x18);
  fVar5 = fVar2 * in_XMM2_Da - fVar1 * 0.5;
  if (0.0 <= fVar5) {
    if (fVar2 < fVar1 + fVar5) {
      fVar5 = fVar2 - fVar1;
    }
  }
  else {
    fVar5 = 0.0;
  }
  fVar2 = *(float *)(in_ECX + 0x1c);
  fVar4 = (float)*(int *)(*(int *)(in_ECX + 4) + 0x1c);
  fVar3 = fVar4 * in_XMM3_Da - fVar2 * 0.5;
  if (0.0 <= fVar3) {
    if (fVar4 < fVar2 + fVar3) {
      fVar3 = fVar4 - fVar2;
    }
  }
  else {
    fVar3 = 0.0;
  }
  *param_1 = fVar5;
  param_1[1] = fVar3;
  param_1[2] = fVar1;
  param_1[3] = fVar2;
  return;
}

