// rea decompile_all
// name: FUN_000a1eb4
// address: 0xa1eb4
// body: available
// range: 0xa1eb4-0xa23b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000a1eb4(int param_1,uint param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint local_54;
  
  uVar8 = (uint)*(byte *)(param_1 + 0x5e4);
  bVar1 = *(byte *)(param_1 + 0x5e5);
  while (uVar8 != bVar1) {
    iVar2 = param_1 + uVar8 * 0x54;
    uVar7 = (uint)*(ushort *)(iVar2 + 0xae) * *(int *)(iVar2 + 0xe4);
    if (*(uint *)(iVar2 + 0xdc) < uVar7) {
      uVar7 = *(uint *)(iVar2 + 0xdc);
    }
    if (*(uint *)(iVar2 + 0xe0) != uVar7) {
      *(uint *)(iVar2 + 0xe0) = uVar7;
      FUN_0005f284(param_1,*(undefined4 *)(iVar2 + 0xa8),*(int *)(iVar2 + 0xd4) + uVar7);
    }
    uVar8 = uVar8 + 1 & 0xff;
    if (0xf < uVar8) {
      uVar8 = 0;
    }
    *(undefined1 *)(iVar2 + 0xf5) = 0;
  }
  uVar7 = (uint)*(byte *)(param_1 + 7);
  iVar2 = *(byte *)(param_1 + 6) + 1;
  bVar6 = false;
  uVar8 = param_2;
  do {
    if (*(uint *)(param_1 + 0x620) <= *(uint *)(param_1 + 0x624)) break;
    if (param_3 != 0) {
      while (*(char *)(param_1 + uVar8 * 0x2c + 0x698) == '\0') {
        FUN_001d0130(100);
      }
    }
    if (uVar7 == 0) {
      uVar3 = *(int *)(param_1 + 0x620) - *(int *)(param_1 + 0x624);
      uVar9 = *(uint *)(param_1 + 0x5f4);
      if (uVar3 < *(uint *)(param_1 + 0x5f4)) {
        uVar9 = uVar3;
      }
      iVar4 = param_1 + uVar8 * 0x2c + 0x688;
      FUN_00123488(iVar4,0,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x5ec),
                   *(undefined4 *)(param_1 + uVar8 * 4 + 0x63c),uVar9,0);
      iVar4 = (**(code **)(**(int **)(param_1 + 0x34) + 4))(*(int **)(param_1 + 0x34),iVar4,0);
      if (iVar4 != 0) goto LAB_000a2088;
    }
    else {
      uVar3 = *(int *)(param_1 + 0x620) - *(int *)(param_1 + 0x624);
      uVar9 = *(uint *)(param_1 + 0x5f4);
      if (uVar3 < *(uint *)(param_1 + 0x5f4)) {
        uVar9 = uVar3;
      }
      iVar4 = param_1 + uVar8 * 0x2c + 0x688;
      uVar7 = uVar7 - 1;
      FUN_00123488(iVar4,param_1 + 0x44,*(undefined4 *)(param_1 + 0x40),
                   *(undefined4 *)(param_1 + 0x5ec),*(undefined4 *)(param_1 + uVar8 * 4 + 0x63c),
                   uVar9,0);
      iVar4 = (**(code **)(**(int **)(param_1 + 0x34) + 8))
                        (*(int **)(param_1 + 0x34),iVar4,0xffffffff);
      if (iVar4 == 0) {
LAB_000a2088:
        *(uint *)(param_1 + 0x624) = *(int *)(param_1 + 0x624) + uVar9;
      }
    }
    uVar8 = uVar8 + 1;
    bVar6 = true;
    if (*(byte *)(param_1 + 6) < uVar8) {
      uVar8 = 0;
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar4 = param_1 + param_2 * 0x2c;
  *(undefined4 *)(param_1 + 0x660) = *(undefined4 *)(iVar4 + 0x6a0);
  if (bVar6) {
    uVar10 = *(undefined4 *)(iVar4 + 0x6ac);
  }
  else {
    iVar4 = param_1 + uVar8 * 0x2c;
    uVar10 = 0;
    FUN_00123488(iVar4 + 0x688,0,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x5ec),
                 *(undefined4 *)(param_1 + uVar8 * 4 + 0x63c),0,0);
    *(undefined1 *)(iVar4 + 0x698) = 1;
    *(undefined1 *)(iVar4 + 0x699) = 1;
    *(undefined4 *)(iVar4 + 0x6ac) = 0;
    uVar8 = uVar8 + 1;
    iVar2 = iVar2 + -1;
    if (*(byte *)(param_1 + 6) < uVar8) {
      uVar8 = 0;
    }
  }
  uVar10 = FUN_00006604(uVar10,*(undefined2 *)(DAT_000a23b8 + param_1));
  *(undefined4 *)(param_1 + 0x664) = uVar10;
  *(undefined4 *)(param_1 + 0x668) = 0;
  if (iVar2 != 0) {
    local_54 = (uint)*(byte *)(param_1 + 0x5e4);
    if (*(byte *)(param_1 + 0x5e5) != local_54) {
      do {
        iVar4 = param_1 + local_54 * 0x54;
        while (*(uint *)(iVar4 + 0xe0) < *(uint *)(iVar4 + 0xdc)) {
          if (*(char *)(iVar4 + 0xf5) == '\0') {
            *(undefined1 *)(iVar4 + 0xf5) = 1;
            if ((*(int *)(iVar4 + 0xa4) != 0) &&
               (iVar5 = FUN_0005f0c0(param_1,8,*(int *)(iVar4 + 0xa4),0,0,1000), iVar5 == 0)) {
              thunk_FUN_00002898(DAT_000a23bc);
            }
          }
          if (param_3 != 0) {
            while (*(char *)(param_1 + uVar8 * 0x2c + 0x698) == '\0') {
              FUN_001d0130(100);
            }
          }
          if (uVar7 == 0) {
            uVar3 = *(int *)(iVar4 + 0xdc) - *(int *)(iVar4 + 0xe0);
            uVar9 = *(uint *)(iVar4 + 0xb0);
            if (uVar3 < *(uint *)(iVar4 + 0xb0)) {
              uVar9 = uVar3;
            }
            iVar5 = param_1 + uVar8 * 0x2c + 0x688;
            FUN_00123488(iVar5,0,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(iVar4 + 0xa8),
                         *(undefined4 *)(param_1 + uVar8 * 4 + 0x63c),uVar9,0);
            iVar5 = (**(code **)(**(int **)(param_1 + 0x34) + 4))(*(int **)(param_1 + 0x34),iVar5,0)
            ;
            if (iVar5 != 0) goto LAB_000a22f0;
          }
          else {
            uVar3 = *(int *)(iVar4 + 0xdc) - *(int *)(iVar4 + 0xe0);
            uVar9 = *(uint *)(iVar4 + 0xb0);
            if (uVar3 < *(uint *)(iVar4 + 0xb0)) {
              uVar9 = uVar3;
            }
            iVar5 = param_1 + uVar8 * 0x2c + 0x688;
            uVar7 = uVar7 - 1;
            FUN_00123488(iVar5,param_1 + 0x44,*(undefined4 *)(param_1 + 0x40),
                         *(undefined4 *)(iVar4 + 0xa8),*(undefined4 *)(param_1 + uVar8 * 4 + 0x63c),
                         uVar9,0);
            iVar5 = (**(code **)(**(int **)(param_1 + 0x34) + 8))
                              (*(int **)(param_1 + 0x34),iVar5,0xffffffff);
            if (iVar5 == 0) {
LAB_000a22f0:
              *(uint *)(iVar4 + 0xe0) = *(int *)(iVar4 + 0xe0) + uVar9;
            }
          }
          uVar8 = uVar8 + 1;
          if (*(byte *)(param_1 + 6) < uVar8) {
            uVar8 = 0;
          }
          iVar2 = iVar2 + -1;
          if (iVar2 == 0) {
            return 1;
          }
        }
        if (iVar2 == 0) {
          return 1;
        }
        local_54 = local_54 + 1 & 0xff;
        if (0xf < local_54) {
          local_54 = 0;
        }
      } while (*(byte *)(param_1 + 0x5e5) != local_54);
    }
    iVar4 = FUN_0005f0c0(param_1,9,*(undefined4 *)(param_1 + 0x5e8),0,0,1000);
    if (iVar4 == 0) {
      thunk_FUN_00002898(DAT_000a23bc);
    }
    do {
      iVar4 = param_1 + uVar8 * 0x2c;
      *(undefined1 *)(iVar4 + 0x698) = 1;
      *(undefined1 *)(iVar4 + 0x699) = 1;
      *(undefined4 *)(iVar4 + 0x6a4) = 0;
      *(undefined4 *)(iVar4 + 0x6ac) = 0;
      uVar8 = uVar8 + 1;
      if (*(byte *)(param_1 + 6) < uVar8) {
        uVar8 = 0;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 1;
}

