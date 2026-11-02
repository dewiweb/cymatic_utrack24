// rea decompile_all
// name: FUN_000bf338
// address: 0xbf338
// body: available
// range: 0xbf338-0xbf713 inclusive
// range: 0xbf77c-0xbfa27 inclusive
// range: 0xbfb30-0xbfeef inclusive
// range: 0xc0050-0xc03fb inclusive
// range: 0xc0564-0xc0613 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000bf338(undefined4 param_1)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  int iVar12;
  undefined1 extraout_r1;
  int iVar13;
  int *piVar14;
  int iVar15;
  char *pcVar16;
  undefined1 *puVar17;
  uint uVar18;
  bool bVar19;
  undefined8 uVar20;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e4;
  char *local_e0 [3];
  undefined1 local_d4;
  undefined1 local_d3;
  undefined1 local_d2;
  undefined1 local_d1;
  undefined1 local_d0;
  undefined1 local_cf;
  undefined1 local_ce;
  undefined1 local_cd;
  undefined1 local_cc;
  undefined1 local_cb;
  char local_ca;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined4 local_c0;
  int local_bc;
  undefined1 auStack_b8 [64];
  undefined1 auStack_78 [32];
  int local_58;
  undefined4 local_54;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  
  local_ec = DAT_000bf714;
  local_f8 = DAT_000bf714;
  local_f4 = DAT_000bf714;
  local_f0 = DAT_000bf714;
  local_100 = DAT_000bf714;
  local_fc = DAT_000bf714;
  puVar4 = (undefined4 *)FUN_0006fc90(param_1,s_RavennaConfiguration_000bf718,0,0x40);
  iVar12 = _DAT_000bf734;
  puVar4[0x45] = 0xffffffff;
  uVar11 = DAT_000bf730;
  puVar4[0x46] = iVar12;
  *puVar4 = uVar11;
  puVar4[0x47] = iVar12;
  iVar5 = FUN_001da358(puVar4 + 0x48,s_I_Archwave_uRec_000bf736 + 2,auStack_44);
  iVar5 = FUN_001da358(iVar5 + 4,s_I_Archwave_uRec_000bf736 + 2,auStack_40);
  *(undefined4 *)(iVar5 + 4) = 0;
  *(undefined4 *)(iVar5 + 8) = 0;
  *(undefined4 *)(iVar5 + 0xc) = 0;
  *(undefined4 *)(iVar5 + 0x10) = 0;
  *(undefined4 *)(iVar5 + 0x14) = 0;
  *(undefined4 *)(iVar5 + 0x18) = 0;
  *(undefined4 *)(iVar5 + 0x1c) = 0;
  *(undefined4 *)(iVar5 + 0x20) = 0;
  *(undefined4 *)(iVar5 + 0x24) = 0;
  piVar6 = (int *)FUN_0010f82c(0xc,0);
  iVar7 = FUN_0010f82c(0xc,0);
  piVar6[2] = iVar7;
  *piVar6 = *(int *)(iVar5 + 0x10);
  piVar6[1] = 1;
  *(int *)(iVar5 + 0x10) = (int)piVar6;
  iVar7 = piVar6[2];
  *(int *)(iVar5 + 0x18) = iVar7;
  *(int *)(iVar5 + 0x1c) = iVar7 + 0xc;
  *(int *)(iVar5 + 0x20) = iVar7;
  *(int *)(iVar5 + 0x18) = iVar7 + 0xc;
  *(int *)iVar7 = iVar7;
  uVar11 = DAT_000bf748;
  *(int *)(*(int *)(iVar5 + 0x20) + 4) = *(int *)(iVar5 + 0x20);
  *(undefined1 *)(iVar5 + 0x28) = 0;
  *(undefined4 *)(iVar5 + 0x2c) = 0x100;
  *(int *)(iVar5 + 0x30) = iVar12;
  *(undefined4 *)(iVar5 + 0x34) = 1;
  *(undefined4 *)(iVar5 + 0x38) = uVar11;
  *(undefined4 *)(iVar5 + 0x3c) = 0;
  *(undefined4 *)(iVar5 + 0x40) = 0;
  *(undefined4 *)(iVar5 + 0x44) = 0;
  *(undefined4 *)(iVar5 + 0x48) = 0;
  *(undefined4 *)(iVar5 + 0x4c) = 0;
  *(undefined4 *)(iVar5 + 0x54) = 4;
  uVar11 = DAT_000bf74c;
  *(undefined4 *)(iVar5 + 0x50) = 0;
  *(undefined4 *)(iVar5 + 0x58) = 4;
  *(undefined4 *)(iVar5 + 0x5c) = 0x5a;
  *(undefined4 *)(iVar5 + 0x60) = uVar11;
  *(undefined4 *)(iVar5 + 100) = 0;
  *(undefined4 *)(iVar5 + 0x74) = 0;
  *(undefined4 *)(iVar5 + 0x78) = 0;
  *(undefined1 *)(iVar5 + 0x7c) = 0;
  *(undefined1 *)(iVar5 + 0x7d) = 4;
  *(undefined4 *)(iVar5 + 0x70) = 0;
  *(undefined4 *)(iVar5 + 0x6c) = 0;
  *(undefined4 *)(iVar5 + 0x68) = 0;
  piVar6 = (int *)FUN_0010f82c(0xc,0);
  iVar7 = FUN_0010f82c(0x18,0);
  piVar6[2] = iVar7;
  *piVar6 = *(int *)(iVar5 + 100);
  piVar6[1] = 1;
  *(int *)(iVar5 + 100) = (int)piVar6;
  puVar8 = (undefined1 *)piVar6[2];
  *(undefined1 **)(iVar5 + 0x6c) = puVar8;
  *(undefined1 **)(iVar5 + 0x70) = puVar8 + 0x18;
  *(undefined1 **)(iVar5 + 0x6c) = puVar8 + 0x18;
  *(undefined4 *)(puVar8 + 8) = 0;
  *(undefined4 *)(puVar8 + 0xc) = 0;
  *puVar8 = 0;
  *(undefined1 **)(iVar5 + 0x74) = puVar8;
  *(undefined4 *)(puVar8 + 4) = 0;
  *(int *)(*(int *)(iVar5 + 0x74) + 8) = *(int *)(iVar5 + 0x74);
  *(int *)(*(int *)(iVar5 + 0x74) + 0xc) = *(int *)(iVar5 + 0x74);
  iVar5 = FUN_001dcf54(iVar5 + 0x80,auStack_3c);
  *(int *)(iVar5 + 0x18) = iVar12;
  piVar14 = (int *)(iVar5 + 0x1c);
  *piVar14 = 0;
  *(undefined4 *)(iVar5 + 0x2c) = 0;
  *(undefined4 *)(iVar5 + 0x30) = 0;
  *(undefined1 *)(iVar5 + 0x34) = 0;
  *(char *)(iVar5 + 0x35) = (char)(int *)(iVar5 + 0x18);
  *(undefined4 *)(iVar5 + 0x28) = 0;
  *(undefined4 *)(iVar5 + 0x24) = 0;
  *(undefined4 *)(iVar5 + 0x20) = 0;
  piVar6 = (int *)FUN_0010f82c(0xc,0);
  iVar7 = FUN_0010f82c(0x18,0);
  piVar6[2] = iVar7;
  *piVar6 = *piVar14;
  piVar6[1] = 1;
  *piVar14 = (int)piVar6;
  puVar8 = (undefined1 *)piVar6[2];
  *(undefined1 **)(iVar5 + 0x24) = puVar8;
  *(undefined1 **)(iVar5 + 0x28) = puVar8 + 0x18;
  *(undefined1 **)(iVar5 + 0x24) = puVar8 + 0x18;
  *(undefined4 *)(puVar8 + 8) = 0;
  *(undefined4 *)(puVar8 + 0xc) = 0;
  *puVar8 = 0;
  *(undefined1 **)(iVar5 + 0x2c) = puVar8;
  *(undefined4 *)(puVar8 + 4) = 0;
  *(int *)(*(int *)(iVar5 + 0x2c) + 8) = *(int *)(iVar5 + 0x2c);
  iVar7 = *(int *)(iVar5 + 0x2c);
  *(int *)(iVar7 + 0xc) = iVar7;
  *(undefined4 *)(iVar5 + 0x38) = 0;
  *(undefined4 *)(iVar5 + 0x48) = 0;
  *(undefined4 *)(iVar5 + 0x4c) = 0;
  *(undefined1 *)(iVar5 + 0x50) = 0;
  *(char *)(iVar5 + 0x51) = (char)iVar7;
  *(undefined4 *)(iVar5 + 0x44) = 0;
  *(undefined4 *)(iVar5 + 0x40) = 0;
  *(undefined4 *)(iVar5 + 0x3c) = 0;
  iVar7 = FUN_001ce910((undefined4 *)(iVar5 + 0x38));
  *(int *)(iVar5 + 0x48) = iVar7;
  *(undefined4 *)(iVar7 + 4) = 0;
  *(int *)(*(int *)(iVar5 + 0x48) + 8) = *(int *)(iVar5 + 0x48);
  *(int *)(*(int *)(iVar5 + 0x48) + 0xc) = *(int *)(iVar5 + 0x48);
  *(undefined4 *)(iVar5 + 0x54) = 0;
  *(undefined4 *)(iVar5 + 100) = 0;
  *(undefined4 *)(iVar5 + 0x68) = 0;
  *(undefined1 *)(iVar5 + 0x6c) = 0;
  *(undefined1 *)(iVar5 + 0x6d) = extraout_r1;
  *(undefined4 *)(iVar5 + 0x60) = 0;
  *(undefined4 *)(iVar5 + 0x5c) = 0;
  *(undefined4 *)(iVar5 + 0x58) = 0;
  piVar6 = (int *)FUN_0010f82c(0xc,0);
  iVar7 = FUN_0010f82c(0x68,0);
  piVar6[2] = iVar7;
  *piVar6 = *(int *)(iVar5 + 0x54);
  piVar6[1] = 1;
  *(int *)(iVar5 + 0x54) = (int)piVar6;
  puVar8 = (undefined1 *)piVar6[2];
  *(undefined1 **)(iVar5 + 0x5c) = puVar8;
  *(undefined1 **)(iVar5 + 0x60) = puVar8 + 0x68;
  *(undefined1 **)(iVar5 + 0x5c) = puVar8 + 0x68;
  *(undefined4 *)(puVar8 + 8) = 0;
  *(undefined4 *)(puVar8 + 0xc) = 0;
  *puVar8 = 0;
  *(undefined1 **)(iVar5 + 100) = puVar8;
  *(undefined4 *)(puVar8 + 4) = 0;
  *(int *)(*(int *)(iVar5 + 100) + 8) = *(int *)(iVar5 + 100);
  *(int *)(*(int *)(iVar5 + 100) + 0xc) = *(int *)(iVar5 + 100);
  *(undefined4 *)(iVar5 + 0x78) = 200;
  *(undefined4 *)(iVar5 + 0x74) = 0;
  *(undefined4 *)(iVar5 + 0x70) = 1;
  *(undefined4 *)(iVar5 + 0x84) = 0;
  *(undefined4 *)(iVar5 + 0x7c) = 200;
  *(undefined4 *)(iVar5 + 0x80) = 1;
  *(undefined1 *)(iVar5 + 0x88) = 1;
  *(undefined1 *)(iVar5 + 0x89) = 0;
  *(undefined1 *)(iVar5 + 0x8a) = 1;
  *(undefined1 *)(iVar5 + 0x8b) = 1;
  iVar5 = FUN_001da358(iVar5 + 0x8c,s_192_168_1_100_000bf750,auStack_38);
  iVar5 = FUN_001da358(iVar5 + 4,s_192_168_1_100_000bf750,auStack_34);
  iVar5 = FUN_001da358(iVar5 + 4,s_255_255_255_0_000bf760,auStack_30);
  iVar5 = FUN_001da358(iVar5 + 4,s_255_255_255_0_000bf760,auStack_48);
  iVar5 = FUN_001da358(iVar5 + 4,s_192_168_1_1_000bf770,auStack_50);
  iVar5 = FUN_001da358(iVar5 + 4,s_192_168_1_1_000bf770,auStack_4c);
  *(int *)(iVar5 + 4) = iVar12;
  *(int *)(iVar5 + 8) = iVar12;
  *(undefined1 *)(iVar5 + 0xc) = 0;
  *(undefined1 *)(iVar5 + 0xd) = 2;
  *(undefined1 *)(iVar5 + 0xe) = 0x10;
  iVar5 = FUN_001da358(iVar5 + 0x10,s_239_255_255_255_000bfa28,auStack_2c);
  iVar15 = iVar5 + -0x254;
  *(short *)(iVar5 + 4) = (short)DAT_000bfa38;
  *(undefined2 *)(iVar5 + 6) = 0xe10;
  *(undefined1 *)(iVar5 + 8) = 0;
  *(undefined1 *)(iVar5 + 9) = 0;
  *(undefined4 *)(iVar5 + 0xc) = 0;
  *(undefined4 *)(iVar5 + 0x1c) = 0;
  *(undefined4 *)(iVar5 + 0x20) = 0;
  *(undefined1 *)(iVar5 + 0x24) = 0;
  *(char *)(iVar5 + 0x25) = (char)iVar5 + -0x54;
  *(undefined4 *)(iVar5 + 0x18) = 0;
  *(undefined4 *)(iVar5 + 0x14) = 0;
  *(undefined4 *)(iVar5 + 0x10) = 0;
  piVar6 = (int *)FUN_0010f82c(0xc,0);
  iVar7 = FUN_0010f82c(0x14,0);
  piVar6[2] = iVar7;
  *piVar6 = *(int *)(iVar5 + 0xc);
  piVar6[1] = 1;
  *(int *)(iVar5 + 0xc) = (int)piVar6;
  puVar8 = (undefined1 *)piVar6[2];
  *(undefined1 **)(iVar5 + 0x14) = puVar8;
  *(undefined1 **)(iVar5 + 0x18) = puVar8 + 0x14;
  *(undefined1 **)(iVar5 + 0x14) = puVar8 + 0x14;
  *(undefined4 *)(puVar8 + 8) = 0;
  *(undefined4 *)(puVar8 + 0xc) = 0;
  *puVar8 = 0;
  *(undefined1 **)(iVar5 + 0x1c) = puVar8;
  *(undefined4 *)(puVar8 + 4) = 0;
  *(int *)(*(int *)(iVar5 + 0x1c) + 8) = *(int *)(iVar5 + 0x1c);
  *(int *)(*(int *)(iVar5 + 0x1c) + 0xc) = *(int *)(iVar5 + 0x1c);
  *(undefined1 *)(iVar5 + 0x34) = 0;
  *(undefined1 *)(iVar5 + 0x35) = 0;
  *(undefined4 *)(iVar5 + 0x28) = 0;
  *(undefined4 *)(iVar5 + 0x2c) = 0;
  *(undefined4 *)(iVar5 + 0x30) = 0;
  local_58 = iVar12;
  iVar7 = FUN_0019e4a8(&DAT_000bfa3c);
  if (iVar7 == 0) {
    FUN_000028a4(s_ERROR__RavennaConfiguration__Cou_000bfa74);
  }
  else {
    local_100 = (uint)*(byte *)(iVar7 + 0x35);
    local_fc = (uint)*(byte *)(iVar7 + 0x36);
    local_f4 = (uint)*(byte *)(iVar7 + 0x38);
    local_f8 = (uint)*(byte *)(iVar7 + 0x37);
    FUN_000028d8(auStack_78,s__02X__02X__02X__02X__02X__02X_000bfa40,*(undefined1 *)(iVar7 + 0x33),
                 *(undefined1 *)(iVar7 + 0x34));
    FUN_001da458(iVar5 + -0x13c,auStack_78);
    local_100 = (uint)*(byte *)(iVar7 + 0x38);
    FUN_000028d8(auStack_78,s___02X__02X__02X__000bfa60,*(undefined1 *)(iVar7 + 0x36),
                 *(undefined1 *)(iVar7 + 0x37));
    FUN_001da458(iVar5 + -0x138,auStack_78);
    FUN_001da458(iVar5 + -0x134,*(undefined4 *)(iVar7 + 0x2c));
    FUN_001da4a8(iVar5 + -0x130,iVar5 + -0x134);
  }
  local_d4 = 1;
  local_d0 = 2;
  local_d3 = 1;
  local_cf = 2;
  local_cc = 0;
  local_d2 = 0;
  local_ce = 0;
  local_cb = 1;
  local_d1 = 2;
  local_cd = 0;
  local_ca = '\x01';
  local_c8 = 2;
  local_c4 = 0;
  FUN_00086b70(&local_d4);
  if (local_ca == '\x03') {
    pcVar16 = s__cfg_AppSettings_BridgeStreaming_000bfaac;
  }
  else {
    pcVar16 = s__cfg_AppSettings_RavennaConfigur_000bfae4;
  }
  iVar7 = FUN_00041c14(pcVar16,iVar5 + -0x140);
  if (iVar7 == 0) {
    FUN_000028a4(s_ERROR__RavennaConfiguration__Cou_000c04dc,pcVar16);
    goto LAB_000c02f8;
  }
  iVar7 = FUN_00042a00(*(undefined4 *)(iVar5 + -0x140),s_ValidSamplingRates_000bfb0c,&local_58);
  if (iVar7 == 0) {
    FUN_000028a4(s_ERROR__RavennaConfiguration__Cou_000bfef0,s_ValidSamplingRates_000bfb0c);
  }
  else if (*(uint *)(local_58 + -4) < 0x40) {
    if (*(int *)(iVar5 + -300) != *(int *)(iVar5 + -0x128)) {
      *(int *)(iVar5 + -0x128) = *(int *)(iVar5 + -300);
    }
    FUN_00003418(auStack_b8);
    iVar7 = FUN_00003308(auStack_b8,&DAT_000bfb20);
    while (iVar7 != 0) {
      uVar20 = FUN_00002f10(iVar7,&DAT_000bfb24,local_e0);
      iVar7 = (int)uVar20;
      bVar19 = iVar7 != 0;
      pcVar16 = (char *)0x1;
      if (iVar7 != 1) {
        bVar19 = (char *)0x6 < local_e0[0];
        pcVar16 = local_e0[0];
      }
      if (bVar19 && (iVar7 != 1 && pcVar16 != (char *)0x7)) {
        uVar11 = DAT_000bfb28;
        pcVar16 = s_ValidSamplingRates_000bfb0c;
LAB_000bfc7c:
        FUN_000028a4(uVar11,pcVar16);
      }
      else {
        iVar7 = FUN_00083a64(local_e0[0],(int)((ulonglong)uVar20 >> 0x20));
        uVar11 = DAT_000bfb2c;
        pcVar16 = local_e0[0];
        if (iVar7 == 0xff) goto LAB_000bfc7c;
        puVar8 = *(undefined1 **)(iVar5 + -0x128);
        piVar6 = (int *)(iVar5 + -300);
        uVar3 = SUB41(local_e0[0],0);
        if (puVar8 == *(undefined1 **)(iVar5 + -0x124)) {
          uVar18 = (int)puVar8 - *piVar6;
          if (uVar18 < (uint)((int)*(undefined1 **)(iVar5 + -0x124) - *piVar6)) {
            *(undefined1 **)(iVar5 + -0x128) = puVar8 + 1;
            if (puVar8 != (undefined1 *)0x0) {
              *puVar8 = puVar8[-1];
            }
            puVar9 = puVar8 + -1;
            uVar18 = (int)puVar9 - (int)puVar8;
            if (0 < (int)uVar18) {
              puVar17 = puVar8;
              if ((uVar18 & 1) != 0) {
                puVar9 = puVar8 + -2;
                puVar17 = puVar8 + -1;
                *puVar17 = *puVar9;
              }
              for (iVar7 = (int)uVar18 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
                puVar17[-1] = puVar9[-1];
                puVar9 = puVar9 + -2;
                puVar17 = puVar17 + -2;
                *puVar17 = *puVar9;
              }
            }
            *puVar8 = uVar3;
          }
          else {
            local_e4 = uVar18 + (uVar18 >> 1) + (uVar18 >> 3);
            if (local_e4 < uVar18 + 1) {
              local_e4 = uVar18 + 1;
            }
            puVar10 = (undefined1 *)FUN_0010f82c(local_e4,0);
            puVar17 = puVar10;
            for (puVar9 = (undefined1 *)*piVar6; puVar9 != puVar8; puVar9 = puVar9 + 1) {
              if (puVar17 != (undefined1 *)0x0) {
                *puVar17 = *puVar9;
              }
              puVar17 = puVar17 + 1;
            }
            if (puVar10 + ((int)puVar8 - *piVar6) != (undefined1 *)0x0) {
              puVar10[(int)puVar8 - *piVar6] = uVar3;
            }
            puVar17 = *(undefined1 **)(iVar5 + -0x128);
            puVar9 = puVar10 + ((int)puVar8 - *piVar6);
            for (; puVar8 != puVar17; puVar8 = puVar8 + 1) {
              puVar9 = puVar9 + 1;
              if (puVar9 != (undefined1 *)0x0) {
                *puVar9 = *puVar8;
              }
            }
            iVar7 = *piVar6;
            iVar13 = *(int *)(iVar5 + -0x128);
            FUN_0010fa20(iVar7,*(int *)(iVar5 + -0x124) - iVar7,0);
            *(undefined1 **)(iVar5 + -0x124) = puVar10 + local_e4;
            *(undefined1 **)(iVar5 + -0x128) = puVar10 + (iVar13 - iVar7) + 1;
            *piVar6 = (int)puVar10;
          }
        }
        else {
          *(undefined1 **)(iVar5 + -0x128) = puVar8 + 1;
          if (puVar8 != (undefined1 *)0x0) {
            *puVar8 = uVar3;
          }
        }
      }
      iVar7 = FUN_00003308(0,&DAT_000bfb20);
    }
  }
  iVar7 = FUN_00043278(*(undefined4 *)(iVar5 + -0x140),s_User_SyntonizedMode_000bff24,iVar5 + -0x108
                      );
  if (iVar7 == 0) {
    FUN_000028a4(s_ERROR__RavennaConfiguration__Cou_000bfef0,s_User_SyntonizedMode_000bff24);
  }
  iVar7 = FUN_00048ef8(*(undefined4 *)(iVar5 + -0x140),s_User_PlayoutDelay_000bff38,iVar5 + -0x104);
  if (iVar7 == 0) {
    FUN_000028a4(s_ERROR__RavennaConfiguration__Cou_000bfef0,s_User_PlayoutDelay_000bff38);
  }
  iVar7 = FUN_00048ef8(*(undefined4 *)(iVar5 + -0x140),s_PlayoutDelayMin_000bff4c,iVar5 + -0xfc);
  if (iVar7 == 0) {
    FUN_000028a4(s_ERROR__RavennaConfiguration__Cou_000bfef0,s_PlayoutDelayMin_000bff4c);
  }
  iVar7 = FUN_00048ef8(*(undefined4 *)(iVar5 + -0x140),s_PlayoutDelayMax_000bff5c,iVar5 + -0xf8);
  if (iVar7 == 0) {
    FUN_000028a4(s_ERROR__RavennaConfiguration__Cou_000bfef0,s_PlayoutDelayMax_000bff5c);
  }
  if (*(uint *)(iVar5 + -0xf8) <= *(uint *)(iVar5 + -0xfc)) {
    local_100 = *(uint *)(iVar5 + -0xf8);
    FUN_000028a4(s_ERROR__RavennaConfiguration____s_000bff6c,s_PlayoutDelayMin_000bff4c,
                 *(uint *)(iVar5 + -0xfc),s_PlayoutDelayMax_000bff5c);
    *(undefined4 *)(iVar5 + -0xf8) = DAT_000bffa4;
    *(undefined4 *)(iVar5 + -0xfc) = 1;
  }
  FUN_000be614(iVar15);
  iVar7 = FUN_000433b8(*(undefined4 *)(iVar5 + -0x140),s_InputDelay1xFS_000bffa8,iVar5 + -0xf4);
  if (iVar7 == 0) {
    FUN_000028a4(s_ERROR__RavennaConfiguration__Cou_000bfef0,s_InputDelay1xFS_000bffa8);
  }
  iVar7 = FUN_000433b8(*(undefined4 *)(iVar5 + -0x140),s_InputDelay2xFS_000bffb8,iVar5 + -0xf0);
  if (iVar7 == 0) {
    FUN_000028a4(s_ERROR__RavennaConfiguration__Cou_000bfef0,s_InputDelay2xFS_000bffb8);
  }
  iVar7 = FUN_000433b8(*(undefined4 *)(iVar5 + -0x140),s_InputDelay4xFS_000bffc8,iVar5 + -0xec);
  if (iVar7 == 0) {
    FUN_000028a4(s_ERROR__RavennaConfiguration__Cou_000bfef0,s_InputDelay4xFS_000bffc8);
  }
  iVar7 = FUN_000433b8(*(undefined4 *)(iVar5 + -0x140),s_OutputDelay1xFS_000bffd8,iVar5 + -0xe8);
  if (iVar7 == 0) {
    FUN_000028a4(s_ERROR__RavennaConfiguration__Cou_000bfef0,s_OutputDelay1xFS_000bffd8);
  }
  iVar7 = FUN_000433b8(*(undefined4 *)(iVar5 + -0x140),s_OutputDelay2xFS_000bffe8,iVar5 + -0xe4);
  if (iVar7 == 0) {
    FUN_000028a4(s_ERROR__RavennaConfiguration__Cou_000bfef0,s_OutputDelay2xFS_000bffe8);
  }
  iVar7 = FUN_000433b8(*(undefined4 *)(iVar5 + -0x140),s_OutputDelay4xFS_000bfff8,iVar5 + -0xe0);
  if (iVar7 == 0) {
    FUN_000028a4(s_ERROR__RavennaConfiguration__Cou_000bfef0,s_OutputDelay4xFS_000bfff8);
  }
  iVar7 = FUN_00048ef8(*(undefined4 *)(iVar5 + -0x140),s_MaxNoOfEncoders_000c0008,iVar5 + -0xdc);
  if (iVar7 == 0) {
    FUN_000028a4(s_ERROR__RavennaConfiguration__Cou_000bfef0,s_MaxNoOfEncoders_000c0008);
  }
  iVar7 = FUN_00048ef8(*(undefined4 *)(iVar5 + -0x140),s_MaxNoOfDecoders_000c0018,iVar5 + -0xd8);
  if (iVar7 == 0) {
    FUN_000028a4(s_ERROR__RavennaConfiguration__Cou_000bfef0,s_MaxNoOfDecoders_000c0018);
  }
  iVar7 = FUN_00048ef8(*(undefined4 *)(iVar5 + -0x140),s_MaxCPULoad_000c0028,iVar5 + -0xd4);
  if (iVar7 == 0) {
    FUN_000028a4(s_ERROR__RavennaConfiguration__Cou_000bfef0,s_MaxCPULoad_000c0028);
  }
  iVar7 = FUN_00048ef8(*(undefined4 *)(iVar5 + -0x140),s_MeasurementIntervalCPULoad_000c0034,
                       iVar5 + -0xd0);
  if (iVar7 == 0) {
    FUN_000028a4(s_ERROR__RavennaConfiguration__Cou_000bfef0,s_MeasurementIntervalCPULoad_000c0034);
  }
  FUN_000bed1c(iVar15);
  FUN_000bef90(iVar15);
  FUN_000bb6a0(iVar15);
  FUN_000ba950(iVar15);
  FUN_000b9f0c(iVar15);
  iVar7 = FUN_00048ef8(*(undefined4 *)(iVar5 + -0x140),s_User_AudioMode_000c03fc,iVar5 + -0x40);
  if (iVar7 == 0) {
    FUN_000028a4(s_ERROR__RavennaConfiguration__Cou_000bfef0,s_User_AudioMode_000c03fc);
  }
  iVar7 = FUN_00048ef8(*(undefined4 *)(iVar5 + -0x140),s_User_SampleSize_000c040c,&local_54);
  if (iVar7 == 0) {
    FUN_000028a4(s_ERROR__RavennaConfiguration__Cou_000bfef0,s_User_SampleSize_000c040c);
  }
  else {
    *(char *)(iVar5 + -2) = (char)local_54;
  }
  local_bc = iVar12;
  iVar12 = FUN_00042a00(*(undefined4 *)(iVar5 + -0x140),s_SupportedEncodings_000c041c,&local_bc);
  puVar4 = DAT_000c0430;
  if (iVar12 == 0) {
    FUN_000028a4(s_ERROR__RavennaConfiguration__Cou_000bfef0,s_SupportedEncodings_000c041c);
  }
  else {
    uVar18 = 0;
    while (uVar18 <= *(uint *)(local_bc + -4)) {
      iVar12 = FUN_00003374(local_bc + uVar18,&DAT_000c0434);
      if ((iVar12 == 0) || (iVar12 = iVar12 - local_bc, iVar12 == -1)) break;
      if (1 < *(int *)(local_bc + -0xc) + 1U) {
        iVar7 = FUN_001da28c(&local_bc,*(undefined4 *)(local_bc + -4),*(undefined4 *)(local_bc + -4)
                            );
        FUN_00003628(iVar7 + 0xc,local_bc,*(undefined4 *)(local_bc + -4));
        FUN_001da314(&local_bc);
        local_bc = iVar7 + 0xc;
      }
      if ((undefined4 *)(local_bc + -0xc) != puVar4) {
        *(undefined4 *)(local_bc + -0xc) = 0xffffffff;
      }
      *(undefined1 *)(local_bc + iVar12) = 0;
      iVar7 = FUN_000394dc(local_bc + uVar18);
      local_e0[0] = (char *)CONCAT31(local_e0[0]._1_3_,(char)iVar7);
      if (iVar7 != 4) {
        FUN_001dc184(iVar5 + -0x120,local_e0);
      }
      uVar18 = iVar12 + 1;
    }
    iVar12 = FUN_000394dc(local_bc + uVar18);
    local_e4 = CONCAT31(local_e4._1_3_,(char)iVar12);
    if (iVar12 != 4) {
      FUN_001dc184(iVar5 + -0x120,&local_e4);
    }
  }
  if (*(int *)(iVar5 + -0x10c) == 0) {
    FUN_000028a4(s_ERROR__RavennaConfiguration__Add_000c0438);
    local_100._0_1_ = 1;
    FUN_001dc184(iVar5 + -0x120,&local_100);
    local_100 = (uint)local_100._1_3_ << 8;
    FUN_001dc184(iVar5 + -0x120,&local_100);
  }
  FUN_001da314(&local_bc);
  piVar14 = *(int **)(iVar5 + -0x110);
  bVar19 = false;
  piVar6 = (int *)*piVar14;
  if (piVar6 == piVar14) {
LAB_000c026c:
    cVar1 = *(char *)(*piVar14 + 8);
    if (cVar1 == '\0') {
      uVar3 = 0x10;
LAB_000c02a4:
      *(undefined1 *)(iVar5 + -2) = uVar3;
    }
    else {
      if (cVar1 == '\x01') {
LAB_000c02a0:
        uVar3 = 0x18;
        goto LAB_000c02a4;
      }
      if (cVar1 == '\x02') {
        *(undefined1 *)(iVar5 + -2) = 0x20;
      }
      else if (cVar1 == '\x03') goto LAB_000c02a0;
    }
    iVar12 = FUN_00048f94(*(undefined4 *)(iVar5 + -0x140),s_User_SampleSize_000c040c,
                          *(undefined1 *)(iVar5 + -2));
    if (iVar12 == 0) {
      FUN_000028a4(s_ERROR__RavennaConfiguration__Cou_000c0470,s_User_SampleSize_000c040c,
                   *(undefined1 *)(iVar5 + -2));
    }
  }
  else {
    cVar1 = *(char *)(iVar5 + -2);
    do {
      cVar2 = (char)piVar6[2];
      if (cVar1 == '\x10') {
        if (cVar2 == '\0') goto LAB_000c0254;
      }
      else if (cVar1 == '\x18') {
        if ((cVar2 == '\x01') || (cVar2 == '\x03')) goto LAB_000c0254;
      }
      else if (cVar1 == ' ' && cVar2 == '\x02') {
LAB_000c0254:
        bVar19 = true;
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != piVar14);
    if (!bVar19) goto LAB_000c026c;
  }
  iVar12 = FUN_001d90f0(iVar5 + -0x5c,iVar5 + -0x40);
  if (iVar12 == 0) {
    thunk_FUN_000028a4(s_ERROR__RavennaConfiguration__Inv_000c04a8);
  }
LAB_000c02f8:
  iVar12 = FUN_00041c14(s__cfg_Networking_IpCfg_Config0_000c0510,&local_c0);
  if (iVar12 == 0) {
    FUN_000028a4(s_ERROR__RavennaConfiguration__Cou_000c04dc,
                 s__cfg_Networking_IpCfg_Config0_000c0510);
  }
  else {
    iVar12 = FUN_00043278(local_c0,s_DHCPClient_000c0530,iVar5 + -0x26);
    if (iVar12 == 0) {
      FUN_000028a4(DAT_000c053c,s_DHCPClient_000c0530);
    }
    *(undefined1 *)(iVar5 + -0x25) = *(undefined1 *)(iVar5 + -0x26);
    iVar12 = FUN_00042a00(local_c0,&DAT_000c0540,iVar5 + -0x24);
    if (iVar12 == 0) {
      FUN_000028a4(DAT_000c053c,&DAT_000c0540);
    }
    FUN_001da4a8(iVar5 + -0x20,iVar5 + -0x24);
    iVar12 = FUN_00042a00(local_c0,&DAT_000c0544,iVar5 + -0x1c);
    if (iVar12 == 0) {
      FUN_000028a4(DAT_000c053c,&DAT_000c0544);
    }
    FUN_001da4a8(iVar5 + -0x18,iVar5 + -0x1c);
    iVar12 = FUN_00042a00(local_c0,s_DefGW_000c054c,iVar5 + -0x14);
    if (iVar12 == 0) {
      FUN_000028a4(DAT_000c053c,s_DefGW_000c054c);
    }
    FUN_001da4a8(iVar5 + -0x10,iVar5 + -0x14);
    iVar12 = FUN_00042a00(local_c0,s_DNSSrv1_000c0554,iVar5 + -0xc);
    if (iVar12 == 0) {
      FUN_000028a4(DAT_000c053c,s_DNSSrv1_000c0554);
    }
    iVar12 = FUN_00042a00(local_c0,s_DNSSrv2_000c055c,iVar5 + -8);
    if (iVar12 == 0) {
      FUN_000028a4(DAT_000c053c,s_DNSSrv2_000c055c);
    }
    FUN_00041dd4(local_c0);
  }
  iVar12 = FUN_00041c14(s__cfg_AppSettings_Global_000c0614,&local_c0);
  if (iVar12 == 0) {
    FUN_000028a4(s_ERROR__RavennaConfiguration__Cou_000c04dc,s__cfg_AppSettings_Global_000c0614);
  }
  else {
    iVar12 = FUN_00048ef8(local_c0,s_SampleRate_000c062c,&local_54);
    if (iVar12 == 0) {
      FUN_000028a4(DAT_000c053c,s_SampleRate_000c062c);
    }
    else {
      *(undefined1 *)(iVar5 + -3) = (undefined1)local_54;
    }
    FUN_00041dd4(local_c0);
  }
  FUN_000bd1e4(iVar15);
  FUN_0006e024(iVar15);
  FUN_001da314(&local_58);
  return iVar15;
}

