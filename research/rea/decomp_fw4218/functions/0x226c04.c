// rea decompile_all
// name: FUN_00226c04
// address: 0x226c04
// body: available
// range: 0x226c04-0x22701b inclusive
// range: 0x22705c-0x2274b7 inclusive
// range: 0x22753c-0x2275cf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x226d68 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00226c04(int param_1,int *param_2,int param_3)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined4 uVar11;
  int extraout_r2;
  int extraout_r2_00;
  int iVar12;
  int extraout_r2_01;
  undefined4 uVar13;
  uint unaff_r4;
  uint unaff_r5;
  byte *pbVar14;
  byte *pbVar15;
  uint uVar16;
  uint unaff_r9;
  uint uVar17;
  int unaff_r11;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  int local_2c;
  
  pbVar14 = (byte *)*param_2;
  bVar1 = *pbVar14;
  if (bVar1 == 0x6e) {
    *param_2 = (int)(pbVar14 + 2);
    if (pbVar14[1] == 0x75) {
      *param_2 = (int)(pbVar14 + 3);
      if ((pbVar14[2] == 0x6c) && (*param_2 = (int)(pbVar14 + 4), pbVar14[3] == 0x6c)) {
        iVar6 = FUN_002290e0(param_3 + 0x10,1);
        if (iVar6 != 0) {
          *(undefined4 *)(iVar6 + 0xc) = 0;
        }
        return;
      }
    }
    goto LAB_00226dbc;
  }
  if (0x6d < bVar1) {
    if (bVar1 != 0x74) {
      if (bVar1 == 0x7b) {
        FUN_002275d4();
        return;
      }
      goto LAB_00226c4c;
    }
    *param_2 = (int)(pbVar14 + 2);
    if (pbVar14[1] == 0x72) {
      *param_2 = (int)(pbVar14 + 3);
      if ((pbVar14[2] != 0x75) || (*param_2 = (int)(pbVar14 + 4), pbVar14[3] != 0x65))
      goto LAB_00226d14;
    }
    else {
LAB_00226d14:
      *(char **)(param_1 + 0x198) = s_Invalid_value_0022701c;
      *(int *)(param_1 + 0x19c) = *param_2 - param_2[1];
      FUN_000040c0(param_1 + 0x18,1);
      param_3 = extraout_r2;
    }
    iVar6 = FUN_002290e0(param_3 + 0x10,1);
    uVar13 = DAT_0022702c;
    if (iVar6 == 0) {
      return;
    }
    goto LAB_00226d54;
  }
  if (bVar1 == 0x22) {
    FUN_0022793c();
    return;
  }
  if (bVar1 == 0x5b) {
    FUN_002269ec();
    return;
  }
  if (bVar1 != 0x66) {
LAB_00226c4c:
    iVar6 = param_2[1];
    bVar18 = bVar1 == 0x2d;
    if (bVar18) {
      pbVar14 = pbVar14 + 1;
    }
    bVar1 = *pbVar14;
    bVar5 = false;
    if (bVar1 == 0x30) {
      unaff_r9 = 0;
      pbVar15 = pbVar14 + 1;
    }
    else {
      if ((bVar1 < 0x31) || (0x39 < bVar1)) {
        *(char **)(param_1 + 0x198) = s_Expect_a_value_here__0022703c;
        *(int *)(param_1 + 0x19c) = *param_2 - param_2[1];
        uVar7 = FUN_000040c0(param_1 + 0x18,1);
        pbVar15 = pbVar14;
        goto LAB_00226f58;
      }
      pbVar15 = pbVar14 + 1;
      unaff_r9 = *pbVar14 - 0x30;
      if (bVar18) {
        for (; (uVar7 = (uint)*pbVar15, 0x2f < uVar7 && (uVar7 < 0x3a)); pbVar15 = pbVar15 + 1) {
          if ((DAT_00227034 <= unaff_r9) && ((unaff_r9 != DAT_00227034 || (0x38 < uVar7))))
          goto LAB_00226ed4;
          unaff_r9 = (uVar7 + unaff_r9 * 10) - 0x30;
        }
      }
      else {
        for (; (uVar7 = (uint)*pbVar15, 0x2f < uVar7 && (uVar7 < 0x3a)); pbVar15 = pbVar15 + 1) {
          if ((DAT_00227038 <= unaff_r9) && ((unaff_r9 != DAT_00227038 || (0x35 < uVar7))))
          goto LAB_00226ed4;
          unaff_r9 = (uVar7 + unaff_r9 * 10) - 0x30;
        }
      }
    }
    unaff_r4 = 0;
    unaff_r5 = 0;
    unaff_r11 = 0;
    goto LAB_00227098;
  }
  *param_2 = (int)(pbVar14 + 2);
  if (pbVar14[1] == 0x61) {
    *param_2 = (int)(pbVar14 + 3);
    if (pbVar14[2] != 0x6c) goto LAB_00226dbc;
    *param_2 = (int)(pbVar14 + 4);
    if ((pbVar14[3] != 0x73) || (*param_2 = (int)(pbVar14 + 5), pbVar14[4] != 0x65))
    goto LAB_00226dbc;
  }
  else {
LAB_00226dbc:
    *(char **)(param_1 + 0x198) = s_Invalid_value_0022701c;
    *(int *)(param_1 + 0x19c) = (*param_2 - param_2[1]) + -1;
    FUN_000040c0(param_1 + 0x18,1);
    param_3 = extraout_r2_00;
  }
  iVar6 = FUN_002290e0(param_3 + 0x10,1);
  uVar13 = DAT_00227030;
  if (iVar6 == 0) {
    return;
  }
LAB_00226d54:
  *(undefined4 *)(iVar6 + 0xc) = uVar13;
  return;
LAB_00226ed4:
  bVar5 = true;
  unaff_r11 = 0;
  unaff_r5 = 0;
  unaff_r4 = unaff_r9;
  if (bVar18) {
    for (; (uVar7 = (uint)*pbVar15, 0x2f < uVar7 && (uVar7 < 0x3a)); pbVar15 = pbVar15 + 1) {
LAB_00226f58:
      if ((DAT_00227054 >> 4 < unaff_r5 ||
           unaff_r5 - (DAT_00227054 >> 4) < (uint)(DAT_00227054 <= unaff_r4)) &&
         ((DAT_00227054 >> 4 != unaff_r5 || DAT_00227054 != unaff_r4 || (0x38 < uVar7))))
      goto LAB_00227000;
      uVar2 = (ulonglong)unaff_r4;
      uVar17 = (uint)(uVar2 * 10);
      uVar7 = (uVar7 & 0xff) - 0x30;
      unaff_r4 = uVar7 + uVar17;
      unaff_r5 = unaff_r5 * 10 + (int)(uVar2 * 10 >> 0x20) + ((int)uVar7 >> 0x1f) +
                 (uint)CARRY4(uVar7,uVar17);
    }
  }
  else {
    for (; (uVar7 = (uint)*pbVar15, 0x2f < uVar7 && (uVar7 < 0x3a)); pbVar15 = pbVar15 + 1) {
      uVar17 = ~((int)DAT_00227058 >> 2);
      if ((uVar17 < unaff_r5 || unaff_r5 - uVar17 < (uint)(DAT_00227058 <= unaff_r4)) &&
         ((~((int)DAT_00227058 >> 2) != unaff_r5 || DAT_00227058 != unaff_r4 || (0x35 < uVar7))))
      goto LAB_00227000;
      uVar17 = (uint)((ulonglong)unaff_r4 * 10);
      uVar7 = uVar7 - 0x30;
      unaff_r5 = unaff_r5 * 10 + (int)((ulonglong)unaff_r4 * 10 >> 0x20) + ((int)uVar7 >> 0x1f) +
                 (uint)CARRY4(uVar7,uVar17);
      unaff_r4 = uVar7 + uVar17;
    }
  }
LAB_00227098:
  uVar21 = 0;
  goto LAB_00227104;
LAB_00227000:
  unaff_r11 = 1;
  uVar21 = FUN_00249318(unaff_r4,unaff_r5);
  while( true ) {
    uVar13 = (undefined4)((ulonglong)uVar21 >> 0x20);
    bVar1 = *pbVar15;
    if (bVar1 < 0x30) break;
    bVar20 = 0x38 < bVar1;
    bVar19 = bVar1 == 0x39;
    if (0x39 < bVar1) break;
    FUN_00249684((int)uVar21,uVar13,DAT_002274b8,DAT_002274bc);
    if (!bVar20 || bVar19) goto LAB_002272f0;
    uVar22 = FUN_00249204(*pbVar15 - 0x30);
    uVar21 = FUN_00249444((int)uVar21,uVar13,0,_DAT_002274c0);
    uVar21 = FUN_00248c40((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),(int)uVar22,
                          (int)((ulonglong)uVar22 >> 0x20));
    pbVar15 = pbVar15 + 1;
  }
LAB_00227104:
  local_2c = 0;
  pbVar14 = pbVar15;
  if (*pbVar15 == 0x2e) {
    if (unaff_r11 == 0) {
      if (bVar5) {
        uVar21 = FUN_00249318(unaff_r4,unaff_r5);
      }
      else {
        uVar21 = FUN_002492ec(unaff_r9);
      }
      unaff_r11 = 1;
    }
    pbVar14 = pbVar15 + 1;
    uVar7 = (uint)*pbVar14;
    if ((uVar7 < 0x30) || (0x39 < uVar7)) {
      *(char **)(param_1 + 0x198) = s___At_least_one_digit_in_fraction_002274c2 + 2;
      *(int *)(param_1 + 0x19c) = *param_2 - param_2[1];
      FUN_000040c0(param_1 + 0x18,1);
    }
    else {
      pbVar14 = pbVar15 + 2;
      uVar22 = FUN_00249204(uVar7 - 0x30);
      uVar21 = FUN_00249444((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),0,_DAT_002274c0);
      uVar21 = FUN_00248c40((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),(int)uVar22,
                            (int)((ulonglong)uVar22 >> 0x20));
      local_2c = -1;
    }
    while( true ) {
      uVar7 = (uint)*pbVar14;
      if ((uVar7 < 0x30) || (0x39 < uVar7)) break;
      if (-0x10 < local_2c) {
        uVar22 = FUN_00249204(uVar7 - 0x30);
        uVar21 = FUN_00249444((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),0,_DAT_002274c0);
        uVar21 = FUN_00248c40((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),(int)uVar22,
                              (int)((ulonglong)uVar22 >> 0x20));
        local_2c = local_2c + -1;
      }
      pbVar14 = pbVar14 + 1;
    }
  }
  iVar8 = 0;
  pbVar15 = pbVar14;
  if (*pbVar14 == 0x65 || *pbVar14 == 0x45) {
    if (unaff_r11 == 0) {
      if (bVar5) {
        uVar21 = FUN_00249318(unaff_r4,unaff_r5);
      }
      else {
        uVar21 = FUN_002492ec(unaff_r9);
      }
      unaff_r11 = 1;
    }
    pbVar15 = pbVar14 + 1;
    iVar12 = 0;
    if (*pbVar15 == 0x2b) {
      pbVar15 = pbVar14 + 2;
    }
    else if (*pbVar15 == 0x2d) {
      pbVar15 = pbVar14 + 2;
      iVar12 = 1;
    }
    uVar7 = (uint)*pbVar15;
    if ((0x2f < uVar7) && (uVar7 < 0x3a)) {
      pbVar15 = pbVar15 + 1;
      iVar8 = uVar7 - 0x30;
      do {
        uVar7 = (uint)*pbVar15;
        if ((uVar7 < 0x30) || (0x39 < uVar7)) goto LAB_00227338;
        iVar8 = iVar8 * 10 + -0x30 + uVar7;
        pbVar15 = pbVar15 + 1;
      } while (iVar8 < 0x135);
LAB_002272f0:
      *(char **)(param_1 + 0x198) = s_Number_too_big_to_store_in_doubl_002274e8;
      *(int *)(param_1 + 0x19c) = *param_2 - param_2[1];
      FUN_000040c0(param_1 + 0x18,1);
    }
    *(char **)(param_1 + 0x198) = s_At_least_one_digit_in_exponent_0022750c;
    *(int *)(param_1 + 0x19c) = (int)pbVar15 - iVar6;
    iVar8 = FUN_000040c0(param_1 + 0x18,1);
    iVar12 = extraout_r2_01;
LAB_00227338:
    if (iVar12 != 0) {
      iVar8 = -iVar8;
    }
  }
  uVar17 = DAT_002275d0;
  uVar7 = DAT_00227534;
  if (unaff_r11 != 0) {
    iVar8 = iVar8 + local_2c;
    if (0x134 < iVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_00003538();
    }
    if (iVar8 < -0x134) {
      uVar11 = 0;
      uVar13 = uVar11;
    }
    else {
      iVar8 = DAT_0022752c + iVar8 * 8;
      uVar11 = *(undefined4 *)(iVar8 + 0x9a0);
      uVar13 = *(undefined4 *)(iVar8 + 0x9a4);
    }
    uVar21 = FUN_00249444(uVar11,uVar13,(int)uVar21,(int)((ulonglong)uVar21 >> 0x20));
    uVar7 = (uint)((ulonglong)uVar21 >> 0x20);
    if (bVar18) {
      uVar7 = uVar7 ^ 0x80000000;
    }
    puVar9 = (undefined4 *)FUN_002290e0(param_3 + 0x10,1);
    if (puVar9 != (undefined4 *)0x0) {
      puVar9[3] = DAT_00227530;
      *puVar9 = (int)uVar21;
      puVar9[1] = uVar7;
    }
    goto LAB_002275b8;
  }
  uVar16 = DAT_00227534 - 0x2400;
  if (!bVar5) {
    if (bVar18) {
      uVar7 = -unaff_r9;
      puVar10 = (uint *)FUN_002290e0(param_3 + 0x10,1);
      if (puVar10 == (uint *)0x0) goto LAB_002275b8;
      puVar10[1] = (int)uVar7 >> 0x1f;
      *puVar10 = uVar7;
      puVar10[3] = uVar16;
      if ((int)uVar7 < 0) goto LAB_002275b8;
    }
    else {
      puVar10 = (uint *)FUN_002290e0(param_3 + 0x10,1);
      if (puVar10 == (uint *)0x0) goto LAB_002275b8;
      puVar10[1] = 0;
      puVar10[3] = uVar7;
      *puVar10 = unaff_r9;
      if ((unaff_r9 & 0x80000000) != 0) goto LAB_002275b8;
    }
    puVar10[3] = uVar17;
    goto LAB_002275b8;
  }
  uVar17 = DAT_00227534 - 0x800;
  if (bVar18) {
    uVar3 = -unaff_r4;
    uVar4 = -(unaff_r5 + (unaff_r4 != 0));
    puVar10 = (uint *)FUN_002290e0(param_3 + 0x10,1);
    if (puVar10 == (uint *)0x0) goto LAB_002275b8;
    puVar10[1] = uVar4;
    puVar10[3] = uVar7 - 0x2800;
    *puVar10 = uVar3;
    if ((int)uVar4 < 0) {
      if ((int)(uVar4 + (0x7fffffff < uVar3)) < 0 == SCARRY4(uVar4,(uint)(0x7fffffff < uVar3))) {
        puVar10[3] = uVar16;
      }
      goto LAB_002275b8;
    }
    puVar10[3] = uVar17;
    if (uVar4 == 0) {
      puVar10[3] = uVar7;
    }
    if ((uVar3 & 0x80000000) != 0 || uVar4 != 0) goto LAB_002275b8;
  }
  else {
    puVar10 = (uint *)FUN_002290e0(param_3 + 0x10,1);
    if (puVar10 == (uint *)0x0) goto LAB_002275b8;
    puVar10[3] = DAT_00227538;
    *puVar10 = unaff_r4;
    puVar10[1] = unaff_r5;
    if ((unaff_r5 & 0x80000000) == 0) {
      puVar10[3] = uVar17;
    }
    if (unaff_r5 == 0) {
      puVar10[3] = puVar10[3] | 0x800;
    }
    if ((unaff_r4 & 0x80000000) != 0 || unaff_r5 != 0) goto LAB_002275b8;
  }
  puVar10[3] = puVar10[3] | 0x400;
LAB_002275b8:
  *param_2 = (int)pbVar15;
  param_2[1] = iVar6;
  return;
}

