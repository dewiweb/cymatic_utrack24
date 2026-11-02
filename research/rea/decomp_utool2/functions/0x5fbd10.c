// rea decompile_all
// name: FUN_005fbd10
// address: 0x5fbd10
// body: available
// range: 0x5fbd10-0x5fbfed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005fbd10(float *param_1,uint param_2,uint param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  float *pfVar11;
  float *pfVar12;
  uint uVar13;
  uint uVar14;
  float *pfVar15;
  int iVar16;
  
  uVar14 = param_3;
  uVar10 = param_2 - param_3;
  pfVar15 = param_4;
  if (param_3 != 0) {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *pfVar15 = 0.0;
      pfVar15 = pfVar15 + 1;
    }
  }
  param_3 = 0;
  pfVar15 = param_1;
  do {
    fVar2 = *pfVar15;
    uVar13 = 0;
    if (uVar14 != 0) {
      if ((7 < uVar14) &&
         ((param_1 + (uVar14 - 1) + param_3 < param_4 || (param_4 + (uVar14 - 1) < pfVar15)))) {
        pfVar12 = pfVar15 + 4;
        do {
          fVar3 = pfVar12[-3];
          fVar4 = pfVar12[-2];
          fVar5 = pfVar12[-1];
          pfVar11 = param_4 + uVar13;
          fVar6 = pfVar11[1];
          fVar7 = pfVar11[2];
          fVar8 = pfVar11[3];
          pfVar1 = param_4 + uVar13;
          *pfVar1 = pfVar12[-4] * fVar2 + *pfVar11;
          pfVar1[1] = fVar3 * fVar2 + fVar6;
          pfVar1[2] = fVar4 * fVar2 + fVar7;
          pfVar1[3] = fVar5 * fVar2 + fVar8;
          fVar3 = *pfVar12;
          fVar4 = pfVar12[1];
          fVar5 = pfVar12[2];
          fVar6 = pfVar12[3];
          pfVar12 = pfVar12 + 8;
          pfVar11 = param_4 + uVar13 + 4;
          fVar7 = pfVar11[1];
          fVar8 = pfVar11[2];
          fVar9 = pfVar11[3];
          pfVar1 = param_4 + uVar13 + 4;
          *pfVar1 = fVar2 * fVar3 + *pfVar11;
          pfVar1[1] = fVar2 * fVar4 + fVar7;
          pfVar1[2] = fVar2 * fVar5 + fVar8;
          pfVar1[3] = fVar2 * fVar6 + fVar9;
          uVar13 = uVar13 + 8;
        } while (uVar13 < (uVar14 & 0xfffffff8));
      }
      if (uVar13 < uVar14) {
        if (3 < uVar14 - uVar13) {
          pfVar12 = param_4 + uVar13 + 2;
          pfVar11 = param_1 + param_3 + uVar13;
          iVar16 = ((uVar14 - uVar13) - 4 >> 2) + 1;
          uVar13 = uVar13 + iVar16 * 4;
          do {
            pfVar12[-2] = fVar2 * *pfVar11 + pfVar12[-2];
            pfVar12[-1] = pfVar11[1] * fVar2 + pfVar12[-1];
            *pfVar12 = pfVar11[2] * fVar2 + *pfVar12;
            pfVar1 = pfVar11 + 3;
            pfVar11 = pfVar11 + 4;
            pfVar12[1] = *pfVar1 * fVar2 + pfVar12[1];
            pfVar12 = pfVar12 + 4;
            iVar16 = iVar16 + -1;
          } while (iVar16 != 0);
        }
        if (uVar13 < uVar14) {
          pfVar12 = param_1 + param_3 + uVar13;
          do {
            fVar3 = *pfVar12;
            pfVar12 = pfVar12 + 1;
            param_4[uVar13] = fVar3 * fVar2 + param_4[uVar13];
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar14);
        }
      }
    }
    param_3 = param_3 + 1;
    pfVar15 = pfVar15 + 1;
  } while (param_3 <= uVar10);
  if (param_3 < param_2) {
    pfVar15 = param_1 + param_3;
    do {
      fVar2 = *pfVar15;
      uVar14 = 0;
      uVar10 = param_2 - param_3;
      if (uVar10 != 0) {
        if ((7 < uVar10) &&
           ((param_1 + (param_3 - 1) + uVar10 < param_4 || (param_4 + (uVar10 - 1) < pfVar15)))) {
          pfVar12 = pfVar15 + 4;
          do {
            fVar3 = pfVar12[-3];
            fVar4 = pfVar12[-2];
            fVar5 = pfVar12[-1];
            pfVar11 = param_4 + uVar14;
            fVar6 = pfVar11[1];
            fVar7 = pfVar11[2];
            fVar8 = pfVar11[3];
            pfVar1 = param_4 + uVar14;
            *pfVar1 = pfVar12[-4] * fVar2 + *pfVar11;
            pfVar1[1] = fVar3 * fVar2 + fVar6;
            pfVar1[2] = fVar4 * fVar2 + fVar7;
            pfVar1[3] = fVar5 * fVar2 + fVar8;
            fVar3 = *pfVar12;
            fVar4 = pfVar12[1];
            fVar5 = pfVar12[2];
            fVar6 = pfVar12[3];
            pfVar12 = pfVar12 + 8;
            pfVar11 = param_4 + uVar14 + 4;
            fVar7 = pfVar11[1];
            fVar8 = pfVar11[2];
            fVar9 = pfVar11[3];
            pfVar1 = param_4 + uVar14 + 4;
            *pfVar1 = fVar3 * fVar2 + *pfVar11;
            pfVar1[1] = fVar4 * fVar2 + fVar7;
            pfVar1[2] = fVar5 * fVar2 + fVar8;
            pfVar1[3] = fVar6 * fVar2 + fVar9;
            uVar14 = uVar14 + 8;
          } while (uVar14 < (uVar10 & 0xfffffff8));
        }
        if (uVar14 < uVar10) {
          if (3 < uVar10 - uVar14) {
            pfVar12 = param_4 + uVar14 + 2;
            pfVar11 = param_1 + param_3 + uVar14;
            iVar16 = ((uVar10 - uVar14) - 4 >> 2) + 1;
            uVar14 = uVar14 + iVar16 * 4;
            do {
              pfVar12[-2] = *pfVar11 * fVar2 + pfVar12[-2];
              pfVar12[-1] = pfVar11[1] * fVar2 + pfVar12[-1];
              *pfVar12 = pfVar11[2] * fVar2 + *pfVar12;
              pfVar1 = pfVar11 + 3;
              pfVar11 = pfVar11 + 4;
              pfVar12[1] = *pfVar1 * fVar2 + pfVar12[1];
              pfVar12 = pfVar12 + 4;
              iVar16 = iVar16 + -1;
            } while (iVar16 != 0);
          }
          if (uVar14 < uVar10) {
            pfVar12 = param_1 + param_3 + uVar14;
            do {
              fVar3 = *pfVar12;
              pfVar12 = pfVar12 + 1;
              param_4[uVar14] = fVar2 * fVar3 + param_4[uVar14];
              uVar14 = uVar14 + 1;
            } while (uVar14 < uVar10);
          }
        }
      }
      param_3 = param_3 + 1;
      pfVar15 = pfVar15 + 1;
    } while (param_3 < param_2);
  }
  return;
}

