// rea decompile_all
// name: FUN_0055a260
// address: 0x55a260
// body: available
// range: 0x55a260-0x55bbd9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055a260(void)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *piVar12;
  uint *puVar13;
  undefined4 uVar14;
  int in_ECX;
  undefined4 uVar15;
  uint uVar16;
  char *pcVar17;
  bool bVar18;
  longlong lVar19;
  longlong lVar20;
  char *pcVar21;
  undefined1 local_414 [8];
  int local_40c;
  undefined1 local_3fc [8];
  int local_3f4;
  undefined1 local_3e4 [8];
  int local_3dc;
  undefined1 local_3cc [8];
  int local_3c4;
  undefined1 local_3b4 [8];
  int local_3ac;
  undefined1 local_39c [8];
  int local_394;
  int local_384;
  int local_380;
  int local_37c;
  int local_378;
  int local_374;
  int local_370;
  int local_36c;
  int local_368;
  int local_364;
  int local_360;
  int local_35c;
  int local_358;
  int local_354;
  int local_350;
  int local_34c;
  int local_348;
  int local_344;
  int local_340;
  int local_33c;
  int local_338;
  int local_334;
  int local_330;
  int local_32c;
  int local_328;
  int local_324;
  int local_320;
  int local_31c;
  int local_318;
  int local_314;
  int local_310;
  int local_30c;
  int local_308;
  int local_304;
  int local_300;
  int local_2fc;
  char *local_2f8;
  int local_2f4;
  char *local_2f0;
  int local_2ec;
  int local_2e8;
  int local_2e4;
  int local_2e0;
  int *local_2dc;
  int *local_2d8;
  char *local_2d4;
  char *local_2d0;
  char *local_2cc;
  char *local_2c8;
  char *local_2c4;
  int *local_2c0;
  int *local_2bc;
  char *local_2b8;
  char *local_2b4;
  char *local_2b0;
  int local_2ac;
  int local_2a8;
  int local_2a4;
  int local_2a0;
  int local_29c;
  int local_298;
  int local_294;
  int local_290;
  int local_28c;
  int local_288;
  undefined8 local_284;
  char *local_278;
  int local_274;
  int *local_270;
  undefined8 local_26c;
  char *local_260;
  int local_25c;
  int local_258;
  int local_254;
  int local_250;
  int *local_24c;
  int local_248;
  int local_244;
  int local_240;
  int local_23c;
  int local_238;
  int *local_234;
  int *local_230;
  int local_22c;
  int local_228;
  int local_224;
  int local_220;
  int local_21c;
  int local_218;
  int local_214;
  int *local_210;
  undefined8 local_20c;
  int local_200;
  int local_1fc;
  int local_1f8;
  int *local_1f4;
  int local_1f0;
  char *local_1ec;
  int local_1e8;
  int local_1e4;
  int *local_1e0;
  undefined4 *local_1dc;
  int local_1d8;
  undefined4 *local_1d4;
  int local_1d0;
  undefined1 local_1ad [32];
  undefined1 local_18d [31];
  char local_16e [5];
  undefined1 auStack_169 [31];
  char local_14a;
  undefined1 local_149;
  undefined1 local_125 [32];
  undefined1 local_105 [32];
  undefined1 local_e5 [32];
  undefined1 local_c5 [32];
  undefined1 local_a5 [30];
  char acStack_87 [36];
  char local_63 [36];
  char local_3f [36];
  char local_1b [6];
  undefined1 uStack_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071197e;
  local_10 = ExceptionList;
  uVar6 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1e4 = in_ECX;
  local_14 = uVar6;
  local_1d4 = operator_new(0x10);
  local_8 = 0;
  puVar11 = local_1d4 + 3;
  *local_1d4 = 0;
  pcVar21 = "song_settings";
  local_1d4[1] = 0;
  local_1d4[2] = 0;
  FUN_0061f730(puVar11,"song_settings",uVar6);
  FUN_0061fa00(puVar11,pcVar21);
  local_8 = 0xffffffff;
  iVar7 = FUN_00634c10("version");
  iVar8 = FUN_0061a340();
  if (iVar8 != 0) {
    piVar12 = (int *)(iVar7 + 4);
    iVar7 = *(int *)(iVar7 + 4);
    while (iVar7 != 0) {
      piVar12 = (int *)*piVar12;
      iVar7 = *piVar12;
    }
    *piVar12 = iVar8;
  }
  FUN_00633ba0(*(undefined4 *)(in_ECX + 0x20),*(undefined4 *)(in_ECX + 0x24));
  local_8 = 1;
  iVar7 = FUN_00634c10("timestamp");
  iVar8 = FUN_0061a340();
  if (iVar8 != 0) {
    piVar12 = (int *)(iVar7 + 4);
    iVar7 = *(int *)(iVar7 + 4);
    while (iVar7 != 0) {
      piVar12 = (int *)*piVar12;
      iVar7 = *piVar12;
    }
    *piVar12 = iVar8;
  }
  local_8 = 0xffffffff;
  local_2f4 = local_258;
  local_324 = local_258;
  piVar12 = (int *)(local_258 + -8);
  if (piVar12 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar12;
    *piVar12 = *piVar12 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar12);
    }
  }
  iVar7 = FUN_00634c10("creator");
  iVar8 = FUN_0061a340();
  if (iVar8 != 0) {
    piVar12 = (int *)(iVar7 + 4);
    iVar7 = *(int *)(iVar7 + 4);
    while (iVar7 != 0) {
      piVar12 = (int *)*piVar12;
      iVar7 = *piVar12;
    }
    *piVar12 = iVar8;
  }
  FUN_005bcea0();
  local_8 = 2;
  iVar7 = FUN_00634c10("target_device");
  iVar8 = FUN_0061a340();
  if (iVar8 != 0) {
    piVar12 = (int *)(iVar7 + 4);
    iVar7 = *(int *)(iVar7 + 4);
    while (iVar7 != 0) {
      piVar12 = (int *)*piVar12;
      iVar7 = *piVar12;
    }
    *piVar12 = iVar8;
  }
  local_8 = 0xffffffff;
  local_34c = local_250;
  local_350 = local_250;
  piVar12 = (int *)(local_250 + -8);
  if (piVar12 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar12;
    *piVar12 = *piVar12 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar12);
    }
  }
  iVar7 = FUN_00634c10("song_name");
  iVar8 = FUN_0061a340();
  if (iVar8 != 0) {
    piVar12 = (int *)(iVar7 + 4);
    iVar7 = *(int *)(iVar7 + 4);
    while (iVar7 != 0) {
      piVar12 = (int *)*piVar12;
      iVar7 = *piVar12;
    }
    *piVar12 = iVar8;
  }
  if (**(char **)(in_ECX + 0x98) != '\0') {
    iVar7 = FUN_00634c10("validationcode");
    iVar8 = FUN_0061a340();
    if (iVar8 != 0) {
      piVar12 = (int *)(iVar7 + 4);
      iVar7 = *(int *)(iVar7 + 4);
      while (iVar7 != 0) {
        piVar12 = (int *)*piVar12;
        iVar7 = *piVar12;
      }
      *piVar12 = iVar8;
    }
  }
  if (0 < *(int *)(in_ECX + 0x2c)) {
    FUN_005bd550();
    local_8 = 3;
    iVar7 = FUN_00634c10("sync_device");
    iVar8 = FUN_0061a340();
    if (iVar8 != 0) {
      piVar12 = (int *)(iVar7 + 4);
      iVar7 = *(int *)(iVar7 + 4);
      while (iVar7 != 0) {
        piVar12 = (int *)*piVar12;
        iVar7 = *piVar12;
      }
      *piVar12 = iVar8;
    }
    local_358 = local_25c;
    local_35c = local_25c;
    piVar12 = (int *)(local_25c + -8);
    if (piVar12 != &DAT_00bfe124) {
      LOCK();
      iVar7 = *piVar12;
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (iVar7 == 0) {
        FID_conflict__free(piVar12);
      }
    }
  }
  iVar7 = *(int *)(in_ECX + 0x18);
  piVar12 = (int *)(iVar7 + -8);
  if (piVar12 != &DAT_00bfe124) {
    LOCK();
    *piVar12 = *piVar12 + 1;
    UNLOCK();
  }
  local_8 = 4;
  local_364 = iVar7;
  local_360 = iVar7;
  local_274 = iVar7;
  iVar8 = FUN_00634c10("playback_type");
  iVar9 = FUN_0061a340();
  if (iVar9 != 0) {
    piVar10 = (int *)(iVar8 + 4);
    iVar8 = *(int *)(iVar8 + 4);
    while (iVar8 != 0) {
      piVar10 = (int *)*piVar10;
      iVar8 = *piVar10;
    }
    *piVar10 = iVar9;
  }
  local_8 = 0xffffffff;
  local_36c = iVar7;
  local_368 = iVar7;
  if (piVar12 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar12;
    *piVar12 = *piVar12 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar12);
    }
  }
  iVar7 = local_1e4;
  if (*(int *)(local_1e4 + 100) < 0) {
    iVar8 = FUN_006104a0();
    *(undefined1 *)(iVar8 + -1) = 0x2d;
    iVar8 = iVar8 + -1;
  }
  else {
    iVar8 = FUN_006104a0();
  }
  FUN_004557e0(local_a5 + -iVar8);
  puVar11 = local_1d4;
  local_8 = 5;
  iVar8 = FUN_00634c10("channel_count");
  iVar9 = FUN_0061a340();
  if (iVar9 != 0) {
    piVar12 = (int *)(iVar8 + 4);
    iVar8 = *(int *)(iVar8 + 4);
    while (iVar8 != 0) {
      piVar12 = (int *)*piVar12;
      iVar8 = *piVar12;
    }
    *piVar12 = iVar9;
  }
  local_8 = 0xffffffff;
  local_370 = local_248;
  local_374 = local_248;
  piVar12 = (int *)(local_248 + -8);
  if (piVar12 != &DAT_00bfe124) {
    LOCK();
    iVar8 = *piVar12;
    *piVar12 = *piVar12 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      FID_conflict__free(piVar12);
    }
  }
  if (*(int *)(iVar7 + 0x38) < 0) {
    iVar8 = FUN_006104a0();
    *(undefined1 *)(iVar8 + -1) = 0x2d;
    iVar8 = iVar8 + -1;
  }
  else {
    iVar8 = FUN_006104a0();
  }
  FUN_004557e0(local_c5 + -iVar8);
  local_8 = 6;
  iVar8 = FUN_00634c10("sampling_rate");
  iVar9 = FUN_0061a340();
  if (iVar9 != 0) {
    piVar12 = (int *)(iVar8 + 4);
    iVar8 = *(int *)(iVar8 + 4);
    while (iVar8 != 0) {
      piVar12 = (int *)*piVar12;
      iVar8 = *piVar12;
    }
    *piVar12 = iVar9;
  }
  local_8 = 0xffffffff;
  local_378 = local_214;
  local_37c = local_214;
  piVar12 = (int *)(local_214 + -8);
  if (piVar12 != &DAT_00bfe124) {
    LOCK();
    iVar8 = *piVar12;
    *piVar12 = *piVar12 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      FID_conflict__free(piVar12);
    }
  }
  if (*(int *)(iVar7 + 0x3c) < 0) {
    iVar8 = FUN_006104a0();
    *(undefined1 *)(iVar8 + -1) = 0x2d;
    iVar8 = iVar8 + -1;
  }
  else {
    iVar8 = FUN_006104a0();
  }
  FUN_004557e0(local_e5 + -iVar8);
  local_8 = 7;
  iVar8 = FUN_00634c10("resolution");
  iVar9 = FUN_0061a340();
  if (iVar9 != 0) {
    piVar12 = (int *)(iVar8 + 4);
    iVar8 = *(int *)(iVar8 + 4);
    while (iVar8 != 0) {
      piVar12 = (int *)*piVar12;
      iVar8 = *piVar12;
    }
    *piVar12 = iVar9;
  }
  local_8 = 0xffffffff;
  local_380 = local_218;
  local_384 = local_218;
  piVar12 = (int *)(local_218 + -8);
  if (piVar12 != &DAT_00bfe124) {
    LOCK();
    iVar8 = *piVar12;
    *piVar12 = *piVar12 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      FID_conflict__free(piVar12);
    }
  }
  iVar8 = FUN_006104e0(*(undefined4 *)(iVar7 + 0x30),*(undefined4 *)(iVar7 + 0x34));
  FUN_004557e0(local_18d + -iVar8);
  local_8 = 8;
  iVar8 = FUN_00634c10("total_sample_count");
  iVar9 = FUN_0061a340();
  if (iVar9 != 0) {
    piVar12 = (int *)(iVar8 + 4);
    iVar8 = *(int *)(iVar8 + 4);
    while (iVar8 != 0) {
      piVar12 = (int *)*piVar12;
      iVar8 = *piVar12;
    }
    *piVar12 = iVar9;
  }
  local_8 = 0xffffffff;
  local_288 = local_21c;
  local_28c = local_21c;
  piVar12 = (int *)(local_21c + -8);
  if (piVar12 != &DAT_00bfe124) {
    LOCK();
    iVar8 = *piVar12;
    *piVar12 = *piVar12 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      FID_conflict__free(piVar12);
    }
  }
  if (**(char **)(iVar7 + 0x80) != '\0') {
    iVar8 = FUN_00634c10("midi_file");
    iVar9 = FUN_0061a340();
    iVar7 = local_1e4;
    if (iVar9 != 0) {
      piVar12 = (int *)(iVar8 + 4);
      iVar8 = *(int *)(iVar8 + 4);
      while (iVar8 != 0) {
        piVar12 = (int *)*piVar12;
        iVar8 = *piVar12;
      }
      *piVar12 = iVar9;
    }
    if ((int)(*(double *)(local_1e4 + 0x88) + 0.5) < 0) {
      iVar8 = FUN_006104a0();
      *(undefined1 *)(iVar8 + -1) = 0x2d;
      iVar8 = iVar8 + -1;
    }
    else {
      iVar8 = FUN_006104a0();
    }
    FUN_004557e0(local_105 + -iVar8);
    local_8 = 9;
    iVar8 = FUN_00634c10("midi_length");
    iVar9 = FUN_0061a340();
    if (iVar9 != 0) {
      piVar12 = (int *)(iVar8 + 4);
      iVar8 = *(int *)(iVar8 + 4);
      while (iVar8 != 0) {
        piVar12 = (int *)*piVar12;
        iVar8 = *piVar12;
      }
      *piVar12 = iVar9;
    }
    local_8 = 0xffffffff;
    local_290 = local_220;
    local_294 = local_220;
    piVar12 = (int *)(local_220 + -8);
    if (piVar12 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar12;
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        FID_conflict__free(piVar12);
      }
    }
    iVar8 = FUN_006104e0(*(undefined4 *)(iVar7 + 0x90),*(undefined4 *)(iVar7 + 0x94));
    FUN_004557e0(local_1ad + -iVar8);
    local_8 = 10;
    iVar8 = FUN_00634c10("midi_length_samples");
    iVar9 = FUN_0061a340();
    if (iVar9 != 0) {
      piVar12 = (int *)(iVar8 + 4);
      iVar8 = *(int *)(iVar8 + 4);
      while (iVar8 != 0) {
        piVar12 = (int *)*piVar12;
        iVar8 = *piVar12;
      }
      *piVar12 = iVar9;
    }
    local_8 = 0xffffffff;
    local_298 = local_224;
    local_29c = local_224;
    piVar12 = (int *)(local_224 + -8);
    if (piVar12 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar12;
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        FID_conflict__free(piVar12);
      }
    }
    FUN_0045c990(&DAT_0073efbc);
    local_8 = 0xb;
    iVar8 = FUN_00634c10("midi_offset");
    iVar9 = FUN_0061a340();
    if (iVar9 != 0) {
      piVar12 = (int *)(iVar8 + 4);
      iVar8 = *(int *)(iVar8 + 4);
      while (iVar8 != 0) {
        piVar12 = (int *)*piVar12;
        iVar8 = *piVar12;
      }
      *piVar12 = iVar9;
    }
    local_8 = 0xffffffff;
    local_2a0 = local_228;
    local_2a4 = local_228;
    piVar12 = (int *)(local_228 + -8);
    if (piVar12 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar12;
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        FID_conflict__free(piVar12);
      }
    }
  }
  if (*(int *)(iVar7 + 0x4c) + 1 < 0) {
    iVar8 = FUN_006104a0();
    *(undefined1 *)(iVar8 + -1) = 0x2d;
    iVar8 = iVar8 + -1;
  }
  else {
    iVar8 = FUN_006104a0();
  }
  FUN_004557e0(local_125 + -iVar8);
  local_8 = 0xc;
  iVar8 = FUN_00634c10("wave_file_count");
  iVar9 = FUN_0061a340();
  if (iVar9 != 0) {
    piVar12 = (int *)(iVar8 + 4);
    iVar8 = *(int *)(iVar8 + 4);
    while (iVar8 != 0) {
      piVar12 = (int *)*piVar12;
      iVar8 = *piVar12;
    }
    *piVar12 = iVar9;
  }
  local_8 = 0xffffffff;
  local_2a8 = local_22c;
  local_2ac = local_22c;
  piVar12 = (int *)(local_22c + -8);
  if (piVar12 != &DAT_00bfe124) {
    LOCK();
    iVar8 = *piVar12;
    *piVar12 = *piVar12 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      FID_conflict__free(piVar12);
    }
  }
  iVar8 = FUN_00634c10("wave_file_switches");
  local_1dc = (undefined4 *)0x0;
  if (0 < *(int *)(iVar7 + 0x4c)) {
    local_1f4 = (int *)(iVar8 + 4);
    bVar18 = *(int *)(iVar7 + 0x4c) != 0;
    do {
      if (bVar18) {
        uVar14 = *(undefined4 *)(*(int *)(iVar7 + 0x44) + (int)local_1dc * 8);
        uVar15 = *(undefined4 *)(*(int *)(iVar7 + 0x44) + 4 + (int)local_1dc * 8);
      }
      else {
        local_26c = 0;
        local_26c._4_4_ = 0;
        local_26c._0_4_ = 0;
        uVar14 = (undefined4)local_26c;
        uVar15 = local_26c._4_4_;
      }
      lVar19 = CONCAT44(uVar15,uVar14);
      pcVar21 = local_16e + 1;
      local_16e[1] = 0;
      do {
        local_1d8 = (int)lVar19;
        pcVar21 = pcVar21 + -1;
        lVar19 = __aulldiv(lVar19,10,0);
        *pcVar21 = (char)local_1d8 + (char)lVar19 * -10 + '0';
      } while (lVar19 != 0);
      pcVar17 = local_16e + -(int)pcVar21 + 1;
      local_1ec = pcVar21;
      local_1d8 = (int)lVar19;
      piVar10 = (int *)FUN_004bfe22(((uint)(auStack_169 + -(int)pcVar21) & 0xfffffffc) + 0xb);
      piVar10[1] = (uint)(auStack_169 + -(int)pcVar21) & 0xfffffffc;
      piVar12 = piVar10 + 2;
      *piVar10 = 0;
      local_270 = piVar12;
      local_230 = piVar12;
      local_2b0 = local_1ec;
      local_260 = local_1ec;
      while ((0 < (int)pcVar17 && (iVar7 = FUN_00443260(), iVar7 != 0))) {
        FUN_0044ecc0(iVar7);
        pcVar17 = pcVar17 + -1;
      }
      *(undefined1 *)local_230 = 0;
      local_8 = 0xd;
      local_2b4 = "switch";
      puVar11 = operator_new(0x10);
      pvVar5 = ThreadLocalStoragePointer;
      local_8._0_1_ = 0xe;
      piVar2 = puVar11 + 1;
      *puVar11 = 0;
      *piVar2 = 0;
      puVar11[2] = 0;
      pcVar21 = "switch";
      local_2b8 = "switch";
      local_1e0 = puVar11;
      if ((*(int *)(*(int *)pvVar5 + 4) < DAT_00cfff24) &&
         (FUN_004c0391(&DAT_00cfff24,"switch"), DAT_00cfff24 == -1)) {
        DAT_00cfff50 = 0;
        _DAT_00cfff54 = 0;
        _DAT_00cfff58 = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
        _DAT_00cfff74 = 0;
        _atexit((_func_4879 *)&LAB_0072a350);
        FUN_004c0352(&DAT_00cfff24);
      }
      FUN_0061f8b0(puVar11 + 3,pcVar21);
      local_8 = CONCAT31(local_8._1_3_,0xd);
      iVar7 = *local_1f4;
      piVar1 = local_1f4;
      while (iVar7 != 0) {
        piVar1 = (int *)*piVar1;
        iVar7 = *piVar1;
      }
      *piVar1 = (int)puVar11;
      iVar7 = FUN_0061a340();
      if (iVar7 != 0) {
        iVar8 = *piVar2;
        while (iVar8 != 0) {
          piVar2 = (int *)*piVar2;
          iVar8 = *piVar2;
        }
        *piVar2 = iVar7;
      }
      local_8 = 0xffffffff;
      local_2c0 = piVar12;
      local_2bc = piVar12;
      if (piVar10 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar10);
        }
      }
      local_1dc = (undefined4 *)((int)local_1dc + 1);
      bVar18 = local_1dc < *(undefined4 **)(local_1e4 + 0x4c);
      puVar11 = local_1d4;
      iVar7 = local_1e4;
    } while ((int)local_1dc < (int)*(undefined4 **)(local_1e4 + 0x4c));
  }
  local_2c4 = "channels";
  piVar12 = operator_new(0x10);
  local_8 = 0xf;
  local_210 = piVar12 + 1;
  *piVar12 = 0;
  *local_210 = 0;
  piVar12[2] = 0;
  local_2c8 = "channels";
  pcVar21 = "channels";
  local_1f4 = *(int **)ThreadLocalStoragePointer;
  local_1e0 = piVar12;
  if ((*(int *)((int)local_1f4 + 4) < DAT_00cfff24) &&
     (FUN_004c0391(&DAT_00cfff24,"channels"), DAT_00cfff24 == -1)) {
    DAT_00cfff50 = 0;
    _DAT_00cfff54 = 0;
    _DAT_00cfff58 = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
    _DAT_00cfff74 = 0;
    _atexit((_func_4879 *)&LAB_0072a350);
    FUN_004c0352(&DAT_00cfff24);
  }
  FUN_0061f8b0(piVar12 + 3,pcVar21);
  piVar10 = puVar11 + 1;
  local_8 = 0xffffffff;
  iVar8 = *piVar10;
  while (iVar8 != 0) {
    piVar10 = (int *)*piVar10;
    iVar8 = *piVar10;
  }
  *piVar10 = (int)piVar12;
  local_1d8 = 0;
  if (0 < *(int *)(iVar7 + 100)) {
    local_1f0 = iVar7 + 0x5c;
    local_2cc = "channel";
    local_2d0 = "channel";
    do {
      iVar7 = local_1d8;
      puVar11 = operator_new(0x10);
      local_8 = 0x10;
      local_1e0 = puVar11 + 1;
      *puVar11 = 0;
      *local_1e0 = 0;
      puVar11[2] = 0;
      pcVar21 = "channel";
      local_1dc = puVar11;
      if ((*(int *)((int)local_1f4 + 4) < DAT_00cfff24) &&
         (FUN_004c0391(&DAT_00cfff24,"channel"), DAT_00cfff24 == -1)) {
        DAT_00cfff50 = 0;
        _DAT_00cfff54 = 0;
        _DAT_00cfff58 = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
        _DAT_00cfff74 = 0;
        _atexit((_func_4879 *)&LAB_0072a350);
        FUN_004c0352(&DAT_00cfff24);
      }
      FUN_0061f8b0(puVar11 + 3,pcVar21);
      local_8 = 0xffffffff;
      iVar8 = *local_210;
      piVar12 = local_210;
      while (iVar8 != 0) {
        piVar12 = (int *)*piVar12;
        iVar8 = *piVar12;
      }
      *piVar12 = (int)puVar11;
      if ((*(int *)((int)local_1f4 + 4) < DAT_00cfff24) &&
         (FUN_004c0391(&DAT_00cfff24), DAT_00cfff24 == -1)) {
        DAT_00cfff50 = 0;
        _DAT_00cfff54 = 0;
        _DAT_00cfff58 = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
        _DAT_00cfff74 = 0;
        _atexit((_func_4879 *)&LAB_0072a350);
        FUN_004c0352(&DAT_00cfff24);
      }
      FUN_0061fa00(&local_238,&DAT_0073ef78);
      local_8 = 0x11;
      puVar13 = (uint *)FUN_00412c20(local_39c,iVar7);
      local_8 = CONCAT31(local_8._1_3_,0x12);
      local_1ec = local_1b + 2;
      uVar6 = *puVar13;
      local_1b[2] = 0;
      if ((int)uVar6 < 0) {
        uVar6 = -uVar6;
        do {
          pcVar21 = local_1ec;
          local_1ec = pcVar21 + -1;
          uVar16 = uVar6 / 10;
          *local_1ec = (char)uVar6 + (char)uVar16 * -10 + '0';
          uVar6 = uVar16;
        } while (uVar16 != 0);
        local_1ec = pcVar21 + -2;
        *local_1ec = '-';
      }
      else {
        do {
          local_1ec = local_1ec + -1;
          uVar16 = uVar6 / 10;
          *local_1ec = (char)uVar6 + (char)uVar16 * -10 + '0';
          uVar6 = uVar16;
        } while (uVar16 != 0);
      }
      iVar7 = -(int)local_1ec;
      pcVar21 = local_1b + iVar7 + 2;
      piVar10 = (int *)FUN_004bfe22(((uint)(&uStack_15 + iVar7) & 0xfffffffc) + 0xb);
      piVar10[1] = (uint)(&uStack_15 + iVar7) & 0xfffffffc;
      piVar12 = piVar10 + 2;
      *piVar10 = 0;
      local_24c = piVar12;
      local_234 = piVar12;
      local_2d4 = local_1ec;
      local_278 = local_1ec;
      while ((0 < (int)pcVar21 && (iVar7 = FUN_00443260(), iVar7 != 0))) {
        FUN_0044ecc0(iVar7);
        pcVar21 = pcVar21 + -1;
      }
      *(undefined1 *)local_234 = 0;
      local_8 = CONCAT31(local_8._1_3_,0x13);
      FUN_00634ca0(&local_238,&local_24c);
      local_2dc = piVar12;
      local_2d8 = piVar12;
      if (piVar10 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar10);
        }
      }
      local_2e0 = local_394;
      local_2e4 = local_394;
      piVar12 = (int *)(local_394 + -8);
      if (piVar12 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar12);
        }
      }
      local_8 = 0xffffffff;
      local_2e8 = local_238;
      local_2ec = local_238;
      piVar12 = (int *)(local_238 + -8);
      if (piVar12 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar12);
        }
      }
      FUN_0045c990(&DAT_0073ef64);
      local_8 = 0x14;
      local_2f0 = "output_level";
      puVar11 = operator_new(0x10);
      local_26c = CONCAT44(puVar11,(undefined4)local_26c);
      piVar12 = puVar11 + 1;
      local_8._0_1_ = 0x15;
      *puVar11 = 0;
      *piVar12 = 0;
      puVar11[2] = 0;
      pcVar21 = "output_level";
      local_2f8 = "output_level";
      if ((*(int *)((int)local_1f4 + 4) < DAT_00cfff24) &&
         (FUN_004c0391(&DAT_00cfff24,"output_level"), DAT_00cfff24 == -1)) {
        DAT_00cfff50 = 0;
        _DAT_00cfff54 = 0;
        _DAT_00cfff58 = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
        _DAT_00cfff74 = 0;
        _atexit((_func_4879 *)&LAB_0072a350);
        FUN_004c0352(&DAT_00cfff24);
      }
      FUN_0061f8b0(puVar11 + 3,pcVar21);
      local_8 = CONCAT31(local_8._1_3_,0x14);
      iVar7 = *local_1e0;
      piVar10 = local_1e0;
      while (iVar7 != 0) {
        piVar10 = (int *)*piVar10;
        iVar7 = *piVar10;
      }
      *piVar10 = (int)puVar11;
      iVar7 = FUN_0061a340();
      if (iVar7 != 0) {
        iVar8 = *piVar12;
        while (iVar8 != 0) {
          piVar12 = (int *)*piVar12;
          iVar8 = *piVar12;
        }
        *piVar12 = iVar7;
      }
      local_8 = 0xffffffff;
      local_2fc = local_23c;
      local_300 = local_23c;
      piVar12 = (int *)(local_23c + -8);
      if (piVar12 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar12);
        }
      }
      FUN_0045c990(&DAT_0073efa8);
      local_8 = 0x16;
      iVar7 = FUN_00634c10("output_mute");
      iVar8 = FUN_0061a340();
      if (iVar8 != 0) {
        piVar12 = (int *)(iVar7 + 4);
        iVar7 = *(int *)(iVar7 + 4);
        while (iVar7 != 0) {
          piVar12 = (int *)*piVar12;
          iVar7 = *piVar12;
        }
        *piVar12 = iVar8;
      }
      local_304 = local_240;
      local_308 = local_240;
      piVar12 = (int *)(local_240 + -8);
      if (piVar12 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar12);
        }
      }
      iVar7 = local_1d8;
      iVar8 = FUN_00412c20(local_3e4,local_1d8);
      local_8 = 0x17;
      pcVar21 = local_3f + 2;
      uVar6 = *(uint *)(iVar8 + 4);
      local_3f[2] = 0;
      if ((int)uVar6 < 0) {
        uVar6 = -uVar6;
        do {
          pcVar17 = pcVar21;
          pcVar21 = pcVar17 + -1;
          uVar16 = uVar6 / 10;
          *pcVar21 = (char)uVar6 + (char)uVar16 * -10 + '0';
          uVar6 = uVar16;
        } while (uVar16 != 0);
        pcVar21 = pcVar17 + -2;
        *pcVar21 = '-';
      }
      else {
        do {
          pcVar21 = pcVar21 + -1;
          uVar16 = uVar6 / 10;
          *pcVar21 = (char)uVar6 + (char)uVar16 * -10 + '0';
          uVar6 = uVar16;
        } while (uVar16 != 0);
      }
      FUN_004557e0(local_3f + (2 - (int)pcVar21));
      local_8 = CONCAT31(local_8._1_3_,0x18);
      iVar8 = FUN_00634c10("output_channel");
      iVar9 = FUN_0061a340();
      if (iVar9 != 0) {
        piVar12 = (int *)(iVar8 + 4);
        iVar8 = *(int *)(iVar8 + 4);
        while (iVar8 != 0) {
          piVar12 = (int *)*piVar12;
          iVar8 = *piVar12;
        }
        *piVar12 = iVar9;
      }
      local_30c = local_1f8;
      local_310 = local_1f8;
      piVar12 = (int *)(local_1f8 + -8);
      if (piVar12 != &DAT_00bfe124) {
        LOCK();
        iVar8 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar8 == 0) {
          FID_conflict__free(piVar12);
        }
      }
      local_314 = local_3dc;
      local_318 = local_3dc;
      piVar12 = (int *)(local_3dc + -8);
      if (piVar12 != &DAT_00bfe124) {
        LOCK();
        iVar8 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar8 == 0) {
          FID_conflict__free(piVar12);
        }
      }
      FUN_00412c20(local_3fc,iVar7);
      local_8 = 0x19;
      iVar7 = FUN_00634c10("track_name");
      iVar8 = FUN_0061a340();
      if (iVar8 != 0) {
        piVar12 = (int *)(iVar7 + 4);
        iVar7 = *(int *)(iVar7 + 4);
        while (iVar7 != 0) {
          piVar12 = (int *)*piVar12;
          iVar7 = *piVar12;
        }
        *piVar12 = iVar8;
      }
      local_31c = local_3f4;
      local_320 = local_3f4;
      piVar12 = (int *)(local_3f4 + -8);
      if (piVar12 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar12);
        }
      }
      FUN_00412c20(local_414,local_1d8);
      local_8 = 0x1a;
      FUN_006353d0(1);
      local_8 = CONCAT31(local_8._1_3_,0x1b);
      iVar7 = FUN_00634c10("monitor_volume");
      iVar8 = FUN_0061a340();
      if (iVar8 != 0) {
        piVar12 = (int *)(iVar7 + 4);
        iVar7 = *(int *)(iVar7 + 4);
        while (iVar7 != 0) {
          piVar12 = (int *)*piVar12;
          iVar7 = *piVar12;
        }
        *piVar12 = iVar8;
      }
      local_354 = local_254;
      local_328 = local_254;
      piVar12 = (int *)(local_254 + -8);
      if (piVar12 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar12);
        }
      }
      local_32c = local_40c;
      local_330 = local_40c;
      piVar12 = (int *)(local_40c + -8);
      if (piVar12 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar12);
        }
      }
      iVar7 = FUN_00412c20(local_3b4,local_1d8);
      local_8 = 0x1c;
      local_149 = 0;
      local_14a = (*(char *)(iVar7 + 0x10) != '\0') + '0';
      FUN_004557e0(1);
      local_8 = CONCAT31(local_8._1_3_,0x1d);
      iVar7 = FUN_00634c10("monitor_mute");
      iVar8 = FUN_0061a340();
      if (iVar8 != 0) {
        piVar12 = (int *)(iVar7 + 4);
        iVar7 = *(int *)(iVar7 + 4);
        while (iVar7 != 0) {
          piVar12 = (int *)*piVar12;
          iVar7 = *piVar12;
        }
        *piVar12 = iVar8;
      }
      local_334 = local_1fc;
      local_338 = local_1fc;
      piVar12 = (int *)(local_1fc + -8);
      if (piVar12 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar12);
        }
      }
      local_33c = local_3ac;
      local_340 = local_3ac;
      piVar12 = (int *)(local_3ac + -8);
      if (piVar12 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar12);
        }
      }
      iVar7 = FUN_00412c20(local_3cc,local_1d8);
      local_8 = 0x1e;
      pcVar21 = local_63 + 2;
      local_63[2] = 0;
      uVar6 = (uint)((*(float *)(iVar7 + 0x14) * 127.0) / 127.0);
      if ((int)uVar6 < 0) {
        uVar6 = -uVar6;
        do {
          pcVar17 = pcVar21;
          pcVar21 = pcVar17 + -1;
          uVar16 = uVar6 / 10;
          *pcVar21 = (char)uVar6 + (char)uVar16 * -10 + '0';
          uVar6 = uVar16;
        } while (uVar16 != 0);
        pcVar21 = pcVar17 + -2;
        *pcVar21 = '-';
      }
      else {
        do {
          pcVar21 = pcVar21 + -1;
          uVar16 = uVar6 / 10;
          *pcVar21 = (char)uVar6 + (char)uVar16 * -10 + '0';
          uVar6 = uVar16;
        } while (uVar16 != 0);
      }
      FUN_004557e0(local_63 + (2 - (int)pcVar21));
      local_8 = CONCAT31(local_8._1_3_,0x1f);
      iVar7 = FUN_00634c10("monitor_pan");
      iVar8 = FUN_0061a340();
      if (iVar8 != 0) {
        piVar12 = (int *)(iVar7 + 4);
        iVar7 = *(int *)(iVar7 + 4);
        while (iVar7 != 0) {
          piVar12 = (int *)*piVar12;
          iVar7 = *piVar12;
        }
        *piVar12 = iVar8;
      }
      local_344 = local_200;
      local_348 = local_200;
      piVar12 = (int *)(local_200 + -8);
      if (piVar12 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar12);
        }
      }
      local_8 = 0xffffffff;
      local_284 = CONCAT44(local_3c4,(undefined4)local_284);
      local_20c = CONCAT44(local_3c4,(undefined4)local_20c);
      piVar12 = (int *)(local_3c4 + -8);
      if (piVar12 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar12);
        }
      }
      local_1d8 = local_1d8 + 1;
      iVar7 = local_1e4;
    } while (local_1d8 < *(int *)(local_1e4 + 100));
  }
  local_1f8 = 0;
  if (0 < *(int *)(iVar7 + 0x7c)) {
    local_284 = 0;
    do {
      local_200 = FUN_00634c10("marker");
      lVar20 = FUN_006f55df();
      uVar16 = (uint)((ulonglong)lVar20 >> 0x20);
      uVar6 = 0;
      lVar19 = lVar20;
      if (0 < *(int *)(local_1e4 + 0x4c)) {
        bVar18 = *(int *)(local_1e4 + 0x4c) != 0;
        lVar4 = lVar20;
        do {
          if (bVar18) {
            uVar3 = *(uint *)(*(int *)(local_1e4 + 0x44) + 4 + uVar6 * 8);
            lVar19 = lVar4;
            if ((uVar16 < uVar3) ||
               ((uVar16 <= uVar3 &&
                ((uint)lVar20 < *(uint *)(*(int *)(local_1e4 + 0x44) + uVar6 * 8))))) break;
            if (*(uint *)(local_1e4 + 0x4c) <= uVar6) goto LAB_0055b996;
            uVar14 = *(undefined4 *)(*(int *)(local_1e4 + 0x44) + 4 + uVar6 * 8);
            uVar15 = *(undefined4 *)(*(int *)(local_1e4 + 0x44) + uVar6 * 8);
          }
          else {
LAB_0055b996:
            local_20c = 0;
            local_20c._4_4_ = 0;
            local_20c._0_4_ = 0;
            uVar14 = local_20c._4_4_;
            uVar15 = (undefined4)local_20c;
          }
          lVar19 = lVar4 - CONCAT44(uVar14,uVar15);
          lVar4 = lVar4 - CONCAT44(uVar14,uVar15);
          uVar6 = uVar6 + 1;
          bVar18 = uVar6 < *(uint *)(local_1e4 + 0x4c);
        } while ((int)uVar6 < (int)*(uint *)(local_1e4 + 0x4c));
      }
      local_1dc = (undefined4 *)((ulonglong)lVar19 >> 0x20);
      local_1fc = (int)lVar19;
      FUN_00633ba0(lVar20);
      local_8 = 0x20;
      iVar7 = FUN_00634c10("global_time_in_samples");
      iVar8 = FUN_0061a340();
      if (iVar8 != 0) {
        piVar12 = (int *)(iVar7 + 4);
        iVar7 = *(int *)(iVar7 + 4);
        while (iVar7 != 0) {
          piVar12 = (int *)*piVar12;
          iVar7 = *piVar12;
        }
        *piVar12 = iVar8;
      }
      local_8 = 0xffffffff;
      piVar12 = (int *)(local_1e8 + -8);
      if (piVar12 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar12);
        }
      }
      uVar6 = uVar6 + 1;
      acStack_87[2] = 0;
      pcVar21 = acStack_87 + 2;
      if ((int)uVar6 < 0) {
        uVar6 = -uVar6;
        do {
          pcVar17 = pcVar21;
          pcVar21 = pcVar17 + -1;
          uVar16 = uVar6 / 10;
          *pcVar21 = (char)uVar6 + (char)uVar16 * -10 + '0';
          uVar6 = uVar16;
        } while (uVar16 != 0);
        pcVar21 = pcVar17 + -2;
        *pcVar21 = '-';
      }
      else {
        do {
          pcVar21 = pcVar21 + -1;
          uVar16 = uVar6 / 10;
          *pcVar21 = (char)uVar6 + (char)uVar16 * -10 + '0';
          uVar6 = uVar16;
        } while (uVar16 != 0);
      }
      FUN_004557e0(acStack_87 + (2 - (int)pcVar21));
      local_8 = 0x21;
      iVar7 = FUN_00634c10("file_number");
      iVar8 = FUN_0061a340();
      if (iVar8 != 0) {
        piVar12 = (int *)(iVar7 + 4);
        iVar7 = *(int *)(iVar7 + 4);
        while (iVar7 != 0) {
          piVar12 = (int *)*piVar12;
          iVar7 = *piVar12;
        }
        *piVar12 = iVar8;
      }
      local_8 = 0xffffffff;
      piVar12 = (int *)(local_244 + -8);
      if (piVar12 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar12);
        }
      }
      FUN_00633ba0(local_1fc,local_1dc);
      local_8 = 0x22;
      iVar7 = FUN_00634c10("local_time_in_samples");
      iVar8 = FUN_0061a340();
      if (iVar8 != 0) {
        piVar12 = (int *)(iVar7 + 4);
        iVar7 = *(int *)(iVar7 + 4);
        while (iVar7 != 0) {
          piVar12 = (int *)*piVar12;
          iVar7 = *piVar12;
        }
        *piVar12 = iVar8;
      }
      local_8 = 0xffffffff;
      piVar12 = (int *)(local_1d0 + -8);
      if (piVar12 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar12);
        }
      }
      local_1f8 = local_1f8 + 1;
    } while (local_1f8 < *(int *)(local_1e4 + 0x7c));
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

