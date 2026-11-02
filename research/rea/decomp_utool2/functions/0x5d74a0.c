// rea decompile_all
// name: FUN_005d74a0
// address: 0x5d74a0
// body: available
// range: 0x5d74a0-0x5d80dd inclusive
// range: 0x5d80e0-0x5d83b9 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d74a0(int param_1,int param_2,undefined4 *param_3,float *param_4,int param_5,
                 undefined4 *param_6,float *param_7,int param_8)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  int in_ECX;
  int iVar14;
  undefined4 *puVar15;
  float *pfVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  float *pfVar19;
  int in_EDX;
  int iVar20;
  int iVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  float *pfVar24;
  float *pfVar25;
  int iVar26;
  float *pfVar27;
  float *pfVar28;
  float *pfVar29;
  undefined4 *puVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  int local_48;
  int local_44;
  int local_38;
  int local_34;
  float *local_2c;
  undefined4 *local_28;
  float *local_24;
  float *local_20;
  int local_1c;
  
  fVar31 = 6.2831855 / (float)in_EDX;
  fVar32 = fVar31;
  FUN_004363f0();
  FUN_00436470();
  local_48 = in_EDX + 1 >> 1;
  iVar20 = in_ECX * param_1;
  iVar3 = in_ECX + -1 >> 1;
  iVar4 = in_ECX * in_EDX;
  if (in_ECX != 1) {
    iVar5 = 0;
    if (3 < param_2) {
      iVar26 = (param_2 - 4U >> 2) + 1;
      iVar5 = iVar26 * 4;
      pfVar7 = param_7 + 1;
      pfVar24 = (float *)(param_5 + 0xc);
      do {
        pfVar7[-1] = pfVar24[-3];
        *pfVar7 = *(float *)((param_5 - (int)param_7) + -0x10 + (int)(pfVar7 + 4));
        pfVar7[1] = pfVar24[-1];
        pfVar7[2] = *pfVar24;
        iVar26 = iVar26 + -1;
        pfVar7 = pfVar7 + 4;
        pfVar24 = pfVar24 + 4;
      } while (iVar26 != 0);
    }
    if (iVar5 < param_2) {
      iVar26 = param_2 - iVar5;
      pfVar7 = param_7 + iVar5;
      do {
        *pfVar7 = *(float *)((int)pfVar7 + (param_5 - (int)param_7));
        iVar26 = iVar26 + -1;
        pfVar7 = pfVar7 + 1;
      } while (iVar26 != 0);
    }
    iVar5 = 0;
    if (1 < in_EDX) {
      iVar26 = in_EDX + -1;
      do {
        iVar5 = iVar5 + iVar20;
        iVar6 = 0;
        iVar14 = iVar5;
        if (3 < param_1) {
          iVar21 = (param_1 - 4U >> 2) + 1;
          iVar6 = iVar21 * 4;
          do {
            param_6[iVar14] = param_4[iVar14];
            iVar14 = iVar14 + in_ECX;
            param_6[iVar14] = param_4[iVar14];
            iVar14 = iVar14 + in_ECX;
            param_6[iVar14] = param_4[iVar14];
            iVar14 = iVar14 + in_ECX;
            param_6[iVar14] = param_4[iVar14];
            iVar14 = iVar14 + in_ECX;
            iVar21 = iVar21 + -1;
          } while (iVar21 != 0);
        }
        if (iVar6 < param_1) {
          puVar15 = param_6 + iVar14;
          iVar6 = param_1 - iVar6;
          do {
            *puVar15 = *(undefined4 *)(((int)param_4 - (int)param_6) + (int)puVar15);
            puVar15 = puVar15 + in_ECX;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        iVar26 = iVar26 + -1;
      } while (iVar26 != 0);
    }
    iVar5 = 0;
    local_24 = (float *)-in_ECX;
    if (param_1 < iVar3) {
      if (1 < in_EDX) {
        pfVar8 = (float *)(param_6 + -in_ECX);
        pfVar7 = (float *)(param_8 + in_ECX * -4 + -4);
        pfVar24 = param_4 + (-1 - in_ECX);
        local_1c = in_EDX + -1;
        do {
          pfVar8 = pfVar8 + iVar20;
          pfVar7 = pfVar7 + in_ECX;
          pfVar24 = pfVar24 + iVar20;
          pfVar11 = pfVar8;
          pfVar12 = pfVar24;
          iVar5 = param_1;
          if (0 < param_1) {
            do {
              if (2 < in_ECX) {
                iVar26 = (in_ECX - 3U >> 1) + 1;
                pfVar29 = pfVar12 + in_ECX;
                pfVar9 = pfVar7;
                pfVar27 = pfVar11 + in_ECX;
                do {
                  pfVar13 = pfVar29 + 2;
                  pfVar19 = pfVar9 + 2;
                  pfVar27 = pfVar27 + 2;
                  *(float *)(((int)param_6 - (int)param_4) + (int)pfVar13) =
                       pfVar9[1] * *pfVar13 + pfVar29[3] * *pfVar19;
                  *pfVar27 = pfVar9[1] * pfVar29[3] - *pfVar19 * *pfVar13;
                  iVar26 = iVar26 + -1;
                  pfVar29 = pfVar13;
                  pfVar9 = pfVar19;
                } while (iVar26 != 0);
              }
              iVar5 = iVar5 + -1;
              pfVar11 = pfVar11 + in_ECX;
              pfVar12 = pfVar12 + in_ECX;
            } while (iVar5 != 0);
          }
          local_1c = local_1c + -1;
        } while (local_1c != 0);
      }
    }
    else if (1 < in_EDX) {
      iVar26 = (int)local_24 + -1;
      pfVar7 = (float *)(param_8 + in_ECX * -4 + -4);
      local_28 = (undefined4 *)(in_EDX + -1);
      iVar6 = (int)local_24;
      do {
        iVar5 = iVar5 + iVar20;
        iVar6 = iVar6 + in_ECX;
        iVar26 = iVar26 + in_ECX;
        pfVar7 = pfVar7 + in_ECX;
        if (2 < in_ECX) {
          iVar14 = (iVar26 - iVar6) + iVar5;
          pfVar11 = (float *)(param_6 + iVar14 + 1);
          pfVar8 = param_4 + iVar14;
          iVar14 = (in_ECX - 3U >> 1) + 1;
          pfVar24 = pfVar7;
          do {
            pfVar12 = pfVar24 + 2;
            pfVar11 = pfVar11 + 2;
            pfVar8 = pfVar8 + 2;
            if (0 < param_1) {
              pfVar29 = pfVar8;
              pfVar9 = pfVar11;
              iVar21 = param_1;
              do {
                *(float *)((int)pfVar29 + ((int)param_6 - (int)param_4)) =
                     pfVar29[1] * *pfVar12 + pfVar24[1] * *pfVar29;
                pfVar27 = pfVar29 + 1;
                fVar36 = *pfVar29;
                pfVar29 = pfVar29 + in_ECX;
                *pfVar9 = pfVar24[1] * *pfVar27 - *pfVar12 * fVar36;
                pfVar9 = pfVar9 + in_ECX;
                iVar21 = iVar21 + -1;
              } while (iVar21 != 0);
            }
            iVar14 = iVar14 + -1;
            pfVar24 = pfVar12;
          } while (iVar14 != 0);
        }
        local_28 = (undefined4 *)((int)local_28 + -1);
      } while (local_28 != (undefined4 *)0x0);
    }
    iVar5 = 0;
    iVar26 = iVar20 * in_EDX;
    if (iVar3 < param_1) {
      if (1 < local_48) {
        pfVar7 = param_4 + -in_ECX;
        pfVar24 = (float *)(param_6 + (-1 - in_ECX));
        iVar6 = local_48 + -1;
        do {
          pfVar7 = pfVar7 + iVar20;
          iVar5 = iVar5 + iVar20;
          pfVar24 = pfVar24 + iVar20;
          iVar26 = iVar26 - iVar20;
          local_24 = (float *)((int)local_24 + iVar20);
          if (2 < in_ECX) {
            iVar21 = (in_ECX - 3U >> 1) + 1;
            pfVar8 = pfVar7;
            iVar14 = (int)local_24;
            pfVar11 = pfVar24;
            do {
              iVar14 = iVar14 + 2;
              pfVar8 = pfVar8 + 2;
              pfVar11 = pfVar11 + 2;
              if (0 < param_1) {
                iVar1 = iVar14 + (iVar26 - iVar5);
                pfVar27 = param_4 + iVar1;
                local_2c = (float *)param_1;
                pfVar9 = (float *)(param_6 + iVar1 + -1);
                pfVar12 = pfVar11;
                pfVar29 = pfVar8;
                do {
                  pfVar9 = pfVar9 + in_ECX;
                  pfVar12 = pfVar12 + in_ECX;
                  pfVar29 = pfVar29 + in_ECX;
                  pfVar27 = pfVar27 + in_ECX;
                  local_2c = (float *)((int)local_2c + -1);
                  *(float *)((int)pfVar12 + ((int)param_4 - (int)param_6)) = *pfVar9 + *pfVar12;
                  *(float *)((int)pfVar9 + ((int)param_4 - (int)param_6)) = pfVar12[1] - pfVar9[1];
                  *pfVar29 = pfVar9[1] + pfVar12[1];
                  *pfVar27 = *pfVar9 - *pfVar12;
                } while (local_2c != (float *)0x0);
              }
              iVar21 = iVar21 + -1;
            } while (iVar21 != 0);
          }
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    else if (1 < local_48) {
      pfVar7 = param_4 + iVar26;
      pfVar24 = (float *)(param_6 + iVar26 + -1);
      pfVar11 = (float *)(param_6 + -1);
      local_2c = (float *)(local_48 + -1);
      pfVar8 = param_4;
      do {
        pfVar8 = pfVar8 + iVar20;
        pfVar11 = pfVar11 + iVar20;
        pfVar7 = pfVar7 + -iVar20;
        pfVar24 = pfVar24 + -iVar20;
        if (0 < param_1) {
          local_34 = param_1;
          pfVar12 = pfVar8;
          pfVar29 = pfVar11;
          pfVar9 = pfVar24;
          pfVar27 = pfVar7;
          do {
            if (2 < in_ECX) {
              iVar5 = (in_ECX - 3U >> 1) + 1;
              pfVar13 = pfVar29;
              pfVar19 = pfVar9;
              pfVar25 = pfVar12;
              pfVar28 = pfVar27;
              do {
                pfVar10 = pfVar13 + 2;
                pfVar16 = pfVar19 + 2;
                pfVar25 = pfVar25 + 2;
                pfVar28 = pfVar28 + 2;
                *(float *)((int)pfVar10 + ((int)param_4 - (int)param_6)) = pfVar13[2] + pfVar19[2];
                *(float *)((int)pfVar16 + ((int)param_4 - (int)param_6)) = pfVar13[3] - pfVar19[3];
                *pfVar25 = pfVar19[3] + pfVar13[3];
                *pfVar28 = *pfVar16 - *pfVar10;
                iVar5 = iVar5 + -1;
                pfVar13 = pfVar10;
                pfVar19 = pfVar16;
              } while (iVar5 != 0);
            }
            pfVar12 = pfVar12 + in_ECX;
            pfVar29 = pfVar29 + in_ECX;
            pfVar27 = pfVar27 + in_ECX;
            pfVar9 = pfVar9 + in_ECX;
            local_34 = local_34 + -1;
          } while (local_34 != 0);
        }
        local_2c = (float *)((int)local_2c + -1);
      } while (local_2c != (float *)0x0);
    }
  }
  iVar5 = 0;
  if (3 < param_2) {
    iVar26 = (param_2 - 4U >> 2) + 1;
    iVar5 = iVar26 * 4;
    puVar15 = (undefined4 *)(param_5 + 4);
    pfVar7 = param_7 + 3;
    do {
      puVar15[-1] = pfVar7[-3];
      *puVar15 = *(undefined4 *)((int)param_7 + (-0x10 - param_5) + (int)(puVar15 + 4));
      puVar15[1] = pfVar7[-1];
      puVar15[2] = *pfVar7;
      iVar26 = iVar26 + -1;
      puVar15 = puVar15 + 4;
      pfVar7 = pfVar7 + 4;
    } while (iVar26 != 0);
  }
  if (iVar5 < param_2) {
    iVar26 = param_2 - iVar5;
    puVar15 = (undefined4 *)(param_5 + iVar5 * 4);
    do {
      *puVar15 = *(undefined4 *)(((int)param_7 - param_5) + (int)puVar15);
      iVar26 = iVar26 + -1;
      puVar15 = puVar15 + 1;
    } while (iVar26 != 0);
  }
  iVar5 = 0;
  if (1 < local_48) {
    iVar6 = -in_ECX;
    pfVar7 = (float *)(param_6 + -in_ECX);
    local_28 = (undefined4 *)(local_48 + -1);
    iVar26 = in_EDX * param_2;
    do {
      iVar5 = iVar5 + iVar20;
      pfVar7 = pfVar7 + iVar20;
      iVar26 = iVar26 - iVar20;
      iVar6 = iVar6 + iVar20;
      if (0 < param_1) {
        pfVar24 = (float *)(param_6 + (iVar6 - iVar5) + iVar26);
        pfVar8 = pfVar7;
        iVar14 = param_1;
        do {
          pfVar11 = pfVar24 + in_ECX;
          pfVar24 = pfVar24 + in_ECX;
          pfVar12 = pfVar8 + in_ECX;
          pfVar8 = pfVar8 + in_ECX;
          *(float *)(((int)param_4 - (int)param_6) + (int)pfVar8) = *pfVar11 + *pfVar12;
          *(float *)(((int)param_4 - (int)param_6) + (int)pfVar24) = *pfVar24 - *pfVar8;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
      local_28 = (undefined4 *)((int)local_28 + -1);
    } while (local_28 != (undefined4 *)0x0);
  }
  fVar34 = 0.0;
  fVar36 = 1.0;
  iVar5 = (in_EDX + -1) * param_2;
  if (1 < local_48) {
    pfVar7 = param_7 + in_EDX * param_2;
    iVar26 = local_48 + -1;
    pfVar24 = param_7;
    do {
      pfVar24 = pfVar24 + param_2;
      pfVar7 = pfVar7 + -param_2;
      iVar6 = 0;
      fVar37 = fVar36 * fVar31;
      fVar36 = fVar36 * fVar32 - fVar34 * fVar31;
      fVar34 = fVar34 * fVar32 + fVar37;
      if (0 < param_2) {
        pfVar29 = (float *)(param_2 * 4 + param_5);
        pfVar8 = (float *)(param_5 + iVar5 * 4);
        pfVar11 = pfVar7;
        pfVar12 = pfVar24;
        do {
          fVar37 = *pfVar29;
          pfVar29 = pfVar29 + 1;
          iVar14 = iVar6 * 4;
          iVar6 = iVar6 + 1;
          *pfVar12 = fVar37 * fVar36 + *(float *)(param_5 + iVar14);
          pfVar12 = pfVar12 + 1;
          fVar37 = *pfVar8;
          pfVar8 = pfVar8 + 1;
          *pfVar11 = fVar37 * fVar34;
          pfVar11 = pfVar11 + 1;
        } while (iVar6 < param_2);
      }
      if (2 < local_48) {
        pfVar8 = (float *)(param_2 * 4 + param_5);
        pfVar11 = (float *)(param_5 + iVar5 * 4);
        iVar6 = local_48 + -2;
        fVar37 = fVar36;
        fVar33 = fVar34;
        do {
          pfVar11 = pfVar11 + -param_2;
          pfVar8 = pfVar8 + param_2;
          fVar35 = fVar37 * fVar34;
          fVar37 = fVar37 * fVar36 - fVar33 * fVar34;
          fVar33 = fVar33 * fVar36 + fVar35;
          pfVar12 = pfVar7;
          pfVar29 = pfVar24;
          pfVar9 = pfVar11;
          pfVar27 = pfVar8;
          iVar14 = param_2;
          if (0 < param_2) {
            do {
              *pfVar29 = *pfVar27 * fVar37 + *pfVar29;
              *pfVar12 = *pfVar9 * fVar33 + *pfVar12;
              iVar14 = iVar14 + -1;
              pfVar12 = pfVar12 + 1;
              pfVar29 = pfVar29 + 1;
              pfVar9 = pfVar9 + 1;
              pfVar27 = pfVar27 + 1;
            } while (iVar14 != 0);
          }
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      iVar26 = iVar26 + -1;
    } while (iVar26 != 0);
  }
  iVar5 = 0;
  if (1 < local_48) {
    pfVar7 = (float *)(param_5 + 8);
    iVar26 = local_48 + -1;
    do {
      pfVar7 = pfVar7 + param_2;
      iVar5 = iVar5 + param_2;
      iVar14 = 0;
      iVar6 = iVar5;
      if (3 < param_2) {
        pfVar8 = param_7 + 2;
        iVar21 = (param_2 - 4U >> 2) + 1;
        iVar14 = iVar21 * 4;
        iVar6 = iVar14 + iVar5;
        pfVar24 = pfVar7;
        do {
          pfVar8[-2] = pfVar24[-2] + pfVar8[-2];
          pfVar8[-1] = pfVar24[-1] + pfVar8[-1];
          *pfVar8 = *pfVar24 + *pfVar8;
          pfVar11 = pfVar24 + 1;
          pfVar24 = pfVar24 + 4;
          pfVar8[1] = *pfVar11 + pfVar8[1];
          pfVar8 = pfVar8 + 4;
          iVar21 = iVar21 + -1;
        } while (iVar21 != 0);
      }
      if (iVar14 < param_2) {
        pfVar24 = (float *)(param_5 + iVar6 * 4);
        do {
          fVar32 = *pfVar24;
          pfVar24 = pfVar24 + 1;
          param_7[iVar14] = fVar32 + param_7[iVar14];
          iVar14 = iVar14 + 1;
        } while (iVar14 < param_2);
      }
      iVar26 = iVar26 + -1;
    } while (iVar26 != 0);
  }
  local_2c = (float *)0x0;
  if (in_ECX < param_1) {
    if (0 < in_ECX) {
      do {
        param_2 = 0;
        pfVar7 = local_2c;
        pfVar24 = local_2c;
        if (3 < param_1) {
          iVar5 = (param_1 - 4U >> 2) + 1;
          param_2 = iVar5 * 4;
          do {
            param_3[(int)pfVar24] = param_6[(int)pfVar7];
            iVar26 = (int)pfVar7 + in_ECX + in_ECX;
            param_3[(int)pfVar24 + iVar4] = param_6[(int)pfVar7 + in_ECX];
            iVar14 = (int)pfVar24 + iVar4 + iVar4;
            iVar6 = iVar26 + in_ECX;
            param_3[iVar14] = param_6[iVar26];
            iVar14 = iVar14 + iVar4;
            pfVar7 = (float *)(iVar6 + in_ECX);
            param_3[iVar14] = param_6[iVar6];
            pfVar24 = (float *)(iVar14 + iVar4);
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        if (param_2 < param_1) {
          puVar15 = param_3 + (int)pfVar24;
          param_2 = param_1 - param_2;
          puVar18 = param_6 + (int)pfVar7;
          do {
            uVar2 = *puVar18;
            puVar18 = puVar18 + in_ECX;
            *puVar15 = uVar2;
            puVar15 = puVar15 + iVar4;
            param_2 = param_2 + -1;
          } while (param_2 != 0);
        }
        local_2c = (float *)((int)local_2c + 1);
      } while ((int)local_2c < in_ECX);
    }
  }
  else {
    param_2 = 0;
    if (0 < param_1) {
      local_28 = param_6 + 2;
      local_44 = param_1;
      local_24 = (float *)(param_3 + 2);
      do {
        iVar5 = 0;
        pfVar7 = local_2c;
        iVar26 = param_2;
        if (3 < in_ECX) {
          iVar6 = (in_ECX - 4U >> 2) + 1;
          iVar5 = iVar6 * 4;
          pfVar7 = (float *)((int)local_2c + iVar5);
          iVar26 = iVar5 + param_2;
          pfVar24 = local_24;
          puVar15 = local_28;
          do {
            pfVar24[-2] = (float)puVar15[-2];
            pfVar24[-1] = (float)puVar15[-1];
            *pfVar24 = (float)*puVar15;
            pfVar24[1] = (float)puVar15[1];
            iVar6 = iVar6 + -1;
            pfVar24 = pfVar24 + 4;
            puVar15 = puVar15 + 4;
          } while (iVar6 != 0);
        }
        if (iVar5 < in_ECX) {
          puVar18 = param_3 + iVar26;
          puVar15 = param_6 + (int)pfVar7;
          iVar5 = in_ECX - iVar5;
          do {
            uVar2 = *puVar15;
            puVar15 = puVar15 + 1;
            *puVar18 = uVar2;
            puVar18 = puVar18 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        local_28 = local_28 + in_ECX;
        param_2 = param_2 + iVar4;
        local_2c = (float *)((int)local_2c + in_ECX);
        local_24 = local_24 + iVar4;
        local_44 = local_44 + -1;
      } while (local_44 != 0);
    }
  }
  iVar5 = iVar20 * in_EDX;
  if (1 < local_48) {
    puVar15 = param_6 + iVar5;
    iVar26 = local_48 + -1;
    puVar18 = param_3;
    puVar22 = param_6;
    do {
      puVar18 = puVar18 + in_ECX * 2;
      puVar22 = puVar22 + iVar20;
      puVar15 = puVar15 + -iVar20;
      puVar17 = puVar18;
      puVar23 = puVar22;
      iVar6 = param_1;
      puVar30 = puVar15;
      if (0 < param_1) {
        do {
          puVar17[-1] = *puVar23;
          *puVar17 = *puVar30;
          iVar6 = iVar6 + -1;
          puVar17 = puVar17 + iVar4;
          puVar23 = puVar23 + in_ECX;
          puVar30 = puVar30 + in_ECX;
        } while (iVar6 != 0);
      }
      iVar26 = iVar26 + -1;
    } while (iVar26 != 0);
  }
  if (in_ECX != 1) {
    if (iVar3 < param_1) {
      iVar3 = 0;
      if (1 < local_48) {
        pfVar7 = (float *)(param_6 + iVar5 + 2);
        pfVar24 = (float *)(param_6 + 2);
        iVar26 = 4;
        iVar5 = -2;
        local_2c = (float *)(param_3 + -2);
        local_48 = local_48 + -1;
        do {
          local_2c = local_2c + in_ECX * 2;
          iVar5 = iVar5 + in_ECX * 2;
          iVar26 = iVar26 + in_ECX * -2;
          iVar3 = iVar3 + in_ECX * 2;
          pfVar24 = pfVar24 + iVar20;
          pfVar7 = pfVar7 + -iVar20;
          if (2 < in_ECX) {
            iVar21 = (in_ECX - 3U >> 1) + 1;
            iVar6 = iVar26;
            iVar14 = iVar5;
            pfVar8 = pfVar7;
            local_24 = local_2c;
            local_20 = pfVar24;
            do {
              if (0 < param_1) {
                pfVar11 = (float *)(param_3 + iVar6 + iVar14 + iVar3);
                local_38 = param_1;
                pfVar12 = local_20;
                pfVar29 = pfVar8;
                pfVar9 = local_24;
                do {
                  pfVar11[-1] = pfVar29[-1] + pfVar12[-1];
                  pfVar9[-1] = pfVar12[-1] - pfVar29[-1];
                  *pfVar11 = *pfVar29 + *pfVar12;
                  pfVar11 = pfVar11 + iVar4;
                  fVar32 = *pfVar29;
                  fVar31 = *pfVar12;
                  pfVar29 = pfVar29 + in_ECX;
                  pfVar12 = pfVar12 + in_ECX;
                  *pfVar9 = fVar32 - fVar31;
                  pfVar9 = pfVar9 + iVar4;
                  local_38 = local_38 + -1;
                } while (local_38 != 0);
              }
              local_24 = local_24 + -2;
              iVar14 = iVar14 + -2;
              local_20 = local_20 + 2;
              pfVar8 = pfVar8 + 2;
              iVar6 = iVar6 + 4;
              iVar21 = iVar21 + -1;
            } while (iVar21 != 0);
          }
          local_48 = local_48 + -1;
        } while (local_48 != 0);
        return;
      }
    }
    else if (1 < local_48) {
      pfVar7 = (float *)(param_3 + 2);
      pfVar11 = (float *)(param_3 + -2);
      pfVar24 = (float *)(param_6 + iVar5 + 2);
      pfVar8 = (float *)(param_6 + 2);
      local_28 = (undefined4 *)(local_48 + -1);
      do {
        pfVar11 = pfVar11 + in_ECX * 2;
        pfVar8 = pfVar8 + iVar20;
        pfVar7 = pfVar7 + in_ECX * 2;
        pfVar24 = pfVar24 + -iVar20;
        if (0 < param_1) {
          local_34 = param_1;
          pfVar12 = pfVar8;
          pfVar29 = pfVar24;
          pfVar9 = pfVar7;
          pfVar27 = pfVar11;
          do {
            if (2 < in_ECX) {
              iVar3 = (in_ECX - 3U >> 1) + 1;
              pfVar13 = pfVar12;
              pfVar19 = pfVar29;
              pfVar25 = pfVar9;
              pfVar28 = pfVar27;
              do {
                pfVar25[-1] = pfVar13[-1] + pfVar19[-1];
                pfVar28[-1] = pfVar13[-1] - pfVar19[-1];
                *pfVar25 = *pfVar13 + *pfVar19;
                pfVar25 = pfVar25 + 2;
                fVar32 = *pfVar19;
                pfVar19 = pfVar19 + 2;
                fVar31 = *pfVar13;
                pfVar13 = pfVar13 + 2;
                *pfVar28 = fVar32 - fVar31;
                pfVar28 = pfVar28 + -2;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
            pfVar9 = pfVar9 + iVar4;
            pfVar12 = pfVar12 + in_ECX;
            pfVar27 = pfVar27 + iVar4;
            pfVar29 = pfVar29 + in_ECX;
            local_34 = local_34 + -1;
          } while (local_34 != 0);
        }
        local_28 = (undefined4 *)((int)local_28 + -1);
      } while (local_28 != (undefined4 *)0x0);
    }
  }
  return;
}

