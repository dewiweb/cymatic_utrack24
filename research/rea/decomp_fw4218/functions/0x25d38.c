// rea decompile_all
// name: FUN_00025d38
// address: 0x25d38
// body: available
// range: 0x25d38-0x2603d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00025d38(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
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
  undefined1 *puVar10;
  char *local_388;
  undefined1 *local_384;
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
  undefined1 auStack_220 [256];
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
  FUN_00003c58(auStack_68,0x40);
  if (local_20 == 0) {
    if (param_3 == 0) {
      pcVar1 = s_Received_00026050;
    }
    else {
      pcVar1 = &DAT_00026048;
    }
    iVar2 = FUN_001eafb0(auStack_e8,0x40,pcVar1,&local_388);
    auStack_e8[iVar2] = 0;
  }
  else {
    if (param_3 == 0) {
      pcVar1 = s_Receiv_0002605c;
    }
    else {
      pcVar1 = &DAT_00026040;
    }
    iVar2 = FUN_001eaf9c(auStack_e8,0x40,s_ERROR__d__sing_00026064,local_20,pcVar1);
    auStack_e8[iVar2] = 0;
  }
  if (param_3 == 0) {
    iVar2 = FUN_001eaf9c(auStack_a8,0x40,&DAT_0002607c,param_5);
    auStack_a8[iVar2] = 0;
  }
  else {
    iVar2 = FUN_001eafb0(auStack_a8,0x40,s_port_00026074,&local_388);
    auStack_a8[iVar2] = 0;
  }
  if ((param_7 != 0) || ((param_8 & 0xffff) != 0)) {
    iVar2 = FUN_001eaf9c(auStack_68,0x40,s_to___a__d_00026084,param_7,
                         (param_8 & 0xff) << 8 | (param_8 & 0xffff) >> 8);
    auStack_68[iVar2] = 0;
  }
  uVar7 = (uint)(byte)param_9[2];
  if ((int)(uVar7 << 0x1e) < 0) {
    local_354 = s__truncated__00026090;
  }
  else {
    local_354 = &DAT_00026044;
  }
  uStack_35c = (param_6 & 0xff) << 8 | (param_6 & 0xffff) >> 8;
  local_360 = auStack_a8;
  local_368 = (uint)CONCAT11(*param_9,param_9[1]);
  uVar6 = (uint)(byte)param_9[3];
  local_364 = param_10 + (-0xc - (int)param_9);
  if ((int)(uVar6 << 0x1b) < 0) {
    local_36c = &DAT_000260a0;
  }
  else {
    local_36c = &DAT_00026044;
  }
  if ((int)(uVar6 << 0x1a) < 0) {
    local_370 = &DAT_000260a4;
  }
  else {
    local_370 = &DAT_00026044;
  }
  if ((int)(uVar6 << 0x18) < 0) {
    local_374 = &DAT_000260a8;
  }
  else {
    local_374 = &DAT_00026044;
  }
  if ((param_9[2] & 1) == 0) {
    local_378 = &DAT_00026044;
  }
  else {
    local_378 = &DAT_000260ac;
  }
  if ((int)(uVar7 << 0x1e) < 0) {
    local_37c = &DAT_000260b0;
  }
  else {
    local_37c = &DAT_00026044;
  }
  if ((int)(uVar7 << 0x1d) < 0) {
    local_380 = &DAT_000260b4;
  }
  else {
    local_380 = &DAT_00026044;
  }
  local_384 = (undefined1 *)(uVar6 & 0xf);
  if ((param_9[3] & 0xf) == 0) {
    local_388 = s_NoErr_000260c8;
  }
  else if (local_384 == (undefined1 *)0x1) {
    local_388 = s_FormErr_000260d0;
  }
  else if (local_384 == (undefined1 *)0x2) {
    local_388 = s_ServFail_000260d8;
  }
  else if (local_384 == (undefined1 *)0x3) {
    local_388 = s_NXDomain_000260e4;
  }
  else if (local_384 == (undefined1 *)0x4) {
    local_388 = s_NotImpl_000260f0;
  }
  else if (local_384 == (undefined1 *)0x5) {
    local_388 = s_Refused_000260f8;
  }
  else if (local_384 == (undefined1 *)0x6) {
    local_388 = s_YXDomain_00026100;
  }
  else if (local_384 == (undefined1 *)0x7) {
    local_388 = s_YXRRSet_0002610c;
  }
  else if (local_384 == (undefined1 *)0x8) {
    local_388 = s_NXRRSet_00026114;
  }
  else if (local_384 == (undefined1 *)0x9) {
    local_388 = s_NotAuth_0002611c;
  }
  else if (local_384 == (undefined1 *)0xa) {
    local_388 = s_NotZone_00026124;
  }
  else {
    local_388 = &DAT_000260b8;
  }
  if ((int)(uVar7 << 0x18) < 0) {
    pcVar1 = s_Response_000260bc;
  }
  else {
    pcVar1 = s_Query_0002612c;
  }
  if ((uVar7 & 0x7f) >> 3 == 0) {
    pcVar4 = &DAT_00026044;
  }
  else {
    uVar3 = (uVar7 & 0x7f) >> 3;
    if (uVar3 == 1) {
      pcVar4 = s_Iquery_00026144;
    }
    else if (uVar3 == 2) {
      pcVar4 = s_Status_0002614c;
    }
    else if (uVar3 == 3) {
      pcVar4 = s_Unused3_00026154;
    }
    else if (uVar3 == 4) {
      pcVar4 = s_Notify_00026160;
    }
    else if (uVar3 == 5) {
      pcVar4 = s_Update_00026168;
    }
    else {
      pcVar4 = &DAT_00026134;
    }
  }
  puStack_358 = auStack_68;
  FUN_0002a1c6(0,DAT_00026138,auStack_e8,local_18,pcVar4,pcVar1,uVar7,uVar6);
  if (local_ec == 0) {
    pcVar8 = s_Questions_00026170;
  }
  else {
    pcVar8 = &DAT_0002613c;
  }
  FUN_0002a1c6(0,s__2d__s_0002617c,*(undefined2 *)(param_9 + 4),pcVar8,pcVar4,pcVar1,uVar7,uVar6);
  iVar2 = 0;
  while ((iVar2 < (int)(uint)*(ushort *)(param_9 + 4) && (puVar9 != (undefined1 *)0x0))) {
    FUN_001e58ac(auStack_350,0x260);
    local_23c = 0;
    local_222 = *(undefined2 *)(DAT_00026184 + 4);
    local_384 = puVar10;
    puVar9 = (undefined1 *)FUN_001db0f0(param_9,puVar9,param_10);
    if ((puVar9 == (undefined1 *)0x0) || (param_10 < puVar9 + 4)) {
      puVar9 = (undefined1 *)0x0;
    }
    else {
      local_34c = FUN_00025cca(local_384);
      local_120 = CONCAT11(*puVar9,puVar9[1]);
      local_11e = CONCAT11(puVar9[2],puVar9[3]);
      puVar9 = puVar9 + 4;
      if (puVar9 != (undefined1 *)0x0) {
        uVar5 = FUN_00025930();
        FUN_0002a1c6(0,s__2d____s__s_00026188,iVar2,puVar10,uVar5);
      }
    }
    iVar2 = iVar2 + 1;
  }
  if (local_ec == 0) {
    pcVar1 = s_Answers_000261a4;
  }
  else {
    pcVar1 = s_Prerequisites_00026194;
  }
  uVar5 = FUN_000261dc(local_24,param_9,puVar9,param_10,*(undefined2 *)(param_9 + 6),pcVar1);
  if (local_ec == 0) {
    pcVar1 = s_Authorities_000261b4;
  }
  else {
    pcVar1 = s_Updates_000261ac;
  }
  uVar5 = FUN_000261dc(local_24,param_9,uVar5,param_10,*(undefined2 *)(param_9 + 8),pcVar1);
  FUN_000261dc(local_24,param_9,uVar5,param_10,*(undefined2 *)(param_9 + 10),s_Additionals_000261c0)
  ;
  FUN_0002a1c6(0,s________________000261cc);
  return;
}

