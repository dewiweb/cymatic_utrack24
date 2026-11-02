// rea decompile_all
// name: FUN_005db7b0
// address: 0x5db7b0
// body: available
// range: 0x5db7b0-0x5dc058 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_005db7b0(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  float *pfVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  int in_ECX;
  int iVar19;
  undefined4 *puVar20;
  float *pfVar21;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int in_EDX;
  int iVar22;
  uint *puVar23;
  int iVar24;
  int iVar25;
  int extraout_EDX;
  uint uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  size_t asStack_c0 [6];
  int aiStack_a8 [3];
  int local_60;
  undefined4 *local_5c;
  int local_4c;
  int local_40;
  int local_3c;
  int local_30;
  int local_20;
  
  uVar10 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  iVar27 = *param_1;
  piVar16 = (int *)param_1[1];
  if (piVar16[0x7d] == 0) {
    local_4c = 0x10;
  }
  else {
    local_4c = piVar16[0x7f];
  }
  iVar12 = *(int *)(in_EDX + 0x84 + (*piVar16 * 0xf + in_ECX) * 4);
  iVar28 = *(int *)(in_EDX + 0x138 + in_ECX * 4);
  dVar1 = *(double *)(&DAT_00ac63b0 + *(int *)(in_EDX + 0xfc + in_ECX * 4) * 8);
  dVar2 = *(double *)(&DAT_00ac63b0 + iVar28 * 8);
  aiStack_a8[2] = 0x5db84b;
  iVar8 = param_7 * -4;
  aiStack_a8[2 - param_7] = 0x5db855;
  aiStack_a8[param_7 * -2 + 2] = 0x5db85f;
  aiStack_a8[param_7 * -3 + 2] = 0x5db86c;
  aiStack_a8[param_7 * -4 + 2] = 0x5db877;
  iVar11 = *(int *)(param_2 + 0x484) + param_7;
  aiStack_a8[param_7 * -5 + 2] = 0x5db88e;
  iVar9 = iVar11 * -4;
  if (1000 < iVar27) {
    dVar2 = *(double *)(&DAT_00be71e8 + iVar28 * 8);
  }
  iVar28 = local_4c * param_7;
  aiStack_a8[param_7 * -5 + (2 - iVar11)] = 0x5db8c3;
  *(undefined1 **)(&stack0xffffff64 + iVar8) =
       &stack0xffffff64 + iVar28 * -4 + iVar9 + param_7 * -0x14;
  aiStack_a8[param_7 * -5 + ((2 - iVar28) - iVar11)] = 0x5db8d1;
  *(undefined1 **)(&stack0xffffff64 + param_7 * -8) =
       &stack0xffffff64 + iVar28 * -8 + iVar9 + param_7 * -0x14;
  aiStack_a8[param_7 * -5 + ((iVar28 * -2 + 2) - iVar11)] = 0x5db8df;
  *(undefined1 **)(&stack0xffffff64 + param_7 * -0xc) =
       &stack0xffffff64 + iVar28 * -0xc + iVar9 + param_7 * -0x14;
  aiStack_a8[param_7 * -5 + ((iVar28 * -3 + 2) - iVar11)] = 0x5db8ea;
  *(undefined1 **)(&stack0xffffff64 + param_7 * -0x10) =
       &stack0xffffff64 + iVar28 * -0x10 + iVar9 + param_7 * -0x14;
  if (1 < param_7) {
    iVar22 = local_4c << 2;
    iVar29 = param_7 + -1;
    piVar16 = (int *)(&stack0xffffff68 + param_7 * -8);
    do {
      piVar13 = piVar16 + 1;
      piVar13[param_7 + -1] = *(int *)(&stack0xffffff64 + iVar8) + iVar22;
      *piVar16 = *(int *)(&stack0xffffff64 + param_7 * -8) + iVar22;
      piVar13[-1 - param_7] = *(int *)(&stack0xffffff64 + param_7 * -0xc) + iVar22;
      piVar13[param_7 * -2 + -1] = *(int *)(&stack0xffffff64 + param_7 * -0x10) + iVar22;
      iVar22 = iVar22 + local_4c * 4;
      iVar29 = iVar29 + -1;
      piVar16 = piVar13;
    } while (iVar29 != 0);
  }
  iVar22 = 0;
  if (0 < *(int *)(param_2 + 0x484) + param_7) {
    do {
      *(undefined4 *)(&stack0xffffff64 + iVar22 * 4 + iVar9 + param_7 * -0x14) = 0;
      iVar22 = iVar22 + 1;
    } while (iVar22 < *(int *)(param_2 + 0x484) + param_7);
  }
  local_20 = 0;
  if (0 < iVar27) {
    iVar12 = iVar12 - iVar27;
    iVar22 = iVar27;
    do {
      aiStack_a8[param_7 * -5 + ((iVar28 * -4 + 2) - iVar11)] = param_7 * 4;
      aiStack_a8[param_7 * -5 + ((iVar28 * -4 + 1) - iVar11)] = param_5;
      iVar29 = local_4c;
      if (iVar22 < local_4c) {
        iVar29 = iVar22;
      }
      aiStack_a8[param_7 * -5 + (iVar28 * -4 - iVar11)] = (int)(&stack0xffffff64 + param_7 * -0x14);
      asStack_c0[param_7 * -5 + ((iVar28 * -4 + 5) - iVar11)] = 0x5db9de;
      FUN_004c2c30();
      asStack_c0[param_7 * -5 + ((iVar28 * -4 + 5) - iVar11)] = iVar28 * 4;
      asStack_c0[param_7 * -5 + ((iVar28 * -4 + 4) - iVar11)] = 0;
      asStack_c0[param_7 * -5 + ((iVar28 * -4 + 3) - iVar11)] =
           *(undefined4 *)(&stack0xffffff64 + param_7 * -0x10);
      asStack_c0[param_7 * -5 + ((iVar28 * -4 + 2) - iVar11)] = 0x5db9ef;
      _memset((void *)asStack_c0[param_7 * -5 + ((iVar28 * -4 + 3) - iVar11)],
              asStack_c0[param_7 * -5 + ((iVar28 * -4 + 4) - iVar11)],
              asStack_c0[param_7 * -5 + ((iVar28 * -4 + 5) - iVar11)]);
      iVar19 = 0;
      if (0 < param_7) {
        local_40 = param_7;
        piVar16 = (int *)(&stack0xffffff64 + param_7 * -0xc);
        do {
          piVar13 = (int *)((param_3 - (int)(&stack0xffffff64 + param_7 * -0xc)) + (int)piVar16);
          piVar14 = (int *)((int)piVar13 + (int)(&stack0xffffff64 + (param_7 * -0x14 - param_3)));
          iVar31 = *(int *)((int)piVar14 + (param_4 - (int)(&stack0xffffff64 + param_7 * -0x14))) +
                   local_20 * 4;
          iVar19 = 0;
          if (*piVar14 == 0) {
            if (0 < iVar29) {
              do {
                *(undefined4 *)(*piVar16 + iVar19 * 4) = 0x2edbe6ff;
                *(undefined4 *)(piVar16[param_7 * 2] + iVar19 * 4) = 0;
                *(undefined4 *)(piVar16[param_7] + iVar19 * 4) = 0;
                *(undefined4 *)(piVar16[-param_7] + iVar19 * 4) = 0;
                *(undefined4 *)(iVar31 + iVar19 * 4) = 0;
                iVar19 = iVar19 + 1;
              } while (iVar19 < iVar29);
            }
            piVar16[param_7 * -2 - iVar11] = 0;
          }
          else {
            local_3c = 0;
            if (3 < iVar29) {
              iVar19 = *piVar16;
              iVar32 = (iVar29 - 4U >> 2) + 1;
              local_3c = iVar32 * 4;
              puVar20 = (undefined4 *)(iVar19 + 4);
              piVar14 = (int *)(iVar31 + 0xc);
              do {
                puVar20[-1] = *(undefined4 *)(&DAT_00ac7ba0 + piVar14[-3] * 4);
                *puVar20 = *(undefined4 *)
                            (&DAT_00ac7ba0 + *(int *)((int)puVar20 + (iVar31 - iVar19)) * 4);
                puVar20[1] = *(undefined4 *)(&DAT_00ac7ba0 + piVar14[-1] * 4);
                puVar20[2] = *(undefined4 *)(&DAT_00ac7ba0 + *piVar14 * 4);
                iVar32 = iVar32 + -1;
                puVar20 = puVar20 + 4;
                piVar14 = piVar14 + 4;
              } while (iVar32 != 0);
            }
            if (local_3c < iVar29) {
              iVar19 = *piVar16;
              iVar32 = iVar29 - local_3c;
              puVar20 = (undefined4 *)(iVar19 + local_3c * 4);
              do {
                *puVar20 = *(undefined4 *)
                            (&DAT_00ac7ba0 + *(int *)((int)puVar20 + (iVar31 - iVar19)) * 4);
                iVar32 = iVar32 + -1;
                puVar20 = puVar20 + 1;
              } while (iVar32 != 0);
            }
            iVar19 = *(int *)((param_3 - (int)(&stack0xffffff64 + param_7 * -0xc)) + (int)piVar16);
            pfVar21 = (float *)0x0;
            iVar32 = *piVar16;
            puVar23 = (uint *)piVar16[-param_7];
            if (0 < iVar29) {
              iVar30 = iVar32 - (int)puVar23;
              do {
                dVar3 = dVar1;
                if (iVar22 + iVar12 <= (int)pfVar21) {
                  dVar3 = dVar2;
                }
                fVar36 = (float)dVar3;
                fVar34 = *(float *)((int)puVar23 + ((iVar19 + local_20 * 4) - iVar32) + iVar30);
                aiStack_a8[param_7 * -5 + ((iVar28 * -4 + 2) - iVar11)] = 0x5dbb70;
                uVar39 = FUN_00411660();
                puVar23 = (uint *)((ulonglong)uVar39 >> 0x20);
                pfVar21 = (float *)(extraout_ECX + 1);
                *puVar23 = (uint)(fVar36 <= fVar34 / *(float *)uVar39);
                puVar23 = puVar23 + 1;
              } while ((int)pfVar21 < iVar29);
              pfVar21 = (float *)piVar16[param_7 * 2];
              pfVar15 = (float *)(*piVar13 + local_20 * 4);
              iVar30 = piVar16[param_7] - (int)pfVar21;
              iVar32 = *piVar16 - (int)pfVar21;
              iVar19 = iVar29;
              do {
                fVar34 = *pfVar15 * *pfVar15;
                *pfVar21 = fVar34;
                *(float *)(iVar30 + (int)pfVar21) = fVar34;
                if (*pfVar15 <= 0.0 && *pfVar15 != 0.0) {
                  *pfVar21 = *pfVar21 * -1.0;
                }
                fVar34 = *(float *)(iVar32 + (int)pfVar21);
                pfVar15 = pfVar15 + 1;
                *(float *)(iVar32 + (int)pfVar21) = fVar34 * fVar34;
                pfVar21 = pfVar21 + 1;
                iVar19 = iVar19 + -1;
              } while (iVar19 != 0);
            }
            aiStack_a8[param_7 * -5 + ((iVar28 * -4 + 2) - iVar11)] = iVar31;
            aiStack_a8[param_7 * -5 + ((iVar28 * -4 + 1) - iVar11)] = iVar29;
            aiStack_a8[param_7 * -5 + (iVar28 * -4 - iVar11)] = local_20;
            iVar19 = piVar16[param_7 * -2 - iVar11];
            asStack_c0[param_7 * -5 + ((iVar28 * -4 + 5) - iVar11)] = (size_t)pfVar21;
            asStack_c0[param_7 * -5 + ((iVar28 * -4 + 5) - iVar11)] = iVar19;
            asStack_c0[param_7 * -5 + ((iVar28 * -4 + 4) - iVar11)] = 0;
            asStack_c0[param_7 * -5 + ((iVar28 * -4 + 3) - iVar11)] = *piVar16;
            asStack_c0[param_7 * -5 + ((iVar28 * -4 + 2) - iVar11)] = piVar16[param_7];
            asStack_c0[param_7 * -5 + ((iVar28 * -4 + 1) - iVar11)] = piVar16[param_7 * 2];
            asStack_c0[param_7 * -5 + (iVar28 * -4 - iVar11)] = 0x5dbc2b;
            FUN_005dc060();
            piVar16[param_7 * -2 - iVar11] = iVar19;
          }
          piVar16 = piVar16 + 1;
          local_40 = local_40 + -1;
          iVar19 = param_7;
        } while (local_40 != 0);
      }
      local_60 = 0;
      if (0 < *(int *)(param_2 + 0x484)) {
        local_5c = (undefined4 *)(&stack0xffffff64 + iVar19 * 4 + iVar9 + param_7 * -0x14);
        piVar16 = (int *)(param_2 + 0x888);
        do {
          iVar4 = piVar16[-0x100];
          iVar18 = *piVar16;
          iVar24 = *(int *)(param_4 + iVar4 * 4) + local_20 * 4;
          iVar25 = *(int *)(param_4 + iVar18 * 4);
          pfVar21 = *(float **)(&stack0xffffff64 + iVar4 * 4 + iVar8);
          iVar17 = *(int *)(&stack0xffffff64 + iVar18 * 4 + iVar8);
          iVar31 = *(int *)(&stack0xffffff64 + iVar4 * 4 + param_7 * -8);
          iVar19 = *(int *)(&stack0xffffff64 + iVar18 * 4 + param_7 * -8);
          iVar5 = *(int *)(&stack0xffffff64 + iVar4 * 4 + param_7 * -0xc);
          iVar6 = *(int *)(&stack0xffffff64 + iVar18 * 4 + param_7 * -0xc);
          iVar30 = *(int *)(&stack0xffffff64 + iVar4 * 4 + param_7 * -0x10);
          iVar32 = *(int *)(&stack0xffffff64 + iVar18 * 4 + param_7 * -0x10);
          if ((*(int *)(&stack0xffffff64 + iVar4 * 4 + param_7 * -0x14) != 0) ||
             (*(int *)(&stack0xffffff64 + iVar18 * 4 + param_7 * -0x14) != 0)) {
            *(undefined4 *)(&stack0xffffff64 + iVar18 * 4 + param_7 * -0x14) = 1;
            *(undefined4 *)(&stack0xffffff64 + iVar4 * 4 + param_7 * -0x14) = 1;
            local_30 = 0;
            if (0 < iVar29) {
              iVar17 = iVar17 - (int)pfVar21;
              iVar25 = (iVar25 + local_20 * 4) - (int)pfVar21;
              iVar19 = iVar19 - (int)pfVar21;
              iVar33 = iVar24 - (int)pfVar21;
              iVar31 = iVar31 - (int)pfVar21;
              iVar32 = iVar32 - (int)pfVar21;
              iVar30 = iVar30 - (int)pfVar21;
              iVar6 = iVar6 - (int)pfVar21;
              iVar5 = iVar5 - (int)pfVar21;
              iVar18 = iVar17;
              do {
                if (local_30 < iVar22 + (param_6 - iVar27)) {
                  if ((*(int *)(iVar30 + (int)pfVar21) == 0) &&
                     (*(int *)(iVar32 + (int)pfVar21) == 0)) {
                    fVar34 = *(float *)(iVar17 + (int)pfVar21);
                    if (local_30 < iVar22 + iVar12) {
                      fVar34 = fVar34 + *pfVar21;
                      *pfVar21 = fVar34;
                      aiStack_a8[param_7 * -5 + ((iVar28 * -4 + 2) - iVar11)] = 0x5dbded;
                      iVar18 = FUN_00411660();
                      *(float *)(iVar31 + (int)pfVar21) = fVar34;
                      local_30 = extraout_ECX_00;
                    }
                    else {
                      fVar36 = *pfVar21;
                      fVar37 = fVar34 + fVar36;
                      fVar38 = 0.0;
                      aiStack_a8[param_7 * -5 + ((iVar28 * -4 + 2) - iVar11)] = 0x5dbe0a;
                      FUN_00411660();
                      if (fVar38 <= fVar37) {
                        aiStack_a8[param_7 * -5 + ((iVar28 * -4 + 2) - iVar11)] = 0x5dbe34;
                        iVar18 = FUN_00411660();
                        fVar34 = fVar34 + fVar36;
                        *(float *)(iVar31 + (int)pfVar21) = fVar34;
                      }
                      else {
                        aiStack_a8[param_7 * -5 + ((iVar28 * -4 + 2) - iVar11)] = 0x5dbe1a;
                        iVar18 = FUN_00411660();
                        *(float *)(iVar31 + (int)pfVar21) = fVar34 + fVar36;
                        fVar34 = -(fVar34 + fVar36);
                        local_30 = extraout_ECX_01;
                      }
                      *pfVar21 = fVar34;
                    }
                    *(undefined4 *)(iVar19 + (int)pfVar21) = 0;
                    *(undefined4 *)(iVar18 + (int)pfVar21) = 0;
                    *(undefined4 *)(iVar32 + (int)pfVar21) = 1;
                    *(undefined4 *)(iVar25 + (int)pfVar21) = 0;
                  }
                  else {
                    fVar34 = *(float *)(iVar18 + (int)pfVar21);
                    aiStack_a8[param_7 * -5 + ((iVar28 * -4 + 2) - iVar11)] = 0x5dbe7b;
                    FUN_00411660();
                    fVar36 = *pfVar21;
                    aiStack_a8[param_7 * -5 + ((iVar28 * -4 + 2) - iVar11)] = 0x5dbe87;
                    FUN_00411660();
                    *pfVar21 = fVar34 + fVar36;
                    *(float *)(iVar31 + (int)pfVar21) =
                         *(float *)(iVar19 + (int)pfVar21) + *(float *)(iVar31 + (int)pfVar21);
                    *(undefined4 *)(iVar32 + (int)pfVar21) = 1;
                    *(undefined4 *)(iVar30 + (int)pfVar21) = 1;
                    uVar26 = *(uint *)(extraout_EDX + (int)pfVar21);
                    uVar7 = *(uint *)(iVar33 + (int)pfVar21);
                    if ((int)((uVar26 ^ (int)uVar26 >> 0x1f) - ((int)uVar26 >> 0x1f)) <
                        (int)((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f))) {
                      if ((int)uVar7 < 1) {
                        *(uint *)(iVar25 + (int)pfVar21) = uVar26 - uVar7;
                      }
                      else {
                        *(uint *)(iVar25 + (int)pfVar21) = uVar7 - uVar26;
                      }
                    }
                    else {
                      if ((int)uVar26 < 1) {
                        iVar18 = uVar26 - uVar7;
                      }
                      else {
                        iVar18 = uVar7 - uVar26;
                      }
                      *(int *)(iVar25 + (int)pfVar21) = iVar18;
                      *(uint *)(iVar33 + (int)pfVar21) = uVar26;
                    }
                    uVar26 = (int)*(uint *)(iVar33 + (int)pfVar21) >> 0x1f;
                    iVar18 = iVar17;
                    if ((int)(((*(uint *)(iVar33 + (int)pfVar21) ^ uVar26) - uVar26) * 2) <=
                        *(int *)(iVar25 + (int)pfVar21)) {
                      *(int *)(iVar25 + (int)pfVar21) = -*(int *)(iVar25 + (int)pfVar21);
                      *(int *)(iVar33 + (int)pfVar21) = -*(int *)(iVar33 + (int)pfVar21);
                    }
                  }
                }
                local_30 = local_30 + 1;
                fVar34 = *(float *)(iVar5 + (int)pfVar21) + *(float *)(iVar6 + (int)pfVar21);
                *(float *)(iVar6 + (int)pfVar21) = fVar34;
                *(float *)(iVar5 + (int)pfVar21) = fVar34;
                pfVar21 = pfVar21 + 1;
              } while (local_30 < iVar29);
            }
            aiStack_a8[param_7 * -5 + ((iVar28 * -4 + 2) - iVar11)] = iVar24;
            aiStack_a8[param_7 * -5 + ((iVar28 * -4 + 1) - iVar11)] = iVar29;
            aiStack_a8[param_7 * -5 + (iVar28 * -4 - iVar11)] = local_20;
            asStack_c0[param_7 * -5 + ((iVar28 * -4 + 5) - iVar11)] = local_30;
            uVar35 = *local_5c;
            asStack_c0[param_7 * -5 + ((iVar28 * -4 + 5) - iVar11)] = uVar35;
            asStack_c0[param_7 * -5 + ((iVar28 * -4 + 4) - iVar11)] =
                 *(undefined4 *)(&stack0xffffff64 + iVar4 * 4 + param_7 * -0x10);
            asStack_c0[param_7 * -5 + ((iVar28 * -4 + 3) - iVar11)] =
                 *(undefined4 *)(&stack0xffffff64 + iVar4 * 4 + param_7 * -0xc);
            asStack_c0[param_7 * -5 + ((iVar28 * -4 + 2) - iVar11)] =
                 *(undefined4 *)(&stack0xffffff64 + iVar4 * 4 + param_7 * -8);
            asStack_c0[param_7 * -5 + ((iVar28 * -4 + 1) - iVar11)] =
                 *(undefined4 *)(&stack0xffffff64 + iVar4 * 4 + iVar8);
            asStack_c0[param_7 * -5 + (iVar28 * -4 - iVar11)] = 0x5dbfa4;
            FUN_005dc060();
            *local_5c = uVar35;
            local_5c = local_5c + 1;
          }
          local_60 = local_60 + 1;
          piVar16 = piVar16 + 1;
        } while (local_60 < *(int *)(param_2 + 0x484));
      }
      local_20 = local_20 + local_4c;
      iVar22 = iVar22 - local_4c;
    } while (local_20 < iVar27);
  }
  iVar27 = 0;
  if (0 < *(int *)(param_2 + 0x484)) {
    piVar16 = (int *)(param_2 + 0x888);
    do {
      if ((*(int *)(param_5 + piVar16[-0x100] * 4) != 0) || (*(int *)(param_5 + *piVar16 * 4) != 0))
      {
        *(undefined4 *)(param_5 + piVar16[-0x100] * 4) = 1;
        *(undefined4 *)(param_5 + *piVar16 * 4) = 1;
      }
      iVar27 = iVar27 + 1;
      piVar16 = piVar16 + 1;
    } while (iVar27 < *(int *)(param_2 + 0x484));
  }
  __security_check_cookie(uVar10 ^ (uint)&stack0xfffffffc);
  return;
}

