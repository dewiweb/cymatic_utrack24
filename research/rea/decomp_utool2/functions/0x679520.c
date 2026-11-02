// rea decompile_all
// name: FUN_00679520
// address: 0x679520
// body: available
// range: 0x679520-0x679dfd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00679520(void)

{
  float *in_ECX;
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  local_8 = 0.0;
  fVar14 = 0.0;
  local_14 = 0.0;
  local_c = 0.0;
  *in_ECX = in_ECX[2];
  in_ECX[1] = in_ECX[3];
  local_10 = 0.0;
  fVar13 = 0.0;
LAB_00679567:
  do {
    while( true ) {
      fVar4 = in_ECX[0x13];
      if (fVar4 == in_ECX[0x12]) {
        fVar4 = in_ECX[0x14];
        if ((uint)*(float *)((int)in_ECX[6] + 8) <= (uint)fVar4) {
          return (uint)in_ECX[6] & 0xffffff00;
        }
        fVar3 = in_ECX[0xd];
        fVar8 = *(float *)((int)fVar3 + (int)fVar4 * 4);
        in_ECX[0x14] = (float)((int)fVar4 + 1);
        if (fVar8 != 100005.0) {
          fVar1 = *(float *)((int)fVar3 + ((int)fVar4 + 1) * 4);
          in_ECX[0x14] = (float)((int)fVar4 + 2);
          in_ECX[2] = fVar1;
          fVar1 = (float)((int)fVar4 + 3);
          in_ECX[3] = *(float *)((int)fVar3 + ((int)fVar4 + 2) * 4);
          in_ECX[0x14] = fVar1;
          if (fVar8 == 100003.0) {
            fVar13 = *(float *)((int)fVar3 + (int)fVar1 * 4);
            in_ECX[0x14] = (float)((int)fVar4 + 4);
            fVar14 = *(float *)((int)fVar3 + ((int)fVar4 + 4) * 4);
            in_ECX[0x14] = (float)((int)fVar4 + 5);
            local_c = fVar14;
            local_8 = fVar13;
            if (*(char *)(in_ECX + 0x11) == '\0') {
              fVar4 = in_ECX[2];
              in_ECX[2] = in_ECX[8] * in_ECX[3] + fVar4 * in_ECX[7] + in_ECX[9];
              in_ECX[3] = in_ECX[3] * in_ECX[0xb] + fVar4 * in_ECX[10] + in_ECX[0xc];
              fVar4 = fVar13 * in_ECX[10];
              fVar13 = fVar13 * in_ECX[7] + in_ECX[8] * fVar14 + in_ECX[9];
              fVar14 = fVar14 * in_ECX[0xb] + fVar4 + in_ECX[0xc];
              local_c = fVar14;
              local_8 = fVar13;
            }
          }
          else if (fVar8 == 100004.0) {
            fVar13 = *(float *)((int)fVar3 + (int)fVar1 * 4);
            in_ECX[0x14] = (float)((int)fVar4 + 4);
            fVar14 = *(float *)((int)fVar3 + ((int)fVar4 + 4) * 4);
            in_ECX[0x14] = (float)((int)fVar4 + 5);
            fVar1 = *(float *)((int)fVar3 + ((int)fVar4 + 5) * 4);
            in_ECX[0x14] = (float)((int)fVar4 + 6);
            local_10 = *(float *)((int)fVar3 + ((int)fVar4 + 6) * 4);
            in_ECX[0x14] = (float)((int)fVar4 + 7);
            local_14 = fVar1;
            local_c = fVar14;
            local_8 = fVar13;
            if (*(char *)(in_ECX + 0x11) == '\0') {
              fVar4 = in_ECX[2];
              in_ECX[2] = in_ECX[8] * in_ECX[3] + fVar4 * in_ECX[7] + in_ECX[9];
              in_ECX[3] = in_ECX[10] * fVar4 + in_ECX[0xb] * in_ECX[3] + in_ECX[0xc];
              fVar4 = fVar13 * in_ECX[10];
              local_14 = in_ECX[7] * fVar1 + in_ECX[8] * local_10 + in_ECX[9];
              fVar13 = in_ECX[8] * fVar14 + in_ECX[7] * fVar13 + in_ECX[9];
              fVar14 = fVar4 + in_ECX[0xb] * fVar14 + in_ECX[0xc];
              local_10 = fVar1 * in_ECX[10] + in_ECX[0xb] * local_10 + in_ECX[0xc];
              local_c = fVar14;
              local_8 = fVar13;
            }
          }
          else if (*(char *)(in_ECX + 0x11) == '\0') {
            fVar4 = in_ECX[2];
            in_ECX[2] = in_ECX[8] * in_ECX[3] + fVar4 * in_ECX[7] + in_ECX[9];
            in_ECX[3] = in_ECX[10] * fVar4 + in_ECX[0xb] * in_ECX[3] + in_ECX[0xc];
          }
        }
      }
      else {
        in_ECX[0x13] = (float)((int)fVar4 + -4);
        fVar8 = *(float *)((int)fVar4 + -4);
        if (fVar8 != 100005.0) {
          in_ECX[0x13] = (float)((int)fVar4 + -8);
          in_ECX[2] = *(float *)((int)fVar4 + -8);
          in_ECX[0x13] = (float)((int)fVar4 + -0xc);
          in_ECX[3] = *(float *)((int)fVar4 + -0xc);
          if (fVar8 == 100003.0) {
            in_ECX[0x13] = (float)((int)fVar4 + -0x10);
            fVar13 = *(float *)((int)fVar4 + -0x10);
            in_ECX[0x13] = (float)((int)fVar4 + -0x14);
            fVar14 = *(float *)((int)fVar4 + -0x14);
            local_c = fVar14;
            local_8 = fVar13;
          }
          else if (fVar8 == 100004.0) {
            in_ECX[0x13] = (float)((int)fVar4 + -0x10);
            fVar13 = *(float *)((int)fVar4 + -0x10);
            in_ECX[0x13] = (float)((int)fVar4 + -0x14);
            fVar14 = *(float *)((int)fVar4 + -0x14);
            in_ECX[0x13] = (float)((int)fVar4 + -0x18);
            local_14 = *(float *)((int)fVar4 + -0x18);
            in_ECX[0x13] = (float)((int)fVar4 + -0x1c);
            local_10 = *(float *)((int)fVar4 + -0x1c);
            local_c = fVar14;
            local_8 = fVar13;
          }
        }
      }
      if (fVar8 == 100001.0) {
        in_ECX[5] = (float)((int)in_ECX[5] + 1);
        if ((((in_ECX[0x13] == in_ECX[0x12]) &&
             ((uint)in_ECX[0x14] < (uint)*(float *)((int)in_ECX[6] + 8))) &&
            (*(float *)((int)in_ECX[0xd] + (int)in_ECX[0x14] * 4) == 100005.0)) &&
           ((in_ECX[2] == in_ECX[0xf] && (in_ECX[3] == in_ECX[0x10])))) {
          *(undefined1 *)(in_ECX + 4) = 1;
          return 1;
        }
        *(undefined1 *)(in_ECX + 4) = 0;
        return 1;
      }
      if (fVar8 != 100003.0) break;
      fVar4 = in_ECX[0x15];
      uVar2 = (int)in_ECX[0x13] - (int)in_ECX[0x12] >> 2;
      if ((int)fVar4 - 10U <= uVar2) {
        in_ECX[0x15] = (float)((int)fVar4 * 2);
        if (in_ECX[0x12] == 0.0) {
          fVar13 = (float)FUN_004c554b();
        }
        else {
          fVar13 = (float)FUN_004c553b(in_ECX[0x12],(int)fVar4 << 3);
        }
        in_ECX[0x12] = fVar13;
        in_ECX[0x13] = (float)((int)fVar13 + uVar2 * 4);
        fVar13 = local_8;
        fVar14 = local_c;
      }
      fVar4 = in_ECX[3];
      fVar8 = in_ECX[2];
      fVar5 = (in_ECX[1] + fVar4) * 0.5;
      fVar1 = (*in_ECX + fVar8) * 0.5;
      fVar9 = (fVar4 + fVar14) * 0.5;
      fVar6 = (fVar8 + fVar13) * 0.5;
      fVar10 = (fVar9 + fVar5) * 0.5;
      fVar7 = (fVar6 + fVar1) * 0.5;
      fVar3 = (fVar10 - fVar4) * (fVar10 - fVar4) + (fVar7 - fVar8) * (fVar7 - fVar8);
      fVar8 = in_ECX[0xe];
      fVar4 = in_ECX[0xe];
      *(float *)in_ECX[0x13] = fVar14;
      if (fVar4 <= fVar3 && fVar3 != fVar8) {
        in_ECX[0x13] = (float)((int)in_ECX[0x13] + 4);
        *(float *)in_ECX[0x13] = fVar13;
        in_ECX[0x13] = (float)((int)in_ECX[0x13] + 4);
        *(float *)in_ECX[0x13] = fVar9;
        in_ECX[0x13] = (float)((int)in_ECX[0x13] + 4);
        *(float *)in_ECX[0x13] = fVar6;
        in_ECX[0x13] = (float)((int)in_ECX[0x13] + 4);
        *(undefined4 *)in_ECX[0x13] = 0x47c35180;
        in_ECX[0x13] = (float)((int)in_ECX[0x13] + 4);
        *(float *)in_ECX[0x13] = fVar10;
        in_ECX[0x13] = (float)((int)in_ECX[0x13] + 4);
        *(float *)in_ECX[0x13] = fVar7;
        in_ECX[0x13] = (float)((int)in_ECX[0x13] + 4);
        *(float *)in_ECX[0x13] = fVar5;
        in_ECX[0x13] = (float)((int)in_ECX[0x13] + 4);
        *(float *)in_ECX[0x13] = fVar1;
        in_ECX[0x13] = (float)((int)in_ECX[0x13] + 4);
        *(undefined4 *)in_ECX[0x13] = 0x47c35180;
        in_ECX[0x13] = (float)((int)in_ECX[0x13] + 4);
      }
      else {
        in_ECX[0x13] = (float)((int)in_ECX[0x13] + 4);
        *(float *)in_ECX[0x13] = fVar13;
        in_ECX[0x13] = (float)((int)in_ECX[0x13] + 4);
        *(undefined4 *)in_ECX[0x13] = 0x47c35080;
        in_ECX[0x13] = (float)((int)in_ECX[0x13] + 4);
        *(float *)in_ECX[0x13] = fVar10;
        in_ECX[0x13] = (float)((int)in_ECX[0x13] + 4);
        *(float *)in_ECX[0x13] = fVar7;
LAB_00679a5c:
        in_ECX[0x13] = (float)((int)in_ECX[0x13] + 4);
        *(undefined4 *)in_ECX[0x13] = 0x47c35080;
        in_ECX[0x13] = (float)((int)in_ECX[0x13] + 4);
      }
    }
    if (fVar8 == 100004.0) {
      fVar4 = in_ECX[0x15];
      uVar2 = (int)in_ECX[0x13] - (int)in_ECX[0x12] >> 2;
      if ((int)fVar4 - 0x10U <= uVar2) {
        in_ECX[0x15] = (float)((int)fVar4 * 2);
        if (in_ECX[0x12] == 0.0) {
          fVar13 = (float)FUN_004c554b();
        }
        else {
          fVar13 = (float)FUN_004c553b(in_ECX[0x12],(int)fVar4 << 3);
        }
        in_ECX[0x12] = fVar13;
        in_ECX[0x13] = (float)((int)fVar13 + uVar2 * 4);
        fVar13 = local_8;
        fVar14 = local_c;
      }
      fVar4 = in_ECX[2];
      fVar8 = in_ECX[3];
      fVar3 = (*in_ECX + fVar4) * 0.5;
      fVar7 = (local_14 + fVar13) * 0.5;
      fVar6 = (fVar8 + fVar14) * 0.5;
      fVar1 = (in_ECX[1] + fVar8) * 0.5;
      fVar9 = (local_10 + fVar14) * 0.5;
      fVar5 = (fVar4 + fVar13) * 0.5;
      fVar10 = (fVar5 + fVar3) * 0.5;
      fVar11 = (fVar6 + fVar1) * 0.5;
      fVar12 = (fVar7 + fVar5) * 0.5;
      fVar5 = (fVar9 + fVar6) * 0.5;
      if (((fVar11 - fVar8) * (fVar11 - fVar8) + (fVar10 - fVar4) * (fVar10 - fVar4) <= in_ECX[0xe])
         && ((fVar5 - fVar14) * (fVar5 - fVar14) + (fVar12 - fVar13) * (fVar12 - fVar13) <=
             in_ECX[0xe])) {
        *(float *)in_ECX[0x13] = local_10;
        in_ECX[0x13] = (float)((int)in_ECX[0x13] + 4);
        *(float *)in_ECX[0x13] = local_14;
        in_ECX[0x13] = (float)((int)in_ECX[0x13] + 4);
        *(undefined4 *)in_ECX[0x13] = 0x47c35080;
        in_ECX[0x13] = (float)((int)in_ECX[0x13] + 4);
        *(float *)in_ECX[0x13] = fVar5;
        in_ECX[0x13] = (float)((int)in_ECX[0x13] + 4);
        *(float *)in_ECX[0x13] = fVar12;
        in_ECX[0x13] = (float)((int)in_ECX[0x13] + 4);
        *(undefined4 *)in_ECX[0x13] = 0x47c35080;
        in_ECX[0x13] = (float)((int)in_ECX[0x13] + 4);
        *(float *)in_ECX[0x13] = fVar11;
        in_ECX[0x13] = (float)((int)in_ECX[0x13] + 4);
        *(float *)in_ECX[0x13] = fVar10;
        fVar13 = local_8;
        goto LAB_00679a5c;
      }
      *(float *)in_ECX[0x13] = local_10;
      in_ECX[0x13] = (float)((int)in_ECX[0x13] + 4);
      *(float *)in_ECX[0x13] = local_14;
      in_ECX[0x13] = (float)((int)in_ECX[0x13] + 4);
      *(float *)in_ECX[0x13] = fVar9;
      in_ECX[0x13] = (float)((int)in_ECX[0x13] + 4);
      *(float *)in_ECX[0x13] = fVar7;
      in_ECX[0x13] = (float)((int)in_ECX[0x13] + 4);
      *(float *)in_ECX[0x13] = fVar5;
      in_ECX[0x13] = (float)((int)in_ECX[0x13] + 4);
      *(float *)in_ECX[0x13] = fVar12;
      in_ECX[0x13] = (float)((int)in_ECX[0x13] + 4);
      *(undefined4 *)in_ECX[0x13] = 0x47c35200;
      in_ECX[0x13] = (float)((int)in_ECX[0x13] + 4);
      *(float *)in_ECX[0x13] = (fVar5 + fVar11) * 0.5;
      in_ECX[0x13] = (float)((int)in_ECX[0x13] + 4);
      *(float *)in_ECX[0x13] = (fVar12 + fVar10) * 0.5;
      in_ECX[0x13] = (float)((int)in_ECX[0x13] + 4);
      *(float *)in_ECX[0x13] = fVar11;
      in_ECX[0x13] = (float)((int)in_ECX[0x13] + 4);
      *(float *)in_ECX[0x13] = fVar10;
      in_ECX[0x13] = (float)((int)in_ECX[0x13] + 4);
      *(float *)in_ECX[0x13] = fVar1;
      in_ECX[0x13] = (float)((int)in_ECX[0x13] + 4);
      *(float *)in_ECX[0x13] = fVar3;
      in_ECX[0x13] = (float)((int)in_ECX[0x13] + 4);
      *(undefined4 *)in_ECX[0x13] = 0x47c35200;
      in_ECX[0x13] = (float)((int)in_ECX[0x13] + 4);
      fVar13 = local_8;
      goto LAB_00679567;
    }
    fVar4 = in_ECX[2];
    if (fVar8 == 100005.0) {
      if ((fVar4 != in_ECX[0xf]) || (in_ECX[3] != in_ECX[0x10])) {
        *in_ECX = in_ECX[2];
        in_ECX[1] = in_ECX[3];
        in_ECX[2] = in_ECX[0xf];
        in_ECX[3] = in_ECX[0x10];
        *(undefined1 *)(in_ECX + 4) = 1;
        return CONCAT31((int3)((uint)in_ECX[0x10] >> 8),1);
      }
    }
    else {
      *in_ECX = fVar4;
      in_ECX[0xf] = fVar4;
      in_ECX[5] = -NAN;
      in_ECX[1] = in_ECX[3];
      in_ECX[0x10] = in_ECX[3];
    }
  } while( true );
}

