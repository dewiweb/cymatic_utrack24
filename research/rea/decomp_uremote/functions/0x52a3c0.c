// rea decompile_all
// name: FUN_0052a3c0
// address: 0x52a3c0
// body: available
// range: 0x52a3c0-0x52a58d inclusive
// range: 0x52a590-0x52b938 inclusive
// range: 0x52b93e-0x52bcdf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052a3c0(int *param_1)

{
  char cVar1;
  int in_ECX;
  undefined4 extraout_ECX;
  uint uVar2;
  undefined4 local_580;
  undefined4 local_57c;
  undefined4 local_578;
  undefined4 local_574;
  undefined4 local_570;
  undefined4 local_56c;
  int *local_568;
  undefined4 local_564;
  uint uStack_560;
  undefined1 *puStack_55c;
  int *piStack_558;
  uint uStack_554;
  uint local_550;
  uint local_54c;
  undefined4 local_548;
  undefined4 local_544;
  undefined4 local_540;
  undefined4 local_53c;
  undefined4 local_538;
  undefined4 local_534;
  undefined4 local_530;
  undefined4 local_52c;
  undefined4 local_528;
  undefined4 local_524;
  undefined4 local_520;
  undefined4 local_51c;
  undefined4 local_518;
  undefined4 local_514;
  undefined4 local_510;
  undefined4 local_50c;
  undefined4 local_508;
  undefined4 local_504;
  undefined4 local_500;
  undefined4 local_4fc;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  undefined4 local_4ec;
  int local_4e8;
  undefined4 local_4e4;
  undefined4 local_4e0;
  undefined4 local_4dc;
  undefined4 local_4d8;
  undefined4 local_4d4;
  undefined4 local_4d0;
  int local_4cc;
  uint local_4c8;
  int local_4c4;
  ushort local_4be;
  undefined1 local_4bb;
  ushort local_4ba;
  undefined1 local_4b8;
  undefined1 local_4b7;
  ushort local_4b6;
  uint local_4b4;
  undefined1 *local_4b0;
  undefined1 *local_4ac;
  undefined1 *local_4a8;
  undefined1 *local_4a4;
  undefined1 *local_4a0;
  undefined1 *local_49c;
  undefined1 *local_498;
  undefined4 local_494;
  undefined4 local_490;
  undefined4 local_48c;
  undefined4 local_488;
  undefined4 local_484;
  undefined4 local_480;
  undefined4 local_47c;
  int *local_478;
  undefined4 local_474;
  undefined4 local_470;
  undefined1 *local_46c;
  undefined1 *local_468;
  undefined1 *local_464;
  undefined1 *local_460;
  undefined1 *local_45c;
  undefined1 *local_458;
  undefined1 *local_454;
  undefined4 local_450;
  undefined4 local_44c;
  undefined4 local_448;
  undefined4 local_444;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438;
  int *local_434;
  undefined1 *local_430;
  undefined1 *local_42c;
  undefined1 *local_428;
  undefined1 *local_424;
  undefined1 *local_420;
  undefined1 *local_41c;
  undefined1 *local_418;
  undefined4 local_414;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400;
  undefined4 local_3fc;
  int *local_3f8;
  undefined1 *local_3f4;
  undefined1 *local_3f0;
  undefined1 *local_3ec;
  undefined1 *local_3e8;
  undefined1 *local_3e4;
  undefined1 *local_3e0;
  undefined1 *local_3dc;
  undefined4 local_3d8;
  undefined4 local_3d4;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined4 local_3c8;
  undefined4 local_3c4;
  undefined4 local_3c0;
  int *local_3bc;
  ushort local_3b8;
  ushort local_3b6;
  short local_3b4;
  short local_3b2;
  undefined1 *local_3b0;
  ushort local_3ac;
  ushort local_3aa;
  ushort local_3a8;
  ushort local_3a6;
  ushort local_3a4;
  ushort local_3a2;
  undefined4 local_3a0;
  undefined1 local_39c [16];
  undefined1 local_38c [16];
  undefined1 local_37c [16];
  undefined1 local_36c [12];
  undefined1 local_360 [12];
  undefined1 local_354 [12];
  undefined1 local_348 [12];
  undefined1 local_33c [12];
  undefined1 local_330 [12];
  undefined1 local_324 [12];
  undefined1 local_318 [12];
  undefined1 local_30c [12];
  undefined1 local_300 [12];
  undefined1 local_2f4 [12];
  undefined4 local_2e8;
  undefined1 *local_2e4;
  undefined4 local_2e0;
  undefined1 *local_2dc;
  undefined4 local_2d8;
  undefined1 *local_2d4;
  undefined4 local_2d0;
  undefined1 *local_2cc;
  undefined4 local_2c8;
  undefined1 *local_2c4;
  undefined4 local_2c0;
  undefined1 *local_2bc;
  int *local_2b8;
  undefined1 *local_2b4;
  undefined1 local_2b0 [8];
  undefined1 local_2a8 [8];
  undefined1 local_2a0 [16];
  undefined1 local_290 [12];
  undefined1 local_284 [12];
  undefined1 local_278 [12];
  undefined1 local_26c [12];
  undefined1 local_260 [12];
  undefined1 local_254 [12];
  undefined4 local_248;
  undefined1 *local_244;
  undefined4 local_240;
  undefined1 *local_23c;
  undefined4 local_238;
  undefined1 *local_234;
  undefined4 local_230;
  undefined1 *local_22c;
  undefined4 local_228;
  undefined1 *local_224;
  undefined4 local_220;
  undefined1 *local_21c;
  int *local_218;
  undefined1 *local_214;
  undefined1 local_210 [8];
  undefined1 local_208 [8];
  undefined1 local_200 [16];
  undefined1 local_1f0 [12];
  undefined1 local_1e4 [12];
  undefined4 local_1d8;
  undefined1 *local_1d4;
  undefined4 local_1d0;
  undefined1 *local_1cc;
  undefined4 local_1c8;
  undefined1 *local_1c4;
  undefined4 local_1c0;
  undefined1 *local_1bc;
  undefined4 local_1b8;
  undefined1 *local_1b4;
  undefined4 local_1b0;
  undefined1 *local_1ac;
  int *local_1a8;
  undefined1 *local_1a4;
  undefined1 local_1a0 [8];
  undefined1 local_198 [8];
  undefined1 local_190 [16];
  undefined1 local_180 [12];
  undefined1 local_174 [12];
  undefined1 local_168 [12];
  undefined1 local_15c [12];
  undefined4 local_150;
  undefined1 *local_14c;
  undefined4 local_148;
  undefined1 *local_144;
  undefined4 local_140;
  undefined1 *local_13c;
  undefined4 local_138;
  undefined1 *local_134;
  undefined4 local_130;
  undefined1 *local_12c;
  undefined4 local_128;
  undefined1 *local_124;
  int *local_120;
  undefined1 *local_11c;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [12];
  undefined1 local_ec [12];
  undefined1 local_e0 [12];
  int local_d4 [4];
  uint local_c4;
  undefined1 *local_c0;
  undefined1 local_bc [8];
  undefined1 local_b4 [8];
  undefined1 local_ac [8];
  undefined1 local_a4 [12];
  undefined1 local_98 [12];
  uint local_8c;
  int local_88;
  uint local_84;
  int *local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  uint local_68;
  ushort local_64;
  undefined1 local_5d;
  uint local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  char local_19;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d03f7;
  local_10 = ExceptionList;
  uStack_554 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puStack_55c = (undefined1 *)param_1[0x12];
  piStack_558 = *(int **)(*(int *)(in_ECX + 0x30) + 0xd8);
  uStack_560 = 0x52a41c;
  local_4c4 = in_ECX;
  local_3a0 = piStack_558;
  local_14 = (int)puStack_55c;
  cVar1 = FUN_00507ef0();
  if (cVar1 != '\0') {
    piStack_558 = (int *)0x52a432;
    local_19 = FUN_0052fcc0();
    local_18 = *param_1;
    if ((local_19 != '\0') && (local_18 != 0)) {
      local_20 = *(uint *)(local_18 + 0x10) & 0x3f;
      if (((*(uint *)(local_18 + 0x10) & 0xff00) == 0x3700) &&
         (((((local_20 == 1 || (local_20 == 2)) || (local_20 == 3)) ||
           ((local_20 == 4 || (local_20 == 5)))) || (local_20 == 6)))) {
        if ((*(ushort *)(param_1 + 0x13) & 0x10) != 0x10) {
          for (local_24 = 0; local_3a2 = *(ushort *)((int)param_1 + 0x12), local_24 < local_3a2;
              local_24 = local_24 + 1) {
            piStack_558 = param_1;
            puStack_55c = (undefined1 *)local_24;
            uStack_560 = 0x52a502;
            puStack_55c = (undefined1 *)FUN_005378a0();
            uStack_560 = 0x52a517;
            FUN_00524a70();
          }
          for (local_28 = 0; local_3a4 = *(ushort *)((int)param_1 + 0x1a), local_28 < local_3a4;
              local_28 = local_28 + 1) {
            piStack_558 = param_1;
            puStack_55c = (undefined1 *)local_28;
            uStack_560 = 0x52a558;
            puStack_55c = (undefined1 *)FUN_005378a0();
            uStack_560 = 0x52a56d;
            FUN_00524b00();
          }
        }
      }
      else {
        while (local_18 != 0) {
          if (local_18 == 0) {
            local_2c = *param_1;
          }
          else {
            local_2c = *(int *)(local_18 + 0xc);
          }
          local_4c8 = *(uint *)(local_18 + 0x10) & 0xff00;
          if (local_4c8 < 0x3701) {
            if (local_4c8 == 0x3700) {
              local_64 = 0;
              if ((*(uint *)(local_18 + 0x10) & 0x20000) == 0) {
                local_74 = local_18;
                if (*(int *)(local_18 + 0x20) == 0) {
                  local_6c = *(undefined4 *)(local_18 + 0x1c);
                  local_68 = (uint)*(ushort *)(local_18 + 0x18) + *(int *)(local_18 + 0x1c);
                }
                else {
                  local_6c = *(undefined4 *)(local_18 + 0x20);
                  local_68 = *(uint *)(local_18 + 0x24);
                }
              }
              else {
                local_70 = local_18;
                if (*(int *)(local_18 + 0x20) == 0) {
                  local_6c = *(undefined4 *)(local_18 + 0x1c);
                  local_68 = (uint)*(ushort *)(local_18 + 0x1a) + *(int *)(local_18 + 0x1c);
                }
                else {
                  local_6c = *(undefined4 *)(local_18 + 0x20);
                  local_68 = *(uint *)(local_18 + 0x24);
                }
                local_64 = *(ushort *)(local_18 + 0x18);
              }
              local_5d = (*(uint *)(local_18 + 0x10) & 0x40) != 0;
              local_54c = *(uint *)(local_18 + 0x10) & 0x3f;
              if (local_54c == 8) {
                local_4b8 = (undefined1)*(uint *)(local_18 + 0x10);
                piStack_558 = (int *)(uint)(byte)local_5d;
                puStack_55c = (undefined1 *)(uint)((*(uint *)(local_18 + 0x10) & 0x80) != 0);
                uStack_560 = local_68;
                local_564 = local_6c;
                local_568 = *(int **)(local_4c4 + 0x30);
                local_56c = 0x52ba34;
                local_7c = FUN_0056db60();
                if (local_7c != 0) {
                  piStack_558 = param_1 + 7;
                  puStack_55c = (undefined1 *)0x52ba56;
                  FUN_00503c60();
                  piStack_558 = (int *)local_38c;
                  puStack_55c = (undefined1 *)0x52ba68;
                  FUN_00503de0();
                  if ((*(uint *)(local_18 + 0x10) & 0x20000) == 0) {
                    for (local_84 = 0; local_4ba = *(ushort *)((int)param_1 + 0x12),
                        local_84 < local_4ba; local_84 = local_84 + 1) {
                      piStack_558 = (int *)local_7c;
                      puStack_55c = (undefined1 *)local_84;
                      uStack_560 = 0x52bb34;
                      puStack_55c = (undefined1 *)FUN_005378a0();
                      uStack_560 = 0x52bb49;
                      FUN_005249e0();
                    }
                  }
                  else {
                    piStack_558 = (int *)(uint)local_64;
                    puStack_55c = (undefined1 *)0x52ba9a;
                    local_80 = (int *)FUN_0052c9b0();
                    if (local_80 != (int *)0x0) {
                      piStack_558 = (int *)0x52baab;
                      local_550 = FUN_005446e0();
                      local_550 = local_550 & 0xffff;
                      if ((0x1002 < local_550) && ((local_550 < 0x1005 || (local_550 == 0x2080)))) {
                        piStack_558 = (int *)local_7c;
                        puStack_55c = (undefined1 *)0x52baeb;
                        (**(code **)(*local_80 + 0x18))();
                      }
                      piStack_558 = (int *)0x52baf3;
                      FUN_00544620();
                    }
                  }
                  piStack_558 = (int *)0x52bb72;
                  (**(code **)(*(int *)(local_7c + 0x28 + *(int *)(*(int *)(local_7c + 0x28) + 8)) +
                              4))();
                }
              }
              else if (local_54c == 9) {
                local_4bb = (undefined1)*(uint *)(local_18 + 0x10);
                piStack_558 = (int *)(uint)(byte)local_5d;
                puStack_55c = (undefined1 *)(uint)((*(uint *)(local_18 + 0x10) & 0x80) != 0);
                uStack_560 = local_68;
                local_564 = local_6c;
                local_568 = *(int **)(local_4c4 + 0x30);
                local_56c = 0x52bbb8;
                local_88 = FUN_0056db60();
                if (local_88 != 0) {
                  piStack_558 = param_1 + 7;
                  puStack_55c = (undefined1 *)0x52bbe0;
                  FUN_00503c60();
                  piStack_558 = (int *)local_39c;
                  puStack_55c = (undefined1 *)0x52bbf5;
                  FUN_00503de0();
                  if ((*(ushort *)(param_1 + 0x13) & 0x10) == 0x10) {
                    piStack_558 = (int *)local_88;
                    puStack_55c = (undefined1 *)0x52bc29;
                    FUN_00524cb0();
                  }
                  else {
                    for (local_8c = 0; local_4be = *(ushort *)((int)param_1 + 0x12),
                        local_8c < local_4be; local_8c = local_8c + 1) {
                      piStack_558 = (int *)local_88;
                      puStack_55c = (undefined1 *)local_8c;
                      uStack_560 = 0x52bc7c;
                      puStack_55c = (undefined1 *)FUN_005378a0();
                      uStack_560 = 0x52bc91;
                      FUN_00524950();
                    }
                  }
                  piStack_558 = (int *)0x52bcc4;
                  (**(code **)(*(int *)(local_88 + 0x28 + *(int *)(*(int *)(local_88 + 0x28) + 8)) +
                              4))();
                }
              }
              else if (local_54c == 10) {
                local_4b7 = (undefined1)*(uint *)(local_18 + 0x10);
                piStack_558 = (int *)(uint)(byte)local_5d;
                puStack_55c = (undefined1 *)(uint)((*(uint *)(local_18 + 0x10) & 0x80) != 0);
                uStack_560 = local_68;
                local_564 = local_6c;
                local_568 = *(int **)(local_4c4 + 0x30);
                local_56c = 0x52b97f;
                local_78 = FUN_0056db60();
                if (local_78 != 0) {
                  piStack_558 = param_1 + 7;
                  puStack_55c = (undefined1 *)0x52b99d;
                  FUN_00503c60();
                  piStack_558 = (int *)local_37c;
                  puStack_55c = (undefined1 *)0x52b9af;
                  FUN_00503de0();
                  piStack_558 = (int *)local_78;
                  puStack_55c = (undefined1 *)0x52b9c7;
                  FUN_00523bd0();
                  piStack_558 = (int *)0x52b9ee;
                  (**(code **)(*(int *)(local_78 + 0x28 + *(int *)(*(int *)(local_78 + 0x28) + 8)) +
                              4))();
                }
              }
            }
            else if ((local_4c8 == 0x1000) || (local_4c8 == 0x2300)) {
              if ((*(uint *)(local_18 + 0x10) & 0x20000) == 0) {
                if ((*(uint *)(local_18 + 0x10) & 0x40000) == 0) {
                  uVar2 = *(uint *)(local_18 + 0x10) & 0xff;
                  local_4e8 = uVar2 - 0x40;
                  switch(uVar2) {
                  case 0x40:
                  case 0x51:
                  case 0x52:
                  case 0x61:
                  case 0x80:
                  case 0x90:
                  case 0x91:
                  case 0x92:
                    for (local_5c = 0; local_4b6 = *(ushort *)((int)param_1 + 0x12),
                        local_5c < local_4b6; local_5c = local_5c + 1) {
                      piStack_558 = param_1 + 7;
                      puStack_55c = (undefined1 *)0x52b7f6;
                      FUN_005033e0();
                      piStack_558 = (int *)local_18;
                      puStack_55c = local_36c;
                      uStack_560 = local_5c;
                      local_564 = 0x52b810;
                      uStack_560 = FUN_005378a0();
                      local_564 = 0x52b825;
                      FUN_00524c20();
                    }
                    break;
                  case 0x60:
                  case 0x81:
                    piStack_558 = param_1 + 7;
                    puStack_55c = (undefined1 *)0x52b797;
                    FUN_005033e0();
                    piStack_558 = (int *)local_18;
                    puStack_55c = local_360;
                    uStack_560 = 0x52b7b6;
                    FUN_00524e60();
                    break;
                  case 0xf0:
                    local_48 = local_18;
                    local_3bc = *(int **)(local_18 + 0x30);
                    local_3c0 = *(undefined4 *)(local_18 + 0x48);
                    local_3c4 = *(undefined4 *)(local_18 + 0x44);
                    local_3c8 = *(undefined4 *)(local_18 + 0x40);
                    local_3cc = *(undefined4 *)(local_18 + 0x3c);
                    local_3d0 = *(undefined4 *)(local_18 + 0x38);
                    local_3d4 = *(undefined4 *)(local_18 + 0x34);
                    piStack_558 = (int *)local_108;
                    puStack_55c = (undefined1 *)0x52abbe;
                    local_150 = local_3d4;
                    local_148 = local_3d0;
                    local_140 = local_3cc;
                    local_138 = local_3c8;
                    local_130 = local_3c4;
                    local_128 = local_3c0;
                    local_120 = local_3bc;
                    local_4f0 = FUN_0052c320();
                    local_8 = 3;
                    piStack_558 = (int *)local_110;
                    puStack_55c = (undefined1 *)0x52abe6;
                    local_4ec = local_4f0;
                    local_4f8 = FUN_0052c2e0();
                    local_8._0_1_ = 4;
                    piStack_558 = (int *)local_118;
                    puStack_55c = (undefined1 *)0x52ac0b;
                    local_4f4 = local_4f8;
                    uStack_560 = FUN_00556050();
                    local_8._0_1_ = 5;
                    local_564 = *(undefined4 *)(local_48 + 0x4c);
                    piStack_558 = (int *)local_4f0;
                    puStack_55c = (undefined1 *)local_4f8;
                    local_11c = (undefined1 *)&local_568;
                    local_3dc = (undefined1 *)&local_568;
                    local_568 = local_120;
                    local_124 = (undefined1 *)&local_56c;
                    local_3e0 = (undefined1 *)&local_56c;
                    local_56c = local_128;
                    local_12c = (undefined1 *)&local_570;
                    local_3e4 = (undefined1 *)&local_570;
                    local_570 = local_130;
                    local_134 = (undefined1 *)&local_574;
                    local_3e8 = (undefined1 *)&local_574;
                    local_574 = local_138;
                    local_13c = (undefined1 *)&local_578;
                    local_3ec = (undefined1 *)&local_578;
                    local_578 = local_140;
                    local_144 = (undefined1 *)&local_57c;
                    local_3f0 = (undefined1 *)&local_57c;
                    local_57c = local_148;
                    local_14c = (undefined1 *)&local_580;
                    local_3f4 = (undefined1 *)&local_580;
                    local_580 = local_150;
                    local_500 = uStack_560;
                    local_4fc = uStack_560;
                    local_3d8 = local_564;
                    FUN_005033e0(local_48 + 0x24);
                    FUN_005033e0(local_48 + 0x18);
                    FUN_0050bb50(0,local_168,local_15c);
                    local_8._0_1_ = 4;
                    piStack_558 = (int *)0x52ad65;
                    FUN_00501900();
                    local_8 = CONCAT31(local_8._1_3_,3);
                    piStack_558 = (int *)0x52ad74;
                    FUN_00501900();
                    local_8 = 0xffffffff;
                    piStack_558 = (int *)0x52ad86;
                    FUN_00506380();
                    piStack_558 = (int *)(local_48 + 0x18);
                    puStack_55c = (undefined1 *)0x52ad98;
                    FUN_005033e0();
                    piStack_558 = (int *)0x1;
                    puStack_55c = local_174;
                    uStack_560 = 0x52adb5;
                    FUN_00526660();
                    piStack_558 = (int *)(local_48 + 0x18);
                    puStack_55c = (undefined1 *)0x52adc7;
                    FUN_005033e0();
                    piStack_558 = (int *)local_180;
                    puStack_55c = (undefined1 *)0x52addc;
                    FUN_0050bab0();
                    break;
                  case 0xf1:
                    local_4c = local_18;
                    local_3f8 = *(int **)(local_18 + 0x30);
                    local_3fc = *(undefined4 *)(local_18 + 0x48);
                    local_400 = *(undefined4 *)(local_18 + 0x44);
                    local_404 = *(undefined4 *)(local_18 + 0x40);
                    local_408 = *(undefined4 *)(local_18 + 0x3c);
                    local_40c = *(undefined4 *)(local_18 + 0x38);
                    local_410 = *(undefined4 *)(local_18 + 0x34);
                    piStack_558 = (int *)local_190;
                    puStack_55c = (undefined1 *)0x52ae9e;
                    local_1d8 = local_410;
                    local_1d0 = local_40c;
                    local_1c8 = local_408;
                    local_1c0 = local_404;
                    local_1b8 = local_400;
                    local_1b0 = local_3fc;
                    local_1a8 = local_3f8;
                    local_508 = FUN_0052c320();
                    local_8 = 6;
                    piStack_558 = (int *)local_198;
                    puStack_55c = (undefined1 *)0x52aec6;
                    local_504 = local_508;
                    local_510 = FUN_0052c2e0();
                    local_8._0_1_ = 7;
                    piStack_558 = (int *)local_1a0;
                    puStack_55c = (undefined1 *)0x52aeeb;
                    local_50c = local_510;
                    uStack_560 = FUN_00556050();
                    local_8._0_1_ = 8;
                    local_564 = *(undefined4 *)(local_4c + 0x4c);
                    piStack_558 = (int *)local_508;
                    puStack_55c = (undefined1 *)local_510;
                    local_1a4 = (undefined1 *)&local_568;
                    local_418 = (undefined1 *)&local_568;
                    local_568 = local_1a8;
                    local_1ac = (undefined1 *)&local_56c;
                    local_41c = (undefined1 *)&local_56c;
                    local_56c = local_1b0;
                    local_1b4 = (undefined1 *)&local_570;
                    local_420 = (undefined1 *)&local_570;
                    local_570 = local_1b8;
                    local_1bc = (undefined1 *)&local_574;
                    local_424 = (undefined1 *)&local_574;
                    local_574 = local_1c0;
                    local_1c4 = (undefined1 *)&local_578;
                    local_428 = (undefined1 *)&local_578;
                    local_578 = local_1c8;
                    local_1cc = (undefined1 *)&local_57c;
                    local_42c = (undefined1 *)&local_57c;
                    local_57c = local_1d0;
                    local_1d4 = (undefined1 *)&local_580;
                    local_430 = (undefined1 *)&local_580;
                    local_580 = local_1d8;
                    local_518 = uStack_560;
                    local_514 = uStack_560;
                    local_414 = local_564;
                    FUN_005033e0(local_4c + 0x24);
                    FUN_005033e0(local_4c + 0x18);
                    FUN_0050ba60(local_1f0,local_1e4);
                    local_8._0_1_ = 7;
                    piStack_558 = (int *)0x52b043;
                    FUN_00501900();
                    local_8 = CONCAT31(local_8._1_3_,6);
                    piStack_558 = (int *)0x52b052;
                    FUN_00501900();
                    local_8 = 0xffffffff;
                    piStack_558 = (int *)0x52b064;
                    FUN_00506380();
                    local_434 = *(int **)(local_4c + 0x30);
                    local_438 = *(undefined4 *)(local_4c + 0x48);
                    local_43c = *(undefined4 *)(local_4c + 0x44);
                    local_440 = *(undefined4 *)(local_4c + 0x40);
                    local_444 = *(undefined4 *)(local_4c + 0x3c);
                    local_448 = *(undefined4 *)(local_4c + 0x38);
                    local_44c = *(undefined4 *)(local_4c + 0x34);
                    piStack_558 = (int *)local_200;
                    puStack_55c = (undefined1 *)0x52b11b;
                    local_248 = local_44c;
                    local_240 = local_448;
                    local_238 = local_444;
                    local_230 = local_440;
                    local_228 = local_43c;
                    local_220 = local_438;
                    local_218 = local_434;
                    local_520 = FUN_0052c320();
                    local_8 = 9;
                    piStack_558 = (int *)local_208;
                    puStack_55c = (undefined1 *)0x52b143;
                    local_51c = local_520;
                    local_528 = FUN_0052c2e0();
                    local_8._0_1_ = 10;
                    piStack_558 = (int *)local_210;
                    puStack_55c = (undefined1 *)0x52b168;
                    local_524 = local_528;
                    uStack_560 = FUN_00556050();
                    local_8._0_1_ = 0xb;
                    local_564 = *(undefined4 *)(local_4c + 0x4c);
                    piStack_558 = (int *)local_520;
                    puStack_55c = (undefined1 *)local_528;
                    local_214 = (undefined1 *)&local_568;
                    local_454 = (undefined1 *)&local_568;
                    local_568 = local_218;
                    local_21c = (undefined1 *)&local_56c;
                    local_458 = (undefined1 *)&local_56c;
                    local_56c = local_220;
                    local_224 = (undefined1 *)&local_570;
                    local_45c = (undefined1 *)&local_570;
                    local_570 = local_228;
                    local_22c = (undefined1 *)&local_574;
                    local_460 = (undefined1 *)&local_574;
                    local_574 = local_230;
                    local_234 = (undefined1 *)&local_578;
                    local_464 = (undefined1 *)&local_578;
                    local_578 = local_238;
                    local_23c = (undefined1 *)&local_57c;
                    local_468 = (undefined1 *)&local_57c;
                    local_57c = local_240;
                    local_244 = (undefined1 *)&local_580;
                    local_46c = (undefined1 *)&local_580;
                    local_580 = local_248;
                    local_530 = uStack_560;
                    local_52c = uStack_560;
                    local_450 = local_564;
                    FUN_005033e0(local_4c + 0x24);
                    FUN_005033e0(local_4c + 0x18);
                    FUN_0050bb50(1,local_260,local_254);
                    local_8._0_1_ = 10;
                    piStack_558 = (int *)0x52b2c2;
                    FUN_00501900();
                    local_8 = CONCAT31(local_8._1_3_,9);
                    piStack_558 = (int *)0x52b2d1;
                    FUN_00501900();
                    local_8 = 0xffffffff;
                    piStack_558 = (int *)0x52b2e3;
                    FUN_00506380();
                    piStack_558 = *(int **)(*(int *)(local_4c4 + 0x30) + 0xd8);
                    puStack_55c = *(undefined1 **)(local_4c + 0x4c);
                    uStack_560 = 0x52b317;
                    local_474 = puStack_55c;
                    local_470 = piStack_558;
                    cVar1 = FUN_00507ef0();
                    if (cVar1 == '\0') {
                      piStack_558 = (int *)(local_4c + 0x18);
                      puStack_55c = (undefined1 *)0x52b38b;
                      FUN_005033e0();
                      piStack_558 = (int *)0x30;
                      puStack_55c = local_284;
                      uStack_560 = 0x52b3a8;
                      FUN_00526450();
                      piStack_558 = (int *)(local_4c + 0x18);
                      puStack_55c = (undefined1 *)0x52b3ba;
                      FUN_005033e0();
                      piStack_558 = (int *)local_290;
                      puStack_55c = (undefined1 *)0x52b3cf;
                      FUN_0050bad0();
                    }
                    else {
                      piStack_558 = (int *)(local_4c + 0x18);
                      puStack_55c = (undefined1 *)0x52b333;
                      FUN_005033e0();
                      piStack_558 = (int *)0x0;
                      puStack_55c = local_26c;
                      uStack_560 = 0x52b350;
                      FUN_00526450();
                      piStack_558 = (int *)(local_4c + 0x18);
                      puStack_55c = (undefined1 *)0x52b362;
                      FUN_005033e0();
                      piStack_558 = (int *)local_278;
                      puStack_55c = (undefined1 *)0x52b377;
                      FUN_0050bab0();
                    }
                    break;
                  case 0xf2:
                    local_54 = local_18;
                    local_4b4 = (uint)*(ushort *)(local_18 + 0x24);
                    piStack_558 = (int *)(local_18 + 0x18);
                    puStack_55c = (undefined1 *)0x52b6d9;
                    FUN_005033e0();
                    piStack_558 = (int *)local_4b4;
                    puStack_55c = local_324;
                    uStack_560 = 0x52b6f5;
                    FUN_0050bd00();
                    break;
                  case 0xf3:
                    local_58 = local_18;
                    piStack_558 = (int *)(local_18 + 0x24);
                    puStack_55c = (undefined1 *)0x52b712;
                    FUN_005033e0();
                    piStack_558 = (int *)(local_58 + 0x18);
                    puStack_55c = (undefined1 *)0x52b724;
                    FUN_005033e0();
                    piStack_558 = (int *)local_330;
                    puStack_55c = local_33c;
                    uStack_560 = 0x52b740;
                    FUN_0050bb20();
                    piStack_558 = (int *)(local_58 + 0x24);
                    puStack_55c = (undefined1 *)0x52b752;
                    FUN_005033e0();
                    piStack_558 = (int *)(local_58 + 0x18);
                    puStack_55c = (undefined1 *)0x52b764;
                    FUN_005033e0();
                    piStack_558 = (int *)local_348;
                    puStack_55c = local_354;
                    uStack_560 = 0x52b780;
                    FUN_0050be30();
                    break;
                  case 0xf4:
                    local_50 = local_18;
                    local_478 = *(int **)(local_18 + 0x30);
                    local_47c = *(undefined4 *)(local_18 + 0x48);
                    local_480 = *(undefined4 *)(local_18 + 0x44);
                    local_484 = *(undefined4 *)(local_18 + 0x40);
                    local_488 = *(undefined4 *)(local_18 + 0x3c);
                    local_48c = *(undefined4 *)(local_18 + 0x38);
                    local_490 = *(undefined4 *)(local_18 + 0x34);
                    piStack_558 = (int *)local_2a0;
                    puStack_55c = (undefined1 *)0x52b491;
                    local_2e8 = local_490;
                    local_2e0 = local_48c;
                    local_2d8 = local_488;
                    local_2d0 = local_484;
                    local_2c8 = local_480;
                    local_2c0 = local_47c;
                    local_2b8 = local_478;
                    local_538 = FUN_0052c320();
                    local_8 = 0xc;
                    piStack_558 = (int *)local_2a8;
                    puStack_55c = (undefined1 *)0x52b4b9;
                    local_534 = local_538;
                    local_540 = FUN_0052c2e0();
                    local_8._0_1_ = 0xd;
                    piStack_558 = (int *)local_2b0;
                    puStack_55c = (undefined1 *)0x52b4de;
                    local_53c = local_540;
                    uStack_560 = FUN_00556050();
                    local_8._0_1_ = 0xe;
                    local_564 = *(undefined4 *)(local_50 + 0x4c);
                    piStack_558 = (int *)local_538;
                    puStack_55c = (undefined1 *)local_540;
                    local_2b4 = (undefined1 *)&local_568;
                    local_498 = (undefined1 *)&local_568;
                    local_568 = local_2b8;
                    local_2bc = (undefined1 *)&local_56c;
                    local_49c = (undefined1 *)&local_56c;
                    local_56c = local_2c0;
                    local_2c4 = (undefined1 *)&local_570;
                    local_4a0 = (undefined1 *)&local_570;
                    local_570 = local_2c8;
                    local_2cc = (undefined1 *)&local_574;
                    local_4a4 = (undefined1 *)&local_574;
                    local_574 = local_2d0;
                    local_2d4 = (undefined1 *)&local_578;
                    local_4a8 = (undefined1 *)&local_578;
                    local_578 = local_2d8;
                    local_2dc = (undefined1 *)&local_57c;
                    local_4ac = (undefined1 *)&local_57c;
                    local_57c = local_2e0;
                    local_2e4 = (undefined1 *)&local_580;
                    local_4b0 = (undefined1 *)&local_580;
                    local_580 = local_2e8;
                    local_548 = uStack_560;
                    local_544 = uStack_560;
                    local_494 = local_564;
                    FUN_005033e0(local_50 + 0x24);
                    FUN_005033e0(local_50 + 0x18);
                    FUN_0050bb50(2,local_300,local_2f4);
                    local_8._0_1_ = 0xd;
                    piStack_558 = (int *)0x52b638;
                    FUN_00501900();
                    local_8 = CONCAT31(local_8._1_3_,0xc);
                    piStack_558 = (int *)0x52b647;
                    FUN_00501900();
                    local_8 = 0xffffffff;
                    piStack_558 = (int *)0x52b659;
                    FUN_00506380();
                    piStack_558 = (int *)(local_50 + 0x18);
                    puStack_55c = (undefined1 *)0x52b66b;
                    FUN_005033e0();
                    piStack_558 = (int *)0x1;
                    puStack_55c = local_30c;
                    uStack_560 = 0x52b688;
                    FUN_00526660();
                    piStack_558 = (int *)(local_50 + 0x18);
                    puStack_55c = (undefined1 *)0x52b69a;
                    FUN_005033e0();
                    piStack_558 = (int *)local_318;
                    puStack_55c = (undefined1 *)0x52b6af;
                    FUN_0050bab0();
                  }
                }
                else {
                  local_40 = local_18;
                  if ((*(ushort *)(param_1 + 0x13) & 0x10) == 0x10) {
                    piStack_558 = param_1 + 7;
                    puStack_55c = (undefined1 *)0x52aa24;
                    FUN_005033e0();
                    piStack_558 = (int *)local_40;
                    puStack_55c = local_ec;
                    uStack_560 = 0x52aa43;
                    FUN_00524d80();
                  }
                  else {
                    for (local_44 = 0; local_3b8 = *(ushort *)((int)param_1 + 0x12),
                        local_44 < local_3b8; local_44 = local_44 + 1) {
                      piStack_558 = param_1 + 7;
                      puStack_55c = (undefined1 *)0x52aa83;
                      FUN_005033e0();
                      piStack_558 = (int *)local_40;
                      puStack_55c = local_f8;
                      uStack_560 = local_44;
                      local_564 = 0x52aa9d;
                      uStack_560 = FUN_005378a0();
                      local_564 = 0x52aab2;
                      FUN_00524b90();
                    }
                  }
                }
              }
              else {
                local_3c = local_18;
                local_3b2 = *(short *)(local_18 + 0x18);
                if ((local_3b2 == 0) &&
                   (local_3b4 = *(short *)((int)param_1 + 0x12), local_3b4 == 1)) {
                  piStack_558 = param_1 + 7;
                  puStack_55c = (undefined1 *)0x52a984;
                  FUN_005033e0();
                  piStack_558 = (int *)0x0;
                  puStack_55c = local_e0;
                  uStack_560 = 0x52a9a1;
                  FUN_00526660();
                }
                else {
                  local_3b6 = *(ushort *)(local_18 + 0x18);
                  piStack_558 = (int *)local_18;
                  puStack_55c = (undefined1 *)(uint)local_3b6;
                  uStack_560 = 0x52a9d1;
                  FUN_0052cb20();
                }
              }
            }
          }
          else if (local_4c8 == 0x4200) {
            uVar2 = *(uint *)(local_18 + 0x10) & 0xff;
            local_4cc = uVar2 - 2;
            switch(uVar2) {
            case 2:
              piStack_558 = (int *)local_18;
              puStack_55c = (undefined1 *)0x52a66c;
              FUN_00525710();
              break;
            case 6:
              local_30 = local_18;
              piStack_558 = (int *)local_18;
              puStack_55c = (undefined1 *)0x52a6ac;
              FUN_005258d0();
              piStack_558 = (int *)(local_30 + 0x24);
              puStack_55c = (undefined1 *)0x52a6be;
              FUN_005033e0();
              piStack_558 = (int *)(local_30 + 0x18);
              puStack_55c = (undefined1 *)0x52a6d0;
              FUN_005033e0();
              piStack_558 = (int *)local_98;
              puStack_55c = local_a4;
              uStack_560 = 0x52a6ec;
              FUN_0050bb20();
              break;
            case 7:
              piStack_558 = (int *)local_18;
              puStack_55c = (undefined1 *)0x52a689;
              FUN_00525930();
              break;
            case 0x20:
              piStack_558 = (int *)local_ac;
              puStack_55c = (undefined1 *)0x52a700;
              puStack_55c = (undefined1 *)FUN_0052c360();
              local_8 = 0;
              local_3a6 = *(ushort *)(local_18 + 0x28);
              piStack_558 = (int *)(local_18 + 0x34);
              uStack_560 = (uint)local_3a6;
              local_564 = 0x52a74b;
              local_4d4 = puStack_55c;
              local_4d0 = puStack_55c;
              FUN_00510c90();
              local_8 = 0xffffffff;
              piStack_558 = (int *)0x52a75d;
              FUN_00501900();
              break;
            case 0x21:
              piStack_558 = (int *)local_18;
              puStack_55c = (undefined1 *)0x52a7f5;
              FUN_0052cd40();
              break;
            case 0x22:
              piStack_558 = (int *)0x1;
              puStack_55c = (undefined1 *)0x52a7db;
              FUN_0050f2a0();
              break;
            case 0x30:
              piStack_558 = (int *)local_18;
              puStack_55c = (undefined1 *)0x52a80f;
              FUN_00522630();
              break;
            case 0xe1:
              local_34 = local_18;
              piStack_558 = (int *)local_18;
              puStack_55c = (undefined1 *)0x52a7c9;
              FUN_00525010();
              break;
            case 0xf0:
            case 0xf1:
            case 0xf2:
            case 0xf4:
            case 0xf5:
              if ((*(uint *)(local_18 + 0x10) & 0x20000) != 0) {
                local_3a8 = *(ushort *)(local_18 + 0x18);
                piStack_558 = (int *)local_18;
                puStack_55c = (undefined1 *)(uint)local_3a8;
                uStack_560 = 0x52a7a9;
                FUN_0052cb20();
              }
            }
          }
          else if (local_4c8 == 0x6300) {
            local_38 = local_18;
            local_3aa = *(ushort *)(local_18 + 0x18);
            local_c4 = (uint)local_3aa;
            piStack_558 = (int *)local_b4;
            puStack_55c = (undefined1 *)0x52a844;
            local_4dc = FUN_0052c3e0();
            local_8 = 1;
            piStack_558 = (int *)local_bc;
            puStack_55c = (undefined1 *)0x52a86c;
            local_4d8 = local_4dc;
            local_4e4 = FUN_0052c3a0();
            local_8._0_1_ = 2;
            local_3ac = *(ushort *)(local_38 + 0x1a);
            piStack_558 = (int *)0x52a89b;
            local_4e0 = local_4e4;
            piStack_558 = (int *)FUN_00501d60();
            puStack_55c = (undefined1 *)0x52a8a7;
            puStack_55c = (undefined1 *)FUN_00501d60();
            uStack_560 = (uint)local_3ac;
            local_c0 = (undefined1 *)&local_564;
            local_3b0 = (undefined1 *)&local_564;
            local_564 = extraout_ECX;
                    /* WARNING: Ignoring partial resolution of indirect */
            local_564._0_2_ = (undefined2)local_c4;
            local_568 = param_1 + 7;
            local_56c = 0x52a8e1;
            FUN_00503c60();
            local_568 = local_d4;
            local_56c = 0x52a8f6;
            FUN_0050bf40();
            local_8 = CONCAT31(local_8._1_3_,1);
            piStack_558 = (int *)0x52a905;
            FUN_00501900();
            local_8 = 0xffffffff;
            piStack_558 = (int *)0x52a917;
            FUN_00501900();
          }
          local_18 = local_2c;
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}

