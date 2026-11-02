// rea decompile_all
// name: FUN_0067fb40
// address: 0x67fb40
// body: available
// range: 0x67fb40-0x67fd6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0067fb40(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,float param_8,float param_9)

{
  float fVar1;
  float *in_ECX;
  float in_XMM1_Da;
  float fVar2;
  float in_XMM2_Da;
  float in_XMM3_Da;
  float local_1c;
  float local_18;
  float local_10;
  
  param_4 = param_4 - in_XMM3_Da;
  param_8 = param_8 - in_XMM3_Da;
  param_6 = param_6 - in_XMM1_Da;
  local_10 = param_2 - in_XMM1_Da;
  param_3 = param_3 - in_XMM2_Da;
  param_7 = param_7 - in_XMM2_Da;
  param_5 = param_5 - param_1;
  param_9 = param_9 - param_1;
  fVar2 = param_7 * local_10 - param_3 * param_6;
  local_1c = in_XMM2_Da;
  local_18 = in_XMM1_Da;
  if (fVar2 != 0.0) {
    fVar2 = 1.0 / fVar2;
    fVar1 = param_7 * fVar2;
    param_3 = -param_3 * fVar2;
    param_6 = -param_6 * fVar2;
    param_7 = local_10 * fVar2;
    local_18 = -(fVar1 * in_XMM1_Da) - param_6 * in_XMM2_Da;
    local_1c = -(param_3 * in_XMM1_Da) - param_7 * in_XMM2_Da;
    local_10 = fVar1;
  }
  *in_ECX = param_8 * param_3 + param_4 * local_10;
  in_ECX[1] = param_8 * param_7 + param_4 * param_6;
  in_ECX[3] = param_9 * param_3 + param_5 * local_10;
  in_ECX[2] = param_8 * local_1c + param_4 * local_18 + in_XMM3_Da;
  in_ECX[4] = param_9 * param_7 + param_5 * param_6;
  in_ECX[5] = param_9 * local_1c + param_5 * local_18 + param_1;
  return;
}

