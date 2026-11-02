// rea decompile_all
// name: FUN_00641c20
// address: 0x641c20
// body: available
// range: 0x641c20-0x641da9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00641c20(float *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  bool bVar6;
  int *in_ECX;
  int iVar7;
  int *piVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar17 = 0.0;
  iVar11 = in_ECX[2] + -1;
  fVar16 = 0.0;
  bVar6 = true;
  if (-1 < iVar11) {
    piVar8 = (int *)(*in_ECX + iVar11 * 4);
    fVar18 = fVar17;
    do {
      uVar12 = *(uint *)(*piVar8 + 0x10);
      fVar17 = fVar18;
      if (0 < (int)uVar12) {
        iVar5 = *(int *)(*piVar8 + 8);
        iVar7 = uVar12 - 1;
        fVar17 = *(float *)(iVar5 + 4);
        fVar14 = fVar17;
        if (-1 < iVar7) {
          if (3 < (int)uVar12) {
            pfVar9 = (float *)(iVar5 + 0xc + iVar7 * 0x10);
            uVar12 = uVar12 >> 2;
            pfVar10 = (float *)(iVar7 * 0x10 + -4 + iVar5);
            iVar7 = iVar7 + uVar12 * -4;
            do {
              fVar13 = pfVar9[-2];
              if (fVar17 <= pfVar9[-2]) {
                fVar13 = fVar17;
              }
              fVar17 = *pfVar9;
              pfVar1 = pfVar9 + -2;
              pfVar9 = pfVar9 + -0x10;
              fVar15 = pfVar10[-2];
              if (fVar13 <= pfVar10[-2]) {
                fVar15 = fVar13;
              }
              fVar13 = fVar17 + *pfVar1;
              if (fVar17 + *pfVar1 <= fVar14) {
                fVar13 = fVar14;
              }
              fVar14 = pfVar10[-6];
              if (fVar15 <= pfVar10[-6]) {
                fVar14 = fVar15;
              }
              fVar15 = *pfVar10 + pfVar10[-2];
              if (*pfVar10 + pfVar10[-2] <= fVar13) {
                fVar15 = fVar13;
              }
              fVar17 = pfVar10[-10];
              if (fVar14 <= pfVar10[-10]) {
                fVar17 = fVar14;
              }
              fVar13 = pfVar10[-4] + pfVar10[-6];
              if (pfVar10[-4] + pfVar10[-6] <= fVar15) {
                fVar13 = fVar15;
              }
              pfVar1 = pfVar10 + -8;
              pfVar2 = pfVar10 + -10;
              pfVar10 = pfVar10 + -0x10;
              fVar14 = *pfVar1 + *pfVar2;
              if (*pfVar1 + *pfVar2 <= fVar13) {
                fVar14 = fVar13;
              }
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          if (-1 < iVar7) {
            pfVar9 = (float *)(iVar7 * 0x10 + 0xc + iVar5);
            fVar13 = fVar17;
            fVar15 = fVar14;
            do {
              fVar3 = pfVar9[-2];
              fVar4 = *pfVar9;
              fVar17 = fVar3;
              if (fVar13 <= fVar3) {
                fVar17 = fVar13;
              }
              pfVar9 = pfVar9 + -4;
              iVar7 = iVar7 + -1;
              fVar14 = fVar3 + fVar4;
              if (fVar3 + fVar4 <= fVar15) {
                fVar14 = fVar15;
              }
              fVar13 = fVar17;
              fVar15 = fVar14;
            } while (-1 < iVar7);
          }
        }
        if (bVar6) {
          bVar6 = false;
          fVar16 = fVar14;
          if (fVar14 <= fVar17) {
            fVar16 = fVar17;
          }
        }
        else {
          if (fVar14 <= fVar17) {
            fVar14 = fVar17;
          }
          if (fVar18 <= fVar17) {
            fVar17 = fVar18;
          }
          if (fVar14 <= fVar16) {
            fVar14 = fVar16;
          }
          fVar16 = fVar14;
          if (fVar14 <= fVar17) {
            fVar16 = fVar17;
          }
        }
      }
      piVar8 = piVar8 + -1;
      iVar11 = iVar11 + -1;
      fVar18 = fVar17;
    } while (-1 < iVar11);
  }
  fVar17 = (float)in_ECX[5] + fVar17;
  fVar16 = (float)in_ECX[5] + fVar16;
  *param_1 = fVar17;
  if (fVar16 <= fVar17) {
    fVar16 = fVar17;
  }
  param_1[1] = fVar16;
  return;
}

