// rea decompile_all
// name: FUN_00464a00
// address: 0x464a00
// body: available
// range: 0x464a00-0x464e77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00464a00(float *param_1,float *param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined4 *in_ECX;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  double dVar14;
  float local_58;
  int local_48;
  
  *in_ECX = param_3;
  in_ECX[1] = param_4;
  fVar10 = param_1[2];
  fVar9 = param_1[3];
  fVar7 = *param_1;
  fVar8 = param_1[1];
  if (((((param_2[1] != 0.0) || (param_2[2] != 0.0)) || (param_2[3] != 0.0)) ||
      ((param_2[5] != 0.0 || (*param_2 != 1.0)))) || (param_2[4] != 1.0)) {
    fVar4 = fVar8 - fVar9;
    fVar6 = fVar7 - fVar10;
    dVar14 = __hypot((double)fVar6,(double)fVar4);
    local_58 = fVar10;
    fVar13 = fVar9;
    if (0.0 < dVar14) {
      local_58 = (float)((double)(fVar6 * 0.0 - fVar4 * 100.0) / dVar14) + fVar10;
      fVar13 = (float)((double)(fVar6 * 100.0 + fVar4 * 0.0) / dVar14) + fVar9;
    }
    fVar4 = param_2[1];
    fVar6 = param_2[2];
    fVar11 = param_2[3];
    fVar1 = param_2[5];
    fVar5 = fVar11 * fVar7;
    fVar7 = *param_2 * fVar7 + fVar4 * fVar8 + fVar6;
    fVar8 = param_2[4] * fVar8 + fVar5 + fVar1;
    fVar5 = *param_2 * fVar10 + fVar4 * fVar9 + fVar6;
    fVar4 = (*param_2 * local_58 + fVar4 * fVar13 + fVar6) - fVar5;
    fVar9 = param_2[4] * fVar9 + fVar11 * fVar10 + fVar1;
    fVar6 = (param_2[4] * fVar13 + fVar11 * local_58 + fVar1) - fVar9;
    fVar10 = fVar6 * fVar6 + fVar4 * fVar4;
    fVar13 = 0.0;
    if (((0.0 < fVar10) &&
        (fVar10 = ((fVar8 - fVar9) * fVar6 + (fVar7 - fVar5) * fVar4) / fVar10, 0.0 <= fVar10)) &&
       (fVar13 = 1.0, fVar10 <= 1.0)) {
      fVar13 = fVar10;
    }
    fVar9 = fVar13 * fVar6 + fVar9;
    fVar10 = fVar13 * fVar4 + fVar5;
  }
  fVar4 = fVar7 - fVar10;
  fVar13 = fVar4;
  FUN_00411660();
  fVar11 = 0.001;
  fVar6 = fVar8 - fVar9;
  *(bool *)(in_ECX + 10) = fVar4 < 0.001;
  cVar2 = FUN_00411660();
  *(bool *)((int)in_ECX + 0x29) = fVar6 < fVar11;
  if (cVar2 == '\0') {
    iVar3 = in_ECX[1] << 0xc;
    if (fVar6 >= fVar11) {
      dVar12 = (double)(fVar9 - fVar8) / (double)fVar13;
      dVar14 = (double)fVar8 - (double)fVar7 / dVar12;
      *(double *)(in_ECX + 8) = dVar14;
      local_48 = SUB84((double)iVar3 / (dVar12 * dVar14 - ((double)fVar9 * dVar12 - (double)fVar10))
                       + 6755399441055744.0,0);
      in_ECX[4] = local_48;
      *(double *)(in_ECX + 6) = (double)local_48 * dVar12;
      return;
    }
    local_48 = SUB84((double)iVar3 / (double)(fVar10 - fVar7) + 6755399441055744.0,0);
    fVar8 = (float)local_48 * fVar7;
  }
  else {
    local_48 = SUB84((double)(int)(in_ECX[1] << 0xc) / (double)(fVar9 - fVar8) + 6755399441055744.0,
                     0);
    fVar8 = (float)local_48 * fVar8;
  }
  in_ECX[4] = local_48;
  local_48 = SUB84((double)fVar8 + 6755399441055744.0,0);
  in_ECX[3] = local_48;
  return;
}

