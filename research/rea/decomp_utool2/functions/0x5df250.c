// rea decompile_all
// name: FUN_005df250
// address: 0x5df250
// body: available
// range: 0x5df250-0x5df3f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005df250(void)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  int in_EDX;
  int iVar6;
  float *pfVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float *local_c;
  float *local_8;
  
  piVar8 = (int *)in_ECX[3];
  iVar4 = in_EDX + (*in_ECX >> 1) * 4;
  local_8 = (float *)(in_ECX[2] + *in_ECX * 4);
  local_c = (float *)(in_EDX + 8);
  iVar6 = in_EDX - (int)piVar8;
  pfVar7 = (float *)(iVar4 + 0xc);
  do {
    iVar5 = *piVar8;
    fVar9 = *(float *)(iVar4 + iVar5 * 4);
    fVar11 = *(float *)(iVar4 + 4 + piVar8[1] * 4);
    fVar14 = *(float *)(iVar4 + piVar8[1] * 4);
    fVar12 = *(float *)(iVar4 + 4 + iVar5 * 4) - fVar11;
    fVar10 = fVar9 + fVar14;
    fVar11 = (fVar11 + *(float *)(iVar4 + 4 + iVar5 * 4)) * 0.5;
    fVar13 = *local_8 * fVar10 + local_8[1] * fVar12;
    fVar10 = local_8[1] * fVar10 - *local_8 * fVar12;
    fVar9 = (fVar9 - fVar14) * 0.5;
    *(float *)(iVar6 + (int)piVar8) = fVar13 + fVar11;
    pfVar7[-5] = fVar11 - fVar13;
    local_c[-1] = fVar10 + fVar9;
    pfVar7[-4] = fVar10 - fVar9;
    iVar5 = piVar8[2];
    piVar1 = piVar8 + 3;
    piVar8 = piVar8 + 4;
    fVar9 = *(float *)(iVar4 + iVar5 * 4);
    fVar11 = *(float *)(iVar4 + 4 + *piVar1 * 4);
    fVar14 = *(float *)(iVar4 + *piVar1 * 4);
    fVar12 = *(float *)(iVar4 + 4 + iVar5 * 4) - fVar11;
    fVar10 = fVar9 + fVar14;
    pfVar2 = local_8 + 2;
    pfVar3 = local_8 + 3;
    local_8 = local_8 + 4;
    fVar13 = *pfVar3 * fVar10 - *pfVar2 * fVar12;
    fVar9 = (fVar9 - fVar14) * 0.5;
    fVar11 = (fVar11 + *(float *)(iVar4 + 4 + iVar5 * 4)) * 0.5;
    fVar14 = *pfVar3 * fVar12 + *pfVar2 * fVar10;
    *local_c = fVar14 + fVar11;
    pfVar7[-7] = fVar11 - fVar14;
    local_c[1] = fVar13 + fVar9;
    local_c = local_c + 4;
    pfVar7[-6] = fVar13 - fVar9;
    pfVar2 = pfVar7 + -7;
    pfVar7 = pfVar7 + -4;
  } while ((float *)(iVar6 + (int)piVar8) < pfVar2);
  return;
}

