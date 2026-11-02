// rea decompile_all
// name: FUN_00131efc
// address: 0x131efc
// body: available
// range: 0x131efc-0x13226b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00131efc(int param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 extraout_r1;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  
  if (*(char *)(param_1 + 0x38) != '\0') {
    return 0;
  }
  uVar2 = *(uint *)(param_1 + 0x140);
  param_2 = param_2 & 0xfffffffc;
  if (param_2 <= uVar2) {
    if ((param_3 != 0xffffffff) &&
       (bVar10 = uVar2 < (param_3 & 0xfffffffc), uVar2 = param_3 & 0xfffffffc, bVar10)) {
      FUN_00002898(DAT_00132270);
      return 0;
    }
    uVar8 = 0;
    if (*(short *)(param_1 + 0x114) != 0) {
      do {
        iVar3 = param_1 + uVar8 * 4;
        iVar3 = FUN_0005f284(param_1,*(undefined4 *)(iVar3 + 0x9c),
                             param_2 * *(ushort *)(param_1 + 0x116) + *(int *)(iVar3 + 0x58c));
        if (iVar3 == 0) {
          FUN_00002898(s____ERROR__MonoMultiWaveFileDecod_00132275 + 3);
          return 0;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(ushort *)(param_1 + 0x114));
    }
    uVar1 = *(ushort *)(param_1 + 0x116);
    *(uint *)(param_1 + 0x144) = param_2;
    iVar3 = uVar1 * param_2;
    *(int *)(param_1 + 300) = iVar3;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00006604(param_2);
      *(undefined4 *)(param_1 + 0x13c) = extraout_r1;
    }
    iVar6 = uVar1 * uVar2;
    uVar2 = *(uint *)(param_1 + 0x148);
    uVar8 = iVar6 - iVar3;
    *(uint *)(param_1 + 0x14c) = uVar2;
    *(int *)(param_1 + 0x130) = iVar6;
    if (uVar8 <= uVar2) {
      *(uint *)(param_1 + 0x14c) = uVar8;
    }
    *(undefined4 *)(param_1 + 0x150) = 0;
    *(short *)(param_1 + 0x118) = *(short *)(param_1 + 0x118) + 1;
    bVar10 = *(short *)(param_1 + 0x114) != 0;
    iVar3 = 0;
    if (bVar10) {
      iVar3 = param_1 + 0x44;
    }
    uVar7 = 0;
    if (bVar10) {
      do {
        iVar9 = param_1 + uVar7 * 0x2c;
        FUN_00123488(iVar9 + 0x15c,iVar3,*(undefined4 *)(param_1 + 0x40),
                     *(undefined4 *)(param_1 + uVar7 * 4 + 0x9c));
        iVar6 = (**(code **)(**(int **)(param_1 + 0x34) + 8))
                          (*(int **)(param_1 + 0x34),iVar9 + 0x15c,0xffffffff);
        if (iVar6 != 0) {
          FUN_00002898(_DAT_00132274);
          return 0;
        }
        uVar4 = 1 << (uVar7 & 0xff);
        if (*(int *)(iVar9 + 0x180) == 0) {
          uVar4 = *(uint *)(param_1 + 0x150) & ~uVar4;
        }
        else {
          uVar4 = *(uint *)(param_1 + 0x150) | uVar4;
        }
        *(uint *)(param_1 + 0x150) = uVar4;
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(ushort *)(param_1 + 0x114));
    }
    *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x174);
    uVar7 = *(uint *)(param_1 + 0x14c);
    iVar3 = *(int *)(param_1 + 300) + uVar7;
    *(int *)(param_1 + 300) = iVar3;
    uVar5 = FUN_00006604(uVar7,*(undefined2 *)(param_1 + 0x116));
    *(undefined4 *)(param_1 + 0x134) = uVar5;
    if (uVar8 <= uVar2) {
      uVar2 = (uint)*(ushort *)(param_1 + 0x114);
      if (uVar2 != 0) {
        uVar8 = uVar2 & 1;
        if (uVar8 == 1) {
          *(undefined1 *)(param_1 + 0x16c) = 0;
        }
        if (uVar8 < uVar2) {
          do {
            iVar3 = param_1 + uVar8 * 0x2c;
            *(undefined1 *)(iVar3 + 0x16c) = 0;
            *(undefined1 *)(iVar3 + 0x198) = 0;
            uVar8 = uVar8 + 2;
          } while (uVar8 < *(ushort *)(param_1 + 0x114));
        }
      }
    }
    else {
      uVar2 = *(int *)(param_1 + 0x130) - iVar3;
      if (uVar7 <= uVar2) {
        uVar2 = uVar7;
      }
      *(uint *)(param_1 + 0x14c) = uVar2;
      *(short *)(param_1 + 0x118) = *(short *)(param_1 + 0x118) + 1;
      uVar2 = 0;
      if (*(short *)(param_1 + 0x114) != 0) {
        do {
          if ((*(uint *)(param_1 + 0x150) & 1 << (uVar2 & 0xff)) != 0) {
            iVar3 = param_1 + uVar2 * 0x2c;
            FUN_00123488(iVar3 + 0x15c,0,*(undefined4 *)(param_1 + 0x40),
                         *(undefined4 *)(param_1 + uVar2 * 4 + 0x9c));
            iVar3 = (**(code **)(**(int **)(param_1 + 0x34) + 4))
                              (*(int **)(param_1 + 0x34),iVar3 + 0x15c,0xffffffff);
            if (iVar3 == 0) {
              FUN_00002898(s_ERROR__WaveFileDecoder__mark__Co_001322ac);
              return 0;
            }
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(ushort *)(param_1 + 0x114));
      }
      *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + *(int *)(param_1 + 0x14c);
    }
    *(undefined4 *)(param_1 + 0x138) = 0;
    *(undefined1 *)(param_1 + 0x3b) = 0;
    return 1;
  }
  FUN_00002898(DAT_0013226c);
  return 0;
}

