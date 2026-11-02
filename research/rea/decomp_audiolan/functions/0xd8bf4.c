// rea decompile_all
// name: FUN_000d8bf4
// address: 0xd8bf4
// body: available
// range: 0xd8bf4-0xd90e7 inclusive
// range: 0xd9200-0xd930b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000d8bf4(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  uint *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined1 *puVar12;
  uint local_ec;
  int local_e8 [2];
  int local_e0 [13];
  undefined4 local_ac;
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 *local_6c;
  undefined4 *local_68;
  uint local_64;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  byte local_59;
  undefined1 auStack_50 [32];
  undefined1 local_30 [12];
  
  piVar6 = DAT_000d90f0;
  piVar5 = DAT_000d90e8;
  local_e8[0] = *DAT_000d90e8;
  local_ac = DAT_000d90ec;
  if (*DAT_000d90f0 == 0) {
    thunk_FUN_00161678();
  }
  local_94 = *piVar6;
  *(int *)(local_94 + 0x1c) = *(int *)(local_94 + 0x1c) + 1;
  local_90 = 0;
  local_84 = 0;
  local_8c = 0;
  local_88 = 0;
  local_80 = 0;
  local_ac = DAT_000d90f4;
  local_7c = 0;
  local_e8[0] = piVar5[2];
  *(int *)((int)local_e8 + *(int *)(local_e8[0] + -0xc)) = piVar5[3];
  local_e8[1] = 0;
  FUN_001e0ac4((int)local_e8 + *(int *)(local_e8[0] + -0xc),local_e0 + 1);
  local_e0[0] = piVar5[4];
  *(int *)((int)local_e0 + *(int *)(local_e0[0] + -0xc)) = piVar5[5];
  FUN_001e0ac4((int)local_e0 + *(int *)(local_e0[0] + -0xc),local_e0 + 1);
  *(int *)((int)local_e8 + *(int *)(piVar5[1] + -0xc)) = piVar5[6];
  local_e8[0] = *piVar5;
  *(int *)((int)local_e8 + *(int *)(local_e8[0] + -0xc)) = piVar5[8];
  local_e0[0] = piVar5[9];
  local_e0[3] = 0;
  local_e0[4] = 0;
  local_e0[5] = 0;
  local_e0[6] = 0;
  local_e0[7] = 0;
  local_e0[8] = 0;
  local_e0[9] = 0;
  local_e0[10] = 0;
  local_e0[0xb] = 0;
  local_e0[1] = DAT_000d90f8;
  local_e0[2] = 0xc;
  if (*piVar6 == 0) {
    thunk_FUN_00161678();
  }
  local_e0[0xc] = *piVar6;
  *(int *)(local_e0[0xc] + 0x1c) = *(int *)(local_e0[0xc] + 0x1c) + 1;
  local_e0[1] = DAT_000d90fc;
  local_e0[5] = local_e0[5] | 1;
  FUN_001e23a4(local_e0,s_v_0_000d9100);
  puVar10 = DAT_000d9108;
  local_6c = DAT_000d9108;
  uVar2 = FUN_0000332e(*(undefined4 *)(param_1 + 0x2c),DAT_000d910c);
  uVar3 = *(uint *)(*(int *)(param_1 + 0x2c) + -4);
  if ((uVar2 < uVar3) && (uVar2 != 0xffffffff)) {
    if (uVar3 <= uVar2) {
      uVar2 = uVar3;
    }
    FUN_001da110(&local_6c,0,local_6c[-1],*(int *)(param_1 + 0x2c),uVar3,0,uVar2);
  }
  else {
    FUN_001da4a8(&local_6c,param_1 + 0x2c);
  }
  uVar4 = FUN_0018e4b4(param_1 + 0x18,auStack_50,0x20);
  piVar5 = (int *)FUN_001e23a4(local_e0,&DAT_000d9110);
  piVar6 = (int *)FUN_001c00a4(piVar5,local_6c,local_6c[-1],
                               *(undefined4 *)((int)piVar5 + *(int *)(*piVar5 + -0xc) + 0xc));
  if (piVar6 != (int *)0x0) {
    piVar6 = (int *)((int)piVar6 + *(int *)(*piVar6 + -0xc));
  }
  piVar6[3] = 0;
  uVar7 = FUN_001e23a4(piVar5,&DAT_000d9114);
  uVar7 = FUN_001c01dc(uVar7,*(undefined1 *)(param_1 + 9));
  uVar7 = FUN_001e23a4(uVar7,s_0_IN_IP4_000d9118);
  uVar4 = FUN_001e23a4(uVar7,uVar4);
  FUN_001e23a4(uVar4,&DAT_000d9124);
  FUN_001da44c(&local_6c);
  uVar4 = FUN_001e23a4(local_e0,s_s_SIP_000d9128);
  uVar4 = FUN_001c01dc(uVar4,*(undefined1 *)(param_1 + 9));
  FUN_001e23a4(uVar4,&DAT_000d9124);
  FUN_001e23a4(local_e0,s_t_0_0_000d9130);
  local_30[0] = 0;
  FUN_00035b48(local_30);
  uVar4 = FUN_001e23a4(local_e0,s_a_clock_domain_PTPv2_000d9138);
  uVar4 = FUN_001c01dc(uVar4,local_30[0]);
  FUN_001e23a4(uVar4,&DAT_000d9124);
  uVar4 = FUN_0018e4b4(param_1 + 0x18,auStack_50,0x20);
  uVar7 = FUN_001e23a4(local_e0,s_c_IN_IP4_000d9150);
  uVar4 = FUN_001e23a4(uVar7,uVar4);
  FUN_001e23a4(uVar4,&DAT_000d9124);
  uVar4 = FUN_001e23a4(local_e0,&DAT_000d915c);
  uVar4 = FUN_001c01dc(uVar4,*(undefined2 *)(param_1 + 0x1c));
  FUN_001e23a4(uVar4,s_RTP_AVP_000d9168);
  for (uVar2 = 0;
      (iVar8 = **(int **)(param_1 + 0x30),
      uVar2 < (uint)((*(int **)(param_1 + 0x30))[1] - iVar8 >> 1) &&
      (iVar8 = iVar8 + uVar2 * 2, iVar8 != 0)); uVar2 = uVar2 + 1) {
    uVar4 = FUN_001e23a4(local_e0,&DAT_000d9114);
    FUN_001c01dc(uVar4,*(undefined1 *)(iVar8 + 1));
  }
  FUN_001e23a4(local_e0,&DAT_000d9124);
  for (uVar2 = 0;
      (iVar8 = **(int **)(param_1 + 0x30),
      uVar2 < (uint)((*(int **)(param_1 + 0x30))[1] - iVar8 >> 1) &&
      (puVar12 = (undefined1 *)(iVar8 + uVar2 * 2), puVar12 != (undefined1 *)0x0));
      uVar2 = uVar2 + 1) {
    uVar4 = FUN_00039554(*puVar12);
    uVar7 = FUN_001e23a4(local_e0,&DAT_000d9174);
    uVar7 = FUN_001c01dc(uVar7,puVar12[1]);
    uVar7 = FUN_001e23a4(uVar7,&DAT_000d9114);
    uVar4 = FUN_001e23a4(uVar7,uVar4);
    uVar4 = FUN_001e23a4(uVar4,&DAT_000d9180);
    uVar4 = FUN_001c01dc(uVar4,*(undefined4 *)(param_1 + 0x10));
    uVar4 = FUN_001e23a4(uVar4,&DAT_000d9180);
    uVar4 = FUN_001c01dc(uVar4,*(undefined2 *)(param_1 + 0xc));
    FUN_001e23a4(uVar4,&DAT_000d9124);
  }
  if (*(char *)(param_1 + 0x3c) == '\0') {
    uVar4 = FUN_001e23a4(local_e0,s_a_recvonly_000d9184);
    FUN_001e23a4(uVar4,&DAT_000d9124);
  }
  FUN_001e23a4(local_e0,s_a_sync_time_0_000d9190);
  FUN_00035b6c(&local_60);
  local_ec = (uint)local_59;
  FUN_000028d8(auStack_50,s__02X__02X__02X__02X__02X__02X__0_000d91a0,local_60,local_5f,local_5e,
               local_5d,local_5c,local_5b,local_5a);
  uVar4 = FUN_001e23a4(local_e0,s_a_ts_refclk_ptp_IEEE1588_2008__000d91c8);
  uVar4 = FUN_001e23a4(uVar4,auStack_50);
  uVar4 = FUN_001e23a4(uVar4,&DAT_000d917c);
  uVar4 = FUN_001c01dc(uVar4,local_30[0]);
  FUN_001e23a4(uVar4,&DAT_000d9124);
  FUN_001e23a4(local_e0,s_a_mediaclk_direct_0_000d91e8);
  iVar1 = local_e0[3];
  uVar2 = (local_e0[2] & 4U) >> 2;
  iVar11 = local_e0[6];
  iVar8 = local_e0[8];
  if (uVar2 == 0) {
    iVar11 = local_e0[9];
    iVar8 = local_e0[0xb];
  }
  if (iVar8 == iVar11) {
    local_68 = puVar10;
  }
  else {
    iVar11 = local_e0[6];
    iVar8 = local_e0[8];
    if (uVar2 == 0) {
      iVar11 = local_e0[9];
      iVar8 = local_e0[0xb];
    }
    uVar2 = iVar8 - iVar11;
    if (0xfffffff1 < uVar2) {
      FUN_0010f7cc(8,&DAT_000d9164,&DAT_000d9164,uVar2,0xfffffff1);
    }
    if (uVar2 != 0) {
      puVar9 = &local_ec;
      if (0x80 < uVar2) {
        puVar9 = &local_64;
      }
      local_64 = uVar2;
      local_ec = 0x80;
      uVar3 = *puVar9;
      if (0xfffffff1 < uVar3) {
        FUN_0010f7cc(8,DAT_000d930c,DAT_000d930c,uVar3,0xfffffff1);
      }
      if (uVar3 < uVar2) {
        FUN_0010f7cc(8,DAT_000d930c,DAT_000d930c,uVar2,uVar3);
      }
      puVar10 = _DAT_000d9310;
      if (uVar3 != 0) {
        puVar10 = (undefined4 *)FUN_0010f82c(uVar3 + 0xe,0);
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
        }
        *puVar10 = 0;
        puVar10[1] = uVar3;
        puVar10[2] = uVar2;
        puVar12 = (undefined1 *)((int)puVar10 + uVar2 + 0xc);
        if (puVar12 != (undefined1 *)0x0) {
          *puVar12 = 0;
        }
      }
      puVar10 = puVar10 + 3;
    }
    local_68 = puVar10;
    if (iVar1 != 0) {
      FUN_00003628(puVar10,iVar1,uVar2);
    }
  }
  FUN_001da458(param_1 + 0x7c,local_68);
  FUN_001da44c(&local_68);
  FUN_000028a4(s_I_TRACE__RTPSIPUnicastController_000d9312 + 2,*(undefined4 *)(param_1 + 0x7c));
  FUN_00161210(local_e8,0);
  return 1;
}

