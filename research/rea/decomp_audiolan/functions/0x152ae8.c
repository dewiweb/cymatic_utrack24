// rea decompile_all
// name: FUN_00152ae8
// address: 0x152ae8
// body: available
// range: 0x152ae8-0x152e7f inclusive
// range: 0x152f1c-0x1532eb inclusive
// range: 0x1533c8-0x1534db inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00152ae8(int param_1,int *param_2,uint param_3)

{
  undefined2 uVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  uint *puVar10;
  undefined *puVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 local_120;
  uint local_118;
  uint local_114;
  uint uStack_110;
  uint local_10c;
  int local_108 [2];
  int local_100 [13];
  undefined4 local_cc;
  int local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 *local_8c;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  uint local_64 [2];
  undefined1 local_5c;
  undefined1 local_5b;
  byte local_5a;
  byte local_59;
  byte local_58;
  byte local_57;
  byte local_56;
  byte local_55;
  undefined1 local_48 [8];
  int *local_40;
  char local_3c;
  int iStack_30;
  int *piStack_2c;
  uint local_28;
  
  iStack_30 = param_1;
  piStack_2c = param_2;
  local_28 = param_3;
  local_120._0_4_ = FUN_00039554(*(undefined1 *)(param_1 + 0x21));
  local_68 = 0;
  iVar3 = FUN_0019e4a8(&DAT_00152e80);
  piVar4 = DAT_00152e84;
  if (iVar3 != 0) {
    local_68 = *(undefined4 *)(iVar3 + 4);
  }
  local_108[0] = *DAT_00152e84;
  uVar15 = (uint)((*(uint *)(param_1 + 0x30) & 0xf0) == 0xe0);
  local_cc = DAT_00152e88;
  if (*DAT_00152e8c == 0) {
    thunk_FUN_00161678();
  }
  local_b4 = *DAT_00152e8c;
  *(int *)(local_b4 + 0x1c) = *(int *)(local_b4 + 0x1c) + 1;
  local_b0 = 0;
  local_a4 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_cc = DAT_00152e90;
  local_108[0] = piVar4[2];
  *(int *)((int)local_108 + *(int *)(local_108[0] + -0xc)) = piVar4[3];
  local_108[1] = 0;
  FUN_001e0ac4((int)local_108 + *(int *)(local_108[0] + -0xc),local_100 + 1);
  local_100[0] = piVar4[4];
  *(int *)((int)local_100 + *(int *)(local_100[0] + -0xc)) = piVar4[5];
  FUN_001e0ac4((int)local_100 + *(int *)(local_100[0] + -0xc),local_100 + 1);
  piVar5 = DAT_00152e8c;
  *(int *)((int)local_108 + *(int *)(piVar4[1] + -0xc)) = piVar4[6];
  local_108[0] = *piVar4;
  *(int *)((int)local_108 + *(int *)(local_108[0] + -0xc)) = piVar4[8];
  local_100[0] = piVar4[9];
  local_100[3] = 0;
  local_100[4] = 0;
  local_100[5] = 0;
  local_100[6] = 0;
  local_100[7] = 0;
  local_100[8] = 0;
  local_100[9] = 0;
  local_100[10] = 0;
  local_100[0xb] = 0;
  local_100[1] = DAT_00152e94;
  local_100[2] = 0xc;
  if (*DAT_00152e8c == 0) {
    thunk_FUN_00161678();
  }
  local_100[0xc] = *piVar5;
  *(int *)(local_100[0xc] + 0x1c) = *(int *)(local_100[0xc] + 0x1c) + 1;
  local_100[1] = DAT_00152e98;
  local_100[5] = local_100[5] | 1;
  FUN_001e23a4(local_100,s_v_0_00152e9c);
  if (uVar15 == 0) {
    piVar4 = (int *)FUN_001e23a4(local_100,&DAT_00152eac);
    piVar5 = (int *)FUN_001c00a4(piVar4,*(int *)(param_1 + 0x40),
                                 *(undefined4 *)(*(int *)(param_1 + 0x40) + -4),
                                 *(undefined4 *)((int)piVar4 + *(int *)(*piVar4 + -0xc) + 0xc));
    if (piVar5 != (int *)0x0) {
      piVar5 = (int *)((int)piVar5 + *(int *)(*piVar5 + -0xc));
    }
    piVar5[3] = 0;
    puVar11 = &DAT_00152eb0;
  }
  else {
    puVar11 = (undefined *)0x152ea4;
    piVar4 = local_100;
  }
  FUN_001e23a4(piVar4,puVar11);
  uVar6 = FUN_0018e4b4(&local_68,auStack_88,0x20);
  uVar7 = FUN_001c01dc(local_100,*(undefined1 *)(param_1 + 0x54));
  uVar7 = FUN_001e23a4(uVar7,s_0_IN_IP4_00152eb4);
  uVar6 = FUN_001e23a4(uVar7,uVar6);
  FUN_001e23a4(uVar6,&DAT_00152ec0);
  if (uVar15 == 0) {
    uVar6 = FUN_001e23a4(local_100,s_s_SIP_00152ec8);
    uVar6 = FUN_001c01dc(uVar6,*(undefined1 *)(param_1 + 0x54));
    FUN_001e23a4(uVar6,&DAT_00152ec0);
  }
  else {
    piVar4 = (int *)FUN_001e23a4(local_100,&DAT_00152ec4);
    piVar5 = (int *)FUN_001c00a4(piVar4,*(int *)(param_1 + 0x3c),
                                 *(undefined4 *)(*(int *)(param_1 + 0x3c) + -4),
                                 *(undefined4 *)((int)piVar4 + *(int *)(*piVar4 + -0xc) + 0xc));
    if (piVar5 != (int *)0x0) {
      piVar5 = (int *)((int)piVar5 + *(int *)(*piVar5 + -0xc));
    }
    piVar5[3] = 0;
    FUN_001e23a4(piVar4,&DAT_00152ec0);
  }
  FUN_001e23a4(local_100,s_t_0_0_00152ed0);
  local_48[0] = 0;
  FUN_00035b48(local_48);
  uVar6 = FUN_001e23a4(local_100,s_a_clock_domain_PTPv2_00152ed8);
  uVar6 = FUN_001c01dc(uVar6,local_48[0]);
  FUN_001e23a4(uVar6,&DAT_00152ec0);
  FUN_001e23a4(local_100,s_m_audio_00152ef0);
  if (uVar15 == 0) {
    uVar1 = *(undefined2 *)(param_1 + 0x3a);
  }
  else {
    uVar1 = *(undefined2 *)(param_1 + 0x38);
  }
  FUN_001c01dc(local_100,uVar1);
  uVar6 = FUN_001e23a4(local_100,s_RTP_AVP_00152efc);
  uVar6 = FUN_001c01dc(uVar6,*(undefined1 *)(param_1 + 0x28));
  FUN_001e23a4(uVar6,&DAT_00152ec0);
  FUN_001e23a4(local_100,s_c_IN_IP4_00152f08);
  if (uVar15 == 0) {
    uVar6 = FUN_0018e4b4(&local_68,auStack_88,0x20);
    uVar6 = FUN_001e23a4(local_100,uVar6);
    puVar11 = &DAT_00152ec0;
  }
  else {
    uVar6 = FUN_0018e4b4(param_1 + 0x30,auStack_88,0x20);
    uVar6 = FUN_001e23a4(local_100,uVar6);
    puVar11 = &DAT_00152f14;
  }
  FUN_001e23a4(uVar6,puVar11);
  uVar6 = FUN_001e23a4(local_100,&DAT_001532ec);
  uVar6 = FUN_001c01dc(uVar6,*(undefined1 *)(param_1 + 0x28));
  uVar6 = FUN_001e23a4(uVar6,&DAT_00152eb0);
  uVar6 = FUN_001e23a4(uVar6,(uint)local_120);
  uVar6 = FUN_001e23a4(uVar6,&DAT_001532f8);
  uVar6 = FUN_001c01dc(uVar6,*(undefined4 *)(param_1 + 0x2c));
  uVar6 = FUN_001e23a4(uVar6,&DAT_001532f8);
  uVar6 = FUN_001c01dc(uVar6,*(undefined2 *)(param_1 + 0x24));
  FUN_001e23a4(uVar6,&DAT_00152ec0);
  if (*(char *)(param_1 + 0x5d) == '\0') {
    if (uVar15 == 0) {
      FUN_001e23a4(local_100,s_a_sendonly_0015330c);
    }
    else {
      FUN_001e23a4(local_100,s_a_recvonly_001532fc);
    }
  }
  uVar6 = FUN_001e23a4(local_100,s_a_framecount__0015331c);
  uVar6 = FUN_001c01dc(uVar6,*(undefined2 *)(param_1 + 0x26));
  FUN_001e23a4(uVar6,&DAT_00152ec0);
  FUN_001e23a4(local_100,s_a_sync_time_0_0015332c);
  uVar6 = FUN_001e3fe4(*(undefined4 *)(param_1 + 0x2c));
  uVar7 = FUN_001e3fe4(*(undefined2 *)(param_1 + 0x26));
  uVar7 = FUN_001e400c(uVar7,DAT_0015333c);
  uVar7 = FUN_001e3d8c(uVar7,uVar6);
  uVar6 = _DAT_00153340;
  FUN_001e400c(uVar7,_DAT_00153340);
  uVar7 = thunk_FUN_001e41bc();
  uVar6 = FUN_001e3d8c(uVar7,uVar6);
  piVar4 = (int *)FUN_001e23a4(local_100,s_Ba_ptime__00153343 + 1);
  uVar17 = FUN_001e3c58(uVar6);
  FUN_001d9f00(&local_40,piVar4);
  if (local_3c != '\0') {
    local_114 = 1;
    local_118 = 0x80;
    piVar5 = (int *)((int)piVar4 + *(int *)(*piVar4 + -0xc) + 0x18);
    iVar3 = *piVar5;
    if ((*(uint *)(iVar3 + 0xc) <= *DAT_00153350) ||
       (piVar8 = *(int **)(*(int *)(iVar3 + 8) + *DAT_00153350 * 4), piVar8 == (int *)0x0)) {
      local_120._0_4_ = _DAT_00153354;
      piVar8 = (int *)FUN_00160cdc(piVar5,DAT_00153350,1,0x80);
    }
    iVar3 = *(int *)(*piVar4 + -0xc) + (int)piVar4;
    local_120 = uVar17;
    iVar3 = (**(code **)(*piVar8 + 0x18))
                      (piVar8,*(undefined4 *)((int)piVar4 + *(int *)(*piVar4 + -0xc) + 0x34),iVar3,
                       *(undefined1 *)(iVar3 + 0x3c));
    *(undefined4 *)((int)piVar4 + *(int *)(*piVar4 + -0xc) + 0xc) = 0;
    if ((iVar3 == 0) != 0) {
      iVar9 = *(int *)(*piVar4 + -0xc) + (int)piVar4;
      uVar12 = *(uint *)(iVar9 + 0x10) | (uint)(iVar3 == 0);
      if (*(int *)(iVar9 + 0x34) == 0) {
        uVar12 = uVar12 | 1;
      }
      FUN_00161878(iVar9,uVar12,0xffffffff);
    }
  }
  FUN_001e23a4(piVar4,&DAT_00152ec0);
  FUN_00035b6c(&local_5c);
  local_118 = (uint)local_58;
  local_114 = (uint)local_57;
  local_10c = (uint)local_55;
  uStack_110 = (uint)local_56;
  local_120._0_4_ = (uint)local_5a;
  local_120._4_4_ = (uint)local_59;
  FUN_000028d8(auStack_88,s__LY___02X__02X__02X__02X__02X__0_00153357 + 5,local_5c,local_5b);
  uVar6 = FUN_001e23a4(local_100,s_a_ts_refclk_ptp_IEEE1588_2008__00153384);
  uVar6 = FUN_001e23a4(uVar6,auStack_88);
  uVar6 = FUN_001e23a4(uVar6,&DAT_001532f4);
  uVar6 = FUN_001c01dc(uVar6,local_48[0]);
  FUN_001e23a4(uVar6,&DAT_00152ec0);
  FUN_001e23a4(local_100,s_a_mediaclk_direct_0_001533a4);
  iVar9 = local_100[3];
  local_8c = DAT_001533bc;
  uVar12 = (local_100[2] & 4U) >> 2;
  iVar13 = local_100[6];
  iVar3 = local_100[8];
  if (uVar12 == 0) {
    iVar13 = local_100[9];
    iVar3 = local_100[0xb];
  }
  if (iVar3 == iVar13) {
  }
  else {
    iVar13 = local_100[6];
    iVar3 = local_100[8];
    if (uVar12 == 0) {
      iVar13 = local_100[9];
      iVar3 = local_100[0xb];
    }
    uVar12 = iVar3 - iVar13;
    if (0xfffffff1 < uVar12) {
      local_120._0_4_ = 0xfffffff1;
      FUN_0010f7cc(8,s_a_recvonly_001532fc + 0xc,s_a_recvonly_001532fc + 0xc,uVar12);
    }
    if (uVar12 != 0) {
      puVar10 = &local_10c;
      if (0x80 < uVar12) {
        puVar10 = local_64;
      }
      local_64[0] = uVar12;
      local_10c = 0x80;
      uVar16 = *puVar10;
      if (0xfffffff1 < uVar16) {
        local_120._0_4_ = 0xfffffff1;
        FUN_0010f7cc(8,DAT_001533c0,DAT_001533c0,uVar16);
      }
      if (uVar16 < uVar12) {
        local_120._0_4_ = uVar16;
        FUN_0010f7cc(8,DAT_001533c0,DAT_001533c0,uVar12);
      }
      local_8c = DAT_001533c4;
      if (uVar16 != 0) {
        local_8c = (undefined4 *)FUN_0010f82c(uVar16 + 0xe,0);
        if (local_8c != (undefined4 *)0x0) {
          *local_8c = 0;
          local_8c[1] = 0;
          local_8c[2] = 0;
        }
        *local_8c = 0;
        local_8c[1] = uVar16;
        local_8c[2] = uVar12;
        puVar14 = (undefined1 *)((int)local_8c + uVar12 + 0xc);
        if (puVar14 != (undefined1 *)0x0) {
          *puVar14 = 0;
        }
      }
      local_8c = local_8c + 3;
    }
    if (iVar9 != 0) {
      FUN_00003628(local_8c,iVar9,uVar12);
    }
  }
  FUN_001da458(param_2,local_8c);
  FUN_001da44c(&local_8c);
  if ((local_28 & uVar15) == 0) {
    FUN_001da4a8(param_1 + 0x74,param_2);
    goto LAB_001534c8;
  }
  uVar15 = *(uint *)(*(int *)(param_1 + 0x74) + -4);
  if (uVar15 == *(uint *)(*param_2 + -4)) {
    local_120._0_4_ = uVar15;
    puVar10 = (uint *)&local_120;
    if (*(uint *)(*param_2 + -4) < uVar15) {
      puVar10 = &local_114;
    }
    local_114 = *(uint *)(*param_2 + -4);
    iVar3 = FUN_0000339c(*(int *)(param_1 + 0x74),*param_2,*puVar10);
    if ((iVar3 != 0) || (*(int *)(*(int *)(param_1 + 0x74) + -4) != *(int *)(*param_2 + -4)))
    goto LAB_00153490;
    bVar2 = true;
  }
  else {
LAB_00153490:
    bVar2 = false;
  }
  if (!bVar2) {
    FUN_001da4a8(param_1 + 0x74,param_2);
    uVar6 = FUN_0005508c();
    FUN_000553b0(uVar6,param_2,param_1 + 0x4c);
  }
LAB_001534c8:
  FUN_00161210(local_108,0);
  return;
}

