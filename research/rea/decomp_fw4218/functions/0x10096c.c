// rea decompile_all
// name: FUN_0010096c
// address: 0x10096c
// body: available
// range: 0x10096c-0x100d4b inclusive
// range: 0x100db4-0x10106b inclusive
// range: 0x101174-0x101537 inclusive
// range: 0x101698-0x101a47 inclusive
// range: 0x101ba8-0x101c7b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00101768) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0010096c(undefined4 param_1)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  char *pcVar17;
  undefined1 *puVar18;
  uint uVar19;
  bool bVar20;
  undefined8 uVar21;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e4;
  char *local_e0 [2];
  int local_d8 [2];
  undefined1 auStack_d0 [64];
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined1 local_8c;
  undefined1 local_8b;
  undefined1 local_8a;
  undefined1 local_89;
  undefined1 local_88;
  undefined1 local_87;
  char local_86;
  undefined4 local_84;
  undefined1 local_80;
  undefined4 local_7c;
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
  
  local_ec = DAT_00100d4c;
  local_f8 = DAT_00100d4c;
  local_f4 = DAT_00100d4c;
  local_f0 = DAT_00100d4c;
  local_100 = DAT_00100d4c;
  local_fc = DAT_00100d4c;
  puVar6 = (undefined4 *)FUN_00070ef0(param_1,s_RavennaConfiguration_00100d50,0,0x40);
  uVar3 = s____iI_Archwave_uRec_00100d6a._2_4_;
  puVar6[0x45] = 0xffffffff;
  uVar13 = _DAT_00100d68;
  puVar6[0x46] = uVar3;
  *puVar6 = uVar13;
  puVar6[0x47] = uVar3;
  iVar7 = FUN_00232964(puVar6 + 0x48,s____iI_Archwave_uRec_00100d6a + 6,auStack_48);
  iVar7 = FUN_00232964(iVar7 + 4,s____iI_Archwave_uRec_00100d6a + 6,auStack_44);
  *(undefined4 *)(iVar7 + 4) = 0;
  *(undefined4 *)(iVar7 + 8) = 0;
  *(undefined4 *)(iVar7 + 0xc) = 0;
  *(undefined4 *)(iVar7 + 0x10) = 0;
  *(undefined4 *)(iVar7 + 0x14) = 0;
  *(undefined4 *)(iVar7 + 0x18) = 0;
  *(undefined4 *)(iVar7 + 0x1c) = 0;
  *(undefined4 *)(iVar7 + 0x20) = 0;
  *(undefined4 *)(iVar7 + 0x24) = 0;
  piVar8 = (int *)FUN_00173860(0xc,0);
  iVar9 = FUN_00173860(0xc,0);
  piVar8[2] = iVar9;
  *piVar8 = *(int *)(iVar7 + 0x10);
  piVar8[1] = 1;
  *(int *)(iVar7 + 0x10) = (int)piVar8;
  uVar13 = DAT_00100d80;
  iVar9 = piVar8[2];
  *(int *)(iVar7 + 0x18) = iVar9;
  *(int *)(iVar7 + 0x1c) = iVar9 + 0xc;
  *(int *)(iVar7 + 0x20) = iVar9;
  *(int *)(iVar7 + 0x18) = iVar9 + 0xc;
  *(int *)iVar9 = iVar9;
  uVar4 = DAT_00100d84;
  *(int *)(*(int *)(iVar7 + 0x20) + 4) = *(int *)(iVar7 + 0x20);
  *(undefined1 *)(iVar7 + 0x28) = 0;
  *(undefined4 *)(iVar7 + 0x2c) = 0x100;
  *(undefined4 *)(iVar7 + 0x30) = uVar3;
  *(undefined4 *)(iVar7 + 0x34) = 1;
  *(undefined4 *)(iVar7 + 0x38) = uVar13;
  *(undefined4 *)(iVar7 + 0x3c) = 0;
  *(undefined4 *)(iVar7 + 0x40) = 0;
  *(undefined4 *)(iVar7 + 0x44) = 0;
  *(undefined4 *)(iVar7 + 0x48) = 0;
  *(undefined4 *)(iVar7 + 0x4c) = 0;
  *(undefined4 *)(iVar7 + 0x50) = 0;
  *(undefined4 *)(iVar7 + 0x54) = 4;
  *(undefined4 *)(iVar7 + 0x58) = 4;
  *(undefined4 *)(iVar7 + 0x5c) = 0x5a;
  *(undefined4 *)(iVar7 + 0x60) = uVar4;
  *(undefined4 *)(iVar7 + 100) = 0;
  *(undefined4 *)(iVar7 + 0x74) = 0;
  *(undefined4 *)(iVar7 + 0x78) = 0;
  *(undefined1 *)(iVar7 + 0x7c) = 0;
  *(undefined1 *)(iVar7 + 0x7d) = 4;
  *(undefined4 *)(iVar7 + 0x70) = 0;
  *(undefined4 *)(iVar7 + 0x6c) = 0;
  *(undefined4 *)(iVar7 + 0x68) = 0;
  piVar8 = (int *)FUN_00173860(0xc,0);
  iVar9 = FUN_00173860(0x18,0);
  piVar8[2] = iVar9;
  *piVar8 = *(int *)(iVar7 + 100);
  piVar8[1] = 1;
  *(int *)(iVar7 + 100) = (int)piVar8;
  puVar10 = (undefined1 *)piVar8[2];
  *(undefined1 **)(iVar7 + 0x6c) = puVar10;
  *(undefined1 **)(iVar7 + 0x70) = puVar10 + 0x18;
  *(undefined1 **)(iVar7 + 0x6c) = puVar10 + 0x18;
  *(undefined4 *)(puVar10 + 8) = 0;
  *(undefined4 *)(puVar10 + 0xc) = 0;
  *puVar10 = 0;
  *(undefined1 **)(iVar7 + 0x74) = puVar10;
  *(undefined4 *)(puVar10 + 4) = 0;
  *(int *)(*(int *)(iVar7 + 0x74) + 8) = *(int *)(iVar7 + 0x74);
  *(int *)(*(int *)(iVar7 + 0x74) + 0xc) = *(int *)(iVar7 + 0x74);
  iVar7 = FUN_00238334(iVar7 + 0x80,auStack_40);
  *(undefined4 *)(iVar7 + 0x18) = uVar3;
  piVar15 = (int *)(iVar7 + 0x1c);
  *piVar15 = 0;
  *(undefined4 *)(iVar7 + 0x2c) = 0;
  *(undefined4 *)(iVar7 + 0x30) = 0;
  *(undefined1 *)(iVar7 + 0x34) = 0;
  *(char *)(iVar7 + 0x35) = (char)(char *)(iVar7 + 0x18);
  *(undefined4 *)(iVar7 + 0x28) = 0;
  *(undefined4 *)(iVar7 + 0x24) = 0;
  *(undefined4 *)(iVar7 + 0x20) = 0;
  piVar8 = (int *)FUN_00173860(0xc,0);
  iVar9 = FUN_00173860(0x18,0);
  piVar8[2] = iVar9;
  *piVar8 = *piVar15;
  piVar8[1] = 1;
  *piVar15 = (int)piVar8;
  puVar10 = (undefined1 *)piVar8[2];
  *(undefined1 **)(iVar7 + 0x24) = puVar10;
  *(undefined1 **)(iVar7 + 0x28) = puVar10 + 0x18;
  *(undefined1 **)(iVar7 + 0x24) = puVar10 + 0x18;
  *(undefined4 *)(puVar10 + 8) = 0;
  *(undefined4 *)(puVar10 + 0xc) = 0;
  *puVar10 = 0;
  *(undefined1 **)(iVar7 + 0x2c) = puVar10;
  *(undefined4 *)(puVar10 + 4) = 0;
  *(int *)(*(int *)(iVar7 + 0x2c) + 8) = *(int *)(iVar7 + 0x2c);
  iVar9 = *(int *)(iVar7 + 0x2c);
  *(int *)(iVar9 + 0xc) = iVar9;
  *(undefined4 *)(iVar7 + 0x38) = 0;
  *(undefined4 *)(iVar7 + 0x48) = 0;
  *(undefined4 *)(iVar7 + 0x4c) = 0;
  *(undefined1 *)(iVar7 + 0x50) = 0;
  *(char *)(iVar7 + 0x51) = (char)iVar9;
  *(undefined4 *)(iVar7 + 0x44) = 0;
  *(undefined4 *)(iVar7 + 0x40) = 0;
  *(undefined4 *)(iVar7 + 0x3c) = 0;
  iVar9 = FUN_00220234((undefined4 *)(iVar7 + 0x38));
  *(int *)(iVar7 + 0x48) = iVar9;
  *(undefined4 *)(iVar9 + 4) = 0;
  *(int *)(*(int *)(iVar7 + 0x48) + 8) = *(int *)(iVar7 + 0x48);
  iVar9 = *(int *)(iVar7 + 0x48);
  *(int *)(iVar9 + 0xc) = iVar9;
  *(undefined4 *)(iVar7 + 0x54) = 0;
  *(undefined4 *)(iVar7 + 100) = 0;
  *(undefined4 *)(iVar7 + 0x68) = 0;
  *(undefined1 *)(iVar7 + 0x6c) = 0;
  *(char *)(iVar7 + 0x6d) = (char)iVar9;
  *(undefined4 *)(iVar7 + 0x60) = 0;
  *(undefined4 *)(iVar7 + 0x5c) = 0;
  *(undefined4 *)(iVar7 + 0x58) = 0;
  piVar8 = (int *)FUN_00173860(0xc,0);
  iVar9 = FUN_00173860(0x68,0);
  piVar8[2] = iVar9;
  *piVar8 = *(int *)(iVar7 + 0x54);
  piVar8[1] = 1;
  *(int *)(iVar7 + 0x54) = (int)piVar8;
  puVar10 = (undefined1 *)piVar8[2];
  *(undefined1 **)(iVar7 + 0x5c) = puVar10;
  *(undefined1 **)(iVar7 + 0x60) = puVar10 + 0x68;
  *(undefined1 **)(iVar7 + 0x5c) = puVar10 + 0x68;
  *(undefined4 *)(puVar10 + 8) = 0;
  *(undefined4 *)(puVar10 + 0xc) = 0;
  *puVar10 = 0;
  *(undefined1 **)(iVar7 + 100) = puVar10;
  *(undefined4 *)(puVar10 + 4) = 0;
  *(int *)(*(int *)(iVar7 + 100) + 8) = *(int *)(iVar7 + 100);
  *(int *)(*(int *)(iVar7 + 100) + 0xc) = *(int *)(iVar7 + 100);
  *(undefined4 *)(iVar7 + 0x78) = 200;
  *(undefined4 *)(iVar7 + 0x74) = 0;
  *(undefined4 *)(iVar7 + 0x70) = 1;
  *(undefined4 *)(iVar7 + 0x84) = 0;
  *(undefined4 *)(iVar7 + 0x7c) = 200;
  *(undefined4 *)(iVar7 + 0x80) = 1;
  *(undefined1 *)(iVar7 + 0x88) = 1;
  *(undefined1 *)(iVar7 + 0x89) = 0;
  *(undefined1 *)(iVar7 + 0x8a) = 1;
  *(undefined1 *)(iVar7 + 0x8b) = 1;
  *(undefined1 *)(iVar7 + 0x8c) = 1;
  iVar7 = FUN_00232964(iVar7 + 0x90,s_192_168_1_100_00100d88,auStack_3c);
  iVar7 = FUN_00232964(iVar7 + 4,s_192_168_1_100_00100d88,auStack_38);
  iVar7 = FUN_00232964(iVar7 + 4,s_255_255_255_0_00100d98,auStack_34);
  iVar7 = FUN_00232964(iVar7 + 4,s_255_255_255_0_00100d98,auStack_30);
  iVar7 = FUN_00232964(iVar7 + 4,s_192_168_1_1_00100da8,auStack_50);
  iVar7 = FUN_00232964(iVar7 + 4,s_192_168_1_1_00100da8,auStack_4c);
  *(undefined4 *)(iVar7 + 4) = uVar3;
  *(undefined4 *)(iVar7 + 8) = uVar3;
  *(undefined1 *)(iVar7 + 0xc) = 0;
  *(undefined1 *)(iVar7 + 0xd) = 2;
  *(undefined1 *)(iVar7 + 0xe) = 0x10;
  iVar7 = FUN_00232964(iVar7 + 0x10,s_239_255_255_255_0010106c,auStack_2c);
  iVar16 = iVar7 + -600;
  *(short *)(iVar7 + 4) = (short)DAT_0010107c;
  *(undefined2 *)(iVar7 + 6) = 0xe10;
  *(undefined1 *)(iVar7 + 8) = 0;
  *(undefined1 *)(iVar7 + 9) = 0;
  *(undefined4 *)(iVar7 + 0xc) = 0;
  *(undefined4 *)(iVar7 + 0x1c) = 0;
  *(undefined4 *)(iVar7 + 0x20) = 0;
  *(undefined1 *)(iVar7 + 0x24) = 0;
  *(char *)(iVar7 + 0x25) = (char)iVar7 + -0x58;
  *(undefined4 *)(iVar7 + 0x18) = 0;
  *(undefined4 *)(iVar7 + 0x14) = 0;
  *(undefined4 *)(iVar7 + 0x10) = 0;
  piVar8 = (int *)FUN_00173860(0xc,0);
  iVar9 = FUN_00173860(0x14,0);
  piVar8[2] = iVar9;
  *piVar8 = *(int *)(iVar7 + 0xc);
  piVar8[1] = 1;
  *(int *)(iVar7 + 0xc) = (int)piVar8;
  puVar10 = (undefined1 *)piVar8[2];
  *(undefined1 **)(iVar7 + 0x14) = puVar10;
  *(undefined1 **)(iVar7 + 0x18) = puVar10 + 0x14;
  *(undefined1 **)(iVar7 + 0x14) = puVar10 + 0x14;
  *(undefined4 *)(puVar10 + 8) = 0;
  *(undefined4 *)(puVar10 + 0xc) = 0;
  *puVar10 = 0;
  *(undefined1 **)(iVar7 + 0x1c) = puVar10;
  *(undefined4 *)(puVar10 + 4) = 0;
  *(int *)(*(int *)(iVar7 + 0x1c) + 8) = *(int *)(iVar7 + 0x1c);
  *(int *)(*(int *)(iVar7 + 0x1c) + 0xc) = *(int *)(iVar7 + 0x1c);
  *(undefined1 *)(iVar7 + 0x34) = 0;
  *(undefined1 *)(iVar7 + 0x35) = 0;
  *(undefined4 *)(iVar7 + 0x28) = 0;
  *(undefined4 *)(iVar7 + 0x2c) = 0;
  *(undefined4 *)(iVar7 + 0x30) = 0;
  uVar13 = s____iI_Archwave_uRec_00100d6a._2_4_;
  s____iI_Archwave_uRec_00100d6a[2] = (char)uVar3;
  s____iI_Archwave_uRec_00100d6a[3] = SUB41(uVar3,1);
  s____iI_Archwave_uRec_00100d6a[4] = SUB41(uVar3,2);
  s____iI_Archwave_uRec_00100d6a[5] = SUB41(uVar3,3);
  local_58._0_1_ = s____iI_Archwave_uRec_00100d6a[2];
  local_58._1_1_ = s____iI_Archwave_uRec_00100d6a[3];
  local_58._2_1_ = s____iI_Archwave_uRec_00100d6a[4];
  local_58._3_1_ = s____iI_Archwave_uRec_00100d6a[5];
  s____iI_Archwave_uRec_00100d6a._2_4_ = uVar13;
  iVar9 = FUN_001ee438(&DAT_00101080);
  if (iVar9 == 0) {
    FUN_00002898(s_ERROR__RavennaConfiguration__Cou_001010b8);
  }
  else {
    local_100 = (uint)*(byte *)(iVar9 + 0x35);
    local_fc = (uint)*(byte *)(iVar9 + 0x36);
    local_f4 = (uint)*(byte *)(iVar9 + 0x38);
    local_f8 = (uint)*(byte *)(iVar9 + 0x37);
    FUN_000028cc(auStack_78,s__02X__02X__02X__02X__02X__02X_00101084,*(undefined1 *)(iVar9 + 0x33),
                 *(undefined1 *)(iVar9 + 0x34));
    FUN_002329fc(iVar7 + -0x140,auStack_78);
    local_100 = (uint)*(byte *)(iVar9 + 0x38);
    FUN_000028cc(auStack_78,s___02X__02X__02X__001010a4,*(undefined1 *)(iVar9 + 0x36),
                 *(undefined1 *)(iVar9 + 0x37));
    FUN_002329fc(iVar7 + -0x13c,auStack_78);
    FUN_002329fc(iVar7 + -0x138,*(undefined4 *)(iVar9 + 0x2c));
    FUN_00232a4c(iVar7 + -0x134,iVar7 + -0x138);
  }
  local_90 = 1;
  local_8c = 2;
  local_8f = 1;
  local_8b = 2;
  local_88 = 0;
  local_8e = 0;
  local_8a = 0;
  local_87 = 1;
  local_8d = 2;
  local_89 = 0;
  local_86 = '\x01';
  local_84 = 2;
  local_80 = 0;
  FUN_00098290(&local_90);
  if (local_86 == '\x03') {
    pcVar17 = s__cfg_AppSettings_BridgeStreaming_001010f0;
  }
  else {
    pcVar17 = s__cfg_AppSettings_RavennaConfigur_00101128;
  }
  iVar9 = FUN_000466b0(pcVar17,iVar7 + -0x144);
  if (iVar9 == 0) {
    FUN_00002898(s_ERROR__RavennaConfiguration__Cou_00101b28,pcVar17);
    goto LAB_00101944;
  }
  iVar9 = FUN_00048bd4(*(undefined4 *)(iVar7 + -0x144),s_ValidSamplingRates_00101150,&local_58);
  if (iVar9 == 0) {
    FUN_00002898(s_ERROR__RavennaConfiguration__Cou_00101538,s_ValidSamplingRates_00101150);
  }
  else if (*(uint *)(local_58 + -4) < 0x40) {
    if (*(int *)(iVar7 + -0x130) != *(int *)(iVar7 + -300)) {
      *(int *)(iVar7 + -300) = *(int *)(iVar7 + -0x130);
    }
    FUN_000036d4(auStack_d0);
    iVar9 = FUN_000035c4(auStack_d0,&DAT_00101164);
    while (iVar9 != 0) {
      uVar21 = FUN_00002fec(iVar9,&DAT_00101168,local_e0);
      iVar9 = (int)uVar21;
      bVar20 = iVar9 != 0;
      pcVar17 = (char *)0x1;
      if (iVar9 != 1) {
        bVar20 = (char *)0x6 < local_e0[0];
        pcVar17 = local_e0[0];
      }
      if (bVar20 && (iVar9 != 1 && pcVar17 != (char *)0x7)) {
        uVar13 = DAT_0010116c;
        pcVar17 = s_ValidSamplingRates_00101150;
LAB_001012c4:
        FUN_00002898(uVar13,pcVar17);
      }
      else {
        iVar9 = FUN_00090db8(local_e0[0],(int)((ulonglong)uVar21 >> 0x20));
        uVar13 = DAT_00101170;
        pcVar17 = local_e0[0];
        if (iVar9 == 0xff) goto LAB_001012c4;
        puVar10 = *(undefined1 **)(iVar7 + -300);
        uVar5 = SUB41(local_e0[0],0);
        piVar8 = (int *)(iVar7 + -0x130);
        if (puVar10 == *(undefined1 **)(iVar7 + -0x128)) {
          uVar19 = (int)puVar10 - *piVar8;
          if (uVar19 < (uint)((int)*(undefined1 **)(iVar7 + -0x128) - *piVar8)) {
            *(undefined1 **)(iVar7 + -300) = puVar10 + 1;
            if (puVar10 != (undefined1 *)0x0) {
              *puVar10 = puVar10[-1];
            }
            puVar11 = puVar10 + -1;
            uVar19 = (int)puVar11 - (int)puVar10;
            if (0 < (int)uVar19) {
              puVar18 = puVar10;
              if ((uVar19 & 1) != 0) {
                puVar11 = puVar10 + -2;
                puVar18 = puVar10 + -1;
                *puVar18 = *puVar11;
              }
              for (iVar9 = (int)uVar19 >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
                puVar18[-1] = puVar11[-1];
                puVar11 = puVar11 + -2;
                puVar18 = puVar18 + -2;
                *puVar18 = *puVar11;
              }
            }
            *puVar10 = uVar5;
          }
          else {
            local_e4 = uVar19 + (uVar19 >> 1) + (uVar19 >> 3);
            if (local_e4 < uVar19 + 1) {
              local_e4 = uVar19 + 1;
            }
            puVar12 = (undefined1 *)FUN_00173860(local_e4,0);
            puVar18 = puVar12;
            for (puVar11 = (undefined1 *)*piVar8; puVar11 != puVar10; puVar11 = puVar11 + 1) {
              if (puVar18 != (undefined1 *)0x0) {
                *puVar18 = *puVar11;
              }
              puVar18 = puVar18 + 1;
            }
            if (puVar12 + ((int)puVar10 - *piVar8) != (undefined1 *)0x0) {
              puVar12[(int)puVar10 - *piVar8] = uVar5;
            }
            puVar18 = *(undefined1 **)(iVar7 + -300);
            puVar11 = puVar12 + ((int)puVar10 - *piVar8);
            for (; puVar10 != puVar18; puVar10 = puVar10 + 1) {
              puVar11 = puVar11 + 1;
              if (puVar11 != (undefined1 *)0x0) {
                *puVar11 = *puVar10;
              }
            }
            iVar9 = *piVar8;
            iVar14 = *(int *)(iVar7 + -300);
            FUN_00173a54(iVar9,*(int *)(iVar7 + -0x128) - iVar9,0);
            *(undefined1 **)(iVar7 + -0x128) = puVar12 + local_e4;
            *(undefined1 **)(iVar7 + -300) = puVar12 + (iVar14 - iVar9) + 1;
            *piVar8 = (int)puVar12;
          }
        }
        else {
          *(undefined1 **)(iVar7 + -300) = puVar10 + 1;
          if (puVar10 != (undefined1 *)0x0) {
            *puVar10 = uVar5;
          }
        }
      }
      iVar9 = FUN_000035c4(0,&DAT_00101164);
    }
  }
  iVar9 = FUN_00049674(*(undefined4 *)(iVar7 + -0x144),s_User_SyntonizedMode_0010156c,iVar7 + -0x10c
                      );
  if (iVar9 == 0) {
    FUN_00002898(s_ERROR__RavennaConfiguration__Cou_00101538,s_User_SyntonizedMode_0010156c);
  }
  iVar9 = FUN_0004febc(*(undefined4 *)(iVar7 + -0x144),s_User_PlayoutDelay_00101580,iVar7 + -0x108);
  if (iVar9 == 0) {
    FUN_00002898(s_ERROR__RavennaConfiguration__Cou_00101538,s_User_PlayoutDelay_00101580);
  }
  iVar9 = FUN_0004febc(*(undefined4 *)(iVar7 + -0x144),s_PlayoutDelayMin_00101594,iVar7 + -0x100);
  if (iVar9 == 0) {
    FUN_00002898(s_ERROR__RavennaConfiguration__Cou_00101538,s_PlayoutDelayMin_00101594);
  }
  iVar9 = FUN_0004febc(*(undefined4 *)(iVar7 + -0x144),s_PlayoutDelayMax_001015a4,iVar7 + -0xfc);
  if (iVar9 == 0) {
    FUN_00002898(s_ERROR__RavennaConfiguration__Cou_00101538,s_PlayoutDelayMax_001015a4);
  }
  if (*(uint *)(iVar7 + -0xfc) <= *(uint *)(iVar7 + -0x100)) {
    local_100 = *(uint *)(iVar7 + -0xfc);
    FUN_00002898(s_ERROR__RavennaConfiguration____s_001015b4,s_PlayoutDelayMin_00101594,
                 *(uint *)(iVar7 + -0x100),s_PlayoutDelayMax_001015a4);
    *(undefined4 *)(iVar7 + -0xfc) = DAT_001015ec;
    *(undefined4 *)(iVar7 + -0x100) = 1;
  }
  FUN_000ffef8(iVar16);
  iVar9 = FUN_00049830(*(undefined4 *)(iVar7 + -0x144),s_InputDelay1xFS_001015f0,iVar7 + -0xf8);
  if (iVar9 == 0) {
    FUN_00002898(s_ERROR__RavennaConfiguration__Cou_00101538,s_InputDelay1xFS_001015f0);
  }
  iVar9 = FUN_00049830(*(undefined4 *)(iVar7 + -0x144),s_InputDelay2xFS_00101600,iVar7 + -0xf4);
  if (iVar9 == 0) {
    FUN_00002898(s_ERROR__RavennaConfiguration__Cou_00101538,s_InputDelay2xFS_00101600);
  }
  iVar9 = FUN_00049830(*(undefined4 *)(iVar7 + -0x144),s_InputDelay4xFS_00101610,iVar7 + -0xf0);
  if (iVar9 == 0) {
    FUN_00002898(s_ERROR__RavennaConfiguration__Cou_00101538,s_InputDelay4xFS_00101610);
  }
  iVar9 = FUN_00049830(*(undefined4 *)(iVar7 + -0x144),s_OutputDelay1xFS_00101620,iVar7 + -0xec);
  if (iVar9 == 0) {
    FUN_00002898(s_ERROR__RavennaConfiguration__Cou_00101538,s_OutputDelay1xFS_00101620);
  }
  iVar9 = FUN_00049830(*(undefined4 *)(iVar7 + -0x144),s_OutputDelay2xFS_00101630,iVar7 + -0xe8);
  if (iVar9 == 0) {
    FUN_00002898(s_ERROR__RavennaConfiguration__Cou_00101538,s_OutputDelay2xFS_00101630);
  }
  iVar9 = FUN_00049830(*(undefined4 *)(iVar7 + -0x144),s_OutputDelay4xFS_00101640,iVar7 + -0xe4);
  if (iVar9 == 0) {
    FUN_00002898(s_ERROR__RavennaConfiguration__Cou_00101538,s_OutputDelay4xFS_00101640);
  }
  iVar9 = FUN_0004febc(*(undefined4 *)(iVar7 + -0x144),s_MaxNoOfEncoders_00101650,iVar7 + -0xe0);
  if (iVar9 == 0) {
    FUN_00002898(s_ERROR__RavennaConfiguration__Cou_00101538,s_MaxNoOfEncoders_00101650);
  }
  iVar9 = FUN_0004febc(*(undefined4 *)(iVar7 + -0x144),s_MaxNoOfDecoders_00101660,iVar7 + -0xdc);
  if (iVar9 == 0) {
    FUN_00002898(s_ERROR__RavennaConfiguration__Cou_00101538,s_MaxNoOfDecoders_00101660);
  }
  iVar9 = FUN_0004febc(*(undefined4 *)(iVar7 + -0x144),s_MaxCPULoad_00101670,iVar7 + -0xd8);
  if (iVar9 == 0) {
    FUN_00002898(s_ERROR__RavennaConfiguration__Cou_00101538,s_MaxCPULoad_00101670);
  }
  iVar9 = FUN_0004febc(*(undefined4 *)(iVar7 + -0x144),s_MeasurementIntervalCPULoad_0010167c,
                       iVar7 + -0xd4);
  if (iVar9 == 0) {
    FUN_00002898(s_ERROR__RavennaConfiguration__Cou_00101538,s_MeasurementIntervalCPULoad_0010167c);
  }
  FUN_0010041c(iVar16);
  FUN_00100690(iVar16);
  FUN_000fdad8(iVar16);
  FUN_000fce38(iVar16);
  FUN_000fc548(iVar16);
  iVar9 = FUN_0004febc(*(undefined4 *)(iVar7 + -0x144),s_User_AudioMode_00101a48,iVar7 + -0x44);
  if (iVar9 == 0) {
    FUN_00002898(s_ERROR__RavennaConfiguration__Cou_00101538,s_User_AudioMode_00101a48);
  }
  iVar9 = FUN_0004febc(*(undefined4 *)(iVar7 + -0x144),s_User_SampleSize_00101a58,&local_54);
  if (iVar9 == 0) {
    FUN_00002898(s_ERROR__RavennaConfiguration__Cou_00101538,s_User_SampleSize_00101a58);
  }
  else {
    *(char *)(iVar7 + -2) = (char)local_54;
  }
  uVar13 = s____iI_Archwave_uRec_00100d6a._2_4_;
  s____iI_Archwave_uRec_00100d6a[2] = (char)uVar3;
  s____iI_Archwave_uRec_00100d6a[3] = SUB41(uVar3,1);
  s____iI_Archwave_uRec_00100d6a[4] = SUB41(uVar3,2);
  s____iI_Archwave_uRec_00100d6a[5] = SUB41(uVar3,3);
  local_d8[0]._0_1_ = s____iI_Archwave_uRec_00100d6a[2];
  local_d8[0]._1_1_ = s____iI_Archwave_uRec_00100d6a[3];
  local_d8[0]._2_1_ = s____iI_Archwave_uRec_00100d6a[4];
  local_d8[0]._3_1_ = s____iI_Archwave_uRec_00100d6a[5];
  s____iI_Archwave_uRec_00100d6a._2_4_ = uVar13;
  iVar9 = FUN_00048bd4(*(undefined4 *)(iVar7 + -0x144),s_SupportedEncodings_00101a68,local_d8);
  puVar6 = DAT_00101a7c;
  if (iVar9 == 0) {
    FUN_00002898(s_ERROR__RavennaConfiguration__Cou_00101538,s_SupportedEncodings_00101a68);
  }
  else {
    uVar19 = 0;
    while (uVar19 <= *(uint *)(local_d8[0] + -4)) {
      iVar9 = FUN_00003630(local_d8[0] + uVar19,&DAT_00101a80);
      if ((iVar9 == 0) || (iVar9 = iVar9 - local_d8[0], iVar9 == -1)) break;
      if (1 < *(int *)(local_d8[0] + -0xc) + 1U) {
        iVar14 = FUN_002328a0(local_d8,*(undefined4 *)(local_d8[0] + -4),
                              *(undefined4 *)(local_d8[0] + -4));
        FUN_000039e0(iVar14 + 0xc,local_d8[0],*(undefined4 *)(local_d8[0] + -4));
        FUN_00232920(local_d8);
        local_d8[0] = iVar14 + 0xc;
      }
      if ((undefined4 *)(local_d8[0] + -0xc) != puVar6) {
        *(undefined4 *)(local_d8[0] + -0xc) = 0xffffffff;
      }
      *(undefined1 *)(local_d8[0] + iVar9) = 0;
      iVar14 = FUN_0003f180(local_d8[0] + uVar19);
      local_e0[0] = (char *)CONCAT31(local_e0[0]._1_3_,(char)iVar14);
      if (iVar14 != 4) {
        FUN_002345b4(iVar7 + -0x124,local_e0);
      }
      uVar19 = iVar9 + 1;
    }
    iVar9 = FUN_0003f180(local_d8[0] + uVar19);
    local_e4 = CONCAT31(local_e4._1_3_,(char)iVar9);
    if (iVar9 != 4) {
      FUN_002345b4(iVar7 + -0x124,&local_e4);
    }
  }
  if (*(int *)(iVar7 + -0x110) == 0) {
    FUN_00002898(s_ERROR__RavennaConfiguration__Add_00101a84);
    local_100._0_1_ = 1;
    FUN_002345b4(iVar7 + -0x124,&local_100);
    local_100 = (uint)local_100._1_3_ << 8;
    FUN_002345b4(iVar7 + -0x124,&local_100);
  }
  FUN_00232920(local_d8);
  piVar15 = *(int **)(iVar7 + -0x114);
  bVar20 = false;
  piVar8 = (int *)*piVar15;
  if (piVar8 == piVar15) {
LAB_001018b8:
    cVar1 = *(char *)(*piVar15 + 8);
    if (cVar1 == '\0') {
      uVar5 = 0x10;
LAB_001018f0:
      *(undefined1 *)(iVar7 + -2) = uVar5;
    }
    else {
      if (cVar1 == '\x01') {
LAB_001018ec:
        uVar5 = 0x18;
        goto LAB_001018f0;
      }
      if (cVar1 == '\x02') {
        *(undefined1 *)(iVar7 + -2) = 0x20;
      }
      else if (cVar1 == '\x03') goto LAB_001018ec;
    }
    iVar9 = FUN_0004ffa4(*(undefined4 *)(iVar7 + -0x144),s_User_SampleSize_00101a58,
                         *(undefined1 *)(iVar7 + -2));
    if (iVar9 == 0) {
      FUN_00002898(s_ERROR__RavennaConfiguration__Cou_00101abc,s_User_SampleSize_00101a58,
                   *(undefined1 *)(iVar7 + -2));
    }
  }
  else {
    cVar1 = *(char *)(iVar7 + -2);
    do {
      cVar2 = (char)piVar8[2];
      if (cVar1 == '\x10') {
        if (cVar2 == '\0') goto LAB_001018a0;
      }
      else if (cVar1 == '\x18') {
        if ((cVar2 == '\x01') || (cVar2 == '\x03')) goto LAB_001018a0;
      }
      else if (cVar1 == ' ' && cVar2 == '\x02') {
LAB_001018a0:
        bVar20 = true;
      }
      piVar8 = (int *)*piVar8;
    } while (piVar8 != piVar15);
    if (!bVar20) goto LAB_001018b8;
  }
  iVar9 = FUN_0022db14(iVar7 + -0x60,iVar7 + -0x44);
  if (iVar9 == 0) {
    thunk_FUN_00002898(s_ERROR__RavennaConfiguration__Inv_00101af4);
  }
LAB_00101944:
  iVar9 = FUN_000466b0(s__cfg_Networking_IpCfg_Config0_00101b5c,&local_7c);
  if (iVar9 == 0) {
    FUN_00002898(s_ERROR__RavennaConfiguration__Cou_00101b28,
                 s__cfg_Networking_IpCfg_Config0_00101b5c);
  }
  else {
    local_100 = 1;
    iVar9 = FUN_00049830(local_7c,s_DHCPClient_00101b7c,&local_100);
    if (iVar9 == 0) {
      FUN_00002898(DAT_00101b88,s_DHCPClient_00101b7c);
    }
    if (local_100 == 1) {
      *(undefined1 *)(iVar7 + -0x28) = 1;
      *(undefined1 *)(iVar7 + -0x2a) = 1;
    }
    else {
      if (local_100 == 0xffffffff) {
        *(undefined1 *)(iVar7 + -0x28) = 1;
      }
      else {
        *(undefined1 *)(iVar7 + -0x28) = 0;
      }
      *(undefined1 *)(iVar7 + -0x2a) = 0;
    }
    *(undefined1 *)(iVar7 + -0x29) = *(undefined1 *)(iVar7 + -0x2a);
    iVar9 = FUN_00048bd4(local_7c,&DAT_00101b8c,iVar7 + -0x24);
    if (iVar9 == 0) {
      FUN_00002898(DAT_00101b88,&DAT_00101b8c);
    }
    FUN_00232a4c(iVar7 + -0x20,iVar7 + -0x24);
    iVar9 = FUN_00048bd4(local_7c,&DAT_00101b90,iVar7 + -0x1c);
    if (iVar9 == 0) {
      FUN_00002898(DAT_00101b88,&DAT_00101b90);
    }
    FUN_00232a4c(iVar7 + -0x18,iVar7 + -0x1c);
    iVar9 = FUN_00048bd4(local_7c,s_DefGW_00101b98,iVar7 + -0x14);
    if (iVar9 == 0) {
      FUN_00002898(DAT_00101b88,s_DefGW_00101b98);
    }
    FUN_00232a4c(iVar7 + -0x10,iVar7 + -0x14);
    iVar9 = FUN_00048bd4(local_7c,s_DNSSrv1_00101ba0,iVar7 + -0xc);
    if (iVar9 == 0) {
      FUN_00002898(DAT_00101b88,s_DNSSrv1_00101ba0);
    }
    iVar9 = FUN_00048bd4(local_7c,s_DNSSrv2_00101c7c,iVar7 + -8);
    if (iVar9 == 0) {
      FUN_00002898(DAT_00101b88,s_DNSSrv2_00101c7c);
    }
    FUN_00046b8c(local_7c);
  }
  iVar9 = FUN_000466b0(s__cfg_AppSettings_Global_00101c84,&local_7c);
  if (iVar9 == 0) {
    FUN_00002898(s_ERROR__RavennaConfiguration__Cou_00101b28,s__cfg_AppSettings_Global_00101c84);
  }
  else {
    iVar9 = FUN_0004febc(local_7c,s_SampleRate_00101c9c,&local_54);
    if (iVar9 == 0) {
      FUN_00002898(DAT_00101b88,s_SampleRate_00101c9c);
    }
    else {
      *(undefined1 *)(iVar7 + -3) = (undefined1)local_54;
    }
    FUN_00046b8c(local_7c);
  }
  FUN_000fef1c(iVar16);
  FUN_0006f678(iVar16);
  FUN_00232920(&local_58);
  return iVar16;
}

