// rea decompile_all
// name: FUN_005e62d0
// address: 0x5e62d0
// body: available
// range: 0x5e62d0-0x5e68a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Type propagation algorithm not settling */

void FUN_005e62d0(float *param_1,int param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  float fVar11;
  uint uVar12;
  int iVar13;
  float *pfVar14;
  int in_ECX;
  undefined1 *puVar15;
  float *pfVar16;
  int in_EDX;
  float fVar17;
  int iVar18;
  float fVar19;
  int *piVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fStack_58;
  float fStack_54;
  float local_40;
  int local_3c;
  int local_38;
  uint local_34;
  float local_30;
  int local_2c;
  float *local_28;
  uint local_24;
  float local_20;
  float *local_1c;
  float *local_18;
  int *local_14;
  float *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_24 = 0;
  uVar8 = *(uint *)(in_ECX + 4);
  local_34 = uVar8;
  local_20 = *(float *)(in_ECX + 0xc);
  fStack_54 = 8.668071e-39;
  iVar21 = uVar8 * -4;
  local_c = &stack0xffffffb0 + iVar21;
  fVar11 = (float)(*(int *)(in_ECX + 0x9c) / 2);
  local_40 = 2.8026e-45;
  if (2 < (int)fVar11) {
    local_40 = fVar11;
  }
  fVar17 = 0.0;
  fVar24 = *(float *)(in_EDX + 0x3c);
  fVar22 = fVar24 - (float)((int)fVar11 + -2);
  fVar11 = 0.0;
  if (0.0 <= fVar22) {
    fVar11 = fVar22;
  }
  if (fVar11 <= fVar24) {
    fVar24 = fVar11;
  }
  uVar12 = uVar8;
  local_1c = (float *)in_EDX;
  if (0 < (int)uVar8) {
    local_14 = (int *)in_ECX;
    if (7 < uVar8) {
      pfVar14 = *(float **)(in_ECX + 0x24);
      local_18 = (float *)(in_ECX + 0x24);
      local_28 = pfVar14;
      local_10 = &fStack_54;
      if ((((param_1 + (uVar8 - 1) < &stack0xffffffb0 + iVar21) || (&fStack_54 < param_1)) &&
          ((pfVar14 + (uVar8 - 1) < &stack0xffffffb0 + iVar21 || (&fStack_54 < pfVar14)))) &&
         ((local_18 < &stack0xffffffb0 + iVar21 || (&fStack_54 < local_18)))) {
        uVar12 = uVar8 & 0x80000007;
        if ((int)uVar12 < 0) {
          uVar12 = (uVar12 - 1 | 0xfffffff8) + 1;
        }
        local_10 = (float *)((int)param_1 - (int)(&stack0xffffffb0 + iVar21));
        local_2c = uVar8 - uVar12;
        pfVar16 = &local_40 + -uVar8;
        local_18 = (float *)(-(int)(&stack0xffffffb0 + iVar21) - 0x10);
        iVar13 = 0x10;
        do {
          pfVar5 = local_10;
          pfVar6 = (float *)((int)param_1 + iVar13 + -0x10);
          fVar11 = pfVar6[1];
          fVar22 = pfVar6[2];
          fVar23 = pfVar6[3];
          fVar17 = (float)((int)fVar17 + 8);
          pfVar4 = (float *)((int)local_18 + (int)pfVar16 + (int)pfVar14);
          fVar26 = pfVar4[1];
          fVar19 = pfVar4[2];
          fVar25 = pfVar4[3];
          pfVar16[-4] = *pfVar4 * *pfVar6;
          pfVar16[-3] = fVar26 * fVar11;
          pfVar16[-2] = fVar19 * fVar22;
          pfVar16[-1] = fVar25 * fVar23;
          pfVar5 = (float *)((int)pfVar5 + (int)pfVar16);
          fVar11 = pfVar5[1];
          fVar22 = pfVar5[2];
          fVar23 = pfVar5[3];
          pfVar4 = (float *)(iVar13 + (int)pfVar14);
          fVar26 = pfVar4[1];
          fVar19 = pfVar4[2];
          fVar25 = pfVar4[3];
          *pfVar16 = *pfVar5 * *pfVar4;
          pfVar16[1] = fVar11 * fVar26;
          pfVar16[2] = fVar22 * fVar19;
          pfVar16[3] = fVar23 * fVar25;
          pfVar16 = pfVar16 + 8;
          iVar13 = iVar13 + 0x20;
        } while ((int)fVar17 < local_2c);
      }
    }
    uVar12 = local_34;
    if ((int)fVar17 < (int)local_34) {
      if (3 < (int)(local_34 - (int)fVar17)) {
        local_28 = param_1 + (int)fVar17 + 3;
        local_10 = (float *)((int)param_1 - (int)(&stack0xffffffb0 + iVar21));
        local_38 = 4 - (int)(&stack0xffffffb0 + iVar21);
        pfVar14 = (float *)(&stack0xffffffb0 + ((int)fVar17 + 1) * 4 + iVar21);
        local_3c = 8 - (int)(&stack0xffffffb0 + iVar21);
        local_18 = (float *)(-(int)(&stack0xffffffb0 + iVar21) - 4);
        iVar13 = ((local_34 - (int)fVar17) - 4 >> 2) + 1;
        local_2c = iVar13;
        local_30 = (float)((int)fVar17 + iVar13 * 4);
        pfVar16 = param_1 + (int)fVar17 + 3;
        piVar20 = local_14;
        do {
          puVar15 = (undefined1 *)((int)local_18 + (int)pfVar14);
          pfVar14[-1] = *(float *)(puVar15 + *(int *)((int)piVar20 + 0x24)) * pfVar16[-3];
          piVar10 = local_14;
          iVar9 = local_38;
          *pfVar14 = *(float *)((int)pfVar14 + (int)local_10) *
                     *(float *)(puVar15 + *(int *)((int)piVar20 + 0x24) + 4);
          iVar18 = local_3c;
          pfVar14[1] = *(float *)((int)pfVar14 + *(int *)((int)piVar10 + 0x24) + iVar9) *
                       pfVar16[-1];
          pfVar14[2] = *(float *)((int)pfVar14 + *(int *)((int)piVar10 + 0x24) + iVar18) * *pfVar16;
          pfVar14 = pfVar14 + 4;
          iVar13 = iVar13 + -1;
          fVar17 = local_30;
          pfVar16 = pfVar16 + 4;
          piVar20 = piVar10;
        } while (iVar13 != 0);
      }
      uVar12 = local_34;
      if ((int)fVar17 < (int)local_34) {
        pfVar14 = (float *)(&stack0xffffffb0 + (int)fVar17 * 4 + iVar21);
        do {
          iVar13 = (int)fVar17 * 4;
          fVar17 = (float)((int)fVar17 + 1);
          *pfVar14 = *(float *)(*(int *)((int)local_14 + 0x24) + iVar13) *
                     *(float *)((int)pfVar14 + ((int)param_1 - (int)(&stack0xffffffb0 + iVar21)));
          pfVar14 = pfVar14 + 1;
        } while ((int)fVar17 < (int)uVar12);
      }
    }
  }
  *(undefined1 **)((int)&fStack_54 + uVar8 * -4) = &stack0xffffffb0 + iVar21;
  (&fStack_58)[-uVar8] = 8.668825e-39;
  FUN_005dec80();
  fVar17 = local_20;
  iVar13 = *(int *)(param_3 + 0x8c);
  fVar11 = *(float *)(&stack0xffffffb4 + iVar21) * 0.7 * *(float *)(&stack0xffffffb4 + iVar21) +
           *(float *)(&stack0xffffffb0 + iVar21) * *(float *)(&stack0xffffffb0 + iVar21) +
           *(float *)(&stack0xffffffb8 + iVar21) * 0.2 * *(float *)(&stack0xffffffb8 + iVar21);
  if (iVar13 == 0) {
    fVar22 = *(float *)(param_3 + 0x88);
    *(float *)(param_3 + 0x88) = fVar11;
  }
  else {
    fVar22 = *(float *)(param_3 + 0x84);
    *(float *)(param_3 + 0x88) = fVar11 + *(float *)(param_3 + 0x88);
  }
  fVar22 = fVar11 + fVar22;
  *(float *)(param_3 + 0x84) = fVar22;
  *(float *)(param_3 + 0x84) = fVar22 - *(float *)(param_3 + 0x48 + iVar13 * 4);
  *(float *)(param_3 + 0x48 + iVar13 * 4) = fVar11;
  *(int *)(param_3 + 0x8c) = *(int *)(param_3 + 0x8c) + 1;
  if (0xe < *(int *)(param_3 + 0x8c)) {
    *(undefined4 *)(param_3 + 0x8c) = 0;
  }
  local_30 = fVar22 * 0.0625;
  iVar13 = 0;
  fVar11 = (((float)(int)ABS(fVar22 * 0.0625) + 0.0) * 7.1771143e-07 - 764.6162) * 0.5 - 15.0;
  if (0 < (int)uVar12 / 2) {
    do {
      local_20 = *(float *)(&stack0xffffffb4 + iVar13 * 4 + iVar21) *
                 *(float *)(&stack0xffffffb4 + iVar13 * 4 + iVar21) +
                 *(float *)(&stack0xffffffb0 + iVar13 * 4 + iVar21) *
                 *(float *)(&stack0xffffffb0 + iVar13 * 4 + iVar21);
      iVar18 = iVar13 + 2;
      fVar23 = (((float)(int)ABS(local_20) + 0.0) * 7.1771143e-07 - 764.6162) * 0.5;
      fVar22 = fVar11;
      if (fVar11 <= fVar23) {
        fVar22 = fVar23;
      }
      fVar23 = fVar17;
      if (fVar17 <= fVar22) {
        fVar23 = fVar22;
      }
      *(float *)(&stack0xffffffb0 + (iVar13 >> 1) * 4 + iVar21) = fVar23;
      fVar11 = fVar11 - 8.0;
      iVar13 = iVar18;
    } while (iVar18 < (int)uVar12 / 2);
  }
  local_1c = (float *)((int)local_1c + 0x20);
  piVar20 = (int *)(param_2 + 8);
  local_14 = (int *)(param_3 + 0x44);
  local_10 = (float *)0x0;
  do {
    iVar13 = piVar20[-1];
    iVar21 = 0;
    fVar11 = 0.0;
    if (3 < iVar13) {
      pfVar16 = (float *)(*piVar20 + 8);
      pfVar14 = (float *)(local_c + piVar20[-2] * 4);
      iVar18 = (iVar13 - 4U >> 2) + 1;
      iVar21 = iVar18 * 4;
      do {
        pfVar4 = pfVar16 + -2;
        fVar17 = *pfVar14;
        pfVar5 = pfVar14 + 1;
        pfVar6 = pfVar16 + -1;
        pfVar1 = pfVar14 + 2;
        fVar22 = *pfVar16;
        pfVar2 = pfVar14 + 3;
        pfVar3 = pfVar16 + 1;
        pfVar14 = pfVar14 + 4;
        pfVar16 = pfVar16 + 4;
        fVar11 = fVar11 + *pfVar4 * fVar17 + *pfVar5 * *pfVar6 + *pfVar1 * fVar22 +
                 *pfVar2 * *pfVar3;
        iVar18 = iVar18 + -1;
      } while (iVar18 != 0);
    }
    if (iVar21 < iVar13) {
      pfVar14 = (float *)(*piVar20 + iVar21 * 4);
      iVar13 = iVar13 - iVar21;
      pfVar16 = (float *)(local_c + (piVar20[-2] + iVar21) * 4);
      do {
        fVar17 = *pfVar14;
        pfVar14 = pfVar14 + 1;
        fVar22 = *pfVar16;
        pfVar16 = pfVar16 + 1;
        fVar11 = fVar11 + fVar17 * fVar22;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
    fVar22 = 99999.0;
    local_20 = (float)*local_14;
    fVar11 = (float)piVar20[1] * fVar11;
    fVar17 = -99999.0;
    iVar21 = (int)local_20 + 0x10;
    if (-1 < (int)local_20 + -1) {
      iVar21 = (int)local_20 + -1;
    }
    fVar23 = *(float *)(param_3 + ((int)local_10 + iVar21) * 4);
    fVar26 = fVar23;
    if (fVar23 <= fVar11) {
      fVar26 = fVar11;
    }
    if (fVar11 <= fVar23) {
      fVar23 = fVar11;
    }
    fVar19 = local_40;
    fVar25 = fVar22;
    if (0 < (int)local_40) {
      do {
        iVar13 = iVar21 + -1;
        iVar21 = iVar21 + 0x10;
        if (-1 < iVar13) {
          iVar21 = iVar13;
        }
        fVar7 = *(float *)(param_3 + ((int)local_10 + iVar21) * 4);
        fVar22 = fVar7;
        if (fVar25 <= fVar7) {
          fVar22 = fVar25;
        }
        if (fVar7 <= fVar17) {
          fVar7 = fVar17;
        }
        fVar17 = fVar7;
        fVar19 = (float)((int)fVar19 + -1);
        fVar25 = fVar22;
      } while (fVar19 != 0.0);
    }
    *(float *)(param_3 + ((int)local_20 + (int)local_10) * 4) = fVar11;
    *local_14 = *local_14 + 1;
    if (0x10 < *local_14) {
      *local_14 = 0;
    }
    if (local_1c[-7] + fVar24 < fVar26 - fVar17) {
      local_24 = local_24 | 5;
    }
    if (fVar23 - fVar22 < *local_1c - fVar24) {
      local_24 = local_24 | 2;
    }
    local_10 = (float *)((int)local_10 + 0x24);
    local_14 = local_14 + 0x24;
    local_1c = local_1c + 1;
    piVar20 = piVar20 + 4;
  } while ((int)local_10 < 0xfc);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

