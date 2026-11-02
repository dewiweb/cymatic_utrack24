// rea decompile_all
// name: FUN_00464f50
// address: 0x464f50
// body: available
// range: 0x464f50-0x4650eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00464f50(float *param_1,float *param_2,undefined4 param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 *in_ECX;
  double dVar7;
  float fVar8;
  
  *in_ECX = param_3;
  in_ECX[1] = param_4;
  *(double *)(in_ECX + 2) = (double)*param_1;
  *(double *)(in_ECX + 4) = (double)param_1[1];
  dVar7 = (double)((param_1[1] - param_1[3]) * (param_1[1] - param_1[3]) +
                  (*param_1 - param_1[2]) * (*param_1 - param_1[2]));
  *(double *)(in_ECX + 6) = dVar7;
  __libm_sse2_sqrt_precise();
  *(double *)(in_ECX + 8) = (double)param_4 / dVar7;
  fVar1 = *param_2;
  fVar8 = fVar1 * param_2[4] - param_2[1] * param_2[3];
  if (fVar8 == 0.0) {
    in_ECX[0x14] = fVar1;
    in_ECX[0x15] = param_2[1];
    in_ECX[0x16] = param_2[2];
    in_ECX[0x17] = param_2[3];
    in_ECX[0x18] = param_2[4];
    in_ECX[0x19] = param_2[5];
  }
  else {
    fVar8 = 1.0 / fVar8;
    fVar2 = param_2[2];
    fVar5 = param_2[4] * fVar8;
    fVar4 = -param_2[3] * fVar8;
    fVar6 = -param_2[1] * fVar8;
    fVar3 = param_2[5];
    in_ECX[0x15] = fVar6;
    in_ECX[0x17] = fVar4;
    in_ECX[0x18] = fVar1 * fVar8;
    in_ECX[0x14] = fVar5;
    in_ECX[0x16] = -(fVar2 * fVar5) - fVar3 * fVar6;
    in_ECX[0x19] = -(fVar2 * fVar4) - fVar3 * fVar1 * fVar8;
  }
  *(double *)(in_ECX + 0xc) = (double)(float)in_ECX[0x17];
  *(double *)(in_ECX + 0xe) = (double)(float)in_ECX[0x14];
  return;
}

