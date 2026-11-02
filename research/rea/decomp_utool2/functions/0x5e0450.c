// rea decompile_all
// name: FUN_005e0450
// address: 0x5e0450
// body: available
// range: 0x5e0450-0x5e1117 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_005e0450(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined *puVar10;
  code *pcVar11;
  int iVar12;
  float fVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  undefined4 *puVar17;
  int *piVar18;
  int *piVar19;
  int iVar20;
  int *piVar21;
  int iVar22;
  int iVar23;
  int *piVar24;
  int iVar25;
  undefined4 uVar26;
  int iVar27;
  undefined4 uVar28;
  int iVar29;
  float *pfVar30;
  undefined4 *puVar31;
  uint uVar32;
  undefined4 *puVar33;
  uint *puVar34;
  int iVar35;
  undefined1 *puVar36;
  undefined1 *puVar37;
  undefined1 *puVar38;
  undefined1 *puVar39;
  undefined1 *puVar40;
  undefined1 *puVar41;
  undefined1 *puVar42;
  undefined1 *puVar43;
  undefined1 *puVar44;
  undefined1 *puVar45;
  undefined1 *puVar46;
  undefined1 *puVar47;
  undefined1 *puVar48;
  undefined1 *puVar49;
  undefined1 *puVar50;
  float *pfVar51;
  float fVar52;
  float fVar53;
  undefined8 uVar54;
  undefined4 uStack_80;
  float local_40;
  int local_38;
  int local_1c;
  int local_14;
  int local_10;
  int local_c;
  
  uVar15 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  iVar2 = *(int *)(param_1[0x10] + 4);
  iVar3 = *(int *)(param_1[0x10] + 0x68);
  iVar4 = param_1[0x1a];
  iVar5 = *(int *)(iVar2 + 4);
  iVar6 = *(int *)(iVar2 + 0x1c);
  iVar23 = param_1[9];
  uStack_80 = 0x5e0494;
  iVar12 = iVar5 * -4;
  (&uStack_80)[-iVar5] = 0x5e04a0;
  iVar16 = FUN_005e9360();
  (&uStack_80)[-iVar5] = 0x5e04b0;
  puVar17 = (undefined4 *)FUN_005e9360();
  (&uStack_80)[-iVar5] = 0x5e04c0;
  piVar18 = (int *)FUN_005e9360();
  iVar7 = *(int *)(iVar2 + 4);
  local_40 = *(float *)(iVar4 + 4);
  (&uStack_80)[-iVar5] = 0x5e04db;
  iVar7 = iVar7 * -4;
  puVar37 = &stack0xffffff84 + iVar7 + iVar12;
  pfVar51 = (float *)(&stack0xffffff84 + iVar7 + iVar12);
  iVar5 = param_1[7];
  piVar8 = *(int **)(iVar6 + 0x220 + iVar5 * 4);
  local_1c = 0;
  piVar19 = (int *)(((-(uint)(iVar5 != 0) & 2) + *(int *)(iVar4 + 8)) * 0x34 +
                   *(int *)(iVar3 + 0x38));
  param_1[10] = iVar5;
  if (0 < *(int *)(iVar2 + 4)) {
    uVar32 = (iVar23 / 2) * 4 + 7U & 0xfffffff8;
    iVar20 = iVar16 - (int)(&stack0xffffff84 + iVar7 + iVar12);
    puVar37 = &stack0xffffff84 + iVar7 + iVar12;
    do {
      pfVar30 = *(float **)(*param_1 + local_1c * 4);
      if (param_1[0x13] < (int)(param_1[0x12] + uVar32)) {
        if (param_1[0x11] != 0) {
          *(undefined4 *)(puVar37 + -4) = 8;
          puVar36 = puVar37 + -8;
          *(undefined4 *)(puVar37 + -8) = 0x5e0592;
          piVar21 = (int *)FUN_004c554b();
          puVar37 = puVar36 + 4;
          param_1[0x14] = param_1[0x14] + param_1[0x12];
          piVar21[1] = param_1[0x15];
          *piVar21 = param_1[0x11];
          param_1[0x15] = (int)piVar21;
        }
        *(uint *)(puVar37 + -4) = uVar32;
        param_1[0x13] = uVar32;
        puVar38 = puVar37 + -8;
        *(undefined4 *)(puVar37 + -8) = 0x5e05b7;
        iVar22 = FUN_004c554b();
        puVar37 = puVar38 + 4;
        param_1[0x11] = iVar22;
        param_1[0x12] = 0;
      }
      iVar22 = param_1[0x12];
      param_1[0x12] = iVar22 + uVar32;
      *(int *)((int)puVar17 + (int)pfVar51 + (iVar20 - iVar16)) = param_1[0x11] + iVar22;
      if (param_1[0x13] < (int)(param_1[0x12] + uVar32)) {
        if (param_1[0x11] != 0) {
          *(undefined4 *)(puVar37 + -4) = 8;
          puVar39 = puVar37 + -8;
          *(undefined4 *)(puVar37 + -8) = 0x5e05f9;
          piVar21 = (int *)FUN_004c554b();
          puVar37 = puVar39 + 4;
          param_1[0x14] = param_1[0x14] + param_1[0x12];
          piVar21[1] = param_1[0x15];
          *piVar21 = param_1[0x11];
          param_1[0x15] = (int)piVar21;
        }
        *(uint *)(puVar37 + -4) = uVar32;
        param_1[0x13] = uVar32;
        puVar40 = puVar37 + -8;
        *(undefined4 *)(puVar37 + -8) = 0x5e061e;
        iVar22 = FUN_004c554b();
        puVar37 = puVar40 + 4;
        param_1[0x11] = iVar22;
        param_1[0x12] = 0;
      }
      iVar22 = param_1[0x12];
      param_1[0x12] = iVar22 + uVar32;
      *(int *)(iVar20 + (int)pfVar51) = param_1[0x11] + iVar22;
      *(int *)(puVar37 + -4) = param_1[8];
      *(int *)(puVar37 + -8) = param_1[7];
      *(int *)(puVar37 + -0xc) = param_1[6];
      *(int *)(puVar37 + -0x10) = iVar6;
      fVar1 = (((float)(int)ABS(4.0 / (float)iVar23) + 0.0) * 7.1771143e-07 - 764.6162) + 0.345;
      *(undefined4 *)(puVar37 + -0x14) = 0x5e06a6;
      FUN_005d1820();
      *(undefined4 *)(puVar37 + -0x14) = *(undefined4 *)(iVar20 + (int)pfVar51);
      *(undefined4 *)(puVar37 + -0x18) = 0x5e06c0;
      FUN_005dec80();
      iVar22 = param_1[7];
      if (*(int *)(iVar3 + 0x14 + iVar22 * 0xc) != 1) {
        iVar27 = *(int *)(iVar3 + 0x18 + iVar22 * 0xc);
        *(undefined4 *)(puVar37 + -4) = *(undefined4 *)(iVar3 + 0x1c + iVar22 * 0xc);
        *(int *)(puVar37 + -8) = iVar27 + *(int *)(iVar3 + 0x14 + iVar22 * 0xc) * 4;
        *(int *)(puVar37 + -0xc) = iVar27;
        *(undefined4 *)(puVar37 + -0x10) = 0x5e06ec;
        FUN_005d7290();
      }
      iVar22 = 1;
      fVar13 = (((float)(int)ABS(*pfVar30) + 0.0) * 7.1771143e-07 - 764.6162) + fVar1 + 0.345;
      *pfVar30 = fVar13;
      *pfVar51 = fVar13;
      if (1 < iVar23 + -1) {
        do {
          fVar13 = (((float)(int)ABS(pfVar30[iVar22 + 1] * pfVar30[iVar22 + 1] +
                                     pfVar30[iVar22] * pfVar30[iVar22]) + 0.0) * 7.1771143e-07 -
                   764.6162) * 0.5 + fVar1 + 0.345;
          pfVar30[iVar22 + 1 >> 1] = fVar13;
          if (*pfVar51 <= fVar13 && fVar13 != *pfVar51) {
            *pfVar51 = fVar13;
          }
          iVar22 = iVar22 + 2;
        } while (iVar22 < iVar23 + -1);
      }
      if (0.0 < *pfVar51) {
        *pfVar51 = 0.0;
      }
      fVar1 = *pfVar51;
      pfVar51 = pfVar51 + 1;
      if (fVar1 <= local_40) {
        fVar1 = local_40;
      }
      local_1c = local_1c + 1;
      local_40 = fVar1;
    } while (local_1c < *(int *)(iVar2 + 4));
  }
  iVar23 = iVar23 / 2;
  uVar32 = iVar23 * 4 + 7U & 0xfffffff8;
  if (param_1[0x13] < (int)(param_1[0x12] + uVar32)) {
    if (param_1[0x11] != 0) {
      *(undefined4 *)(puVar37 + -4) = 8;
      puVar41 = puVar37 + -8;
      *(undefined4 *)(puVar37 + -8) = 0x5e084a;
      piVar21 = (int *)FUN_004c554b();
      puVar37 = puVar41 + 4;
      param_1[0x14] = param_1[0x14] + param_1[0x12];
      piVar21[1] = param_1[0x15];
      *piVar21 = param_1[0x11];
      param_1[0x15] = (int)piVar21;
    }
    *(uint *)(puVar37 + -4) = uVar32;
    param_1[0x13] = uVar32;
    puVar42 = puVar37 + -8;
    *(undefined4 *)(puVar37 + -8) = 0x5e086a;
    iVar20 = FUN_004c554b();
    puVar37 = puVar42 + 4;
    param_1[0x11] = iVar20;
    param_1[0x12] = 0;
  }
  pfVar51 = (float *)(param_1[0x11] + param_1[0x12]);
  iVar20 = param_1[0x12] + uVar32;
  param_1[0x12] = iVar20;
  if (param_1[0x13] < (int)(iVar20 + uVar32)) {
    if (param_1[0x11] != 0) {
      *(undefined4 *)(puVar37 + -4) = 8;
      puVar43 = puVar37 + -8;
      *(undefined4 *)(puVar37 + -8) = 0x5e089a;
      piVar21 = (int *)FUN_004c554b();
      puVar37 = puVar43 + 4;
      param_1[0x14] = param_1[0x14] + param_1[0x12];
      piVar21[1] = param_1[0x15];
      *piVar21 = param_1[0x11];
      param_1[0x15] = (int)piVar21;
    }
    *(uint *)(puVar37 + -4) = uVar32;
    param_1[0x13] = uVar32;
    puVar44 = puVar37 + -8;
    *(undefined4 *)(puVar37 + -8) = 0x5e08ba;
    iVar20 = FUN_004c554b();
    puVar37 = puVar44 + 4;
    param_1[0x11] = iVar20;
    param_1[0x12] = 0;
  }
  iVar20 = param_1[0x11] + param_1[0x12];
  param_1[0x12] = param_1[0x12] + uVar32;
  local_38 = 0;
  if (0 < *(int *)(iVar2 + 4)) {
    piVar21 = piVar18;
    do {
      iVar27 = piVar8[local_38 + 1];
      iVar35 = *(int *)((int)piVar21 +
                       (int)(&stack0xffffff84 + ((iVar7 + iVar12) - (int)piVar18) +
                            (iVar16 - (int)(&stack0xffffff84 + iVar7 + iVar12))));
      iVar9 = *(int *)(*param_1 + local_38 * 4);
      iVar22 = iVar9 + iVar23 * 4;
      param_1[10] = iVar5;
      if (param_1[0x13] < param_1[0x12] + 0x40) {
        if (param_1[0x11] != 0) {
          *(undefined4 *)(puVar37 + -4) = 8;
          puVar45 = puVar37 + -8;
          *(undefined4 *)(puVar37 + -8) = 0x5e0947;
          piVar24 = (int *)FUN_004c554b();
          puVar37 = puVar45 + 4;
          param_1[0x14] = param_1[0x14] + param_1[0x12];
          piVar24[1] = param_1[0x15];
          *piVar24 = param_1[0x11];
          param_1[0x15] = (int)piVar24;
        }
        *(undefined4 *)(puVar37 + -4) = 0x40;
        param_1[0x13] = 0x40;
        puVar46 = puVar37 + -8;
        *(undefined4 *)(puVar37 + -8) = 0x5e096c;
        iVar25 = FUN_004c554b();
        puVar37 = puVar46 + 4;
        param_1[0x11] = iVar25;
        param_1[0x12] = 0;
      }
      iVar25 = param_1[0x12];
      iVar29 = param_1[0x11] + iVar25;
      *(undefined4 *)(puVar37 + -4) = 0x3c;
      *(undefined4 *)(puVar37 + -8) = 0;
      param_1[0x12] = iVar25 + 0x40;
      *(int *)(puVar37 + -0xc) = iVar29;
      *piVar21 = iVar29;
      *(undefined4 *)(puVar37 + -0x10) = 0x5e0993;
      _memset(*(void **)(puVar37 + -0xc),*(int *)(puVar37 + -8),*(size_t *)(puVar37 + -4));
      iVar25 = 0;
      if (3 < iVar23) {
        pfVar30 = (float *)(iVar22 + 4);
        puVar34 = (uint *)(iVar35 + 0xc);
        iVar29 = (iVar23 - 4U >> 2) + 1;
        iVar25 = iVar29 * 4;
        do {
          pfVar30[-1] = (((float)(puVar34[-3] & 0x7fffffff) + 0.0) * 7.1771143e-07 - 764.6162) +
                        0.345;
          *pfVar30 = (((float)(*(uint *)((iVar35 - iVar22) + (int)pfVar30) & 0x7fffffff) + 0.0) *
                      7.1771143e-07 - 764.6162) + 0.345;
          pfVar30[1] = (((float)(puVar34[-1] & 0x7fffffff) + 0.0) * 7.1771143e-07 - 764.6162) +
                       0.345;
          uVar32 = *puVar34;
          puVar34 = puVar34 + 4;
          pfVar30[2] = (((float)(uVar32 & 0x7fffffff) + 0.0) * 7.1771143e-07 - 764.6162) + 0.345;
          pfVar30 = pfVar30 + 4;
          iVar29 = iVar29 + -1;
        } while (iVar29 != 0);
      }
      if (iVar25 < iVar23) {
        pfVar30 = (float *)(iVar22 + iVar25 * 4);
        iVar25 = iVar23 - iVar25;
        do {
          *pfVar30 = (((float)(*(uint *)((int)pfVar30 + (iVar35 - iVar22)) & 0x7fffffff) + 0.0) *
                      7.1771143e-07 - 764.6162) + 0.345;
          pfVar30 = pfVar30 + 1;
          iVar25 = iVar25 + -1;
        } while (iVar25 != 0);
      }
      *(float **)(puVar37 + -4) = pfVar51;
      *(undefined4 *)(puVar37 + -8) = 0x5e0b7a;
      FUN_005dc760();
      *(undefined4 *)(puVar37 + -4) =
           *(undefined4 *)(&stack0xffffff84 + ((iVar7 + iVar12) - (int)piVar18) + (int)piVar21);
      *(int *)(puVar37 + -8) = iVar20;
      *(undefined4 *)(puVar37 + -0xc) = 0x5e0b9a;
      FUN_005dc540();
      *(int *)(puVar37 + -0xc) = iVar22;
      *(int *)(puVar37 + -0x10) = iVar35;
      *(int *)(puVar37 + -0x14) = iVar9;
      *(undefined4 *)(puVar37 + -0x18) = 1;
      *(int *)(puVar37 + -0x1c) = iVar20;
      *(undefined4 *)(puVar37 + -0x20) = 0x5e0bb3;
      FUN_005dc420();
      if (*(int *)(iVar6 + 800 + piVar8[iVar27 + 0x101] * 4) != 1) {
        __security_check_cookie(uVar15 ^ (uint)&stack0xfffffffc);
        return;
      }
      *(int *)(puVar37 + -4) = iVar9;
      *(int *)(puVar37 + -8) = iVar22;
      *(undefined4 *)(puVar37 + -0xc) = 0x5e0bea;
      uVar26 = FUN_005e4100();
      *(undefined4 *)(*piVar21 + 0x1c) = uVar26;
      *(undefined4 *)(puVar37 + -4) = 0x5e0bf9;
      iVar27 = FUN_005e9a00();
      if ((iVar27 != 0) && (*(int *)(*piVar21 + 0x1c) != 0)) {
        iVar27 = *piVar19;
        fVar1 = *(float *)(piVar19[1] + 0x14);
        if (0 < iVar27) {
          iVar35 = 0;
          pfVar30 = pfVar51;
          do {
            fVar53 = *(float *)((iVar20 - (int)pfVar51) + (int)pfVar30) + fVar1;
            iVar25 = iVar35 * 4;
            iVar35 = iVar35 + 1;
            fVar52 = *(float *)(*(int *)(piVar19[3] + 8) + iVar25) + *pfVar30;
            fVar13 = *(float *)(piVar19[1] + 0x6c);
            if (fVar52 <= *(float *)(piVar19[1] + 0x6c)) {
              fVar13 = fVar52;
            }
            if (fVar53 <= fVar13) {
              fVar53 = fVar13;
            }
            *(float *)((iVar9 - (int)pfVar51) + (int)pfVar30) = fVar53;
            pfVar30 = pfVar30 + 1;
          } while (iVar35 < iVar27);
        }
        *(int *)(puVar37 + -4) = iVar9;
        *(int *)(puVar37 + -8) = iVar22;
        *(undefined4 *)(puVar37 + -0xc) = 0x5e0ca2;
        uVar26 = FUN_005e4100();
        iVar35 = 0;
        *(undefined4 *)(*piVar21 + 0x38) = uVar26;
        iVar27 = *piVar19;
        fVar1 = *(float *)(piVar19[1] + 0xc);
        if (0 < iVar27) {
          pfVar30 = pfVar51;
          do {
            fVar53 = *(float *)((int)pfVar30 + (iVar20 - (int)pfVar51)) + fVar1;
            iVar25 = iVar35 * 4;
            iVar35 = iVar35 + 1;
            fVar52 = *(float *)(*(int *)piVar19[3] + iVar25) + *pfVar30;
            fVar13 = *(float *)(piVar19[1] + 0x6c);
            if (fVar52 <= *(float *)(piVar19[1] + 0x6c)) {
              fVar13 = fVar52;
            }
            if (fVar53 <= fVar13) {
              fVar53 = fVar13;
            }
            *(float *)((int)pfVar30 + (iVar9 - (int)pfVar51)) = fVar53;
            pfVar30 = pfVar30 + 1;
          } while (iVar35 < iVar27);
        }
        *(int *)(puVar37 + -4) = iVar9;
        *(int *)(puVar37 + -8) = iVar22;
        *(undefined4 *)(puVar37 + -0xc) = 0x5e0d32;
        uVar26 = FUN_005e4100();
        local_c = 4;
        iVar22 = 0x10000;
        *(undefined4 *)*piVar21 = uVar26;
        do {
          puVar31 = (undefined4 *)*piVar21;
          *(int *)(puVar37 + -4) = iVar22 / 7;
          *(undefined4 *)(puVar37 + -8) = puVar31[7];
          *(undefined4 *)(puVar37 + -0xc) = *puVar31;
          *(undefined4 *)(puVar37 + -0x10) = 0x5e0d88;
          uVar26 = FUN_005e3e30();
          iVar22 = iVar22 + 0x10000;
          *(undefined4 *)(local_c + *piVar21) = uVar26;
          local_c = local_c + 4;
        } while (iVar22 < 0x70000);
        iVar22 = 0x10000;
        local_c = 0x20;
        do {
          iVar27 = *piVar21;
          *(int *)(puVar37 + -4) = iVar22 / 7;
          *(undefined4 *)(puVar37 + -8) = *(undefined4 *)(iVar27 + 0x38);
          *(undefined4 *)(puVar37 + -0xc) = *(undefined4 *)(iVar27 + 0x1c);
          *(undefined4 *)(puVar37 + -0x10) = 0x5e0df2;
          uVar26 = FUN_005e3e30();
          iVar22 = iVar22 + 0x10000;
          *(undefined4 *)(local_c + *piVar21) = uVar26;
          local_c = local_c + 4;
        } while (iVar22 < 0x70000);
      }
      piVar21 = piVar21 + 1;
      local_38 = local_38 + 1;
    } while (local_38 < *(int *)(iVar2 + 4));
  }
  *(float *)(iVar4 + 4) = local_40;
  iVar23 = *(int *)(iVar2 + 4);
  *(undefined4 *)(puVar37 + -4) = 0x5e0e4a;
  iVar7 = iVar23 * -4;
  *(undefined4 *)(puVar37 + iVar7 + -4) = 0x5e0e54;
  piVar21 = (int *)(*(int *)(param_1[0x10] + 0x68) + 0x50);
  if ((piVar21 == (int *)0x0) || (*piVar21 == 0)) {
    bVar14 = false;
  }
  else {
    bVar14 = true;
  }
  iVar20 = 7;
  puVar47 = puVar37 + iVar23 * -8;
  local_1c = iVar20;
  if (bVar14) {
    iVar20 = 0;
    puVar47 = puVar37 + iVar23 * -8;
    local_1c = iVar20;
  }
  do {
    *(undefined4 *)(puVar47 + -4) = 1;
    *(undefined4 *)(puVar47 + -8) = 0;
    uVar26 = *(undefined4 *)(iVar4 + 0xc + iVar20 * 4);
    *(undefined4 *)(puVar47 + -0xc) = uVar26;
    *(undefined4 *)(puVar47 + -0x10) = 0x5e0eaa;
    FUN_005eae90();
    *(undefined4 *)(puVar47 + -0x10) = *(undefined4 *)(iVar3 + 0x2c);
    *(int *)(puVar47 + -0x14) = iVar5;
    *(undefined4 *)(puVar47 + -0x18) = uVar26;
    *(undefined4 *)(puVar47 + -0x1c) = 0x5e0eb9;
    FUN_005eae90();
    if (param_1[7] != 0) {
      *(undefined4 *)(puVar47 + -4) = 1;
      *(int *)(puVar47 + -8) = param_1[6];
      *(undefined4 *)(puVar47 + -0xc) = uVar26;
      *(undefined4 *)(puVar47 + -0x10) = 0x5e0ecd;
      FUN_005eae90();
      *(undefined4 *)(puVar47 + -0x10) = 1;
      *(int *)(puVar47 + -0x14) = param_1[8];
      *(undefined4 *)(puVar47 + -0x18) = uVar26;
      *(undefined4 *)(puVar47 + -0x1c) = 0x5e0ed8;
      FUN_005eae90();
    }
    local_38 = 0;
    if (0 < *(int *)(iVar2 + 4)) {
      piVar21 = piVar18;
      piVar24 = piVar8;
      do {
        piVar24 = piVar24 + 1;
        *(undefined4 *)(puVar47 + -4) =
             *(undefined4 *)(((int)puVar17 - (int)piVar18) + (int)piVar21);
        iVar20 = *piVar24;
        *(undefined4 *)(puVar47 + -8) = *(undefined4 *)(*piVar21 + local_1c * 4);
        *(undefined4 *)(puVar47 + -0xc) =
             *(undefined4 *)(*(int *)(iVar3 + 0x30) + piVar8[iVar20 + 0x101] * 4);
        *(undefined4 *)(puVar47 + -0x10) = 0x5e0f37;
        uVar28 = FUN_005e3700();
        piVar21 = piVar21 + 1;
        *(undefined4 *)((int)&uStack_80 + (iVar12 - (int)piVar18) + (int)piVar21) = uVar28;
        local_38 = local_38 + 1;
      } while (local_38 < *(int *)(iVar2 + 4));
    }
    iVar20 = param_1[7];
    *(undefined4 *)(puVar47 + -4) = *(undefined4 *)(iVar2 + 4);
    *(undefined4 *)(puVar47 + -8) = *(undefined4 *)(iVar6 + ((iVar20 + 0x36) * 0xf + local_1c) * 4);
    *(undefined1 **)(puVar47 + -0xc) = &stack0xffffff84 + iVar12;
    *(undefined4 **)(puVar47 + -0x10) = puVar17;
    *(int *)(puVar47 + -0x14) = iVar16;
    *(int **)(puVar47 + -0x18) = piVar8;
    *(int **)(puVar47 + -0x1c) = piVar19;
    *(undefined4 *)(puVar47 + -0x20) = 0x5e0f9c;
    FUN_005db7b0();
    local_10 = 0;
    puVar50 = puVar47;
    if (0 < *piVar8) {
      piVar21 = piVar8 + 0x111;
      do {
        iVar20 = *piVar21;
        iVar22 = 0;
        local_14 = 0;
        if (0 < *(int *)(iVar2 + 4)) {
          puVar31 = (undefined4 *)(puVar37 + iVar23 * -8);
          puVar33 = puVar17;
          piVar24 = piVar8;
          do {
            piVar24 = piVar24 + 1;
            if (*piVar24 == local_10) {
              *puVar31 = 0;
              if (*(int *)((int)puVar33 + (int)(&stack0xffffff84 + (iVar12 - (int)puVar17))) != 0) {
                *puVar31 = 1;
              }
              local_14 = local_14 + 1;
              puVar31[iVar23] = *puVar33;
              puVar31 = puVar31 + 1;
            }
            iVar22 = iVar22 + 1;
            puVar33 = puVar33 + 1;
          } while (iVar22 < *(int *)(iVar2 + 4));
        }
        *(int *)(puVar47 + -4) = local_14;
        *(undefined1 **)(puVar47 + -8) = puVar37 + iVar23 * -8;
        iVar22 = *(int *)(iVar6 + 0x520 + iVar20 * 4);
        *(undefined1 **)(puVar47 + -0xc) = puVar37 + iVar7;
        puVar10 = (&PTR_DAT_00b16a2c)[iVar22];
        *(undefined4 *)(puVar47 + -0x10) = *(undefined4 *)(*(int *)(iVar3 + 0x34) + iVar20 * 4);
        pcVar11 = *(code **)(puVar10 + 0x14);
        *(int **)(puVar47 + -0x14) = param_1;
        puVar48 = puVar47 + -0x18;
        *(undefined4 *)(puVar47 + -0x18) = 0x5e1051;
        uVar28 = (*pcVar11)();
        iVar22 = 0;
        iVar27 = 0;
        piVar24 = piVar8;
        if (0 < *(int *)(iVar2 + 4)) {
          do {
            if (piVar24[1] == local_10) {
              *(undefined4 *)(puVar37 + iVar27 * 4 + iVar7) = puVar17[iVar22];
              iVar27 = iVar27 + 1;
            }
            iVar22 = iVar22 + 1;
            piVar24 = piVar24 + 1;
          } while (iVar22 < *(int *)(iVar2 + 4));
        }
        *(int *)(puVar48 + 0x10) = local_10;
        *(undefined4 *)(puVar48 + 0xc) = uVar28;
        iVar22 = *(int *)(iVar6 + 0x520 + iVar20 * 4);
        *(int *)(puVar48 + 8) = iVar27;
        *(undefined1 **)(puVar48 + 4) = puVar37 + iVar23 * -8;
        puVar10 = (&PTR_DAT_00b16a2c)[iVar22];
        *(undefined1 **)puVar48 = puVar37 + iVar7;
        *(undefined4 *)(puVar48 + -4) = *(undefined4 *)(*(int *)(iVar3 + 0x34) + iVar20 * 4);
        pcVar11 = *(code **)(puVar10 + 0x18);
        *(int **)(puVar48 + -8) = param_1;
        *(undefined4 *)(puVar48 + -0xc) = uVar26;
        puVar49 = puVar48 + -0x10;
        *(undefined4 *)(puVar48 + -0x10) = 0x5e10c4;
        (*pcVar11)();
        puVar47 = puVar49 + 0x20;
        puVar50 = puVar49 + 0x20;
        local_10 = local_10 + 1;
        piVar21 = piVar21 + 1;
      } while (local_10 < *piVar8);
    }
    *(undefined4 *)(puVar50 + -4) = 0x5e10f0;
    uVar54 = FUN_005e9a00();
    iVar20 = (int)((ulonglong)uVar54 >> 0x20);
    puVar47 = puVar50;
    local_1c = local_1c + 1;
  } while (iVar20 <= (int)((-(uint)((int)uVar54 != 0) & 7) + 7));
  __security_check_cookie(uVar15 ^ (uint)&stack0xfffffffc);
  return;
}

