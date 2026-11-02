// rea decompile_all
// name: FUN_0022793c
// address: 0x22793c
// body: available
// range: 0x22793c-0x227c77 inclusive
// range: 0x227d38-0x228187 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x228184 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0022793c(undefined4 *param_1,int *param_2,int param_3)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint extraout_r2;
  int extraout_r3;
  int extraout_r3_00;
  byte *pbVar11;
  byte *pbVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int *piVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  undefined4 local_64;
  int local_5c;
  int local_58;
  uint local_50;
  uint local_4c;
  int local_3c;
  undefined4 *puStack_30;
  int *piStack_2c;
  int local_28;
  
  iVar15 = _DAT_00227c78;
  iVar13 = param_2[1];
  puStack_30 = param_1;
  piStack_2c = param_2;
  local_28 = param_3;
  if (*(char *)*param_2 != '\"') {
LAB_00228184:
                    /* WARNING: Subroutine does not return */
    FUN_00003538();
  }
  iVar14 = 0;
  pbVar12 = (byte *)((char *)*param_2 + 1);
  do {
    while( true ) {
      pbVar11 = pbVar12 + 1;
      bVar1 = *pbVar12;
      if (bVar1 != 0x5c) break;
LAB_002279b0:
      pbVar12 = pbVar12 + 2;
      uVar16 = (uint)*pbVar11;
      if (*(char *)(iVar15 + uVar16) == '\0') {
        if (uVar16 == 0x75) {
          uVar7 = 0;
          uVar16 = uVar7;
        }
        else {
          param_1[0x66] = s_Unknown_escape_character_00227ca4;
          param_1[0x67] = (*param_2 - param_2[1]) + -1;
          uVar7 = FUN_000040c0(param_1 + 6,1);
          uVar16 = extraout_r2;
        }
        do {
          pbVar11 = pbVar12;
          pbVar12 = pbVar11 + 1;
          uVar3 = (uint)*pbVar11;
          iVar5 = uVar3 + uVar7 * 0x10;
          if (uVar3 - 0x30 < 10) {
            uVar7 = iVar5 - 0x30;
          }
          else if (uVar3 - 0x41 < 6) {
            uVar7 = iVar5 - 0x37;
          }
          else {
            if (5 < uVar3 - 0x61) goto LAB_00227bd0;
            uVar7 = iVar5 - 0x57;
          }
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < 4);
        if (uVar7 - 0xd800 < 0x400) {
          bVar1 = *pbVar12;
          pbVar12 = pbVar11 + 2;
          if ((bVar1 == 0x5c) && (pbVar12 = pbVar11 + 3, pbVar11[2] == 0x75)) {
            iVar5 = 0;
            uVar18 = (ulonglong)uVar7;
          }
          else {
            param_1[0x66] = s_Missing_the_second__u_in_surroga_00227cc0;
            param_1[0x67] = pbVar12 + (-2 - iVar13);
            uVar18 = FUN_000040c0(param_1 + 6,1);
            iVar5 = extraout_r3;
          }
          do {
            uVar8 = (undefined4)uVar18;
            pbVar11 = pbVar12 + 1;
            uVar16 = (uint)*pbVar12;
            iVar10 = uVar16 + (int)(uVar18 >> 0x20) * 0x10;
            pbVar12 = pbVar11;
            if (uVar16 - 0x30 < 10) {
              uVar18 = CONCAT44(iVar10 + -0x30,uVar8);
            }
            else if (uVar16 - 0x41 < 6) {
              uVar18 = CONCAT44(iVar10 + -0x37,uVar8);
            }
            else if (uVar16 - 0x61 < 6) {
              uVar18 = CONCAT44(iVar10 + -0x57,uVar8);
            }
            else {
LAB_00227bd0:
              param_1[0x66] = s_Incorrect_hex_digit_after__u_esc_00227ce8;
              param_1[0x67] = pbVar12 + (-1 - iVar13);
              uVar18 = FUN_000040c0(param_1 + 6,1);
              iVar5 = extraout_r3_00;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < 4);
          uVar16 = (int)(uVar18 >> 0x20) - 0xdc00;
          uVar19 = CONCAT44(uVar16,(int)uVar18);
          if (0x3ff < uVar16) {
            param_1[0x66] = s_The_second__u_in_surrogate_pair_i_00227d0c;
            param_1[0x67] = pbVar12 + (-2 - iVar13);
            uVar19 = FUN_000040c0(param_1 + 6,1);
          }
          uVar7 = ((int)uVar19 * 0x400 + 0xfca00000U | (uint)((ulonglong)uVar19 >> 0x20)) + 0x10000;
        }
        uVar2 = (undefined1)uVar7;
        if (uVar7 < 0x80) {
          iVar5 = (int)&local_64 + 1;
          local_64 = CONCAT31(local_64._1_3_,uVar2);
        }
        else if (uVar7 < 0x800) {
          iVar5 = (int)&local_64 + 2;
          local_64 = CONCAT22(local_64._2_2_,CONCAT11(uVar2,(char)(uVar7 >> 6))) & 0xffff3fff |
                     0x80c0;
        }
        else {
          if (uVar7 < 0x10000) {
            iVar5 = (int)&local_64 + 2;
            local_64 = CONCAT13(local_64._3_1_,
                                CONCAT12(uVar2,CONCAT11((byte)((uVar7 << 0x14) >> 0x1a),
                                                        (char)(uVar7 >> 0xc)))) & 0xff3fffff |
                       0x8080e0;
          }
          else {
            if (0x10ffff < uVar7) goto LAB_00228184;
            iVar5 = (int)&local_64 + 3;
            local_64 = CONCAT13(uVar2,CONCAT12((byte)((uVar7 << 0x14) >> 0x1a),
                                               CONCAT11((byte)((uVar7 << 0xe) >> 0x1a),
                                                        (char)(uVar7 >> 0x12)))) & 0x3fffffff |
                       0x808080f0;
          }
          iVar5 = iVar5 + 1;
        }
        iVar5 = iVar5 - (int)&local_64;
        if ((uint)param_1[4] <= (uint)(param_1[3] + iVar5)) {
          uVar7 = param_1[2];
          uVar3 = param_1[5];
          local_3c = param_1[3] - uVar7;
          piVar17 = (int *)*param_1;
          uVar16 = uVar3 << 1;
          if (uVar3 << 1 < (uint)(local_3c + iVar5)) {
            uVar16 = local_3c + iVar5;
          }
          local_50 = uVar7;
          if (uVar7 == 0) {
            uVar7 = FUN_00228618(piVar17,uVar16);
          }
          else if (uVar3 < uVar16) {
            puVar4 = (uint *)*piVar17;
            if (((int)puVar4 + (puVar4[1] - uVar3) + 0xc == uVar7) &&
               (uVar9 = ((uVar16 - uVar3) + 3 & 0xfffffffc) + puVar4[1], uVar9 <= *puVar4)) {
              puVar4[1] = uVar9;
              if ((uVar7 & 3) != 0) goto LAB_00228184;
            }
            else {
              iVar10 = FUN_00228618(piVar17,uVar16);
              if (iVar10 == 0) goto LAB_00228184;
              uVar7 = FUN_000039d4(iVar10,local_50,uVar3);
            }
          }
          param_1[5] = uVar16;
          param_1[2] = uVar7;
          param_1[3] = local_3c + uVar7;
          param_1[4] = uVar7 + uVar16;
        }
        iVar10 = param_1[3];
        param_1[3] = iVar10 + iVar5;
        FUN_000039e0(iVar10,&local_64,iVar5);
        iVar14 = iVar14 + iVar5;
      }
      else {
        if ((uint)param_1[4] <= param_1[3] + 1) {
          uVar3 = param_1[2];
          local_64 = param_1[5];
          local_58 = param_1[3] - uVar3;
          piVar17 = (int *)*param_1;
          uVar7 = local_64 << 1;
          if (local_64 << 1 < local_58 + 1U) {
            uVar7 = local_58 + 1U;
          }
          local_50 = uVar3;
          if (uVar3 == 0) {
            uVar3 = FUN_00228618(piVar17,uVar7);
          }
          else if (local_64 < uVar7) {
            puVar4 = (uint *)*piVar17;
            if (((int)puVar4 + (puVar4[1] - local_64) + 0xc == uVar3) &&
               (uVar9 = puVar4[1] + ((uVar7 - local_64) + 3 & 0xfffffffc), uVar9 <= *puVar4)) {
              puVar4[1] = uVar9;
              if ((uVar3 & 3) != 0) goto LAB_00228184;
            }
            else {
              iVar5 = FUN_00228618(piVar17,uVar7);
              if (iVar5 == 0) goto LAB_00228184;
              uVar3 = FUN_000039d4(iVar5,local_50,local_64);
            }
          }
          param_1[5] = uVar7;
          param_1[2] = uVar3;
          param_1[3] = local_58 + uVar3;
          param_1[4] = uVar3 + uVar7;
        }
        puVar6 = (undefined1 *)param_1[3];
        iVar14 = iVar14 + 1;
        param_1[3] = puVar6 + 1;
        *puVar6 = *(undefined1 *)(iVar15 + uVar16);
      }
    }
    if (bVar1 == 0x22) {
      if ((uint)param_1[4] <= param_1[3] + 1) {
        uVar7 = param_1[2];
        uVar3 = param_1[5];
        local_5c = param_1[3] - uVar7;
        piVar17 = (int *)*param_1;
        uVar16 = uVar3 << 1;
        if (uVar3 << 1 < local_5c + 1U) {
          uVar16 = local_5c + 1U;
        }
        if (uVar7 == 0) {
          uVar7 = FUN_00228618(piVar17,uVar16);
        }
        else if (uVar3 < uVar16) {
          puVar4 = (uint *)*piVar17;
          if (((int)puVar4 + (puVar4[1] - uVar3) + 0xc == uVar7) &&
             (uVar9 = puVar4[1] + ((uVar16 - uVar3) + 3 & 0xfffffffc), uVar9 <= *puVar4)) {
            puVar4[1] = uVar9;
            if ((uVar7 & 3) != 0) goto LAB_00228184;
          }
          else {
            iVar15 = FUN_00228618(piVar17,uVar16);
            if (iVar15 == 0) goto LAB_00228184;
            uVar7 = FUN_000039d4(iVar15,uVar7,uVar3);
          }
        }
        param_1[5] = uVar16;
        param_1[2] = uVar7;
        param_1[3] = uVar7 + local_5c;
        param_1[4] = uVar7 + uVar16;
      }
      puVar6 = (undefined1 *)param_1[3];
      param_1[3] = puVar6 + 1;
      *puVar6 = 0;
      uVar16 = iVar14 + 1;
      if ((uint)(param_1[3] - param_1[2]) < uVar16) goto LAB_00228184;
      iVar15 = param_1[3] - uVar16;
      param_1[3] = iVar15;
      piVar17 = (int *)FUN_002290e0(local_28 + 0x10,1);
      if (piVar17 != (int *)0x0) {
        uVar8 = *(undefined4 *)(local_28 + 0x10);
        if (iVar15 == 0) goto LAB_00228184;
        piVar17[3] = DAT_00228188;
        iVar5 = FUN_00228618(uVar8,uVar16);
        *piVar17 = iVar5;
        piVar17[1] = iVar14;
        FUN_000039e0(iVar5,iVar15,iVar14);
        *(undefined1 *)(*piVar17 + iVar14) = 0;
      }
      *param_2 = (int)pbVar11;
      param_2[1] = iVar13;
      return;
    }
    if (bVar1 == 0) {
      param_1[0x66] = s_lacks_ending_quotation_before_th_0022818c;
      param_1[0x67] = (*param_2 - param_2[1]) + -1;
      FUN_000040c0(param_1 + 6,1);
    }
    else if (bVar1 < 0x20) {
      param_1[0x66] = s___Incorrect_unescaped_character_i_00227c7a + 2;
      param_1[0x67] = (*param_2 - param_2[1]) + -1;
      FUN_000040c0(param_1 + 6,1);
      goto LAB_002279b0;
    }
    if ((uint)param_1[4] <= param_1[3] + 1) {
      uVar7 = param_1[2];
      uVar3 = param_1[5];
      local_58 = param_1[3] - uVar7;
      uVar16 = uVar3 << 1;
      if (uVar3 << 1 < local_58 + 1U) {
        uVar16 = local_58 + 1U;
      }
      piVar17 = (int *)*param_1;
      local_4c = uVar7;
      if (uVar7 == 0) {
        uVar7 = FUN_00228618(piVar17);
      }
      else if (uVar3 < uVar16) {
        puVar4 = (uint *)*piVar17;
        if (((int)puVar4 + (puVar4[1] - uVar3) + 0xc == uVar7) &&
           (uVar9 = puVar4[1] + ((uVar16 - uVar3) + 3 & 0xfffffffc), uVar9 <= *puVar4)) {
          puVar4[1] = uVar9;
          if ((uVar7 & 3) != 0) goto LAB_00228184;
        }
        else {
          iVar5 = FUN_00228618(piVar17);
          if (iVar5 == 0) goto LAB_00228184;
          uVar7 = FUN_000039d4(iVar5,local_4c,uVar3);
        }
      }
      param_1[5] = uVar16;
      param_1[2] = uVar7;
      param_1[3] = uVar7 + local_58;
      param_1[4] = uVar7 + uVar16;
    }
    pbVar12 = (byte *)param_1[3];
    iVar14 = iVar14 + 1;
    param_1[3] = pbVar12 + 1;
    *pbVar12 = bVar1;
    pbVar12 = pbVar11;
  } while( true );
}

