// rea decompile_all
// name: FUN_001558f0
// address: 0x1558f0
// body: available
// range: 0x1558f0-0x1561ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001558f0(int param_1,uint *param_2,uint param_3)

{
  undefined1 uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  ushort *puVar13;
  undefined1 *puVar14;
  undefined2 *puVar15;
  
  if (0x15 < (int)(param_3 - *param_2)) {
    FUN_00154ffc(param_1);
    puVar6 = (undefined4 *)(*param_2 + 3 & 0xfffffffc);
    *param_2 = (uint)puVar6;
    *(undefined4 *)(param_1 + 0x24) = *puVar6;
    *param_2 = *param_2 + 4;
    if (((*(ushort *)(param_1 + 0x24) & 0x100) != 0) &&
       (iVar7 = FUN_00171ee4(param_1 + 0x38,param_2,param_3), iVar7 == 0)) {
      return 0;
    }
    puVar6 = (undefined4 *)(*param_2 + 3 & 0xfffffffc);
    *param_2 = (uint)puVar6;
    if ((*(uint *)(param_1 + 0x24) & 0x800000) != 0) {
      if ((int)(param_3 - (int)puVar6) < 8) {
        return 0;
      }
      uVar12 = puVar6[1];
      *(undefined4 *)(param_1 + 0x30) = *puVar6;
      *(undefined4 *)(param_1 + 0x34) = uVar12;
      *param_2 = *param_2 + 8;
    }
    if ((*(uint *)(param_1 + 0x24) & 0x8000000) != 0) {
      if ((int)(param_3 - (int)*param_2) < 8) {
        return 0;
      }
      *(undefined2 *)(param_1 + 0x9a) = *(undefined2 *)*param_2;
      uVar8 = *param_2;
      *param_2 = uVar8 + 2;
      *(undefined2 *)(param_1 + 0x98) = *(undefined2 *)(uVar8 + 2);
      uVar8 = *param_2;
      *param_2 = uVar8 + 2;
      *(undefined2 *)(param_1 + 0x9c) = *(undefined2 *)(uVar8 + 2);
      uVar8 = *param_2;
      *param_2 = uVar8 + 2;
      *(undefined2 *)(param_1 + 0x9e) = *(undefined2 *)(uVar8 + 2);
      *param_2 = *param_2 + 2;
    }
    if ((*(ushort *)(param_1 + 0x24) & 0x1000) != 0) {
      if ((int)(param_3 - *param_2) < 10) {
        return 0;
      }
      FUN_001720c0(param_1 + 0x58,param_2);
    }
    puVar6 = (undefined4 *)(*param_2 + 3 & 0xfffffffc);
    *param_2 = (uint)puVar6;
    if ((*(ushort *)(param_1 + 0x24) & 0x2000) != 0) {
      if ((int)(param_3 - (int)puVar6) < 8) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0xa4) = *puVar6;
      uVar8 = *param_2;
      *param_2 = uVar8 + 4;
      *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(uVar8 + 4);
      *param_2 = *param_2 + 4;
    }
    if ((*(ushort *)(param_1 + 0x24) & 0x4000) != 0) {
      if ((int)(param_3 - (int)*param_2) < 8) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)*param_2;
      uVar8 = *param_2;
      *param_2 = uVar8 + 4;
      *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(uVar8 + 4);
      *param_2 = *param_2 + 4;
    }
    if ((*(ushort *)(param_1 + 0x24) & 0x8000) != 0) {
      if ((int)(param_3 - (int)*param_2) < 0xc) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)*param_2;
      uVar8 = *param_2;
      *param_2 = uVar8 + 4;
      *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(uVar8 + 4);
      uVar8 = *param_2;
      *param_2 = uVar8 + 4;
      *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(uVar8 + 4);
      *param_2 = *param_2 + 4;
    }
    if ((*(uint *)(param_1 + 0x24) & 0x10000000) != 0) {
      puVar13 = (ushort *)*param_2;
      if ((int)(param_3 - (int)puVar13) < 10) {
        return 0;
      }
      uVar2 = *puVar13;
      *param_2 = (uint)(puVar13 + 1);
      uVar3 = puVar13[1];
      *param_2 = (uint)(puVar13 + 2);
      uVar4 = puVar13[2];
      *param_2 = (uint)(puVar13 + 3);
      uVar5 = puVar13[3];
      *param_2 = (uint)(puVar13 + 4);
      uVar8 = (uint)uVar3 * 0x10000;
      *(uint *)(param_1 + 0x8c) =
           (uint)uVar4 + (uint)uVar5 * 0x10000 + (uint)CARRY4((uint)uVar2,uVar8);
      *(uint *)(param_1 + 0x88) = uVar2 + uVar8;
      *(undefined2 *)(param_1 + 0x90) = *(undefined2 *)*param_2;
      *param_2 = *param_2 + 2;
    }
    if ((*(uint *)(param_1 + 0x24) & 0x20000) != 0) {
      *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)*param_2;
      *param_2 = *param_2 + 2;
    }
    if ((*(uint *)(param_1 + 0x24) & 0x40000) != 0) {
      *(undefined2 *)(param_1 + 0xc2) = *(undefined2 *)*param_2;
      *param_2 = *param_2 + 2;
    }
    if ((*(uint *)(param_1 + 0x24) & 0x80000) != 0) {
      *(undefined2 *)(param_1 + 0xc4) = *(undefined2 *)*param_2;
      *param_2 = *param_2 + 2;
    }
    if ((*(uint *)(param_1 + 0x24) & 0x100000) != 0) {
      *(undefined2 *)(param_1 + 0xc6) = *(undefined2 *)*param_2;
      *param_2 = *param_2 + 2;
    }
    if ((*(uint *)(param_1 + 0x24) & 0x200000) != 0) {
      *(undefined2 *)(param_1 + 200) = *(undefined2 *)*param_2;
      *param_2 = *param_2 + 2;
    }
    if ((*(uint *)(param_1 + 0x24) & 0x400000) != 0) {
      *(undefined2 *)(param_1 + 0xca) = *(undefined2 *)*param_2;
      *param_2 = *param_2 + 2;
    }
    if ((*(uint *)(param_1 + 0x24) & 0x20000000) == 0) {
      uVar8 = *param_2;
    }
    else {
      FUN_001720c0(param_1 + 0xf0,param_2);
      *(undefined2 *)(param_1 + 0xfc) = *(undefined2 *)*param_2;
      uVar8 = *param_2;
      *param_2 = uVar8 + 2;
      *(undefined2 *)(param_1 + 0x100) = *(undefined2 *)(uVar8 + 2);
      uVar8 = *param_2;
      *param_2 = uVar8 + 2;
      *(undefined2 *)(param_1 + 0x102) = *(undefined2 *)(uVar8 + 2);
      uVar8 = *param_2;
      *param_2 = uVar8 + 2;
      *(undefined2 *)(param_1 + 0x104) = *(undefined2 *)(uVar8 + 2);
      uVar8 = *param_2;
      *param_2 = uVar8 + 2;
      *(undefined2 *)(param_1 + 0x108) = *(undefined2 *)(uVar8 + 2);
      uVar8 = *param_2;
      *param_2 = uVar8 + 2;
      *(undefined2 *)(param_1 + 0x10a) = *(undefined2 *)(uVar8 + 2);
      uVar8 = *param_2;
      *param_2 = uVar8 + 2;
      *(undefined2 *)(param_1 + 0x10c) = *(undefined2 *)(uVar8 + 2);
      uVar8 = *param_2;
      *param_2 = uVar8 + 2;
      *(undefined2 *)(param_1 + 0x106) = *(undefined2 *)(uVar8 + 2);
      uVar8 = *param_2;
      *param_2 = uVar8 + 2;
      *(undefined2 *)(param_1 + 0x10e) = *(undefined2 *)(uVar8 + 2);
      uVar8 = *param_2 + 2;
      *param_2 = uVar8;
    }
    if (uVar8 <= param_3) {
      if (((*(ushort *)(param_1 + 0x24) & 0x200) != 0) &&
         (iVar7 = FUN_00171ee4(param_1 + 0x40,param_2,param_3), iVar7 == 0)) {
        return 0;
      }
      if ((*(ushort *)(param_1 + 0x24) & 0x400) != 0) {
        *param_2 = *param_2 + 1 & 0xfffffffe;
        iVar7 = FUN_00171ee4(param_1 + 0x48,param_2,param_3);
        if (iVar7 == 0) {
          return 0;
        }
      }
      if ((*(ushort *)(param_1 + 0x24) & 0x800) != 0) {
        *param_2 = *param_2 + 1 & 0xfffffffe;
        iVar7 = FUN_00171ee4(param_1 + 0x50,param_2,param_3);
        if (iVar7 == 0) {
          return 0;
        }
      }
      puVar6 = (undefined4 *)(*param_2 + 3 & 0xfffffffc);
      *param_2 = (uint)puVar6;
      if ((*(uint *)(param_1 + 0x24) & 0x10000) != 0) {
        if ((int)(param_3 - (int)puVar6) < 4) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0xa0) = *puVar6;
        *param_2 = *param_2 + 4;
      }
      if ((*(uint *)(param_1 + 0x24) & 0x1000000) != 0) {
        if ((int)(param_3 - (int)*param_2) < 0xc) {
          return 0;
        }
        *(undefined2 *)(param_1 + 100) = *(undefined2 *)*param_2;
        uVar8 = *param_2;
        *param_2 = uVar8 + 2;
        *(undefined2 *)(param_1 + 0x66) = *(undefined2 *)(uVar8 + 2);
        uVar8 = *param_2;
        *param_2 = uVar8 + 2;
        FUN_000039e0(param_1 + 0x68,uVar8 + 2,8);
        *param_2 = *param_2 + 8;
      }
      if ((*(uint *)(param_1 + 0x24) & 0x2000000) != 0) {
        if ((int)(param_3 - (int)*param_2) < 0xc) {
          return 0;
        }
        *(undefined2 *)(param_1 + 0x70) = *(undefined2 *)*param_2;
        uVar8 = *param_2;
        *param_2 = uVar8 + 2;
        *(undefined2 *)(param_1 + 0x72) = *(undefined2 *)(uVar8 + 2);
        uVar8 = *param_2;
        *param_2 = uVar8 + 2;
        FUN_000039e0(param_1 + 0x74,uVar8 + 2,8);
        *param_2 = *param_2 + 8;
      }
      if ((*(uint *)(param_1 + 0x24) & 0x4000000) != 0) {
        if ((int)(param_3 - (int)*param_2) < 0xc) {
          return 0;
        }
        *(undefined2 *)(param_1 + 0x7c) = *(undefined2 *)*param_2;
        uVar8 = *param_2;
        *param_2 = uVar8 + 2;
        *(undefined2 *)(param_1 + 0x7e) = *(undefined2 *)(uVar8 + 2);
        uVar8 = *param_2;
        *param_2 = uVar8 + 2;
        FUN_000039e0(param_1 + 0x80,uVar8 + 2,8);
        *param_2 = *param_2 + 8;
      }
      if ((*(uint *)(param_1 + 0x24) & 0x40000000) != 0) {
        if (param_3 - (int)*param_2 < 2) {
          return 0;
        }
        *(undefined2 *)(param_1 + 0xcc) = *(undefined2 *)*param_2;
        uVar8 = *param_2;
        *param_2 = uVar8 + 2;
        uVar9 = (uint)*(ushort *)(param_1 + 0xcc);
        if ((int)(param_3 - (uVar8 + 2)) < (int)(uVar9 * 2)) {
          return 0;
        }
        if (uVar9 != 0) {
          iVar7 = FUN_001c6a94(uVar9 << 1,DAT_001561ac);
          *(int *)(param_1 + 0xd8) = iVar7;
          if (iVar7 == 0) {
            return 0;
          }
          uVar8 = (uint)*(ushort *)(param_1 + 0xcc);
          *(ushort *)(param_1 + 0xd2) = *(ushort *)(param_1 + 0xcc);
          if (uVar8 != 0) {
            puVar15 = (undefined2 *)*param_2;
            iVar7 = 0;
            do {
              uVar8 = uVar8 - 1;
              *(undefined2 *)(*(int *)(param_1 + 0xd8) + iVar7 * 2) = *puVar15;
              iVar7 = iVar7 + 1;
              puVar15 = (undefined2 *)(*param_2 + 2);
              *param_2 = (uint)puVar15;
            } while (uVar8 != 0);
          }
        }
      }
      if ((*(uint *)(param_1 + 0x24) & 0x80000000) != 0) {
        if (param_3 - (int)*param_2 < 2) {
          return 0;
        }
        *(undefined2 *)(param_1 + 0xce) = *(undefined2 *)*param_2;
        *param_2 = *param_2 + 2;
        if (*(ushort *)(param_1 + 0xce) != 0) {
          iVar7 = FUN_001c6a94((uint)*(ushort *)(param_1 + 0xce) << 2,DAT_001561ac);
          *(int *)(param_1 + 0xdc) = iVar7;
          if (iVar7 == 0) {
            return 0;
          }
          FUN_00003c58(iVar7,(uint)*(ushort *)(param_1 + 0xce) << 2);
          iVar7 = 0;
          if (*(short *)(param_1 + 0xce) != 0) {
            do {
              iVar10 = FUN_001c6b14(8,DAT_001561ac);
              iVar11 = 0;
              if (iVar10 != 0) {
                iVar11 = FUN_00171e90();
              }
              *(int *)(*(int *)(param_1 + 0xdc) + iVar7 * 4) = iVar11;
              if (iVar11 == 0) {
                return 0;
              }
              *param_2 = *param_2 + 1 & 0xfffffffe;
              iVar11 = FUN_00171ee4(*(undefined4 *)(*(int *)(param_1 + 0xdc) + iVar7 * 4),param_2,
                                    param_3);
              if (iVar11 == 0) {
                return 0;
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < (int)(uint)*(ushort *)(param_1 + 0xce));
          }
        }
      }
      if ((*(byte *)(param_1 + 0x24) & 0x80) == 0) {
LAB_0015612c:
        if ((*(uint *)(param_1 + 0x24) & 0x10000) != 0) {
          puVar14 = (undefined1 *)(*param_2 + 1 & 0xfffffffe);
          *param_2 = (uint)puVar14;
          if ((int)(param_3 - (int)puVar14) < 8) {
            FUN_0014ccec();
          }
          else {
            uVar1 = *puVar14;
            *param_2 = (uint)(puVar14 + 1);
            *(undefined1 *)(param_1 + 0xe8) = uVar1;
            *(undefined1 *)(param_1 + 0xe9) = *(undefined1 *)*param_2;
            uVar8 = *param_2;
            *param_2 = uVar8 + 1;
            FUN_000039e0(param_1 + 0xea,uVar8 + 1,6);
            *param_2 = *param_2 + 6;
          }
        }
        return 1;
      }
      if (1 < param_3 - (int)*param_2) {
        *(undefined2 *)(param_1 + 0xd0) = *(undefined2 *)*param_2;
        uVar8 = *param_2;
        *param_2 = uVar8 + 2;
        uVar9 = (uint)*(ushort *)(param_1 + 0xd0);
        if ((int)uVar9 <= (int)(param_3 - (uVar8 + 2))) {
          if (uVar9 != 0) {
            iVar7 = FUN_001c6a94(uVar9,DAT_001561ac);
            *(int *)(param_1 + 0xe0) = iVar7;
            if (iVar7 == 0) {
              return 0;
            }
            *(undefined2 *)(param_1 + 0xd6) = *(undefined2 *)(param_1 + 0xd0);
            FUN_000039e0(iVar7,*param_2);
            *param_2 = (uint)*(ushort *)(param_1 + 0xd0) + *param_2;
          }
          goto LAB_0015612c;
        }
      }
    }
  }
  return 0;
}

