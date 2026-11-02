// rea decompile_all
// name: FUN_004741c0
// address: 0x4741c0
// body: available
// range: 0x4741c0-0x474360 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004741c0(float param_1,float param_2,float *param_3,int param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *in_ECX;
  float fVar7;
  float local_c;
  
  if (param_5 == 0.0) {
    local_c = 0.0;
  }
  else {
    local_c = 0.5;
  }
  fVar6 = *param_3;
  fVar7 = fVar6 * param_3[4] - param_3[1] * param_3[3];
  if (fVar7 == 0.0) {
    *in_ECX = fVar6;
    in_ECX[1] = param_3[1];
    in_ECX[2] = param_3[2];
    in_ECX[3] = param_3[3];
    in_ECX[4] = param_3[4];
    in_ECX[5] = param_3[5];
  }
  else {
    fVar7 = 1.0 / fVar7;
    fVar1 = param_3[2];
    fVar3 = param_3[4] * fVar7;
    fVar4 = -param_3[3] * fVar7;
    fVar5 = -param_3[1] * fVar7;
    fVar2 = param_3[5];
    in_ECX[1] = fVar5;
    in_ECX[3] = fVar4;
    in_ECX[4] = fVar6 * fVar7;
    *in_ECX = fVar3;
    in_ECX[2] = -(fVar1 * fVar3) - fVar2 * fVar5;
    in_ECX[5] = -(fVar1 * fVar4) - fVar2 * fVar6 * fVar7;
  }
  in_ECX[0x10] = local_c;
  in_ECX[0x11] = (float)(-(uint)(param_5 != 0.0) & 0xffffff80);
  in_ECX[0x12] = param_1;
  in_ECX[0x13] = param_2;
  in_ECX[0x14] = (float)(param_4 + 1);
  in_ECX[0x15] = param_5;
  in_ECX[0x16] = (float)(*(int *)((int)param_2 + 0x10) + -1);
  in_ECX[0x17] = (float)(*(int *)((int)param_2 + 0x14) + -1);
  in_ECX[0x1a] = 0.0;
  in_ECX[0x1b] = 2.86986e-42;
  FID_conflict__free((void *)in_ECX[0x1a]);
  fVar6 = (float)FUN_004c554b(0x2000);
  in_ECX[0x1a] = fVar6;
  return;
}

