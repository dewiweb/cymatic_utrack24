// rea decompile_all
// name: FUN_000c6f38
// address: 0xc6f38
// body: available
// range: 0xc6f38-0xc741f inclusive
// range: 0xc74d4-0xc7a7b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c6f38(int param_1,int param_2,undefined4 param_3,int param_4,code *param_5,
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
  FUN_0009cdb8(auStack_a8);
  if (*(int *)(param_4 + 0x70) != 0) {
    FUN_000028a4(DAT_000c7420,*(undefined4 *)(param_4 + 0x24),
                 *(int *)(param_4 + 0x94) + *(int *)(param_4 + 0x8c));
    iVar2 = FUN_00189e68(0,*(int *)(param_4 + 0x8c),
                         (*(int *)(param_4 + 0x90) - *(int *)(param_4 + 0x8c)) + 1);
    if (iVar2 != 0) {
      FUN_000028a4(DAT_000c7424);
      uVar3 = 6;
      *(undefined1 *)(param_1 + 0x114) = 6;
      if (param_5 == entry) {
        return;
      }
      goto LAB_000c7a70;
    }
    local_64 = *(int *)(param_4 + 0x70);
    uVar9 = *(uint *)(param_4 + 0x24);
    local_70 = *(int *)(param_4 + 0x8c) + *(int *)(param_4 + 0x94);
    local_6c = uVar9;
    FUN_000028a4(DAT_000c7428,local_64);
    local_58 = param_1 + 0x115;
    do {
      FUN_00189fb4(0,local_70,&local_5c);
      FUN_00189f64(0,local_5c,&local_60,&local_68);
      local_68 = local_68 + 1;
      uVar8 = local_68 - local_60;
      FUN_000028a4(DAT_000c742c,uVar8);
      iVar2 = FUN_0018a130(0,local_60,uVar8);
      if (iVar2 != 0) {
        FUN_000028a4(DAT_000c7430);
        uVar3 = 6;
        *(undefined1 *)(param_1 + 0x114) = 6;
        if (param_5 == entry) {
          return;
        }
        goto LAB_000c7a70;
      }
      iVar2 = FUN_00189e90(0,local_60,uVar8);
      if (iVar2 != 0) {
        FUN_000028a4(DAT_000c7434,iVar2);
        uVar3 = 6;
        *(undefined1 *)(param_1 + 0x114) = 6;
        if (param_5 == entry) {
          return;
        }
        goto LAB_000c7a70;
      }
      uVar6 = 0;
      do {
        uVar7 = 0x800;
        if (uVar8 < uVar6 + 0x800) {
          uVar7 = uVar8 - uVar6;
        }
        iVar2 = FUN_0018a0b4(0,local_60 + uVar6,local_58,uVar7);
        if (iVar2 != 0) {
          FUN_000028a4(_DAT_000c7438);
          uVar3 = 6;
          *(undefined1 *)(param_1 + 0x114) = 6;
          if (param_5 == entry) {
            return;
          }
          goto LAB_000c7a70;
        }
        uVar4 = 0;
        if (uVar7 != 0) {
          do {
            if (*(char *)(param_1 + uVar4 + 0x115) != -1) {
              FUN_000028a4(s___ERROR__FirmwareUpdateHandler___000c743a + 2);
              uVar3 = 6;
              *(undefined1 *)(param_1 + 0x114) = 6;
              if (param_5 == entry) {
                return;
              }
              goto LAB_000c7a70;
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
      FUN_000028a4(DAT_000c7478,uVar8,local_70,*(undefined1 *)(param_1 + 0x915));
      iVar2 = FUN_0018a1a4(0,local_70,local_30 + local_64,uVar8);
      if (iVar2 != 0) {
        FUN_000028a4(_DAT_000c747c);
        uVar3 = 7;
        *(undefined1 *)(param_1 + 0x114) = 7;
        if (param_5 == entry) {
          return;
        }
        goto LAB_000c7410;
      }
      uVar9 = uVar9 - uVar8;
      local_70 = local_70 + uVar8;
      local_64 = local_64 + uVar8;
      uVar1 = FUN_00006158((local_6c - uVar9) * 100,local_6c);
      *(undefined1 *)(param_1 + 0x915) = uVar1;
    } while (uVar9 != 0);
    *(undefined1 *)(param_1 + 0x915) = 100;
    FUN_000028a4(s___DEBUG__FirmwareUpdateHandler___000c747e + 2);
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
      iVar5 = FUN_0018a0b4(local_68,iVar2,local_6c,uVar8);
      if (iVar5 != 0) {
        FUN_000028a4(DAT_000c74b8);
        goto LAB_000c7314;
      }
      FUN_001102e0(local_6c,uVar8,&local_70);
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
LAB_000c7314:
      FUN_000028a4(DAT_000c74c4);
      uVar3 = 8;
      *(undefined1 *)(param_1 + 0x114) = 8;
      if (param_5 == entry) {
        return;
      }
      goto LAB_000c7a70;
    }
    FUN_000028a4(DAT_000c74bc,*(undefined4 *)(param_4 + 0x8c));
    iVar2 = FUN_0018a1a4(0,*(undefined4 *)(param_4 + 0x8c),param_4,0x38);
    if (iVar2 != 0) {
      FUN_000028a4(DAT_000c74c0);
      uVar3 = 7;
      *(undefined1 *)(param_1 + 0x114) = 7;
      if (param_5 == entry) {
        return;
      }
      goto LAB_000c7a70;
    }
    iVar2 = FUN_0018a0b4(0,*(undefined4 *)(param_4 + 0x8c),auStack_a8,0x38);
    if (iVar2 != 0) {
      FUN_000028a4(DAT_000c74c8);
      uVar3 = 8;
      *(undefined1 *)(param_1 + 0x114) = 8;
      if (param_5 == entry) {
        return;
      }
      goto LAB_000c7a70;
    }
    iVar2 = FUN_0000339c(auStack_a8,param_4,0x38);
    if (iVar2 != 0) {
      FUN_000028a4(DAT_000c74cc);
      FUN_001585cc(auStack_a8);
      uVar3 = 8;
      *(undefined1 *)(param_1 + 0x114) = 8;
      if (param_5 == entry) {
        return;
      }
      goto LAB_000c7a70;
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
        FUN_000028a4(DAT_000c7a7c);
        local_70 = 0x3f;
        iVar2 = FUN_00189e68(0,*(int *)(param_4 + 0x7c) + 0x2c,4);
        if (iVar2 != 0) {
          FUN_000028a4(DAT_000c7a80);
          uVar3 = 7;
          *(undefined1 *)(param_1 + 0x114) = 7;
          if (param_5 == entry) {
            return;
          }
          goto LAB_000c7a70;
        }
        iVar2 = FUN_0018a130(0,*(int *)(param_4 + 0x7c) + 0x2c,4);
        if (iVar2 != 0) {
          FUN_000028a4(DAT_000c7a84);
          uVar3 = 7;
          *(undefined1 *)(param_1 + 0x114) = 7;
          if (param_5 == entry) {
            return;
          }
          goto LAB_000c7a70;
        }
        iVar2 = FUN_0018a1a4(0,*(int *)(param_4 + 0x7c) + 0x2c,&local_70,4);
        if (iVar2 != 0) {
          FUN_000028a4(DAT_000c7a88);
          uVar3 = 7;
          *(undefined1 *)(param_1 + 0x114) = 7;
          if (param_5 == entry) {
            return;
          }
          goto LAB_000c7a70;
        }
        goto LAB_000c73d8;
      }
    }
    FUN_000028a4(DAT_000c74d0);
  }
LAB_000c73d8:
  if (*(int *)(param_4 + 0x74) != 0) {
    if (*(int *)(param_4 + 0x78) != 0) {
      uVar3 = FUN_000c501c(param_1,local_30 + *(int *)(param_4 + 0x74));
      *(char *)(param_1 + 0x114) = (char)uVar3;
      if (param_5 == entry) {
        return;
      }
LAB_000c7410:
      (*param_5)(uVar3,param_6);
      return;
    }
    uVar9 = (*(int *)(param_4 + 0xa8) - *(int *)(param_4 + 0xa4)) + 1;
    FUN_000028a4(DAT_000c7a8c,uVar9);
    iVar2 = FUN_00189e68(0,*(undefined4 *)(param_4 + 0xa4),uVar9);
    if (iVar2 != 0) {
      FUN_000028a4(DAT_000c7a90);
      uVar3 = 6;
      *(undefined1 *)(param_1 + 0x114) = 6;
      if (param_5 == entry) {
        return;
      }
      goto LAB_000c7a70;
    }
    iVar2 = FUN_0018a130(0,*(undefined4 *)(param_4 + 0xa4),uVar9);
    if (iVar2 != 0) {
      FUN_000028a4(DAT_000c7a94);
      uVar3 = 6;
      *(undefined1 *)(param_1 + 0x114) = 6;
      if (param_5 == entry) {
        return;
      }
      goto LAB_000c7a70;
    }
    iVar2 = FUN_00189e90(0,*(undefined4 *)(param_4 + 0xa4),uVar9);
    if (iVar2 != 0) {
      FUN_000028a4(DAT_000c7a98);
      uVar3 = 6;
      *(undefined1 *)(param_1 + 0x114) = 6;
      if (param_5 == entry) {
        return;
      }
      goto LAB_000c7a70;
    }
    if ((uint)(*(int *)(param_4 + 0xa0) + *(int *)(param_4 + 0x5c)) <= uVar9) {
      iVar2 = FUN_0018a1a4(0,*(int *)(param_4 + 0xa4) + *(int *)(param_4 + 0xa0),
                           *(int *)(param_4 + 0x74) + local_30);
      if (iVar2 != 0) {
        FUN_000028a4(DAT_000c7a9c);
        uVar3 = 7;
        *(undefined1 *)(param_1 + 0x114) = 7;
        if (param_5 == entry) {
          return;
        }
        goto LAB_000c7a70;
      }
      FUN_0009cdb8(&local_70);
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
      iVar2 = FUN_0018a1a4(0,*(undefined4 *)(param_4 + 0xa4),&local_70,0x38);
      if (iVar2 != 0) {
        FUN_000028a4(DAT_000c7aa0);
        uVar3 = 7;
        *(undefined1 *)(param_1 + 0x114) = 7;
        if (param_5 == entry) {
          return;
        }
        goto LAB_000c7a70;
      }
    }
    iVar5 = (*(int *)(param_4 + 0x9c) - *(int *)(param_4 + 0x98)) + 1;
    FUN_000028a4(DAT_000c7aa4,iVar5);
    iVar2 = FUN_00189e68(0,*(undefined4 *)(param_4 + 0x98),iVar5);
    if (iVar2 != 0) {
      FUN_000028a4(DAT_000c7aa8);
      uVar3 = 6;
      *(undefined1 *)(param_1 + 0x114) = 6;
      if (param_5 == entry) {
        return;
      }
      goto LAB_000c7a70;
    }
    iVar2 = FUN_0018a130(0,*(undefined4 *)(param_4 + 0x98),iVar5);
    if (iVar2 != 0) {
      FUN_000028a4(DAT_000c7aac);
      uVar3 = 6;
      *(undefined1 *)(param_1 + 0x114) = 6;
      if (param_5 == entry) {
        return;
      }
      goto LAB_000c7a70;
    }
    iVar2 = FUN_00189e90(0,*(undefined4 *)(param_4 + 0x98),iVar5);
    if (iVar2 != 0) {
      FUN_000028a4(DAT_000c7ab0);
      uVar3 = 6;
      *(undefined1 *)(param_1 + 0x114) = 6;
      if (param_5 == entry) {
        return;
      }
      goto LAB_000c7a70;
    }
    FUN_000028a4(DAT_000c7ab4,*(undefined4 *)(param_4 + 0x5c),
                 *(int *)(param_4 + 0x98) + *(int *)(param_4 + 0xa0));
    iVar2 = FUN_0018a1a4(0,*(int *)(param_4 + 0xa0) + *(int *)(param_4 + 0x98),
                         *(int *)(param_4 + 0x74) + local_30,*(undefined4 *)(param_4 + 0x5c));
    if (iVar2 != 0) {
      FUN_000028a4(DAT_000c7ab8);
      uVar3 = 7;
      *(undefined1 *)(param_1 + 0x114) = 7;
      if (param_5 == entry) {
        return;
      }
      goto LAB_000c7a70;
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
      iVar5 = FUN_0018a0b4(local_68,iVar2,local_6c,uVar8);
      if (iVar5 != 0) {
        FUN_000028a4(DAT_000c74b8);
        goto LAB_000c79a8;
      }
      FUN_001102e0(local_6c,uVar8,&local_70);
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
LAB_000c79a8:
      FUN_000028a4(DAT_000c7ac0);
      uVar3 = 8;
      *(undefined1 *)(param_1 + 0x114) = 8;
      if (param_5 == entry) {
        return;
      }
      goto LAB_000c7a70;
    }
    FUN_000028a4(DAT_000c7abc,*(undefined4 *)(param_4 + 0x98));
    iVar2 = FUN_0018a1a4(0,*(undefined4 *)(param_4 + 0x98),param_4 + 0x38,0x38);
    if (iVar2 != 0) {
      FUN_000028a4(DAT_000c7aa0);
      uVar3 = 7;
      *(undefined1 *)(param_1 + 0x114) = 7;
      if (param_5 == entry) {
        return;
      }
      goto LAB_000c7a70;
    }
    iVar2 = FUN_0018a0b4(0,*(undefined4 *)(param_4 + 0x98),auStack_a8,0x38);
    if (iVar2 != 0) {
      FUN_000028a4(DAT_000c7ac4);
      uVar3 = 8;
      *(undefined1 *)(param_1 + 0x114) = 8;
      if (param_5 == entry) {
        return;
      }
      goto LAB_000c7a70;
    }
    iVar2 = FUN_0000339c(auStack_a8,param_4 + 0x38,0x38);
    if (iVar2 != 0) {
      FUN_000028a4(_DAT_000c7ac8);
      FUN_001585cc(auStack_a8);
      uVar3 = 8;
      *(undefined1 *)(param_1 + 0x114) = 8;
      if (param_5 == entry) {
        return;
      }
      goto LAB_000c7a70;
    }
  }
  FUN_000028a4(s___DEBUG__FirmwareUpdateHandler___000c7aca + 2);
  uVar3 = 1;
  *(undefined1 *)(param_1 + 0x114) = 1;
  if (param_5 == entry) {
    return;
  }
LAB_000c7a70:
  (*param_5)(uVar3,param_6);
  return;
}

