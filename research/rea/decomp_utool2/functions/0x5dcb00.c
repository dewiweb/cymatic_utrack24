// rea decompile_all
// name: FUN_005dcb00
// address: 0x5dcb00
// body: available
// range: 0x5dcb00-0x5dd1ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_005dcb00(float *param_1,int param_2,float param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  int in_ECX;
  int iVar5;
  uint *in_EDX;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uStack_64;
  float local_3c;
  int local_18;
  float local_10;
  int local_c;
  
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  uStack_64 = 0x5dcb29;
  iVar9 = in_ECX * -4;
  pfVar4 = (float *)(&stack0xffffffa0 + iVar9);
  (&uStack_64)[-in_ECX] = 0x5dcb35;
  (&uStack_64)[in_ECX * -2] = 0x5dcb3f;
  (&uStack_64)[in_ECX * -3] = 0x5dcb49;
  (&uStack_64)[in_ECX * -4] = 0x5dcb53;
  local_3c = 0.0;
  local_10 = 0.0;
  fVar10 = 1.0;
  if (1.0 <= *param_1 + param_3) {
    fVar10 = *param_1 + param_3;
  }
  fVar14 = fVar10 * fVar10 * 0.5;
  fVar15 = fVar14 + 0.0;
  fVar10 = fVar14 * fVar10 + 0.0;
  *(float *)(&stack0xffffffa0 + iVar9) = fVar15;
  *(float *)(&stack0xffffffa0 + in_ECX * -8) = fVar15;
  *(undefined4 *)(&stack0xffffffa0 + in_ECX * -0xc) = 0;
  *(float *)(&stack0xffffffa0 + in_ECX * -0x10) = fVar10;
  *(undefined4 *)(&stack0xffffffa0 + in_ECX * -0x14) = 0;
  if (1 < in_ECX) {
    fVar16 = 1.0;
    local_18 = in_ECX + -1;
    fVar14 = fVar15;
    do {
      pfVar4 = pfVar4 + 1;
      fVar11 = *(float *)(((int)param_1 - (int)(&stack0xffffffa0 + iVar9)) + (int)pfVar4) + param_3;
      fVar12 = 1.0;
      if (1.0 <= fVar11) {
        fVar12 = fVar11;
      }
      fVar13 = fVar12 * fVar12;
      fVar11 = fVar16 * fVar13;
      fVar14 = fVar14 + fVar13;
      fVar15 = fVar15 + fVar11;
      fVar10 = fVar10 + fVar13 * fVar12;
      local_3c = fVar11 * fVar12 + local_3c;
      local_10 = fVar11 * fVar16 + local_10;
      *pfVar4 = fVar14;
      fVar16 = fVar16 + 1.0;
      pfVar4[-in_ECX] = fVar15;
      pfVar4[in_ECX * -2] = local_10;
      pfVar4[in_ECX * -3] = fVar10;
      pfVar4[in_ECX * -4] = local_3c;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  fVar10 = 0.0;
  fVar14 = 1.0;
  fVar16 = 0.0;
  iVar5 = 0;
  local_10 = 0.0;
  uVar3 = *in_EDX;
  iVar6 = (int)uVar3 >> 0x10;
  fVar15 = fVar10;
  if (iVar6 < 0) {
    local_c = 0;
    do {
      uVar3 = uVar3 & 0xffff;
      iVar5 = iVar5 + 1;
      fVar14 = *(float *)(&stack0xffffffa0 + uVar3 * 4 + in_ECX * -8) -
               *(float *)(&stack0xffffffa0 + iVar6 * -4 + in_ECX * -8);
      fVar15 = (*(float *)(&stack0xffffffa0 + uVar3 * 4 + in_ECX * -0x10) +
               *(float *)(&stack0xffffffa0 + iVar6 * -4 + in_ECX * -0x10)) *
               (*(float *)(&stack0xffffffa0 + uVar3 * 4 + in_ECX * -0xc) +
               *(float *)(&stack0xffffffa0 + iVar6 * -4 + in_ECX * -0xc)) -
               (*(float *)(&stack0xffffffa0 + uVar3 * 4 + in_ECX * -0x14) -
               *(float *)(&stack0xffffffa0 + iVar6 * -4 + in_ECX * -0x14)) * fVar14;
      fVar10 = (*(float *)(&stack0xffffffa0 + uVar3 * 4 + in_ECX * -0x14) -
               *(float *)(&stack0xffffffa0 + iVar6 * -4 + in_ECX * -0x14)) *
               (*(float *)(&stack0xffffffa0 + uVar3 * 4 + iVar9 + -0x60 + 0x60) +
               *(float *)(&stack0xffffffa0 + iVar6 * -4 + iVar9 + -0x60 + 0x60)) -
               (*(float *)(&stack0xffffffa0 + uVar3 * 4 + in_ECX * -0x10) +
               *(float *)(&stack0xffffffa0 + iVar6 * -4 + in_ECX * -0x10)) * fVar14;
      fVar14 = (*(float *)(&stack0xffffffa0 + uVar3 * 4 + in_ECX * -0xc) +
               *(float *)(&stack0xffffffa0 + iVar6 * -4 + in_ECX * -0xc)) *
               (*(float *)(&stack0xffffffa0 + uVar3 * 4 + iVar9 + -0x60 + 0x60) +
               *(float *)(&stack0xffffffa0 + iVar6 * -4 + iVar9 + -0x60 + 0x60)) - fVar14 * fVar14;
      fVar13 = local_10 + 1.0;
      fVar11 = (local_10 * fVar10 + fVar15) / fVar14;
      fVar12 = 0.0;
      if (0.0 <= fVar11) {
        fVar12 = fVar11;
      }
      *(float *)(local_c + param_2) = fVar12 - param_3;
      local_c = iVar5 * 4;
      uVar3 = in_EDX[iVar5];
      iVar6 = (int)uVar3 >> 0x10;
      local_10 = fVar13;
    } while (iVar6 < 0);
  }
  uVar3 = in_EDX[iVar5];
  while (uVar1 = uVar3 & 0xffff, (int)uVar1 < in_ECX) {
    iVar6 = (int)uVar3 >> 0x10;
    fVar14 = *(float *)(&stack0xffffffa0 + uVar1 * 4 + in_ECX * -8) -
             *(float *)(&stack0xffffffa0 + iVar6 * 4 + in_ECX * -8);
    fVar15 = (*(float *)(&stack0xffffffa0 + uVar1 * 4 + in_ECX * -0x10) -
             *(float *)(&stack0xffffffa0 + iVar6 * 4 + in_ECX * -0x10)) *
             (*(float *)(&stack0xffffffa0 + uVar1 * 4 + in_ECX * -0xc) -
             *(float *)(&stack0xffffffa0 + iVar6 * 4 + in_ECX * -0xc)) -
             (*(float *)(&stack0xffffffa0 + uVar1 * 4 + in_ECX * -0x14) -
             *(float *)(&stack0xffffffa0 + iVar6 * 4 + in_ECX * -0x14)) * fVar14;
    fVar10 = (*(float *)(&stack0xffffffa0 + uVar1 * 4 + in_ECX * -0x14) -
             *(float *)(&stack0xffffffa0 + iVar6 * 4 + in_ECX * -0x14)) *
             (*(float *)(&stack0xffffffa0 + uVar1 * 4 + iVar9 + -0x60 + 0x60) -
             *(float *)(&stack0xffffffa0 + iVar6 * 4 + iVar9 + -0x60 + 0x60)) -
             (*(float *)(&stack0xffffffa0 + uVar1 * 4 + in_ECX * -0x10) -
             *(float *)(&stack0xffffffa0 + iVar6 * 4 + in_ECX * -0x10)) * fVar14;
    fVar14 = (*(float *)(&stack0xffffffa0 + uVar1 * 4 + in_ECX * -0xc) -
             *(float *)(&stack0xffffffa0 + iVar6 * 4 + in_ECX * -0xc)) *
             (*(float *)(&stack0xffffffa0 + uVar1 * 4 + iVar9 + -0x60 + 0x60) -
             *(float *)(&stack0xffffffa0 + iVar6 * 4 + iVar9 + -0x60 + 0x60)) - fVar14 * fVar14;
    fVar11 = (local_10 * fVar10 + fVar15) / fVar14;
    fVar12 = 0.0;
    if (0.0 <= fVar11) {
      fVar12 = fVar11;
    }
    *(float *)(param_2 + iVar5 * 4) = fVar12 - param_3;
    iVar5 = iVar5 + 1;
    local_10 = local_10 + 1.0;
    uVar3 = in_EDX[iVar5];
  }
  for (; iVar5 < in_ECX; iVar5 = iVar5 + 1) {
    fVar12 = local_10 * fVar10;
    local_10 = local_10 + 1.0;
    fVar11 = (fVar12 + fVar15) / fVar14;
    fVar12 = 0.0;
    if (0.0 <= fVar11) {
      fVar12 = fVar11;
    }
    *(float *)(param_2 + iVar5 * 4) = fVar12 - param_3;
  }
  if (0 < param_4) {
    iVar5 = 0;
    iVar6 = param_4 / 2;
    if (iVar6 - param_4 < 0) {
      local_18 = iVar6 - param_4;
      local_c = iVar6 * 4;
      iVar7 = (iVar6 - param_4) * -4;
      iVar8 = (param_4 - iVar6) * 4;
      do {
        fVar14 = *(float *)(&stack0xffffffa0 + local_c + in_ECX * -8) -
                 *(float *)(&stack0xffffffa0 + iVar7 + in_ECX * -8);
        fVar10 = (*(float *)(&stack0xffffffa0 + local_c + in_ECX * -0x14) -
                 *(float *)(&stack0xffffffa0 + iVar7 + in_ECX * -0x14)) *
                 (*(float *)(&stack0xffffffa0 + iVar7 + iVar9) +
                 *(float *)(&stack0xffffffa0 + local_c + iVar9)) -
                 (*(float *)(&stack0xffffffa0 + iVar7 + in_ECX * -0x10) +
                 *(float *)(&stack0xffffffa0 + local_c + in_ECX * -0x10)) * fVar14;
        fVar15 = (*(float *)(&stack0xffffffa0 + iVar7 + in_ECX * -0x10) +
                 *(float *)(&stack0xffffffa0 + local_c + in_ECX * -0x10)) *
                 (*(float *)(&stack0xffffffa0 + iVar7 + in_ECX * -0xc) +
                 *(float *)(&stack0xffffffa0 + local_c + in_ECX * -0xc)) -
                 (*(float *)(&stack0xffffffa0 + local_c + in_ECX * -0x14) -
                 *(float *)(&stack0xffffffa0 + iVar7 + in_ECX * -0x14)) * fVar14;
        fVar14 = (*(float *)(&stack0xffffffa0 + iVar7 + in_ECX * -0xc) +
                 *(float *)(&stack0xffffffa0 + local_c + in_ECX * -0xc)) *
                 (*(float *)(&stack0xffffffa0 + iVar7 + iVar9) +
                 *(float *)(&stack0xffffffa0 + local_c + iVar9)) - fVar14 * fVar14;
        fVar12 = (fVar16 * fVar10 + fVar15) / fVar14 - param_3;
        if (fVar12 < *(float *)(param_2 + iVar5 * 4)) {
          *(float *)(param_2 + iVar5 * 4) = fVar12;
        }
        iVar7 = iVar8 + -4;
        local_c = local_c + 4;
        iVar5 = iVar5 + 1;
        local_18 = local_18 + 1;
        fVar16 = fVar16 + 1.0;
        iVar8 = iVar7;
      } while (local_18 < 0);
    }
    iVar8 = iVar6 + iVar5;
    if (iVar8 < in_ECX) {
      local_c = iVar8 * 4;
      iVar7 = ((iVar6 - param_4) + iVar5) * 4;
      iVar6 = (iVar8 - param_4) * 4;
      do {
        fVar14 = *(float *)(&stack0xffffffa0 + local_c + in_ECX * -8) -
                 *(float *)(&stack0xffffffa0 + iVar6 + in_ECX * -8);
        fVar10 = (*(float *)(&stack0xffffffa0 + local_c + in_ECX * -0x14) -
                 *(float *)(&stack0xffffffa0 + iVar6 + in_ECX * -0x14)) *
                 (*(float *)(&stack0xffffffa0 + local_c + iVar9) -
                 *(float *)(&stack0xffffffa0 + iVar6 + iVar9)) -
                 (*(float *)(&stack0xffffffa0 + local_c + in_ECX * -0x10) -
                 *(float *)(&stack0xffffffa0 + iVar6 + in_ECX * -0x10)) * fVar14;
        fVar15 = (*(float *)(&stack0xffffffa0 + local_c + in_ECX * -0x10) -
                 *(float *)(&stack0xffffffa0 + iVar6 + in_ECX * -0x10)) *
                 (*(float *)(&stack0xffffffa0 + local_c + in_ECX * -0xc) -
                 *(float *)(&stack0xffffffa0 + iVar6 + in_ECX * -0xc)) -
                 (*(float *)(&stack0xffffffa0 + local_c + in_ECX * -0x14) -
                 *(float *)(&stack0xffffffa0 + iVar6 + in_ECX * -0x14)) * fVar14;
        fVar14 = (*(float *)(&stack0xffffffa0 + local_c + in_ECX * -0xc) -
                 *(float *)(&stack0xffffffa0 + iVar6 + in_ECX * -0xc)) *
                 (*(float *)(&stack0xffffffa0 + local_c + iVar9) -
                 *(float *)(&stack0xffffffa0 + iVar6 + iVar9)) - fVar14 * fVar14;
        fVar12 = (fVar16 * fVar10 + fVar15) / fVar14 - param_3;
        if (fVar12 < *(float *)(param_2 + iVar5 * 4)) {
          *(float *)(param_2 + iVar5 * 4) = fVar12;
        }
        iVar7 = iVar7 + 4;
        local_c = local_c + 4;
        iVar8 = iVar8 + 1;
        iVar5 = iVar5 + 1;
        fVar16 = fVar16 + 1.0;
        iVar6 = iVar7;
      } while (iVar8 < in_ECX);
    }
    if (iVar5 < in_ECX) {
      if (3 < in_ECX - iVar5) {
        pfVar4 = (float *)(param_2 + (iVar5 + 2) * 4);
        iVar9 = ((in_ECX - iVar5) - 4U >> 2) + 1;
        iVar5 = iVar5 + iVar9 * 4;
        do {
          fVar12 = (fVar16 * fVar10 + fVar15) / fVar14 - param_3;
          if (fVar12 < pfVar4[-2]) {
            pfVar4[-2] = fVar12;
          }
          fVar12 = ((fVar16 + 1.0) * fVar10 + fVar15) / fVar14 - param_3;
          if (fVar12 < pfVar4[-1]) {
            pfVar4[-1] = fVar12;
          }
          fVar16 = fVar16 + 1.0 + 1.0;
          fVar12 = (fVar16 * fVar10 + fVar15) / fVar14 - param_3;
          if (fVar12 < *pfVar4) {
            *pfVar4 = fVar12;
          }
          fVar16 = fVar16 + 1.0;
          fVar12 = (fVar16 * fVar10 + fVar15) / fVar14 - param_3;
          if (fVar12 < pfVar4[1]) {
            pfVar4[1] = fVar12;
          }
          pfVar4 = pfVar4 + 4;
          fVar16 = fVar16 + 1.0;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      for (; iVar5 < in_ECX; iVar5 = iVar5 + 1) {
        fVar12 = (fVar16 * fVar10 + fVar15) / fVar14 - param_3;
        if (fVar12 < *(float *)(param_2 + iVar5 * 4)) {
          *(float *)(param_2 + iVar5 * 4) = fVar12;
        }
        fVar16 = fVar16 + 1.0;
      }
    }
  }
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}

