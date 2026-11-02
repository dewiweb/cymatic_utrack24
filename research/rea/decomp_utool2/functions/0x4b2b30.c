// rea decompile_all
// name: FUN_004b2b30
// address: 0x4b2b30
// body: available
// range: 0x4b2b30-0x4b2d3c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float * FUN_004b2b30(float param_1,float param_2)

{
  float fVar1;
  byte bVar2;
  int *piVar3;
  float *pfVar4;
  float *in_ECX;
  int in_EDX;
  float *unaff_ESI;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  float local_1c;
  
  pfVar4 = *(float **)(in_EDX + 0x24);
  if (pfVar4 != (float *)0x0) {
    local_1c = *pfVar4;
    fVar6 = pfVar4[1];
    fVar7 = pfVar4[4];
    fVar8 = pfVar4[3];
    fVar5 = local_1c * fVar7 - fVar6 * fVar8;
    if (fVar5 == 0.0) {
      fVar5 = pfVar4[2];
      fVar9 = pfVar4[5];
    }
    else {
      fVar5 = 1.0 / fVar5;
      fVar1 = fVar7 * fVar5;
      fVar8 = -fVar8 * fVar5;
      fVar6 = -fVar6 * fVar5;
      fVar7 = local_1c * fVar5;
      fVar5 = -(pfVar4[2] * fVar1) - pfVar4[5] * fVar6;
      fVar9 = -(pfVar4[2] * fVar8) - pfVar4[5] * fVar7;
      local_1c = fVar1;
    }
    fVar6 = param_2 * fVar6;
    param_2 = param_1 * fVar8 + fVar7 * param_2 + fVar9;
    param_1 = fVar6 + param_1 * local_1c + fVar5;
  }
  bVar2 = *(byte *)(in_EDX + 0x68) & 1;
  if (bVar2 == 0) {
    param_1 = param_1 - (float)*(int *)(in_EDX + 0x10);
    param_2 = param_2 - (float)*(int *)(in_EDX + 0x14);
  }
  else {
    if (bVar2 == 0) {
      if (*(int *)(in_EDX + 0xc) == 0) goto LAB_004b2d27;
      uStack_2c = 0x4b2c87;
      piVar3 = (int *)FUN_006d1d80();
    }
    else {
      uStack_2c = 0x4b2c75;
      piVar3 = (int *)FUN_0068db10();
    }
    if (piVar3 != (int *)0x0) {
      FUN_004b1670(param_1,param_2);
      (**(code **)(*piVar3 + 0x2c))(auStack_30);
      pfVar4 = (float *)FUN_004b1510();
      param_1 = *pfVar4;
      param_2 = pfVar4[1];
      in_ECX = unaff_ESI;
    }
  }
LAB_004b2d27:
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  return in_ECX;
}

