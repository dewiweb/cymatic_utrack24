// rea decompile_all
// name: FUN_00558f10
// address: 0x558f10
// body: available
// range: 0x558f10-0x55a252 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00558f10(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined *puVar12;
  undefined1 local_304 [8];
  int local_2fc;
  undefined1 local_2ec [8];
  int local_2e4;
  undefined1 local_2d4 [8];
  int local_2cc;
  undefined1 local_2bc [8];
  int local_2b4;
  undefined1 local_2a4 [8];
  int local_29c;
  undefined1 local_28c [8];
  int local_284;
  int local_274;
  int local_270;
  int local_26c;
  int local_268;
  int local_264;
  int local_260;
  int local_25c;
  int local_258;
  int local_254;
  int local_250;
  int local_24c;
  int *local_248;
  int *local_244;
  char *local_240;
  int local_23c;
  int local_238;
  int local_234;
  int local_230;
  int *local_22c;
  int *local_228;
  char *local_224;
  undefined *local_220;
  undefined *local_21c;
  char *local_218;
  char *local_214;
  int local_210;
  int local_20c;
  int local_208;
  int local_204;
  int local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  int *local_1f0;
  int *local_1ec;
  char *local_1e8;
  undefined *local_1e4;
  undefined *local_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  int local_1c8;
  char *local_1c4;
  int local_1c0;
  int local_1bc;
  char *local_1b8;
  int local_1b4;
  int *local_1b0;
  int *local_1ac;
  int local_1a8;
  int *local_1a4;
  int local_1a0;
  int local_19c;
  int local_198;
  int *local_194;
  int local_190;
  int *local_18c;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  char *local_170;
  int *local_16c;
  int *local_168;
  undefined4 *local_164;
  undefined4 *local_160;
  int *local_15c;
  char *local_158;
  char *local_154;
  int local_150;
  undefined4 *local_14c;
  int *local_148;
  undefined1 local_125 [31];
  char local_106;
  undefined1 local_105;
  undefined1 local_e1 [32];
  undefined1 local_c1 [32];
  undefined1 local_a1 [32];
  undefined1 local_81 [30];
  char local_63 [6];
  undefined1 auStack_5d [30];
  char local_3f [6];
  undefined1 auStack_39 [30];
  char local_1b [6];
  undefined1 uStack_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007117b2;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar2;
  local_14c = operator_new(0x10);
  local_8 = 0;
  piVar8 = local_14c + 1;
  *local_14c = 0;
  puVar10 = local_14c + 3;
  pcVar11 = "song_settings";
  *piVar8 = 0;
  local_14c[2] = 0;
  local_168 = piVar8;
  FUN_0061f730(puVar10,"song_settings",uVar2);
  FUN_0061fa00(puVar10,pcVar11);
  local_8 = 0xffffffff;
  iVar3 = FUN_00634c10("version");
  iVar4 = FUN_0061a340();
  if (iVar4 != 0) {
    piVar7 = (int *)(iVar3 + 4);
    iVar3 = *(int *)(iVar3 + 4);
    while (iVar3 != 0) {
      piVar7 = (int *)*piVar7;
      iVar3 = *piVar7;
    }
    *piVar7 = iVar4;
  }
  FUN_00633ba0(*(undefined4 *)(local_150 + 0x20),*(undefined4 *)(local_150 + 0x24));
  local_8 = 1;
  iVar3 = FUN_00634c10("timestamp");
  iVar4 = FUN_0061a340();
  if (iVar4 != 0) {
    piVar7 = (int *)(iVar3 + 4);
    iVar3 = *(int *)(iVar3 + 4);
    while (iVar3 != 0) {
      piVar7 = (int *)*piVar7;
      iVar3 = *piVar7;
    }
    *piVar7 = iVar4;
  }
  local_8 = 0xffffffff;
  local_234 = local_1c0;
  local_250 = local_1c0;
  piVar7 = (int *)(local_1c0 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  iVar3 = FUN_00634c10("creator");
  iVar4 = FUN_0061a340();
  if (iVar4 != 0) {
    piVar7 = (int *)(iVar3 + 4);
    iVar3 = *(int *)(iVar3 + 4);
    while (iVar3 != 0) {
      piVar7 = (int *)*piVar7;
      iVar3 = *piVar7;
    }
    *piVar7 = iVar4;
  }
  FUN_005bcea0();
  local_8 = 2;
  iVar3 = FUN_00634c10("target_device");
  iVar4 = FUN_0061a340();
  if (iVar4 != 0) {
    piVar7 = (int *)(iVar3 + 4);
    iVar3 = *(int *)(iVar3 + 4);
    while (iVar3 != 0) {
      piVar7 = (int *)*piVar7;
      iVar3 = *piVar7;
    }
    *piVar7 = iVar4;
  }
  local_8 = 0xffffffff;
  local_258 = local_1bc;
  local_25c = local_1bc;
  piVar7 = (int *)(local_1bc + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  iVar3 = local_150;
  iVar4 = FUN_00634c10("song_name");
  iVar5 = FUN_0061a340();
  if (iVar5 != 0) {
    piVar7 = (int *)(iVar4 + 4);
    iVar4 = *(int *)(iVar4 + 4);
    while (iVar4 != 0) {
      piVar7 = (int *)*piVar7;
      iVar4 = *piVar7;
    }
    *piVar7 = iVar5;
  }
  if (**(char **)(iVar3 + 0x98) != '\0') {
    iVar4 = FUN_00634c10("validationcode");
    iVar5 = FUN_0061a340();
    if (iVar5 != 0) {
      piVar7 = (int *)(iVar4 + 4);
      iVar4 = *(int *)(iVar4 + 4);
      while (iVar4 != 0) {
        piVar7 = (int *)*piVar7;
        iVar4 = *piVar7;
      }
      *piVar7 = iVar5;
    }
  }
  iVar4 = FUN_00634c10("playback_type");
  iVar5 = FUN_0061a340();
  if (iVar5 != 0) {
    piVar7 = (int *)(iVar4 + 4);
    iVar4 = *(int *)(iVar4 + 4);
    while (iVar4 != 0) {
      piVar7 = (int *)*piVar7;
      iVar4 = *piVar7;
    }
    *piVar7 = iVar5;
  }
  if (*(int *)(iVar3 + 100) < 0) {
    iVar4 = FUN_006104a0();
    *(undefined1 *)(iVar4 + -1) = 0x2d;
    iVar4 = iVar4 + -1;
  }
  else {
    iVar4 = FUN_006104a0();
  }
  FUN_004557e0(local_e1 + -iVar4);
  local_8 = 3;
  iVar4 = FUN_00634c10("channel_count");
  iVar5 = FUN_0061a340();
  if (iVar5 != 0) {
    piVar7 = (int *)(iVar4 + 4);
    iVar4 = *(int *)(iVar4 + 4);
    while (iVar4 != 0) {
      piVar7 = (int *)*piVar7;
      iVar4 = *piVar7;
    }
    *piVar7 = iVar5;
  }
  local_8 = 0xffffffff;
  local_260 = local_174;
  local_264 = local_174;
  piVar7 = (int *)(local_174 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  if (*(int *)(iVar3 + 0x38) < 0) {
    iVar4 = FUN_006104a0();
    *(undefined1 *)(iVar4 + -1) = 0x2d;
    iVar4 = iVar4 + -1;
  }
  else {
    iVar4 = FUN_006104a0();
  }
  FUN_004557e0(local_c1 + -iVar4);
  local_8 = 4;
  iVar4 = FUN_00634c10("sampling_rate");
  iVar5 = FUN_0061a340();
  if (iVar5 != 0) {
    piVar7 = (int *)(iVar4 + 4);
    iVar4 = *(int *)(iVar4 + 4);
    while (iVar4 != 0) {
      piVar7 = (int *)*piVar7;
      iVar4 = *piVar7;
    }
    *piVar7 = iVar5;
  }
  local_8 = 0xffffffff;
  local_268 = local_178;
  local_26c = local_178;
  piVar7 = (int *)(local_178 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  if (*(int *)(iVar3 + 0x3c) < 0) {
    iVar4 = FUN_006104a0();
    *(undefined1 *)(iVar4 + -1) = 0x2d;
    iVar4 = iVar4 + -1;
  }
  else {
    iVar4 = FUN_006104a0();
  }
  FUN_004557e0(local_a1 + -iVar4);
  local_8 = 5;
  iVar4 = FUN_00634c10("resolution");
  iVar5 = FUN_0061a340();
  if (iVar5 != 0) {
    piVar7 = (int *)(iVar4 + 4);
    iVar4 = *(int *)(iVar4 + 4);
    while (iVar4 != 0) {
      piVar7 = (int *)*piVar7;
      iVar4 = *piVar7;
    }
    *piVar7 = iVar5;
  }
  local_8 = 0xffffffff;
  local_270 = local_17c;
  local_274 = local_17c;
  piVar7 = (int *)(local_17c + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  if (**(char **)(iVar3 + 0x80) != '\0') {
    iVar4 = FUN_00634c10("midi_file");
    iVar5 = FUN_0061a340();
    iVar3 = local_150;
    if (iVar5 != 0) {
      piVar7 = (int *)(iVar4 + 4);
      iVar4 = *(int *)(iVar4 + 4);
      while (iVar4 != 0) {
        piVar7 = (int *)*piVar7;
        iVar4 = *piVar7;
      }
      *piVar7 = iVar5;
    }
    if ((int)(*(double *)(local_150 + 0x88) + 0.5) < 0) {
      iVar4 = FUN_006104a0();
      *(undefined1 *)(iVar4 + -1) = 0x2d;
      iVar4 = iVar4 + -1;
    }
    else {
      iVar4 = FUN_006104a0();
    }
    FUN_004557e0(local_81 + -iVar4);
    local_8 = 6;
    iVar4 = FUN_00634c10("midi_length");
    iVar5 = FUN_0061a340();
    if (iVar5 != 0) {
      piVar7 = (int *)(iVar4 + 4);
      iVar4 = *(int *)(iVar4 + 4);
      while (iVar4 != 0) {
        piVar7 = (int *)*piVar7;
        iVar4 = *piVar7;
      }
      *piVar7 = iVar5;
    }
    local_8 = 0xffffffff;
    local_1c8 = local_180;
    local_1cc = local_180;
    piVar7 = (int *)(local_180 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    iVar4 = FUN_006104e0(*(undefined4 *)(iVar3 + 0x90),*(undefined4 *)(iVar3 + 0x94));
    FUN_004557e0(local_125 + -iVar4);
    local_8 = 7;
    iVar4 = FUN_00634c10("midi_length_samples");
    iVar5 = FUN_0061a340();
    if (iVar5 != 0) {
      piVar7 = (int *)(iVar4 + 4);
      iVar4 = *(int *)(iVar4 + 4);
      while (iVar4 != 0) {
        piVar7 = (int *)*piVar7;
        iVar4 = *piVar7;
      }
      *piVar7 = iVar5;
    }
    local_8 = 0xffffffff;
    local_1d0 = local_184;
    local_1d4 = local_184;
    piVar7 = (int *)(local_184 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    FUN_0045c990(&DAT_0073f188);
    local_8 = 8;
    iVar4 = FUN_00634c10("midi_offset");
    iVar5 = FUN_0061a340();
    if (iVar5 != 0) {
      piVar7 = (int *)(iVar4 + 4);
      iVar4 = *(int *)(iVar4 + 4);
      while (iVar4 != 0) {
        piVar7 = (int *)*piVar7;
        iVar4 = *piVar7;
      }
      *piVar7 = iVar5;
    }
    local_8 = 0xffffffff;
    local_1d8 = local_188;
    local_1dc = local_188;
    piVar7 = (int *)(local_188 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar7);
      }
    }
  }
  iVar4 = FUN_00634c10("output_level");
  local_154 = (char *)0x0;
  if (0 < *(int *)(iVar3 + 100)) {
    local_194 = (int *)(iVar4 + 4);
    local_1e0 = &DAT_0073f170;
    local_1e4 = &DAT_0073f170;
    local_160 = *(undefined4 **)ThreadLocalStoragePointer;
    do {
      pcVar11 = local_154;
      puVar10 = local_160;
      puVar6 = operator_new(0x10);
      local_8 = 9;
      local_15c = puVar6 + 1;
      *puVar6 = 0;
      *local_15c = 0;
      puVar6[2] = 0;
      puVar12 = &DAT_0073f170;
      local_164 = puVar6;
      if ((*(int *)((int)puVar10 + 4) < DAT_00cfff24) &&
         (FUN_004c0391(&DAT_00cfff24,&DAT_0073f170), DAT_00cfff24 == -1)) {
        DAT_00cfff50 = 0;
        _DAT_00cfff54 = 0;
        _DAT_00cfff58 = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
        _DAT_00cfff74 = 0;
        _atexit((_func_4879 *)&LAB_0072a350);
        FUN_004c0352(&DAT_00cfff24);
      }
      FUN_0061f8b0(puVar6 + 3,puVar12);
      local_8 = 0xffffffff;
      iVar3 = *local_194;
      piVar8 = local_194;
      while (iVar3 != 0) {
        piVar8 = (int *)*piVar8;
        iVar3 = *piVar8;
      }
      *piVar8 = (int)puVar6;
      if ((*(int *)((int)puVar10 + 4) < DAT_00cfff24) &&
         (FUN_004c0391(&DAT_00cfff24), DAT_00cfff24 == -1)) {
        DAT_00cfff50 = 0;
        _DAT_00cfff54 = 0;
        _DAT_00cfff58 = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
        _DAT_00cfff74 = 0;
        _atexit((_func_4879 *)&LAB_0072a350);
        FUN_004c0352(&DAT_00cfff24);
      }
      FUN_0061fa00(&local_190,&DAT_0073f110);
      local_8 = 10;
      iVar3 = FUN_00412c20(local_2ec,pcVar11);
      local_8 = CONCAT31(local_8._1_3_,0xb);
      local_158 = local_63 + 2;
      uVar2 = *(int *)(iVar3 + 4) + 1;
      local_63[2] = 0;
      if ((int)uVar2 < 0) {
        uVar2 = -uVar2;
        do {
          pcVar11 = local_158;
          local_158 = pcVar11 + -1;
          uVar9 = uVar2 / 10;
          *local_158 = (char)uVar2 + (char)uVar9 * -10 + '0';
          uVar2 = uVar9;
        } while (uVar9 != 0);
        local_158 = pcVar11 + -2;
        *local_158 = '-';
      }
      else {
        do {
          local_158 = local_158 + -1;
          uVar9 = uVar2 / 10;
          *local_158 = (char)uVar2 + (char)uVar9 * -10 + '0';
          uVar2 = uVar9;
        } while (uVar9 != 0);
      }
      iVar3 = -(int)local_158;
      pcVar11 = local_63 + iVar3 + 2;
      piVar7 = (int *)FUN_004bfe22(((uint)(auStack_5d + iVar3) & 0xfffffffc) + 0xb);
      piVar7[1] = (uint)(auStack_5d + iVar3) & 0xfffffffc;
      piVar8 = piVar7 + 2;
      *piVar7 = 0;
      local_1b0 = piVar8;
      local_18c = piVar8;
      local_1e8 = local_158;
      local_1c4 = local_158;
      while ((0 < (int)pcVar11 && (iVar3 = FUN_00443260(), iVar3 != 0))) {
        FUN_0044ecc0(iVar3);
        pcVar11 = pcVar11 + -1;
      }
      *(undefined1 *)local_18c = 0;
      local_8 = CONCAT31(local_8._1_3_,0xc);
      FUN_00634ca0(&local_190,&local_1b0);
      local_1f0 = piVar8;
      local_1ec = piVar8;
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      local_1f4 = local_2e4;
      local_1f8 = local_2e4;
      piVar8 = (int *)(local_2e4 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      local_1fc = local_190;
      local_200 = local_190;
      piVar8 = (int *)(local_190 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      iVar3 = local_150;
      pcVar11 = local_154;
      FUN_00412c20(local_2bc,local_154);
      local_8 = 0xd;
      FUN_006353d0(1);
      local_8 = CONCAT31(local_8._1_3_,0xe);
      iVar4 = FUN_0061a340();
      if (iVar4 != 0) {
        iVar5 = *local_15c;
        piVar8 = local_15c;
        while (iVar5 != 0) {
          piVar8 = (int *)*piVar8;
          iVar5 = *piVar8;
        }
        *piVar8 = iVar4;
      }
      local_204 = local_1b4;
      local_208 = local_1b4;
      piVar8 = (int *)(local_1b4 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      local_8 = 0xffffffff;
      local_20c = local_2b4;
      local_210 = local_2b4;
      piVar8 = (int *)(local_2b4 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      local_154 = pcVar11 + 1;
      piVar8 = local_168;
    } while ((int)local_154 < *(int *)(iVar3 + 100));
  }
  local_214 = "monitor_pan";
  puVar6 = operator_new(0x10);
  local_8 = 0xf;
  local_168 = puVar6 + 1;
  *puVar6 = 0;
  *local_168 = 0;
  puVar6[2] = 0;
  local_218 = "monitor_pan";
  pcVar11 = "monitor_pan";
  puVar10 = *(undefined4 **)ThreadLocalStoragePointer;
  local_164 = puVar10;
  local_160 = puVar6;
  if ((*(int *)((int)puVar10 + 4) < DAT_00cfff24) &&
     (FUN_004c0391(&DAT_00cfff24,"monitor_pan"), DAT_00cfff24 == -1)) {
    DAT_00cfff50 = 0;
    _DAT_00cfff54 = 0;
    _DAT_00cfff58 = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
    _DAT_00cfff74 = 0;
    _atexit((_func_4879 *)&LAB_0072a350);
    FUN_004c0352(&DAT_00cfff24);
  }
  FUN_0061f8b0(puVar6 + 3,pcVar11);
  local_8 = 0xffffffff;
  iVar3 = *piVar8;
  while (iVar3 != 0) {
    piVar8 = (int *)*piVar8;
    iVar3 = *piVar8;
  }
  *piVar8 = (int)puVar6;
  local_158 = (char *)0x0;
  if (0 < *(int *)(local_150 + 100)) {
    local_21c = &DAT_0073f0fc;
    local_220 = &DAT_0073f0fc;
    do {
      pcVar11 = local_158;
      puVar6 = operator_new(0x10);
      local_8 = 0x10;
      local_15c = puVar6 + 1;
      *puVar6 = 0;
      *local_15c = 0;
      puVar6[2] = 0;
      puVar12 = &DAT_0073f0fc;
      local_160 = puVar6;
      if ((*(int *)((int)puVar10 + 4) < DAT_00cfff24) &&
         (FUN_004c0391(&DAT_00cfff24,&DAT_0073f0fc), DAT_00cfff24 == -1)) {
        DAT_00cfff50 = 0;
        _DAT_00cfff54 = 0;
        _DAT_00cfff58 = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
        _DAT_00cfff74 = 0;
        _atexit((_func_4879 *)&LAB_0072a350);
        FUN_004c0352(&DAT_00cfff24);
      }
      FUN_0061f8b0(puVar6 + 3,puVar12);
      local_8 = 0xffffffff;
      iVar3 = *local_168;
      piVar8 = local_168;
      while (iVar3 != 0) {
        piVar8 = (int *)*piVar8;
        iVar3 = *piVar8;
      }
      *piVar8 = (int)puVar6;
      if ((*(int *)((int)puVar10 + 4) < DAT_00cfff24) &&
         (FUN_004c0391(&DAT_00cfff24), DAT_00cfff24 == -1)) {
        DAT_00cfff50 = 0;
        _DAT_00cfff54 = 0;
        _DAT_00cfff58 = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
        _DAT_00cfff74 = 0;
        _atexit((_func_4879 *)&LAB_0072a350);
        FUN_004c0352(&DAT_00cfff24);
      }
      FUN_0061fa00(&local_1a8,&DAT_0073f0f8);
      local_8 = 0x11;
      iVar3 = FUN_00412c20(local_2d4,pcVar11);
      local_8 = CONCAT31(local_8._1_3_,0x12);
      local_154 = local_3f + 2;
      uVar2 = *(int *)(iVar3 + 4) + 1;
      local_3f[2] = 0;
      if ((int)uVar2 < 0) {
        uVar2 = -uVar2;
        do {
          pcVar11 = local_154;
          local_154 = pcVar11 + -1;
          uVar9 = uVar2 / 10;
          *local_154 = (char)uVar2 + (char)uVar9 * -10 + '0';
          uVar2 = uVar9;
        } while (uVar9 != 0);
        local_154 = pcVar11 + -2;
        *local_154 = '-';
      }
      else {
        do {
          local_154 = local_154 + -1;
          uVar9 = uVar2 / 10;
          *local_154 = (char)uVar2 + (char)uVar9 * -10 + '0';
          uVar2 = uVar9;
        } while (uVar9 != 0);
      }
      iVar3 = -(int)local_154;
      pcVar11 = local_3f + iVar3 + 2;
      piVar7 = (int *)FUN_004bfe22(((uint)(auStack_39 + iVar3) & 0xfffffffc) + 0xb);
      piVar7[1] = (uint)(auStack_39 + iVar3) & 0xfffffffc;
      piVar8 = piVar7 + 2;
      *piVar7 = 0;
      local_1ac = piVar8;
      local_16c = piVar8;
      local_224 = local_154;
      local_1b8 = local_154;
      while ((0 < (int)pcVar11 && (iVar3 = FUN_00443260(), iVar3 != 0))) {
        FUN_0044ecc0(iVar3);
        pcVar11 = pcVar11 + -1;
      }
      *(undefined1 *)local_1ac = 0;
      local_8 = CONCAT31(local_8._1_3_,0x13);
      FUN_00634ca0(&local_1a8,&local_16c);
      local_22c = piVar8;
      local_228 = piVar8;
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      local_230 = local_2cc;
      local_254 = local_2cc;
      piVar8 = (int *)(local_2cc + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      local_238 = local_1a8;
      local_23c = local_1a8;
      piVar8 = (int *)(local_1a8 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      iVar3 = FUN_00412c20(local_304,local_158);
      local_8 = 0x14;
      local_154 = local_1b + 2;
      local_1b[2] = 0;
      uVar2 = (uint)((*(float *)(iVar3 + 0x14) * 127.0) / 127.0);
      if ((int)uVar2 < 0) {
        uVar2 = -uVar2;
        do {
          pcVar11 = local_154;
          local_154 = pcVar11 + -1;
          uVar9 = uVar2 / 10;
          *local_154 = (char)uVar2 + (char)uVar9 * -10 + '0';
          uVar2 = uVar9;
        } while (uVar9 != 0);
        local_154 = pcVar11 + -2;
        *local_154 = '-';
      }
      else {
        do {
          local_154 = local_154 + -1;
          uVar9 = uVar2 / 10;
          *local_154 = (char)uVar2 + (char)uVar9 * -10 + '0';
          uVar2 = uVar9;
        } while (uVar9 != 0);
      }
      iVar3 = -(int)local_154;
      pcVar11 = local_1b + iVar3 + 2;
      piVar7 = (int *)FUN_004bfe22(((uint)(&uStack_15 + iVar3) & 0xfffffffc) + 0xb);
      piVar7[1] = (uint)(&uStack_15 + iVar3) & 0xfffffffc;
      piVar8 = piVar7 + 2;
      *piVar7 = 0;
      local_1a4 = piVar8;
      local_148 = piVar8;
      local_240 = local_154;
      local_170 = local_154;
      while ((0 < (int)pcVar11 && (iVar3 = FUN_00443260(), iVar3 != 0))) {
        FUN_0044ecc0(iVar3);
        pcVar11 = pcVar11 + -1;
      }
      *(undefined1 *)local_1a4 = 0;
      local_8 = CONCAT31(local_8._1_3_,0x15);
      iVar3 = FUN_0061a340();
      if (iVar3 != 0) {
        iVar4 = *local_15c;
        piVar1 = local_15c;
        while (iVar4 != 0) {
          piVar1 = (int *)*piVar1;
          iVar4 = *piVar1;
        }
        *piVar1 = iVar3;
      }
      local_248 = piVar8;
      local_244 = piVar8;
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      local_8 = 0xffffffff;
      local_24c = local_2fc;
      local_198 = local_2fc;
      piVar8 = (int *)(local_2fc + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      local_158 = (char *)((int)local_158 + 1);
      puVar10 = local_164;
    } while ((int)local_158 < *(int *)(local_150 + 100));
  }
  iVar3 = local_150;
  local_16c = (int *)FUN_00634c10("channel_mute");
  iVar4 = 0;
  if (0 < *(int *)(iVar3 + 100)) {
    local_170 = (char *)(iVar3 + 0x5c);
    do {
      local_148 = (int *)FUN_00634c10(&DAT_0073f120);
      piVar8 = &local_1a0;
      puVar12 = &DAT_0073f11c;
      FUN_0061f730(piVar8,&DAT_0073f11c);
      FUN_0061fa00(piVar8,puVar12);
      local_8 = 0x16;
      iVar3 = FUN_00412c20(local_28c,iVar4);
      local_8 = CONCAT31(local_8._1_3_,0x17);
      FUN_00633770(&local_1a0,*(int *)(iVar3 + 4) + 1);
      piVar8 = (int *)(local_284 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      piVar8 = (int *)(local_1a0 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      iVar3 = FUN_00412c20(local_2a4,iVar4);
      local_8 = 0x18;
      local_105 = 0;
      local_106 = (*(char *)(iVar3 + 0x10) != '\0') + '0';
      FUN_004557e0(1);
      local_8 = CONCAT31(local_8._1_3_,0x19);
      iVar3 = FUN_0061a340();
      if (iVar3 != 0) {
        piVar8 = local_148 + 1;
        iVar5 = *piVar8;
        while (iVar5 != 0) {
          piVar8 = (int *)*piVar8;
          iVar5 = *piVar8;
        }
        *piVar8 = iVar3;
      }
      piVar8 = (int *)(local_19c + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      local_8 = 0xffffffff;
      piVar8 = (int *)(local_29c + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(local_150 + 100));
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

