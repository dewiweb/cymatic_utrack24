// rea decompile_all
// name: FUN_00117484
// address: 0x117484
// body: available
// range: 0x117484-0x117773 inclusive
// range: 0x117880-0x117d47 inclusive
// range: 0x117e30-0x117f3b inclusive
// range: 0x11806c-0x1181f7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00117484(int param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined3 uVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  uint extraout_r2;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74 [2];
  undefined4 local_6c;
  int local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  int local_58;
  uint local_54;
  undefined4 local_50;
  uint local_4c;
  int local_48;
  int local_44;
  uint local_34;
  uint local_30 [2];
  undefined1 auStack_28 [4];
  
  if (param_4 != 0) {
    FUN_001b1230();
  }
  uVar11 = 0x70;
  if ((*(char *)(param_1 + 0x28) == '\x02') && (uVar11 = 0xb0, param_4 != 0)) {
    FUN_001b3964(param_1 + 0x70);
  }
  uVar3 = *(undefined3 *)(param_1 + 0x2c);
  uVar1 = *(undefined1 *)(param_1 + 0x2f);
  iVar7 = *(int *)(param_1 + 0x2c);
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  iVar6 = FUN_00176c50(param_1,uVar11);
  if (iVar7 != iVar6) {
    FUN_00002898(s____ERROR__FirmwareUpdateHandler__001177b5 + 3);
    return 0xb;
  }
  *(char *)(param_1 + 0x2c) = (char)uVar3;
  *(char *)(param_1 + 0x2d) = (char)((uint)iVar7 >> 8);
  *(char *)(param_1 + 0x2e) = (char)((uint)iVar7 >> 0x10);
  uVar11 = s_DIWHERROR__FirmwareUpdateHandler_00117774._0_4_;
  *(undefined1 *)(param_1 + 0x2f) = uVar1;
  iVar7 = FUN_001db900(uVar11,local_30);
  if (iVar7 != 0) {
    local_30[0] = 0;
    local_30[1] = 0;
    FUN_00002898(s_DIWHERROR__FirmwareUpdateHandler_00117774 + 4);
  }
  if (local_30[0] != *(ushort *)(param_1 + 0x20)) {
    FUN_00002898(_DAT_001177b4);
    return 9;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
LAB_001176fc:
    local_34 = param_1 + param_2;
    if (*(int *)(param_1 + 0x30) != 0) {
      iVar6 = *(int *)(param_1 + 0x30) + param_1;
      iVar7 = *(int *)(param_1 + 0x38);
      FUN_00002898(s____D___ERROR__FirmwareUpdateHand_00117841._3_4_,iVar7);
      if (local_34 < (uint)(iVar6 + iVar7)) {
        FUN_00002898(s____D___ERROR__FirmwareUpdateHand_00117841 + 7);
        return 10;
      }
      iVar2 = *(int *)(param_1 + 0x3c);
      iVar7 = FUN_00176c50(iVar6,iVar7);
      uVar8 = DAT_00117d48;
      if (iVar2 != iVar7) goto LAB_00117f28;
      local_54 = DAT_00117d48;
      local_50 = 0;
      uVar11 = FUN_0011a068();
      iVar7 = FUN_001194f4(uVar11,2,&local_58);
      if (iVar7 == 0) {
        FUN_00002898(DAT_00117d4c);
        uVar11 = FUN_0011a068();
        iVar7 = FUN_001194f4(uVar11,1,&local_58);
        if (iVar7 == 0) {
          FUN_00002898(_DAT_00117dac);
          local_54 = uVar8;
          FUN_001eecc8(local_50);
          return 8;
        }
      }
      uVar12 = local_4c;
      *(uint *)(param_3 + 0x84) = local_44 - local_4c & 0xfffffff;
      local_5c = local_48 + (local_4c - 1) & 0xfffffff;
      *(bool *)(param_3 + 0x88) = local_58 == 1;
      local_54 = uVar8;
      FUN_001eecc8(local_50);
      iVar7 = FUN_00116c8c(*(undefined4 *)(param_1 + 0x34),local_74,auStack_28);
      if (iVar7 == 0) {
        return 5;
      }
      iVar7 = *(int *)(param_1 + 0x34) - local_74[0];
      *(int *)(param_3 + 0x94) = iVar7;
      iVar7 = FUN_00116c8c(iVar7 + *(int *)(param_1 + 0x38) + local_74[0],auStack_28,&local_60);
      if (iVar7 == 0) {
        return 5;
      }
      FUN_00002898(DAT_00117d50,uVar12,local_5c,*(undefined4 *)(param_3 + 0x84));
      FUN_00002898(DAT_00117d54,local_74[0],local_60,*(undefined4 *)(param_3 + 0x94));
      pcVar9 = DAT_00117d58;
      local_6c = 2;
      if (*DAT_00117d58 != '\0') {
        FUN_00049558(DAT_00117d5c,DAT_00117d58 + 1);
      }
      piVar4 = _DAT_00117d60;
      if (pcVar9[1] == '\0') {
        bVar14 = local_5c <= local_74[0];
        bVar13 = local_74[0] == local_5c;
        if (!bVar14 || bVar13) {
          bVar14 = local_60 <= uVar12;
          bVar13 = uVar12 == local_60;
        }
        if (!bVar14 || bVar13) {
          uVar8 = *DAT_00117d9c + *_DAT_00117d60 * 2;
          iVar7 = FUN_00116c8c(uVar8,&local_7c,&local_78);
          if (iVar7 == 0) {
            return 5;
          }
          uVar11 = DAT_00117da0;
          if (local_7c != uVar8) {
            uVar8 = local_78 + 1;
            uVar11 = DAT_00117da4;
          }
          FUN_00002898(uVar11,uVar8);
          local_74[0] = uVar8;
          iVar7 = FUN_00116c8c(uVar8 + *(int *)(param_3 + 0x94) + *(int *)(param_1 + 0x38),
                               auStack_28,&local_60);
          if (iVar7 == 0) {
            return 5;
          }
          FUN_00002898(_DAT_00117df4,local_74[0],local_60);
          if ((local_74[0] <= local_5c) && (uVar12 <= local_60)) {
            FUN_00002898(s____ERROR__FirmwareUpdateHandler__00117df5 + 3);
            return 5;
          }
        }
      }
      else {
        FUN_00002898(s____DEBUG__FirmwareUpdateHandler__00117d61 + 3);
        uVar10 = *DAT_00117d9c + *piVar4 * 2;
        iVar7 = FUN_00116c8c(uVar10,&local_78,&local_68);
        if (iVar7 == 0) {
          return 5;
        }
        uVar11 = DAT_00117da0;
        if (local_78 != uVar10) {
          uVar10 = local_68 + 1;
          uVar11 = DAT_00117da4;
        }
        FUN_00002898(uVar11,uVar10);
        if (local_74[0] == uVar10) {
          local_6c = 1;
          FUN_00002898(DAT_00117da8);
        }
        else {
          local_54 = uVar8;
          local_50 = 0;
          uVar11 = FUN_0011a068();
          iVar7 = FUN_001194f4(uVar11,1,&local_58);
          if (iVar7 == 0) {
            FUN_00002898(s________ERROR__FirmwareUpdateHand_00117dad + 7);
            local_54 = uVar8;
            FUN_001eecc8(local_50);
            return 8;
          }
          if (local_74[0] < ((local_4c + local_48) - 1 & 0xfffffff)) {
            FUN_00002898(s________ERROR__FirmwareUpdateHand_00117dad._3_4_);
            local_54 = uVar8;
            FUN_001eecc8(local_50);
            return 8;
          }
          FUN_00002898(DAT_00117df0);
          local_54 = uVar8;
          FUN_001eecc8(local_50);
        }
      }
      *(undefined4 *)(param_3 + 0x70) = *(undefined4 *)(param_1 + 0x30);
      local_78 = *(uint *)(param_1 + 0x3c);
      local_7c = *(uint *)(param_1 + 0x38);
      local_80 = *(int *)(param_3 + 0x94) + local_74[0];
      FUN_00115bcc(param_3,param_1,local_6c,(local_60 - local_74[0]) + 1);
      *(uint *)(param_3 + 0x7c) = uVar12;
      *(uint *)(param_3 + 0x80) = local_5c;
      *(uint *)(param_3 + 0x8c) = local_74[0];
      *(uint *)(param_3 + 0x90) = local_60;
    }
    if (*(int *)(param_1 + 0x50) == 0) {
      FUN_00002898(s_DEBUG__FirmwareUpdateHandler__sc_00117f3c);
      return 1;
    }
    bVar13 = false;
    uVar8 = *(uint *)(param_1 + 0x58);
    uVar12 = *(int *)(param_1 + 0x50) + param_1;
    if (uVar8 == 0) {
      uVar8 = *(uint *)(param_1 + 100);
      if (uVar8 == 0) {
        FUN_00002898(s_ERROR__FirmwareUpdateHandler__sc_00117ff0);
        return 10;
      }
      FUN_00002898(s_DEBUG__FirmwareUpdateHandler__sc_00117f78);
      bVar13 = true;
    }
    FUN_00002898(_DAT_00117fac,uVar8);
    if ((uVar8 < ~uVar12) && (uVar12 + uVar8 <= local_34)) {
      iVar7 = *(int *)(param_1 + 0x5c);
      iVar6 = FUN_00176c50(uVar12,uVar8);
      puVar5 = DAT_001181f8;
      if (iVar7 != iVar6) {
LAB_00117f28:
        FUN_00002898(s____ERROR__FirmwareUpdateHandler__0011802d + 3);
        return 0xb;
      }
      if (!bVar13) {
        iVar7 = FUN_00116c8c(*DAT_001181f8,local_74,&local_68);
        if (iVar7 != 0) {
          uVar8 = *puVar5;
          if (uVar8 < local_74[0] + 0x38) {
            FUN_00002898(DAT_001181fc);
          }
          else {
            *(uint *)(param_3 + 0xa0) = uVar8 - local_74[0];
            iVar7 = FUN_00116c8c(*(int *)(param_1 + 0x58) + uVar8,&local_68,&local_64);
            piVar4 = DAT_00117d9c;
            if (((iVar7 != 0) &&
                (iVar7 = FUN_00116c8c(*DAT_00117d9c,param_3 + 0xa4,&local_68), iVar7 != 0)) &&
               (iVar7 = FUN_00116c8c(*piVar4 + *DAT_00118200 + -1,&local_68,param_3 + 0xa8),
               iVar7 != 0)) {
              if (local_64 < *(uint *)(param_3 + 0xa4)) {
                *(undefined4 *)(param_3 + 0x74) = *(undefined4 *)(param_1 + 0x50);
                local_7c = *(uint *)(param_1 + 0x58);
                local_78 = *(uint *)(param_1 + 0x5c);
                local_80 = *puVar5;
                FUN_00115bcc(param_3 + 0x38,param_1,4,(local_64 - local_74[0]) + 1);
                *(uint *)(param_3 + 0x98) = local_74[0];
                *(uint *)(param_3 + 0x9c) = local_64;
                return 1;
              }
              FUN_00002898(DAT_00118204);
            }
          }
        }
        return 5;
      }
      pcVar9 = _DAT_0011802c;
      if (*(char *)((uVar12 + uVar8) - 1) == '\0') {
        *(undefined4 *)(param_3 + 0x74) = *(undefined4 *)(param_1 + 0x50);
        *(uint *)(param_3 + 0x78) = uVar8;
        return 1;
      }
    }
    else {
      pcVar9 = s____ERROR__FirmwareUpdateHandler__00117fad + 3;
    }
    FUN_00002898(pcVar9);
  }
  else {
    local_80 = FUN_001da8f8();
    if ((local_80 == 0) ||
       (uVar11 = s______cfg_Config_MinDowngradeSWVe_001177f4._0_4_,
       local_80 <= *(uint *)(param_1 + 0x1c))) {
      iVar7 = FUN_0004fe40(s______cfg_Config_MinDowngradeSWVe_001177f4 + 4,&local_80);
      uVar8 = extraout_r2;
      if (iVar7 != 0) {
        uVar8 = local_80;
      }
      if ((iVar7 == 0 || uVar8 == 0) || (uVar11 = _DAT_0011781c, uVar8 <= *(uint *)(param_1 + 0x1c))
         ) {
        iVar7 = FUN_00049558(s_____cfg_Config_DisableDowngradeS_0011781d + 3,&local_78);
        uVar8 = 0;
        if (iVar7 != 0) {
          uVar8 = local_78 & 0xff;
        }
        if (iVar7 != 0 && uVar8 != 0) {
          FUN_000ce0b8(&local_68);
          uVar11 = FUN_0011a068();
          iVar7 = FUN_00118e04(uVar11,2,&local_68);
          uVar8 = 0;
          if (iVar7 != 0) {
            uVar8 = local_54;
          }
          if ((iVar7 != 0 && uVar8 != 0) && (*(uint *)(param_1 + 0x1c) < local_54)) {
            FUN_00002898(_DAT_0011781c,*(uint *)(param_1 + 0x1c),local_54);
            return 10;
          }
        }
        FUN_00002898(_DAT_00117840,*(undefined4 *)(param_1 + 0x1c),local_80);
        goto LAB_001176fc;
      }
    }
    FUN_00002898(uVar11);
  }
  return 10;
}

