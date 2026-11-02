// rea decompile_all
// name: FUN_000b6cbc
// address: 0xb6cbc
// body: available
// range: 0xb6cbc-0xb7017 inclusive
// range: 0xb70b8-0xb73b7 inclusive
// range: 0xb7444-0xb752b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000b6cbc(int *param_1)

{
  undefined2 uVar1;
  uint *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  int *local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  code *local_bc;
  undefined1 auStack_b8 [52];
  int *local_84;
  int *local_80 [2];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [8];
  int *local_60;
  undefined1 auStack_54 [8];
  int *local_4c;
  undefined1 auStack_48 [8];
  int *local_40;
  undefined4 local_3c;
  int local_38;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [12];
  
  pcVar3 = (char *)FUN_0008b7dc(auStack_68,param_1 + 0x4a);
  uVar10 = s_D0__ERROR__doInitialize__getUISe_000b7018._0_4_;
  *(undefined4 *)pcVar3 = s_D0__ERROR__doInitialize__getUISe_000b7018._0_4_;
  iVar4 = FUN_00157fbc(auStack_68);
  if (iVar4 == 0) {
    FUN_000028a4(s_D0__ERROR__doInitialize__getUISe_000b7018 + 4);
    FUN_0008b818(auStack_68);
    return 0;
  }
  local_38 = (**(code **)(*local_60 + 0x24))();
  if (local_38 == 0) {
    FUN_000028a4(s_ERROR__doInitialize__getUILedCon_000b7048);
    FUN_0008b818(auStack_68);
    return 0;
  }
  FUN_000b8638(param_1);
  if ((char)param_1[0x3ec] == '\0') {
    pcVar3 = (char *)FUN_0008b7dc(&local_c4,param_1 + 0x4a);
    *(undefined4 *)pcVar3 = uVar10;
    piVar7 = (int *)(**(code **)(*(int *)local_bc + 0x24))();
    FUN_0008b818(&local_c4);
    uVar6 = DAT_000b7078;
    if (piVar7 == (int *)0x0) {
      FUN_000028a4(_DAT_000b73b8);
    }
    else {
      (**(code **)(*piVar7 + 0xc))(piVar7,DAT_000b7078,param_1 + 0x5d);
      (**(code **)(*piVar7 + 0xc))(piVar7,300,param_1 + 0x5d);
      (**(code **)(*piVar7 + 0x14))(piVar7,uVar6,1,0);
      (**(code **)(*piVar7 + 0x14))(piVar7,300,1,0);
      *(undefined1 *)(param_1 + 0x3ec) = 1;
    }
  }
  puVar5 = (undefined4 *)FUN_0008b800(auStack_48);
  *puVar5 = _DAT_000b707c;
  uVar6 = FUN_0008cf78();
  iVar4 = FUN_0008ce54(uVar6,s_0__TelnetShellService_000b707d + 3,auStack_48);
  if (iVar4 == 0) {
    FUN_000028a4(s__No_TelnetShellService_present_000b73bb + 1);
    FUN_0008b838(auStack_48,0);
  }
  else {
    iVar4 = FUN_00157fbc(auStack_48);
    if (iVar4 != 0) {
      (**(code **)(*local_40 + 0x14))(local_40,0x17);
    }
  }
  *(undefined1 *)(param_1 + 0x17d) = 1;
  *(undefined1 *)((int)param_1 + 0x5f5) = 1;
  uVar6 = FUN_001da358(auStack_34,param_1[0x3ed],auStack_30);
  FUN_001da4a8(param_1 + 0x17e,uVar6);
  FUN_001da44c(auStack_34);
  uVar6 = FUN_001da358(auStack_34,param_1[0x3ee],auStack_30);
  FUN_001da4a8(param_1 + 0x17f,uVar6);
  FUN_001da44c(auStack_34);
  uVar6 = FUN_001da358(auStack_34,param_1[0x3ef],auStack_30);
  FUN_001da4a8(param_1 + 0x180,uVar6);
  FUN_001da44c(auStack_34);
  piVar7 = (int *)FUN_000509a8();
  (**(code **)(*piVar7 + 0x20))(piVar7,param_1 + 0x176);
  piVar7 = (int *)FUN_000509a8();
  (**(code **)(*piVar7 + 0x24))(piVar7,param_1 + 500);
  piVar7 = (int *)FUN_000509a8();
  local_c8 = (int *)0x0;
  (**(code **)(*piVar7 + 0x34))(piVar7,s__http__tcp_000b70a8,s__ravenna__archwave_000b7094,0);
  piVar7 = (int *)FUN_000509a8();
  (**(code **)(*piVar7 + 0x30))(piVar7,0x14,5);
  FUN_000781ec(param_1 + 0x75);
  piVar7 = (int *)FUN_00066ba0();
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0x10))(piVar7,param_1 + 0x75);
  }
  puVar5 = (undefined4 *)FUN_000dde00();
  if (*(char *)(puVar5 + 1) != '\0') {
    FUN_000c4c14(auStack_b8);
    FUN_000c4bfc(auStack_b8,0,0x1000,0x16);
    FUN_000c4bfc(auStack_b8,1,0x1000,0x18);
    FUN_000c4bfc(auStack_b8,2,0x1000,0x16);
    FUN_000c4bfc(auStack_b8,3,0x1000,0x16);
    FUN_000c4bfc(auStack_b8,4,0x1000,0x18);
    FUN_000c4bfc(auStack_b8,5,0x1000,0x19);
    piVar7 = DAT_000b70b4;
    local_80[0] = (int *)puVar5[7];
    piVar8 = local_80[0] + -3;
    if (*piVar8 + 1 == 0) {
      uVar12 = local_80[0][-1];
      if (0xfffffff1 < uVar12) {
        local_c8 = (int *)0xfffffff1;
        FUN_0010f7cc(8,DAT_000b73dc,DAT_000b73dc,uVar12);
      }
      local_80[0] = piVar7;
      if (uVar12 != 0) {
        local_80[0] = (int *)FUN_0010f82c(uVar12 + 0xe,0);
        if (local_80[0] != (int *)0x0) {
          *local_80[0] = 0;
          local_80[0][1] = 0;
          local_80[0][2] = 0;
        }
        local_80[0][1] = uVar12;
        local_80[0][2] = uVar12;
        puVar11 = (undefined1 *)((int)local_80[0] + uVar12 + 0xc);
        *local_80[0] = 0;
        if (puVar11 != (undefined1 *)0x0) {
          *puVar11 = 0;
        }
      }
      local_80[0] = local_80[0] + 3;
      FUN_00003628(local_80[0],puVar5[7],uVar12);
    }
    else if (piVar8 != DAT_000b70b4) {
      *piVar8 = *piVar8 + 1;
    }
    piVar8 = local_80[0];
    local_84 = (int *)puVar5[5];
    piVar9 = local_84 + -3;
    if (*piVar9 + 1 == 0) {
      uVar12 = local_84[-1];
      if (0xfffffff1 < uVar12) {
        local_c8 = (int *)0xfffffff1;
        FUN_0010f7cc(8,DAT_000b73dc,DAT_000b73dc,uVar12);
      }
      if (uVar12 != 0) {
        piVar7 = (int *)FUN_0010f82c(uVar12 + 0xe,0);
        if (piVar7 != (int *)0x0) {
          *piVar7 = 0;
          piVar7[1] = 0;
          piVar7[2] = 0;
        }
        piVar7[1] = uVar12;
        piVar7[2] = uVar12;
        puVar11 = (undefined1 *)((int)piVar7 + uVar12 + 0xc);
        *piVar7 = 0;
        if (puVar11 != (undefined1 *)0x0) {
          *puVar11 = 0;
        }
      }
      local_84 = piVar7 + 3;
      FUN_00003628(local_84,puVar5[5],uVar12);
    }
    else if (piVar9 != piVar7) {
      *piVar9 = *piVar9 + 1;
    }
    piVar7 = local_84;
    uVar1 = *(undefined2 *)((int)puVar5 + 0xe);
    uVar6 = FUN_00084950();
    local_bc = (code *)0x2;
    local_c8 = piVar8;
    local_c4 = 1;
    local_c0 = 4;
    FUN_00084754(uVar6,auStack_b8,uVar1,piVar7);
    FUN_001da44c(&local_84);
    FUN_001da44c(local_80);
    iVar4 = (**(code **)*puVar5)(puVar5);
    if (iVar4 != 0) {
      FUN_0006f6b4();
      iVar4 = FUN_0006f3f8();
      if (iVar4 == 0) goto LAB_000b739c;
    }
    if (*(char *)((int)puVar5 + 0x29) != '\0') {
      piVar7 = (int *)FUN_0006ed24();
      (**(code **)(*piVar7 + 8))();
    }
    FUN_000e46d8();
  }
  uVar6 = FUN_0018ab18(0);
  FUN_0018dc40(uVar6,DAT_000b73e0);
  FUN_00111024(param_1 + 0x381,0xfa,param_1 + 0x5f);
  FUN_00089e9c(&local_c8,1);
  local_c0 = CONCAT31(local_c0._1_3_,0xfe);
  iVar4 = (**(code **)(*param_1 + 0x4c))(param_1,&local_c8);
  if (iVar4 == 0) {
    FUN_000028a4(DAT_000b7440);
    FUN_00089ecc(&local_c8);
  }
  else {
    FUN_00089ecc(&local_c8);
    *(undefined1 *)(param_1 + 0x6f) = 0;
    uVar6 = FUN_0017b3e4();
    FUN_0017b4a8(uVar6,0,&local_3c);
    iVar4 = FUN_000b7568(param_1);
    if (iVar4 != 0) {
      FUN_00110eec();
      iVar4 = FUN_00110c1c();
      puVar2 = DAT_000b73e4;
      if (iVar4 == 0) {
        FUN_000028a4(s_ERROR______MODULE_FORCED_TO_AV_M_000b752c);
      }
      else {
        uVar13 = 0;
        FUN_000028a4(s_Wait_for_valid_audio_clocks____000b73e8);
        uVar6 = DAT_000b7410;
        uVar12 = DAT_000b740c;
        piVar7 = (int *)0x0;
        do {
          if (*puVar2 < uVar12) {
            uVar13 = uVar13 + 1;
            FUN_00006158(uVar6);
            FUN_001e3fe4();
            if (3 < uVar13) {
              uVar14 = FUN_001e3c58();
              uVar6 = (undefined4)((ulonglong)uVar14 >> 0x20);
              local_c8 = piVar7;
              FUN_000028a4(s_Valid_AV_clocks_with__6_0f_kHz___000b7414,uVar6,(int)uVar14,uVar6);
              break;
            }
          }
          piVar7 = (int *)((int)piVar7 + 1);
          FUN_0017b9f8(0xfa);
        } while (*(char *)((int)param_1 + 0xf29) == '\0');
      }
      FUN_00110eec();
      uVar6 = FUN_00110c1c();
      FUN_000b84e0(param_1,uVar6);
      uVar6 = FUN_0017b3e4();
      FUN_0017b4a8(uVar6,local_3c,&local_c8);
      FUN_000d9c50(auStack_78);
      FUN_0008b520(param_1,auStack_78,6,param_1[100]);
      FUN_000b67f8(param_1,auStack_78);
      pcVar3 = (char *)FUN_0008b7dc(auStack_54,param_1 + 0x4a);
      *(undefined4 *)pcVar3 = uVar10;
      uVar10 = (**(code **)(*local_4c + 0x24))();
      *DAT_000b7560 = uVar10;
      FUN_0008b818(auStack_54);
      FUN_0003779c(DAT_000b7564);
      FUN_00050bb8(local_38);
      FUN_000d9c80(auStack_78);
      FUN_0008b818(auStack_48);
      FUN_0008b818(auStack_68);
      return 1;
    }
    uVar10 = FUN_0017b3e4();
    FUN_0017b4a8(uVar10,local_3c,&local_c8);
  }
LAB_000b739c:
  FUN_0008b818(auStack_48);
  FUN_0008b818(auStack_68);
  return 0;
}

