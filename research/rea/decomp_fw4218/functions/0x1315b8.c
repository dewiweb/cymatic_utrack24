// rea decompile_all
// name: FUN_001315b8
// address: 0x1315b8
// body: available
// range: 0x1315b8-0x1317e3 inclusive
// range: 0x1317e8-0x131a27 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001315b8(int param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  uVar5 = (uint)*(ushort *)(param_1 + 0x114);
  uVar3 = 0;
  if (uVar5 != 0) {
    do {
      uVar7 = 1 << (uVar3 & 0xff);
      if ((*(uint *)(param_1 + 0x150) & uVar7) != 0) {
        iVar6 = param_1 + uVar3 * 0x2c;
        if ((*(char *)(iVar6 + 0x16c) == '\0') || (*(char *)(iVar6 + 0x16d) == '\0')) {
          FUN_00002898(DAT_001317e4);
          goto LAB_00131738;
        }
        if ((*(uint *)(iVar6 + 0x180) < *(uint *)(iVar6 + 0x178)) && (*(uint *)(iVar6 + 0x180) == 0)
           ) {
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & ~uVar7;
        }
      }
      uVar3 = uVar3 + 1 & 0xfffeffff;
    } while (uVar3 < uVar5);
  }
  if (*(int *)(param_1 + 0x150) != 0) {
    *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x174);
    *(undefined4 *)(param_1 + 0x138) = 0;
    if (*(uint *)(param_1 + 300) < *(uint *)(param_1 + 0x130)) {
      uVar7 = *(uint *)(param_1 + 0x130) - *(uint *)(param_1 + 300);
      uVar3 = *(uint *)(param_1 + 0x14c);
      if (uVar7 < *(uint *)(param_1 + 0x14c)) {
        uVar3 = uVar7;
      }
      *(uint *)(param_1 + 0x14c) = uVar3;
      iVar6 = *(int *)(param_1 + 0x11c);
      uVar1 = *(ushort *)(param_1 + 0x118);
      *(ushort *)(param_1 + 0x118) = uVar1 + 1;
      uVar3 = *(uint *)(param_1 + 0x150);
      uVar7 = 0;
      if (*(short *)(param_1 + 0x114) != 0) {
        do {
          if (((uVar3 | 1) & 1 << (uVar7 & 0xff)) != 0) {
            iVar8 = param_1 + uVar7 * 0x2c;
            FUN_00123488(iVar8 + 0x15c,0,*(undefined4 *)(param_1 + 0x40),
                         *(undefined4 *)(param_1 + uVar7 * 4 + 0x9c),
                         *(int *)(param_1 + 0x120) +
                         (uVar7 * *(int *)(param_1 + 0x11c) + iVar6 * uVar5 * (uVar1 & 1)) * 4,
                         *(undefined4 *)(param_1 + 0x14c),1);
            (**(code **)(**(int **)(param_1 + 0x34) + 4))(*(int **)(param_1 + 0x34),iVar8 + 0x15c,0)
            ;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(ushort *)(param_1 + 0x114));
      }
      *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + *(int *)(param_1 + 0x14c);
    }
    else {
      if (uVar5 != 0) {
        uVar3 = uVar5 & 1;
        if (uVar3 == 1) {
          *(undefined1 *)(param_1 + 0x16c) = 0;
        }
        if (uVar3 < uVar5) {
          do {
            iVar6 = param_1 + uVar3 * 0x2c;
            *(undefined1 *)(iVar6 + 0x16c) = 0;
            *(undefined1 *)(iVar6 + 0x198) = 0;
            uVar3 = uVar3 + 2;
          } while (uVar3 < *(ushort *)(param_1 + 0x114));
        }
      }
      uVar4 = FUN_00006604(*(undefined4 *)(param_1 + 0x14c),*(undefined2 *)(param_1 + 0x116));
      *(undefined4 *)(param_1 + 0x134) = uVar4;
      *(undefined1 *)(param_1 + 0x57c) = 1;
    }
    return 1;
  }
LAB_00131738:
  if (*(char *)(param_1 + 0x5ec) != '\0') {
    uVar3 = 0;
    *(undefined1 *)(param_1 + 0x5ec) = 0;
    if (*(short *)(param_1 + 0x114) != 0) {
      do {
        iVar6 = param_1 + uVar3 * 4;
        iVar8 = param_1 + uVar3 * 0x18 + 0x6b8;
        FUN_0012c4ac(iVar8,0,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(iVar6 + 0x9c));
        (**(code **)(**(int **)(param_1 + 0x34) + 4))(*(int **)(param_1 + 0x34),iVar8,0);
        *(undefined4 *)(iVar6 + 0x9c) = *(undefined4 *)(iVar6 + 0x658);
        *(undefined4 *)(iVar6 + 0x658) = 0xffffffff;
        *(undefined4 *)(iVar6 + 0x58c) = *(undefined4 *)(iVar6 + 0x5f8);
        uVar3 = uVar3 + 1 & 0xfffeffff;
      } while (uVar3 < *(ushort *)(param_1 + 0x114));
    }
    uVar5 = *(uint *)(param_1 + 0x5f0);
    *(uint *)(param_1 + 0x130) = uVar5;
    *(uint *)(param_1 + 0x128) = uVar5;
    uVar2 = *(undefined2 *)(param_1 + 0x116);
    uVar4 = FUN_00006604(uVar5,uVar2);
    iVar6 = DAT_00131a28;
    *(undefined4 *)(param_1 + 0x140) = uVar4;
    *(undefined2 *)(iVar6 + param_1) = 0;
    *(undefined4 *)(param_1 + 0x144) = 0;
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(undefined4 *)(param_1 + 0x138) = 0;
    uVar3 = *(uint *)(param_1 + 0x148);
    *(uint *)(param_1 + 0x14c) = uVar3;
    if (uVar5 < uVar3) {
      uVar3 = uVar5;
    }
    *(uint *)(param_1 + 0x14c) = uVar3;
    *(uint *)(param_1 + 300) = uVar3;
    uVar4 = FUN_00006604(uVar3,uVar2);
    *(undefined4 *)(param_1 + 0x134) = uVar4;
    uVar7 = (uint)*(ushort *)(param_1 + 0x114);
    iVar6 = *(int *)(param_1 + 0x11c);
    *(uint *)(param_1 + 0x124) = *(int *)(param_1 + 0x120) + iVar6 * uVar7 * 2 * 4;
    if (uVar3 < uVar5) {
      if (uVar5 - uVar3 < uVar3) {
        uVar3 = uVar5 - uVar3;
      }
      *(uint *)(param_1 + 0x14c) = uVar3;
      uVar1 = *(ushort *)(param_1 + 0x118);
      *(ushort *)(param_1 + 0x118) = uVar1 + 1;
      uVar3 = *(uint *)(param_1 + 0x5f4);
      *(uint *)(param_1 + 0x150) = uVar3;
      uVar5 = 0;
      if (*(short *)(param_1 + 0x114) != 0) {
        do {
          if (((uVar3 | 1) & 1 << (uVar5 & 0xff)) != 0) {
            iVar8 = param_1 + uVar5 * 0x2c;
            FUN_00123488(iVar8 + 0x15c,0,*(undefined4 *)(param_1 + 0x40),
                         *(undefined4 *)(param_1 + uVar5 * 4 + 0x9c),
                         *(int *)(param_1 + 0x120) +
                         (uVar5 * *(int *)(param_1 + 0x11c) + iVar6 * uVar7 * (uVar1 & 1)) * 4,
                         *(undefined4 *)(param_1 + 0x14c),1);
            (**(code **)(**(int **)(param_1 + 0x34) + 4))(*(int **)(param_1 + 0x34),iVar8 + 0x15c,0)
            ;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(ushort *)(param_1 + 0x114));
      }
      *(undefined1 *)(param_1 + 0x57c) = 2;
      *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + *(int *)(param_1 + 0x14c);
    }
    else {
      if (uVar7 != 0) {
        uVar3 = uVar7 & 1;
        if (uVar3 == 1) {
          *(undefined1 *)(param_1 + 0x16c) = 0;
        }
        if (uVar3 < uVar7) {
          do {
            iVar6 = param_1 + uVar3 * 0x2c;
            *(undefined1 *)(iVar6 + 0x16c) = 0;
            *(undefined1 *)(iVar6 + 0x198) = 0;
            uVar3 = uVar3 + 2 & 0xfffeffff;
          } while (uVar3 < *(ushort *)(param_1 + 0x114));
        }
      }
      *(undefined1 *)(param_1 + 0x57c) = 1;
    }
    return 0;
  }
  FUN_0005f148();
  *(undefined1 *)(param_1 + 0x3b) = 1;
  FUN_0005f0c0(param_1,*(undefined1 *)(param_1 + 0x57c),*(undefined4 *)(param_1 + 0x144),0,0,0);
  return 0;
}

