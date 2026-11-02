// rea decompile_all
// name: FUN_00118208
// address: 0x118208
// body: available
// range: 0x118208-0x1186ef inclusive
// range: 0x1187a4-0x118d4b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00118208(int param_1,int param_2,undefined4 param_3,int param_4,code *param_5,
                 undefined4 param_6)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_a8 [56];
  uint local_70;
  uint local_6c;
  uint local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 uStack_54;
  int local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  int iStack_34;
  int local_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  iStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  iStack_28 = param_4;
  FUN_000ce0b8(auStack_a8);
  if (*(int *)(param_4 + 0x70) != 0) {
    FUN_00002898(DAT_001186f0,*(undefined4 *)(param_4 + 0x24),
                 *(int *)(param_4 + 0x94) + *(int *)(param_4 + 0x8c));
    iVar2 = FUN_001da98c(0,*(int *)(param_4 + 0x8c),
                         (*(int *)(param_4 + 0x90) - *(int *)(param_4 + 0x8c)) + 1);
    if (iVar2 != 0) {
      FUN_00002898(DAT_001186f4);
      uVar3 = 6;
      *(undefined1 *)(param_1 + 0x114) = 6;
      if (param_5 == entry) {
        return;
      }
      goto LAB_00118d40;
    }
    local_64 = *(int *)(param_4 + 0x70);
    uVar9 = *(uint *)(param_4 + 0x24);
    local_70 = *(int *)(param_4 + 0x8c) + *(int *)(param_4 + 0x94);
    local_6c = uVar9;
    FUN_00002898(DAT_001186f8,local_64);
    local_58 = param_1 + 0x115;
    do {
      FUN_001daad8(0,local_70,&local_5c);
      FUN_001daa88(0,local_5c,&local_60,&local_68);
      local_68 = local_68 + 1;
      uVar8 = local_68 - local_60;
      FUN_00002898(DAT_001186fc,uVar8);
      iVar2 = FUN_001dac54(0,local_60,uVar8);
      if (iVar2 != 0) {
        FUN_00002898(DAT_00118700);
        uVar3 = 6;
        *(undefined1 *)(param_1 + 0x114) = 6;
        if (param_5 == entry) {
          return;
        }
        goto LAB_00118d40;
      }
      iVar2 = FUN_001da9b4(0,local_60,uVar8);
      if (iVar2 != 0) {
        FUN_00002898(DAT_00118704,iVar2);
        uVar3 = 6;
        *(undefined1 *)(param_1 + 0x114) = 6;
        if (param_5 == entry) {
          return;
        }
        goto LAB_00118d40;
      }
      uVar6 = 0;
      do {
        uVar7 = 0x800;
        if (uVar8 < uVar6 + 0x800) {
          uVar7 = uVar8 - uVar6;
        }
        iVar2 = FUN_001dabd8(0,local_60 + uVar6,local_58,uVar7);
        if (iVar2 != 0) {
          FUN_00002898(_DAT_00118708);
          uVar3 = 6;
          *(undefined1 *)(param_1 + 0x114) = 6;
          if (param_5 == entry) {
            return;
          }
          goto LAB_00118d40;
        }
        uVar4 = 0;
        if (uVar7 != 0) {
          do {
            if (*(char *)(param_1 + uVar4 + 0x115) != -1) {
              FUN_00002898(s_3__ERROR__FirmwareUpdateHandler__00118709 + 3);
              uVar3 = 6;
              *(undefined1 *)(param_1 + 0x114) = 6;
              if (param_5 == entry) {
                return;
              }
              goto LAB_00118d40;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar7);
        }
        uVar6 = uVar6 + uVar7;
      } while (uVar6 < uVar8);
      uVar8 = uVar9;
      if (local_68 < local_70 + uVar9) {
        uVar8 = local_68 - local_70;
      }
      FUN_00002898(_DAT_00118748,uVar8,local_70,*(undefined1 *)(param_1 + 0x915));
      iVar2 = FUN_001dacc8(0,local_70,local_30 + local_64,uVar8);
      if (iVar2 != 0) {
        FUN_00002898(s_3__P4__DEBUG__FirmwareUpdateHand_00118749._3_4_);
        uVar3 = 7;
        *(undefined1 *)(param_1 + 0x114) = 7;
        if (param_5 == entry) {
          return;
        }
        goto LAB_001186e0;
      }
      uVar9 = uVar9 - uVar8;
      local_70 = local_70 + uVar8;
      local_64 = local_64 + uVar8;
      uVar1 = FUN_00006604((local_6c - uVar9) * 100,local_6c);
      *(undefined1 *)(param_1 + 0x915) = uVar1;
    } while (uVar9 != 0);
    *(undefined1 *)(param_1 + 0x915) = 100;
    FUN_00002898(s_3__P4__DEBUG__FirmwareUpdateHand_00118749 + 7);
    uVar9 = *(uint *)(param_4 + 0x24);
    local_68 = 0;
    uVar6 = *(uint *)(param_4 + 0x28);
    uVar8 = 0xffffffff;
    bVar10 = uVar9 != 0;
    local_70 = 0xffffffff;
    if (bVar10) {
      uVar8 = param_1 + 0x115;
    }
    iVar2 = *(int *)(param_4 + 0x8c) + *(int *)(param_4 + 0x94);
    uVar4 = uVar8;
    uVar7 = local_6c;
    while (local_6c = uVar4, bVar10) {
      uVar8 = uVar9;
      if (0x800 < uVar9) {
        uVar8 = 0x800;
      }
      iVar5 = FUN_001dabd8(local_68,iVar2,local_6c,uVar8);
      if (iVar5 != 0) {
        FUN_00002898(DAT_00118788);
        goto LAB_001185e4;
      }
      FUN_00176c74(local_6c,uVar8,&local_70);
      uVar9 = uVar9 - uVar8;
      bVar10 = uVar9 != 0;
      iVar2 = iVar2 + uVar8;
      uVar8 = local_70;
      uVar4 = local_6c;
      uVar7 = local_6c;
    }
    local_70 = ~uVar8;
    local_6c = uVar7;
    if (uVar6 != local_70) {
LAB_001185e4:
      FUN_00002898(DAT_00118794);
      uVar3 = 8;
      *(undefined1 *)(param_1 + 0x114) = 8;
      if (param_5 == entry) {
        return;
      }
      goto LAB_00118d40;
    }
    FUN_00002898(DAT_0011878c,*(undefined4 *)(param_4 + 0x8c));
    iVar2 = FUN_001dacc8(0,*(undefined4 *)(param_4 + 0x8c),param_4,0x38);
    if (iVar2 != 0) {
      FUN_00002898(DAT_00118790);
      uVar3 = 7;
      *(undefined1 *)(param_1 + 0x114) = 7;
      if (param_5 == entry) {
        return;
      }
      goto LAB_00118d40;
    }
    iVar2 = FUN_001dabd8(0,*(undefined4 *)(param_4 + 0x8c),auStack_a8,0x38);
    if (iVar2 != 0) {
      FUN_00002898(DAT_00118798);
      uVar3 = 8;
      *(undefined1 *)(param_1 + 0x114) = 8;
      if (param_5 == entry) {
        return;
      }
      goto LAB_00118d40;
    }
    iVar2 = FUN_00003658(auStack_a8,param_4,0x38);
    if (iVar2 != 0) {
      FUN_00002898(DAT_0011879c);
      FUN_001b7a60(auStack_a8);
      uVar3 = 8;
      *(undefined1 *)(param_1 + 0x114) = 8;
      if (param_5 == entry) {
        return;
      }
      goto LAB_00118d40;
    }
    uVar9 = (uint)*(byte *)(param_4 + 0x88);
    bVar10 = uVar9 == 0;
    if (bVar10) {
      uVar9 = *(uint *)(param_4 + 0x18);
    }
    if (bVar10 && uVar9 == 2) {
      uVar9 = *(uint *)(param_4 + 0x90);
      uVar8 = *(uint *)(param_4 + 0x7c);
      bVar10 = uVar8 <= uVar9;
      if (bVar10) {
        uVar9 = *(uint *)(param_4 + 0x8c);
      }
      if (!bVar10 || uVar8 < uVar9) {
        FUN_00002898(DAT_00118d4c);
        local_70 = 0x3f;
        iVar2 = FUN_001da98c(0,*(int *)(param_4 + 0x7c) + 0x2c,4);
        if (iVar2 != 0) {
          FUN_00002898(DAT_00118d50);
          uVar3 = 7;
          *(undefined1 *)(param_1 + 0x114) = 7;
          if (param_5 == entry) {
            return;
          }
          goto LAB_00118d40;
        }
        iVar2 = FUN_001dac54(0,*(int *)(param_4 + 0x7c) + 0x2c,4);
        if (iVar2 != 0) {
          FUN_00002898(DAT_00118d54);
          uVar3 = 7;
          *(undefined1 *)(param_1 + 0x114) = 7;
          if (param_5 == entry) {
            return;
          }
          goto LAB_00118d40;
        }
        iVar2 = FUN_001dacc8(0,*(int *)(param_4 + 0x7c) + 0x2c,&local_70,4);
        if (iVar2 != 0) {
          FUN_00002898(DAT_00118d58);
          uVar3 = 7;
          *(undefined1 *)(param_1 + 0x114) = 7;
          if (param_5 == entry) {
            return;
          }
          goto LAB_00118d40;
        }
        goto LAB_001186a8;
      }
    }
    FUN_00002898(DAT_001187a0);
  }
LAB_001186a8:
  if (*(int *)(param_4 + 0x74) != 0) {
    if (*(int *)(param_4 + 0x78) != 0) {
      uVar3 = FUN_00115d40(param_1,local_30 + *(int *)(param_4 + 0x74));
      *(char *)(param_1 + 0x114) = (char)uVar3;
      if (param_5 == entry) {
        return;
      }
LAB_001186e0:
      (*param_5)(uVar3,param_6);
      return;
    }
    uVar9 = (*(int *)(param_4 + 0xa8) - *(int *)(param_4 + 0xa4)) + 1;
    FUN_00002898(DAT_00118d5c,uVar9);
    iVar2 = FUN_001da98c(0,*(undefined4 *)(param_4 + 0xa4),uVar9);
    if (iVar2 != 0) {
      FUN_00002898(DAT_00118d60);
      uVar3 = 6;
      *(undefined1 *)(param_1 + 0x114) = 6;
      if (param_5 == entry) {
        return;
      }
      goto LAB_00118d40;
    }
    iVar2 = FUN_001dac54(0,*(undefined4 *)(param_4 + 0xa4),uVar9);
    if (iVar2 != 0) {
      FUN_00002898(DAT_00118d64);
      uVar3 = 6;
      *(undefined1 *)(param_1 + 0x114) = 6;
      if (param_5 == entry) {
        return;
      }
      goto LAB_00118d40;
    }
    iVar2 = FUN_001da9b4(0,*(undefined4 *)(param_4 + 0xa4),uVar9);
    if (iVar2 != 0) {
      FUN_00002898(DAT_00118d68);
      uVar3 = 6;
      *(undefined1 *)(param_1 + 0x114) = 6;
      if (param_5 == entry) {
        return;
      }
      goto LAB_00118d40;
    }
    if ((uint)(*(int *)(param_4 + 0xa0) + *(int *)(param_4 + 0x5c)) <= uVar9) {
      iVar2 = FUN_001dacc8(0,*(int *)(param_4 + 0xa4) + *(int *)(param_4 + 0xa0),
                           *(int *)(param_4 + 0x74) + local_30);
      if (iVar2 != 0) {
        FUN_00002898(DAT_00118d6c);
        uVar3 = 7;
        *(undefined1 *)(param_1 + 0x114) = 7;
        if (param_5 == entry) {
          return;
        }
        goto LAB_00118d40;
      }
      FUN_000ce0b8(&local_70);
      local_70 = *(uint *)(param_4 + 0x38);
      local_6c = *(uint *)(param_4 + 0x3c);
      local_68 = *(uint *)(param_4 + 0x40);
      local_64 = *(int *)(param_4 + 0x44);
      local_60 = *(int *)(param_4 + 0x48);
      local_5c = *(undefined4 *)(param_4 + 0x4c);
      local_58 = *(int *)(param_4 + 0x50);
      uStack_54 = *(undefined4 *)(param_4 + 0x54);
      uStack_4c = *(undefined4 *)(param_4 + 0x5c);
      uStack_48 = *(undefined4 *)(param_4 + 0x60);
      uStack_44 = *(undefined4 *)(param_4 + 100);
      local_40 = *(undefined4 *)(param_4 + 0x68);
      uStack_3c = *(undefined4 *)(param_4 + 0x6c);
      local_50 = (*(int *)(param_4 + 0xa4) - *(int *)(param_4 + 0x98)) + *(int *)(param_4 + 0x58);
      iVar2 = FUN_001dacc8(0,*(undefined4 *)(param_4 + 0xa4),&local_70,0x38);
      if (iVar2 != 0) {
        FUN_00002898(DAT_00118d70);
        uVar3 = 7;
        *(undefined1 *)(param_1 + 0x114) = 7;
        if (param_5 == entry) {
          return;
        }
        goto LAB_00118d40;
      }
    }
    iVar5 = (*(int *)(param_4 + 0x9c) - *(int *)(param_4 + 0x98)) + 1;
    FUN_00002898(DAT_00118d74,iVar5);
    iVar2 = FUN_001da98c(0,*(undefined4 *)(param_4 + 0x98),iVar5);
    if (iVar2 != 0) {
      FUN_00002898(DAT_00118d78);
      uVar3 = 6;
      *(undefined1 *)(param_1 + 0x114) = 6;
      if (param_5 == entry) {
        return;
      }
      goto LAB_00118d40;
    }
    iVar2 = FUN_001dac54(0,*(undefined4 *)(param_4 + 0x98),iVar5);
    if (iVar2 != 0) {
      FUN_00002898(DAT_00118d7c);
      uVar3 = 6;
      *(undefined1 *)(param_1 + 0x114) = 6;
      if (param_5 == entry) {
        return;
      }
      goto LAB_00118d40;
    }
    iVar2 = FUN_001da9b4(0,*(undefined4 *)(param_4 + 0x98),iVar5);
    if (iVar2 != 0) {
      FUN_00002898(DAT_00118d80);
      uVar3 = 6;
      *(undefined1 *)(param_1 + 0x114) = 6;
      if (param_5 == entry) {
        return;
      }
      goto LAB_00118d40;
    }
    FUN_00002898(DAT_00118d84,*(undefined4 *)(param_4 + 0x5c),
                 *(int *)(param_4 + 0x98) + *(int *)(param_4 + 0xa0));
    iVar2 = FUN_001dacc8(0,*(int *)(param_4 + 0xa0) + *(int *)(param_4 + 0x98),
                         *(int *)(param_4 + 0x74) + local_30,*(undefined4 *)(param_4 + 0x5c));
    if (iVar2 != 0) {
      FUN_00002898(DAT_00118d88);
      uVar3 = 7;
      *(undefined1 *)(param_1 + 0x114) = 7;
      if (param_5 == entry) {
        return;
      }
      goto LAB_00118d40;
    }
    local_68 = 0;
    uVar9 = *(uint *)(param_4 + 0x5c);
    uVar6 = *(uint *)(param_4 + 0x60);
    uVar8 = 0xffffffff;
    bVar10 = uVar9 != 0;
    local_70 = 0xffffffff;
    if (bVar10) {
      uVar8 = param_1 + 0x115;
    }
    iVar2 = *(int *)(param_4 + 0x98) + *(int *)(param_4 + 0xa0);
    uVar4 = uVar8;
    uVar7 = local_6c;
    while (local_6c = uVar4, bVar10) {
      uVar8 = uVar9;
      if (0x800 < uVar9) {
        uVar8 = 0x800;
      }
      iVar5 = FUN_001dabd8(local_68,iVar2,local_6c,uVar8);
      if (iVar5 != 0) {
        FUN_00002898(DAT_00118788);
        goto LAB_00118c78;
      }
      FUN_00176c74(local_6c,uVar8,&local_70);
      uVar9 = uVar9 - uVar8;
      bVar10 = uVar9 != 0;
      iVar2 = iVar2 + uVar8;
      uVar8 = local_70;
      uVar4 = local_6c;
      uVar7 = local_6c;
    }
    local_70 = ~uVar8;
    local_6c = uVar7;
    if (uVar6 != local_70) {
LAB_00118c78:
      FUN_00002898(DAT_00118d90);
      uVar3 = 8;
      *(undefined1 *)(param_1 + 0x114) = 8;
      if (param_5 == entry) {
        return;
      }
      goto LAB_00118d40;
    }
    FUN_00002898(DAT_00118d8c,*(undefined4 *)(param_4 + 0x98));
    iVar2 = FUN_001dacc8(0,*(undefined4 *)(param_4 + 0x98),param_4 + 0x38,0x38);
    if (iVar2 != 0) {
      FUN_00002898(DAT_00118d70);
      uVar3 = 7;
      *(undefined1 *)(param_1 + 0x114) = 7;
      if (param_5 == entry) {
        return;
      }
      goto LAB_00118d40;
    }
    iVar2 = FUN_001dabd8(0,*(undefined4 *)(param_4 + 0x98),auStack_a8,0x38);
    if (iVar2 != 0) {
      FUN_00002898(_DAT_00118d94);
      uVar3 = 8;
      *(undefined1 *)(param_1 + 0x114) = 8;
      if (param_5 == entry) {
        return;
      }
      goto LAB_00118d40;
    }
    iVar2 = FUN_00003658(auStack_a8,param_4 + 0x38,0x38);
    if (iVar2 != 0) {
      FUN_00002898(s_<*_8_*_DEBUG:_FirmwareUpdateHand_00118d95._3_4_);
      FUN_001b7a60(auStack_a8);
      uVar3 = 8;
      *(undefined1 *)(param_1 + 0x114) = 8;
      if (param_5 == entry) {
        return;
      }
      goto LAB_00118d40;
    }
  }
  FUN_00002898(s_<*_8_*_DEBUG:_FirmwareUpdateHand_00118d95 + 7);
  uVar3 = 1;
  *(undefined1 *)(param_1 + 0x114) = 1;
  if (param_5 == entry) {
    return;
  }
LAB_00118d40:
  (*param_5)(uVar3,param_6);
  return;
}

