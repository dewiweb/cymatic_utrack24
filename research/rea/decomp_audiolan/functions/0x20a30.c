// rea decompile_all
// name: FUN_00020a30
// address: 0x20a30
// body: available
// range: 0x20a30-0x20d35 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00020a30(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 uint param_6,int param_7,uint param_8,undefined1 *param_9,undefined1 *param_10)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  char *local_388;
  undefined4 *local_384;
  undefined *local_380;
  undefined *local_37c;
  undefined *local_378;
  undefined *local_374;
  undefined *local_370;
  undefined *local_36c;
  uint local_368;
  undefined1 *local_364;
  undefined1 *local_360;
  uint uStack_35c;
  undefined1 *puStack_358;
  char *local_354;
  undefined1 auStack_350 [4];
  undefined4 local_34c;
  undefined4 local_23c;
  undefined2 local_222;
  undefined4 auStack_220 [64];
  undefined2 local_120;
  undefined2 local_11e;
  uint local_ec;
  undefined1 auStack_e8 [64];
  undefined1 auStack_a8 [64];
  undefined1 auStack_68 [68];
  undefined4 local_24;
  int local_20;
  int iStack_1c;
  undefined4 local_18;
  
  puVar10 = auStack_220;
  local_ec = (uint)(((byte)param_9[2] & 0x7f) >> 3 == 5);
  puVar9 = param_9 + 0xc;
  local_24 = param_1;
  local_20 = param_2;
  iStack_1c = param_3;
  local_18 = param_4;
  FUN_000038a0(auStack_68,0x40);
  if (local_20 == 0) {
    if (param_3 == 0) {
      pcVar1 = s_Received_00020d48;
    }
    else {
      pcVar1 = &DAT_00020d40;
    }
    iVar2 = FUN_0019aaf8(auStack_e8,0x40,pcVar1,&local_388);
    auStack_e8[iVar2] = 0;
  }
  else {
    if (param_3 == 0) {
      pcVar1 = s_Receiv_00020d54;
    }
    else {
      pcVar1 = &DAT_00020d38;
    }
    iVar2 = FUN_0019aae4(auStack_e8,0x40,s_ERROR__d__sing_00020d5c,local_20,pcVar1);
    auStack_e8[iVar2] = 0;
  }
  if (param_3 == 0) {
    iVar2 = FUN_0019aae4(auStack_a8,0x40,&DAT_00020d74,param_5);
    auStack_a8[iVar2] = 0;
  }
  else {
    iVar2 = FUN_0019aaf8(auStack_a8,0x40,s_port_00020d6c,&local_388);
    auStack_a8[iVar2] = 0;
  }
  if ((param_7 != 0) || ((param_8 & 0xffff) != 0)) {
    iVar2 = FUN_0019aae4(auStack_68,0x40,s_to___a__d_00020d7c,param_7,
                         (param_8 & 0xff) << 8 | (param_8 & 0xffff) >> 8);
    auStack_68[iVar2] = 0;
  }
  uVar7 = (uint)(byte)param_9[2];
  if ((int)(uVar7 << 0x1e) < 0) {
    local_354 = s__truncated__00020d88;
  }
  else {
    local_354 = &DAT_00020d3c;
  }
  uStack_35c = (param_6 & 0xff) << 8 | (param_6 & 0xffff) >> 8;
  local_360 = auStack_a8;
  local_368 = (uint)CONCAT11(*param_9,param_9[1]);
  uVar6 = (uint)(byte)param_9[3];
  local_364 = param_10 + (-0xc - (int)param_9);
  if ((int)(uVar6 << 0x1b) < 0) {
    local_36c = &DAT_00020d98;
  }
  else {
    local_36c = &DAT_00020d3c;
  }
  if ((int)(uVar6 << 0x1a) < 0) {
    local_370 = &DAT_00020d9c;
  }
  else {
    local_370 = &DAT_00020d3c;
  }
  if ((int)(uVar6 << 0x18) < 0) {
    local_374 = &DAT_00020da0;
  }
  else {
    local_374 = &DAT_00020d3c;
  }
  if ((param_9[2] & 1) == 0) {
    local_378 = &DAT_00020d3c;
  }
  else {
    local_378 = &DAT_00020da4;
  }
  if ((int)(uVar7 << 0x1e) < 0) {
    local_37c = &DAT_00020da8;
  }
  else {
    local_37c = &DAT_00020d3c;
  }
  if ((int)(uVar7 << 0x1d) < 0) {
    local_380 = &DAT_00020dac;
  }
  else {
    local_380 = &DAT_00020d3c;
  }
  local_384 = (undefined4 *)(uVar6 & 0xf);
  if ((param_9[3] & 0xf) == 0) {
    local_388 = s_NoErr_00020dc0;
  }
  else if (local_384 == (undefined4 *)0x1) {
    local_388 = s_FormErr_00020dc8;
  }
  else if (local_384 == (undefined4 *)0x2) {
    local_388 = s_ServFail_00020dd0;
  }
  else if (local_384 == (undefined4 *)0x3) {
    local_388 = s_NXDomain_00020ddc;
  }
  else if (local_384 == (undefined4 *)0x4) {
    local_388 = s_NotImpl_00020de8;
  }
  else if (local_384 == (undefined4 *)0x5) {
    local_388 = s_Refused_00020df0;
  }
  else if (local_384 == (undefined4 *)0x6) {
    local_388 = s_YXDomain_00020df8;
  }
  else if (local_384 == (undefined4 *)0x7) {
    local_388 = s_YXRRSet_00020e04;
  }
  else if (local_384 == (undefined4 *)&SupervisorCall) {
    local_388 = s_NXRRSet_00020e0c;
  }
  else if (local_384 == &DAT_00000009) {
    local_388 = s_NotAuth_00020e14;
  }
  else if (local_384 == (undefined4 *)((int)&DAT_00000009 + 1)) {
    local_388 = s_NotZone_00020e1c;
  }
  else {
    local_388 = &DAT_00020db0;
  }
  if ((int)(uVar7 << 0x18) < 0) {
    pcVar1 = s_Response_00020db4;
  }
  else {
    pcVar1 = s_Query_00020e24;
  }
  if ((uVar7 & 0x7f) >> 3 == 0) {
    pcVar4 = &DAT_00020d3c;
  }
  else {
    uVar3 = (uVar7 & 0x7f) >> 3;
    if (uVar3 == 1) {
      pcVar4 = s_Iquery_00020e3c;
    }
    else if (uVar3 == 2) {
      pcVar4 = s_Status_00020e44;
    }
    else if (uVar3 == 3) {
      pcVar4 = s_Unused3_00020e4c;
    }
    else if (uVar3 == 4) {
      pcVar4 = s_Notify_00020e58;
    }
    else if (uVar3 == 5) {
      pcVar4 = s_Update_00020e60;
    }
    else {
      pcVar4 = &DAT_00020e2c;
    }
  }
  puStack_358 = auStack_68;
  FUN_00024642(0,DAT_00020e30,auStack_e8,local_18,pcVar4,pcVar1,uVar7,uVar6);
  if (local_ec == 0) {
    pcVar8 = s_Questions_00020e68;
  }
  else {
    pcVar8 = &DAT_00020e34;
  }
  FUN_00024642(0,s__2d__s_00020e74,*(undefined2 *)(param_9 + 4),pcVar8,pcVar4,pcVar1,uVar7,uVar6);
  iVar2 = 0;
  while ((iVar2 < (int)(uint)*(ushort *)(param_9 + 4) && (puVar9 != (undefined1 *)0x0))) {
    FUN_001953c4(auStack_350,0x260);
    local_23c = 0;
    local_222 = *(undefined2 *)(DAT_00020e7c + 4);
    local_384 = puVar10;
    puVar9 = (undefined1 *)FUN_0018a600(param_9,puVar9,param_10);
    if ((puVar9 == (undefined1 *)0x0) || (param_10 < puVar9 + 4)) {
      puVar9 = (undefined1 *)0x0;
    }
    else {
      local_34c = FUN_000209c2(local_384);
      local_120 = CONCAT11(*puVar9,puVar9[1]);
      local_11e = CONCAT11(puVar9[2],puVar9[3]);
      puVar9 = puVar9 + 4;
      if (puVar9 != (undefined1 *)0x0) {
        uVar5 = FUN_000203e4();
        FUN_00024642(0,s__2d____s__s_00020e80,iVar2,puVar10,uVar5);
      }
    }
    iVar2 = iVar2 + 1;
  }
  if (local_ec == 0) {
    pcVar1 = s_Answers_00020e9c;
  }
  else {
    pcVar1 = s_Prerequisites_00020e8c;
  }
  uVar5 = FUN_00020ed4(local_24,param_9,puVar9,param_10,*(undefined2 *)(param_9 + 6),pcVar1);
  if (local_ec == 0) {
    pcVar1 = s_Authorities_00020eac;
  }
  else {
    pcVar1 = s_Updates_00020ea4;
  }
  uVar5 = FUN_00020ed4(local_24,param_9,uVar5,param_10,*(undefined2 *)(param_9 + 8),pcVar1);
  FUN_00020ed4(local_24,param_9,uVar5,param_10,*(undefined2 *)(param_9 + 10),s_Additionals_00020eb8)
  ;
  FUN_00024642(0,s________________00020ec4);
  return;
}

