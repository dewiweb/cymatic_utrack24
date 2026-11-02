// rea decompile_all
// name: FUN_005e7d00
// address: 0x5e7d00
// body: available
// range: 0x5e7d00-0x5e8386 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005e7d00(void)

{
  uint *puVar1;
  float *pfVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  byte bVar16;
  int in_ECX;
  int iVar17;
  int iVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  undefined4 *puVar22;
  int *in_EDX;
  undefined4 *puVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  bool bVar30;
  int local_24;
  int local_10;
  
  iVar29 = *(int *)(in_ECX + 4);
  iVar14 = *(int *)(in_ECX + 0x68);
  piVar4 = *(int **)(iVar29 + 0x1c);
  iVar5 = piVar4[0x392];
  if ((in_EDX != (int *)0x0) &&
     ((*(int *)(in_ECX + 0x14) <= *(int *)(in_ECX + 0x18) || (*(int *)(in_ECX + 0x18) == -1)))) {
    uVar6 = *(uint *)(in_ECX + 0x40);
    *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(in_ECX + 0x28);
    *(int *)(in_ECX + 0x28) = in_EDX[7];
    *(undefined4 *)(in_ECX + 0x2c) = 0xffffffff;
    if ((((uVar6 & *(uint *)(in_ECX + 0x44)) == 0xffffffff) || (uVar6 + 1 != in_EDX[0xe])) ||
       (*(uint *)(in_ECX + 0x44) + (uint)(0xfffffffe < uVar6) != in_EDX[0xf])) {
      *(undefined4 *)(in_ECX + 0x38) = 0xffffffff;
      *(undefined4 *)(in_ECX + 0x3c) = 0xffffffff;
      *(undefined4 *)(iVar14 + 0x80) = 0xffffffff;
      *(undefined4 *)(iVar14 + 0x84) = 0xffffffff;
    }
    *(int *)(in_ECX + 0x40) = in_EDX[0xe];
    *(int *)(in_ECX + 0x44) = in_EDX[0xf];
    bVar10 = (byte)iVar5;
    if (*in_EDX != 0) {
      bVar16 = bVar10 + 1;
      iVar11 = piVar4[*(int *)(in_ECX + 0x28)] >> (bVar16 & 0x1f);
      iVar12 = piVar4[1] >> (bVar16 & 0x1f);
      uVar15 = in_EDX[0x16];
      iVar26 = *piVar4 >> (bVar16 & 0x1f);
      puVar1 = (uint *)(in_ECX + 0x48);
      uVar6 = *puVar1;
      *puVar1 = *puVar1 + uVar15;
      *(int *)(in_ECX + 0x4c) =
           *(int *)(in_ECX + 0x4c) + ((int)uVar15 >> 0x1f) + (uint)CARRY4(uVar6,uVar15);
      uVar15 = in_EDX[0x17];
      puVar1 = (uint *)(in_ECX + 0x50);
      uVar6 = *puVar1;
      *puVar1 = *puVar1 + uVar15;
      *(int *)(in_ECX + 0x54) =
           *(int *)(in_ECX + 0x54) + ((int)uVar15 >> 0x1f) + (uint)CARRY4(uVar6,uVar15);
      uVar15 = in_EDX[0x18];
      puVar1 = (uint *)(in_ECX + 0x58);
      uVar6 = *puVar1;
      *puVar1 = *puVar1 + uVar15;
      *(int *)(in_ECX + 0x5c) =
           *(int *)(in_ECX + 0x5c) + ((int)uVar15 >> 0x1f) + (uint)CARRY4(uVar6,uVar15);
      uVar15 = in_EDX[0x19];
      puVar1 = (uint *)(in_ECX + 0x60);
      uVar6 = *puVar1;
      *puVar1 = *puVar1 + uVar15;
      *(int *)(in_ECX + 100) =
           *(int *)(in_ECX + 100) + ((int)uVar15 >> 0x1f) + (uint)CARRY4(uVar6,uVar15);
      bVar30 = *(int *)(in_ECX + 0x30) == 0;
      iVar17 = 0;
      if (bVar30) {
        iVar17 = iVar12;
      }
      iVar18 = iVar12;
      if (bVar30) {
        iVar18 = 0;
      }
      local_10 = 0;
      if (0 < *(int *)(iVar29 + 4)) {
        do {
          if (*(int *)(in_ECX + 0x24) == 0) {
            iVar13 = *(int *)(iVar14 + 4) - iVar5;
            if (*(int *)(in_ECX + 0x28) == 0) {
              puVar7 = (&PTR_DAT_00b89180)[iVar13];
              pfVar21 = (float *)(*(int *)(*(int *)(in_ECX + 8) + local_10 * 4) + iVar17 * 4);
              iVar13 = *(int *)(*in_EDX + local_10 * 4);
              if (0 < iVar26) {
                pfVar20 = (float *)(puVar7 + iVar26 * 4 + -4);
                iVar24 = (int)puVar7 - (int)pfVar21;
                iVar27 = iVar26;
                do {
                  fVar3 = *pfVar20;
                  pfVar19 = (float *)(iVar24 + (int)pfVar21);
                  pfVar20 = pfVar20 + -1;
                  *pfVar21 = *(float *)((int)pfVar19 + (iVar13 - (int)puVar7)) * *pfVar19 +
                             fVar3 * *pfVar21;
                  pfVar21 = pfVar21 + 1;
                  iVar27 = iVar27 + -1;
                } while (iVar27 != 0);
              }
            }
            else {
              puVar7 = (&PTR_DAT_00b89180)[iVar13];
              pfVar21 = (float *)(*(int *)(*(int *)(in_ECX + 8) + local_10 * 4) + iVar17 * 4);
              local_24 = 0;
              iVar13 = *(int *)(*in_EDX + local_10 * 4) + (iVar12 / 2 - iVar26 / 2) * 4;
              if (0 < iVar26) {
                pfVar20 = (float *)(puVar7 + (iVar26 + -1) * 4);
                pfVar19 = pfVar21;
                iVar27 = iVar26;
                do {
                  fVar3 = *pfVar20;
                  pfVar2 = (float *)((int)pfVar19 + ((int)puVar7 - (int)pfVar21));
                  pfVar20 = pfVar20 + -1;
                  *pfVar19 = *(float *)((iVar13 - (int)puVar7) + (int)pfVar2) * *pfVar2 +
                             fVar3 * *pfVar19;
                  pfVar19 = pfVar19 + 1;
                  iVar27 = iVar27 + -1;
                  local_24 = iVar26;
                } while (iVar27 != 0);
              }
              iVar27 = iVar26 / 2 + iVar12 / 2;
              if (local_24 < iVar27) {
                if (3 < iVar27 - local_24) {
                  iVar24 = local_24 * 4;
                  iVar28 = local_24 + 1;
                  iVar25 = ((iVar27 - local_24) - 4U >> 2) + 1;
                  local_24 = local_24 + iVar25 * 4;
                  pfVar20 = pfVar21 + iVar28;
                  pfVar19 = (float *)(iVar13 + 0xc + iVar24);
                  do {
                    pfVar20[-1] = pfVar19[-3];
                    *pfVar20 = *(float *)((iVar13 - (int)pfVar21) + -0x10 + (int)(pfVar20 + 4));
                    pfVar20[1] = pfVar19[-1];
                    pfVar20[2] = *pfVar19;
                    iVar25 = iVar25 + -1;
                    pfVar20 = pfVar20 + 4;
                    pfVar19 = pfVar19 + 4;
                  } while (iVar25 != 0);
                }
                if (local_24 < iVar27) {
                  iVar27 = iVar27 - local_24;
                  pfVar20 = pfVar21 + local_24;
                  do {
                    *pfVar20 = *(float *)((int)pfVar20 + (iVar13 - (int)pfVar21));
                    iVar27 = iVar27 + -1;
                    pfVar20 = pfVar20 + 1;
                  } while (iVar27 != 0);
                }
              }
            }
          }
          else if (*(int *)(in_ECX + 0x28) == 0) {
            puVar7 = (&PTR_DAT_00b89180)[*(int *)(iVar14 + 4) - iVar5];
            pfVar21 = (float *)(*(int *)(*(int *)(in_ECX + 8) + local_10 * 4) +
                               ((iVar12 / 2 - iVar26 / 2) + iVar17) * 4);
            iVar13 = *(int *)(*in_EDX + local_10 * 4);
            if (0 < iVar26) {
              pfVar20 = (float *)(puVar7 + iVar26 * 4 + -4);
              iVar24 = (int)puVar7 - (int)pfVar21;
              iVar27 = iVar26;
              do {
                fVar3 = *pfVar20;
                pfVar19 = (float *)(iVar24 + (int)pfVar21);
                pfVar20 = pfVar20 + -1;
                *pfVar21 = *(float *)((int)pfVar19 + (iVar13 - (int)puVar7)) * *pfVar19 +
                           fVar3 * *pfVar21;
                pfVar21 = pfVar21 + 1;
                iVar27 = iVar27 + -1;
              } while (iVar27 != 0);
            }
          }
          else {
            puVar7 = (&PTR_DAT_00b89180)[*(int *)(iVar14 + 8) - iVar5];
            pfVar21 = (float *)(*(int *)(*(int *)(in_ECX + 8) + local_10 * 4) + iVar17 * 4);
            iVar13 = *(int *)(*in_EDX + local_10 * 4);
            if (0 < iVar12) {
              pfVar20 = (float *)(puVar7 + (iVar12 + -1) * 4);
              iVar24 = (int)puVar7 - (int)pfVar21;
              iVar27 = iVar12;
              do {
                fVar3 = *pfVar20;
                pfVar19 = (float *)(iVar24 + (int)pfVar21);
                pfVar20 = pfVar20 + -1;
                *pfVar21 = *(float *)((int)pfVar19 + (iVar13 - (int)puVar7)) * *pfVar19 +
                           fVar3 * *pfVar21;
                pfVar21 = pfVar21 + 1;
                iVar27 = iVar27 + -1;
              } while (iVar27 != 0);
            }
          }
          iVar24 = *(int *)(*(int *)(in_ECX + 8) + local_10 * 4) + iVar18 * 4;
          iVar13 = 0;
          iVar27 = *(int *)(*in_EDX + local_10 * 4) + iVar11 * 4;
          if (3 < iVar11) {
            iVar28 = (iVar11 - 4U >> 2) + 1;
            iVar13 = iVar28 * 4;
            puVar22 = (undefined4 *)(iVar24 + 4);
            puVar23 = (undefined4 *)(iVar27 + 0xc);
            do {
              puVar22[-1] = puVar23[-3];
              *puVar22 = *(undefined4 *)((iVar27 - iVar24) + -0x10 + (int)(puVar22 + 4));
              puVar22[1] = puVar23[-1];
              puVar22[2] = *puVar23;
              iVar28 = iVar28 + -1;
              puVar22 = puVar22 + 4;
              puVar23 = puVar23 + 4;
            } while (iVar28 != 0);
          }
          if (iVar13 < iVar11) {
            iVar28 = iVar11 - iVar13;
            puVar22 = (undefined4 *)(iVar24 + iVar13 * 4);
            do {
              *puVar22 = *(undefined4 *)((int)puVar22 + (iVar27 - iVar24));
              iVar28 = iVar28 + -1;
              puVar22 = puVar22 + 1;
            } while (iVar28 != 0);
          }
          local_10 = local_10 + 1;
        } while (local_10 < *(int *)(iVar29 + 4));
      }
      if (*(int *)(in_ECX + 0x30) != 0) {
        iVar12 = 0;
      }
      *(int *)(in_ECX + 0x30) = iVar12;
      if (*(int *)(in_ECX + 0x18) == -1) {
        *(int *)(in_ECX + 0x18) = iVar18;
        *(int *)(in_ECX + 0x14) = iVar18;
      }
      else {
        *(int *)(in_ECX + 0x18) = iVar17;
        *(int *)(in_ECX + 0x14) =
             (((int)((piVar4[*(int *)(in_ECX + 0x28)] >> 0x1f & 3U) +
                    piVar4[*(int *)(in_ECX + 0x28)]) >> 2) +
              ((int)(piVar4[*(int *)(in_ECX + 0x24)] +
                    (piVar4[*(int *)(in_ECX + 0x24)] >> 0x1f & 3U)) >> 2) >> (bVar10 & 0x1f)) +
             iVar17;
      }
    }
    uVar6 = *(uint *)(iVar14 + 0x80);
    if ((uVar6 & *(uint *)(iVar14 + 0x84)) == 0xffffffff) {
      *(undefined4 *)(iVar14 + 0x80) = 0;
      *(undefined4 *)(iVar14 + 0x84) = 0;
    }
    else {
      uVar15 = ((int)(piVar4[*(int *)(in_ECX + 0x24)] +
                     (piVar4[*(int *)(in_ECX + 0x24)] >> 0x1f & 3U)) >> 2) +
               ((int)((piVar4[*(int *)(in_ECX + 0x28)] >> 0x1f & 3U) +
                     piVar4[*(int *)(in_ECX + 0x28)]) >> 2);
      *(uint *)(iVar14 + 0x80) = uVar15 + uVar6;
      *(uint *)(iVar14 + 0x84) =
           ((int)uVar15 >> 0x1f) + *(int *)(iVar14 + 0x84) + (uint)CARRY4(uVar15,uVar6);
    }
    uVar6 = *(uint *)(in_ECX + 0x38);
    if ((uVar6 & *(uint *)(in_ECX + 0x3c)) == 0xffffffff) {
      uVar6 = in_EDX[0xd];
      if ((in_EDX[0xc] & uVar6) != 0xffffffff) {
        *(int *)(in_ECX + 0x38) = in_EDX[0xc];
        *(uint *)(in_ECX + 0x3c) = uVar6;
        if (((int)uVar6 <= *(int *)(iVar14 + 0x84)) &&
           (((int)uVar6 < *(int *)(iVar14 + 0x84) ||
            (*(uint *)(in_ECX + 0x38) < *(uint *)(iVar14 + 0x80))))) {
          iVar14 = *(int *)(iVar14 + 0x80) - in_EDX[0xc];
          iVar29 = 0;
          if (-1 < iVar14) {
            iVar29 = iVar14;
          }
          if (in_EDX[0xb] == 0) {
            *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x18) + (iVar29 >> (bVar10 & 0x1f));
            if (*(int *)(in_ECX + 0x14) < *(int *)(in_ECX + 0x18)) {
              *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x14);
            }
          }
          else {
            iVar14 = *(int *)(in_ECX + 0x14) - *(int *)(in_ECX + 0x18) << (bVar10 & 0x1f);
            if (iVar14 < iVar29) {
              iVar29 = iVar14;
            }
            *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) - (iVar29 >> (bVar10 & 0x1f));
          }
        }
      }
    }
    else {
      uVar15 = ((int)(piVar4[*(int *)(in_ECX + 0x24)] +
                     (piVar4[*(int *)(in_ECX + 0x24)] >> 0x1f & 3U)) >> 2) +
               ((int)((piVar4[*(int *)(in_ECX + 0x28)] >> 0x1f & 3U) +
                     piVar4[*(int *)(in_ECX + 0x28)]) >> 2);
      *(uint *)(in_ECX + 0x38) = uVar15 + uVar6;
      *(uint *)(in_ECX + 0x3c) =
           ((int)uVar15 >> 0x1f) + *(int *)(in_ECX + 0x3c) + (uint)CARRY4(uVar15,uVar6);
      uVar6 = in_EDX[0xc];
      uVar15 = in_EDX[0xd];
      if ((uVar6 & uVar15) != 0xffffffff) {
        uVar8 = *(uint *)(in_ECX + 0x38);
        uVar9 = *(uint *)(in_ECX + 0x3c);
        if ((uVar8 != uVar6) || (uVar9 != uVar15)) {
          if (((((int)uVar15 <= (int)uVar9) && (((int)uVar15 < (int)uVar9 || (uVar6 < uVar8)))) &&
              (iVar29 = uVar8 - in_EDX[0xc], iVar29 != 0)) && (in_EDX[0xb] != 0)) {
            iVar14 = *(int *)(in_ECX + 0x14) - *(int *)(in_ECX + 0x18) << (bVar10 & 0x1f);
            if (iVar14 < iVar29) {
              iVar29 = iVar14;
            }
            iVar14 = 0;
            if (-1 < iVar29) {
              iVar14 = iVar29;
            }
            *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) - (iVar14 >> (bVar10 & 0x1f));
          }
          *(int *)(in_ECX + 0x38) = in_EDX[0xc];
          *(int *)(in_ECX + 0x3c) = in_EDX[0xd];
        }
      }
    }
    if (in_EDX[0xb] != 0) {
      *(undefined4 *)(in_ECX + 0x20) = 1;
    }
    return 0;
  }
  return 0xffffff7d;
}

