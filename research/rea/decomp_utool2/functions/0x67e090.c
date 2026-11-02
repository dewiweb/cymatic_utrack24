// rea decompile_all
// name: FUN_0067e090
// address: 0x67e090
// body: available
// range: 0x67e090-0x67e168 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0067e090(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *in_ECX;
  float fVar7;
  float in_XMM2_Da;
  
  fVar7 = in_XMM2_Da;
  FUN_004363f0();
  FUN_00436470();
  fVar1 = *in_ECX;
  fVar2 = in_ECX[3];
  fVar3 = in_ECX[1];
  fVar4 = in_ECX[4];
  fVar5 = in_ECX[2];
  *param_1 = fVar1 * fVar7 - fVar2 * in_XMM2_Da;
  fVar6 = in_ECX[5];
  param_1[1] = fVar3 * fVar7 - fVar4 * in_XMM2_Da;
  param_1[2] = fVar5 * fVar7 - fVar6 * in_XMM2_Da;
  param_1[3] = fVar2 * fVar7 + fVar1 * in_XMM2_Da;
  param_1[4] = fVar4 * fVar7 + fVar3 * in_XMM2_Da;
  param_1[5] = fVar6 * fVar7 + fVar5 * in_XMM2_Da;
  return;
}

