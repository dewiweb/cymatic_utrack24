// rea decompile_all
// name: FUN_0047b4ad
// address: 0x47b4ad
// body: available
// range: 0x47b4ad-0x47bade inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0047b4ad(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  undefined4 uVar11;
  float *pfVar12;
  float *unaff_EBX;
  float *pfVar13;
  uint uVar14;
  ushort uVar15;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  *unaff_EBX = unaff_EBX[2];
  unaff_EBX[1] = unaff_EBX[3];
  local_8 = 0.0;
  local_c = 0.0;
  local_18 = 0.0;
  local_14 = 0.0;
LAB_0047b4d8:
  do {
    while( true ) {
      pfVar13 = unaff_EBX + 2;
      pfVar12 = unaff_EBX + 3;
      fVar3 = unaff_EBX[0x13];
      if (fVar3 == unaff_EBX[0x12]) {
        fVar3 = unaff_EBX[0x14];
        if ((uint)*(float *)((int)unaff_EBX[6] + 8) <= (uint)fVar3) {
          return (uint)fVar3 & 0xffffff00;
        }
        fVar4 = unaff_EBX[0xd];
        local_10 = *(float *)((int)fVar4 + (int)fVar3 * 4);
        unaff_EBX[0x14] = (float)((int)fVar3 + 1);
        pfVar10 = (float *)((uint)fVar3 & 0xffff0000);
        if (local_10 != 100005.0) {
          fVar1 = (float)((int)fVar3 + 2);
          *pfVar13 = *(float *)((int)fVar4 + ((int)fVar3 + 1) * 4);
          unaff_EBX[0x14] = fVar1;
          fVar2 = (float)((int)fVar3 + 3);
          *pfVar12 = *(float *)((int)fVar4 + (int)fVar1 * 4);
          unaff_EBX[0x14] = fVar2;
          if (local_10 == 100003.0) {
            local_8 = *(float *)((int)fVar4 + (int)fVar2 * 4);
            unaff_EBX[0x14] = (float)((int)fVar3 + 4);
            local_c = *(float *)((int)fVar4 + ((int)fVar3 + 4) * 4);
            pfVar10 = (float *)((int)fVar3 + 5);
            unaff_EBX[0x14] = (float)pfVar10;
            if (*(char *)(unaff_EBX + 0x11) == '\0') {
              pfVar10 = (float *)FUN_004a8f39(unaff_EBX + 7);
            }
          }
          else {
            pfVar10 = (float *)((uint)fVar1 & 0xffff0000);
            if (local_10 == 100004.0) {
              local_8 = *(float *)((int)fVar4 + (int)fVar2 * 4);
              unaff_EBX[0x14] = (float)((int)fVar3 + 4);
              local_c = *(float *)((int)fVar4 + ((int)fVar3 + 4) * 4);
              unaff_EBX[0x14] = (float)((int)fVar3 + 5);
              local_18 = *(float *)((int)fVar4 + ((int)fVar3 + 5) * 4);
              unaff_EBX[0x14] = (float)((int)fVar3 + 6);
              local_14 = *(float *)((int)fVar4 + ((int)fVar3 + 6) * 4);
              pfVar10 = (float *)((int)fVar3 + 7);
              unaff_EBX[0x14] = (float)pfVar10;
              if (*(char *)(unaff_EBX + 0x11) == '\0') {
                pfVar10 = (float *)FUN_004a8f94(pfVar13,pfVar12,&local_8);
              }
            }
            else if (*(char *)(unaff_EBX + 0x11) == '\0') {
              pfVar10 = (float *)FUN_004a8f0b();
            }
          }
        }
      }
      else {
        unaff_EBX[0x13] = (float)((int)fVar3 + -4);
        local_10 = *(float *)((int)fVar3 + -4);
        pfVar10 = (float *)((uint)fVar3 & 0xffff0000);
        if (local_10 != 100005.0) {
          pfVar10 = (float *)((int)fVar3 - 8);
          unaff_EBX[0x13] = (float)pfVar10;
          *pfVar13 = *pfVar10;
          unaff_EBX[0x13] = (float)((int)fVar3 + -0xc);
          *pfVar12 = *(float *)((int)fVar3 + -0xc);
          if (local_10 == 100003.0) {
            unaff_EBX[0x13] = (float)((int)fVar3 + -0x10);
            local_8 = *(float *)((int)fVar3 + -0x10);
            pfVar10 = (float *)((int)fVar3 + -0x14);
            unaff_EBX[0x13] = (float)pfVar10;
            local_c = *pfVar10;
          }
          else {
            pfVar10 = (float *)((uint)pfVar10 & 0xffff0000);
            if (local_10 == 100004.0) {
              unaff_EBX[0x13] = (float)((int)fVar3 + -0x10);
              local_8 = *(float *)((int)fVar3 + -0x10);
              unaff_EBX[0x13] = (float)((int)fVar3 + -0x14);
              local_c = *(float *)((int)fVar3 + -0x14);
              unaff_EBX[0x13] = (float)((int)fVar3 + -0x18);
              local_18 = *(float *)((int)fVar3 + -0x18);
              pfVar10 = (float *)((int)fVar3 + -0x1c);
              unaff_EBX[0x13] = (float)pfVar10;
              local_14 = *pfVar10;
            }
          }
        }
      }
      if (local_10 == 100001.0) {
        unaff_EBX[5] = (float)((int)unaff_EBX[5] + 1);
        if ((((unaff_EBX[0x13] == unaff_EBX[0x12]) &&
             ((uint)unaff_EBX[0x14] < (uint)*(float *)((int)unaff_EBX[6] + 8))) &&
            (*(float *)((int)unaff_EBX[0xd] + (int)unaff_EBX[0x14] * 4) == 100005.0)) &&
           ((unaff_EBX[0xf] == unaff_EBX[2] && (unaff_EBX[0x10] == unaff_EBX[3])))) {
          uVar11 = 1;
        }
        else {
          uVar11 = 0;
        }
        *(char *)(unaff_EBX + 4) = (char)uVar11;
        goto LAB_0047ba4c;
      }
      if (local_10 != 100003.0) break;
      uVar14 = (int)unaff_EBX[0x13] - (int)unaff_EBX[0x12] >> 2;
      if ((int)unaff_EBX[0x15] - 10U <= uVar14) {
        unaff_EBX[0x15] = (float)((int)unaff_EBX[0x15] * 2);
        FUN_004a49f3();
        unaff_EBX[0x13] = (float)((int)unaff_EBX[0x12] + uVar14 * 4);
      }
      pfVar12 = unaff_EBX + 2;
      pfVar13 = unaff_EBX + 3;
      fVar3 = (*unaff_EBX + *pfVar12) * 0.5;
      fVar5 = (unaff_EBX[1] + *pfVar13) * 0.5;
      fVar6 = (local_8 + *pfVar12) * 0.5;
      fVar7 = (local_c + *pfVar13) * 0.5;
      fVar8 = (fVar6 + fVar3) * 0.5;
      fVar9 = (fVar7 + fVar5) * 0.5;
      fVar4 = *pfVar12;
      fVar1 = *pfVar13;
      fVar2 = unaff_EBX[0xe];
      *(float *)unaff_EBX[0x13] = local_c;
      if ((fVar8 - fVar4) * (fVar8 - fVar4) + (fVar9 - fVar1) * (fVar9 - fVar1) <= fVar2) {
        unaff_EBX[0x13] = (float)((int)unaff_EBX[0x13] + 4);
        *(float *)unaff_EBX[0x13] = local_8;
        unaff_EBX[0x13] = (float)((int)unaff_EBX[0x13] + 4);
        *(undefined4 *)unaff_EBX[0x13] = 0x47c35080;
        unaff_EBX[0x13] = (float)((int)unaff_EBX[0x13] + 4);
        *(float *)unaff_EBX[0x13] = fVar9;
        unaff_EBX[0x13] = (float)((int)unaff_EBX[0x13] + 4);
        *(float *)unaff_EBX[0x13] = fVar8;
        unaff_EBX[0x13] = (float)((int)unaff_EBX[0x13] + 4);
        *(undefined4 *)unaff_EBX[0x13] = 0x47c35080;
        unaff_EBX[0x13] = (float)((int)unaff_EBX[0x13] + 4);
      }
      else {
        unaff_EBX[0x13] = (float)((int)unaff_EBX[0x13] + 4);
        *(float *)unaff_EBX[0x13] = local_8;
        unaff_EBX[0x13] = (float)((int)unaff_EBX[0x13] + 4);
        *(float *)unaff_EBX[0x13] = fVar7;
        unaff_EBX[0x13] = (float)((int)unaff_EBX[0x13] + 4);
        *(float *)unaff_EBX[0x13] = fVar6;
        unaff_EBX[0x13] = (float)((int)unaff_EBX[0x13] + 4);
        *(undefined4 *)unaff_EBX[0x13] = 0x47c35180;
        unaff_EBX[0x13] = (float)((int)unaff_EBX[0x13] + 4);
        *(float *)unaff_EBX[0x13] = fVar9;
        unaff_EBX[0x13] = (float)((int)unaff_EBX[0x13] + 4);
        *(float *)unaff_EBX[0x13] = fVar8;
        unaff_EBX[0x13] = (float)((int)unaff_EBX[0x13] + 4);
        *(float *)unaff_EBX[0x13] = fVar5;
        uVar11 = 0x47c35180;
LAB_0047b9e4:
        unaff_EBX[0x13] = (float)((int)unaff_EBX[0x13] + 4);
        *(float *)unaff_EBX[0x13] = fVar3;
        unaff_EBX[0x13] = (float)((int)unaff_EBX[0x13] + 4);
        *(undefined4 *)unaff_EBX[0x13] = uVar11;
        unaff_EBX[0x13] = (float)((int)unaff_EBX[0x13] + 4);
      }
    }
    if (local_10 == 100004.0) {
      uVar14 = (int)unaff_EBX[0x13] - (int)unaff_EBX[0x12] >> 2;
      if ((int)unaff_EBX[0x15] - 0x10U <= uVar14) {
        unaff_EBX[0x15] = (float)((int)unaff_EBX[0x15] * 2);
        FUN_004a49f3();
        unaff_EBX[0x13] = (float)((int)unaff_EBX[0x12] + uVar14 * 4);
      }
      pfVar12 = unaff_EBX + 2;
      pfVar13 = unaff_EBX + 3;
      fVar3 = (*unaff_EBX + *pfVar12) * 0.5;
      fVar4 = (unaff_EBX[1] + *pfVar13) * 0.5;
      fVar1 = (local_8 + *pfVar12) * 0.5;
      fVar2 = (local_c + *pfVar13) * 0.5;
      fVar5 = (local_18 + local_8) * 0.5;
      fVar6 = (local_14 + local_c) * 0.5;
      fVar7 = (fVar1 + fVar3) * 0.5;
      fVar8 = (fVar2 + fVar4) * 0.5;
      fVar1 = (fVar5 + fVar1) * 0.5;
      fVar2 = (fVar6 + fVar2) * 0.5;
      if ((unaff_EBX[0xe] <
           (fVar7 - *pfVar12) * (fVar7 - *pfVar12) + (fVar8 - *pfVar13) * (fVar8 - *pfVar13)) ||
         (unaff_EBX[0xe] <
          (fVar1 - local_8) * (fVar1 - local_8) + (fVar2 - local_c) * (fVar2 - local_c))) {
        *(float *)unaff_EBX[0x13] = local_14;
        unaff_EBX[0x13] = (float)((int)unaff_EBX[0x13] + 4);
        *(float *)unaff_EBX[0x13] = local_18;
        unaff_EBX[0x13] = (float)((int)unaff_EBX[0x13] + 4);
        *(float *)unaff_EBX[0x13] = fVar6;
        unaff_EBX[0x13] = (float)((int)unaff_EBX[0x13] + 4);
        *(float *)unaff_EBX[0x13] = fVar5;
        unaff_EBX[0x13] = (float)((int)unaff_EBX[0x13] + 4);
        *(float *)unaff_EBX[0x13] = fVar2;
        unaff_EBX[0x13] = (float)((int)unaff_EBX[0x13] + 4);
        *(float *)unaff_EBX[0x13] = fVar1;
        unaff_EBX[0x13] = (float)((int)unaff_EBX[0x13] + 4);
        *(undefined4 *)unaff_EBX[0x13] = 0x47c35200;
        unaff_EBX[0x13] = (float)((int)unaff_EBX[0x13] + 4);
        *(float *)unaff_EBX[0x13] = (fVar8 + fVar2) * 0.5;
        unaff_EBX[0x13] = (float)((int)unaff_EBX[0x13] + 4);
        *(float *)unaff_EBX[0x13] = (fVar7 + fVar1) * 0.5;
        unaff_EBX[0x13] = (float)((int)unaff_EBX[0x13] + 4);
        *(float *)unaff_EBX[0x13] = fVar8;
        unaff_EBX[0x13] = (float)((int)unaff_EBX[0x13] + 4);
        *(float *)unaff_EBX[0x13] = fVar7;
        unaff_EBX[0x13] = (float)((int)unaff_EBX[0x13] + 4);
        *(float *)unaff_EBX[0x13] = fVar4;
        uVar11 = 0x47c35200;
      }
      else {
        *(float *)unaff_EBX[0x13] = local_14;
        unaff_EBX[0x13] = (float)((int)unaff_EBX[0x13] + 4);
        *(float *)unaff_EBX[0x13] = local_18;
        unaff_EBX[0x13] = (float)((int)unaff_EBX[0x13] + 4);
        *(undefined4 *)unaff_EBX[0x13] = 0x47c35080;
        unaff_EBX[0x13] = (float)((int)unaff_EBX[0x13] + 4);
        *(float *)unaff_EBX[0x13] = fVar2;
        unaff_EBX[0x13] = (float)((int)unaff_EBX[0x13] + 4);
        *(float *)unaff_EBX[0x13] = fVar1;
        unaff_EBX[0x13] = (float)((int)unaff_EBX[0x13] + 4);
        *(undefined4 *)unaff_EBX[0x13] = 0x47c35080;
        unaff_EBX[0x13] = (float)((int)unaff_EBX[0x13] + 4);
        *(float *)unaff_EBX[0x13] = fVar8;
        uVar11 = 0x47c35080;
        fVar3 = fVar7;
      }
      goto LAB_0047b9e4;
    }
    pfVar12 = unaff_EBX + 2;
    if (local_10 != 100005.0) {
      unaff_EBX[5] = -NAN;
      *unaff_EBX = *pfVar12;
      unaff_EBX[0xf] = *pfVar12;
      unaff_EBX[1] = unaff_EBX[3];
      unaff_EBX[0x10] = unaff_EBX[3];
      goto LAB_0047b4d8;
    }
    fVar3 = *pfVar12;
    fVar4 = unaff_EBX[0xf];
    uVar15 = (ushort)(fVar4 < fVar3) << 8 | (ushort)(NAN(fVar4) || NAN(fVar3)) << 10 |
             (ushort)(fVar4 == fVar3) << 0xe;
    if (fVar4 != fVar3) goto LAB_0047ba31;
    fVar3 = unaff_EBX[3];
    fVar4 = unaff_EBX[0x10];
    uVar15 = (ushort)(fVar4 < fVar3) << 8 | (ushort)(NAN(fVar4) || NAN(fVar3)) << 10 |
             (ushort)(fVar4 == fVar3) << 0xe;
    if (fVar4 != fVar3) {
LAB_0047ba31:
      uVar11 = CONCAT22((short)((uint)pfVar10 >> 0x10),uVar15);
      *(undefined1 *)(unaff_EBX + 4) = 1;
      *unaff_EBX = *pfVar12;
      unaff_EBX[1] = unaff_EBX[3];
      *pfVar12 = unaff_EBX[0xf];
      unaff_EBX[3] = unaff_EBX[0x10];
LAB_0047ba4c:
      return CONCAT31((int3)((uint)uVar11 >> 8),1);
    }
  } while( true );
}

