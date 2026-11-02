// rea decompile_all
// name: FUN_00119118
// address: 0x119118
// body: available
// range: 0x119118-0x1193af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00119118(int param_1,int param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  undefined8 uVar11;
  ushort auStack_30 [2];
  undefined1 auStack_2c [12];
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    return 0;
  }
  if (param_3 == (int *)0x0) {
    return 0x80;
  }
  auStack_30[0] = 0;
  iVar2 = (**(code **)(*param_3 + 0x80))(param_3,param_2,auStack_30,1);
  if (iVar2 == 0) {
    return 1;
  }
  uVar8 = 0x80;
  if ((*(byte *)(param_3 + 0x1b) & 1) != 0) {
    iVar2 = 0;
    if (*(short *)(param_2 + 0x12) != 0) {
      do {
        uVar3 = FUN_0015d754(param_2 + 0xc,iVar2);
        FUN_0015e8b8(auStack_2c,uVar3);
        iVar5 = *(int *)(param_1 + 0x18);
        if (*(int *)(param_1 + 0x18) != 0) {
          do {
            uVar11 = FUN_0010f4d8(auStack_2c,iVar5);
            iVar7 = (int)((ulonglong)uVar11 >> 0x20);
            iVar4 = (int)uVar11;
            if (0 < iVar4) {
              iVar7 = 1;
            }
            if (iVar4 < 0) {
              iVar7 = 0;
            }
            if (iVar4 == 0) {
              if (iVar5 != 0) goto LAB_0011924c;
              break;
            }
            iVar4 = *(int *)(iVar5 + iVar7 * 4 + 0x18);
            if (iVar4 == 0) break;
            bVar1 = 0;
            if (iVar7 != 0) {
              bVar1 = *(byte *)(iVar5 + 0x20);
            }
            iVar5 = iVar4;
          } while (iVar7 == 0 || (bVar1 & 0x80) == 0);
        }
        iVar5 = FUN_0016d7a4(0x24,DAT_001193b0);
        if (iVar5 == 0) {
          return 2;
        }
        iVar5 = FUN_0010f638();
        FUN_0010f650(iVar5,auStack_2c);
        *(undefined2 *)(iVar5 + 8) = 0;
        *(undefined2 *)(iVar5 + 0xc) = 0;
        *(undefined4 *)(iVar5 + 0x10) = 0;
        *(undefined4 *)(iVar5 + 0x14) = 0;
        FUN_001be7b4(param_1 + 0x14,iVar5);
LAB_0011924c:
        if (*(uint *)(iVar5 + 0x10) == 0) {
          *(undefined2 *)(iVar5 + 0xc) = 0;
        }
        else {
          uVar6 = (uint)*(ushort *)(iVar5 + 0xc) + (uint)auStack_30[0] & 0xfffeffff;
          if (*(uint *)(iVar5 + 0x10) < uVar6) {
            uVar8 = 0x81;
          }
          *(short *)(iVar5 + 0xc) = (short)uVar6;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)(uint)*(ushort *)(param_2 + 0x12));
    }
    iVar2 = 0;
    if (*(short *)(param_2 + 0x1a) != 0) {
      do {
        uVar3 = FUN_0015d754(param_2 + 0xc,iVar2);
        FUN_0015e8b8(auStack_2c,uVar3);
        iVar5 = *(int *)(param_1 + 0x18);
        if (*(int *)(param_1 + 0x18) != 0) {
          do {
            iVar4 = FUN_0010f4d8(auStack_2c,iVar5);
            bVar9 = iVar4 < 0;
            bVar10 = iVar4 == 0;
            if (0 < iVar4) {
              iVar4 = 1;
            }
            if (bVar9) {
              iVar4 = 0;
            }
            if (bVar10) {
              if (iVar5 != 0) goto LAB_00119344;
              break;
            }
            iVar7 = *(int *)(iVar5 + iVar4 * 4 + 0x18);
            if (iVar7 == 0) break;
            bVar1 = 0;
            if (iVar4 != 0) {
              bVar1 = *(byte *)(iVar5 + 0x20);
            }
            iVar5 = iVar7;
          } while (iVar4 == 0 || (bVar1 & 0x80) == 0);
        }
        iVar5 = FUN_0016d7a4(0x24,DAT_001193b0);
        if (iVar5 == 0) {
          return 2;
        }
        iVar5 = FUN_0010f638();
        FUN_0010f650(iVar5,auStack_2c);
        *(undefined2 *)(iVar5 + 8) = 0;
        *(undefined2 *)(iVar5 + 0xc) = 0;
        *(undefined4 *)(iVar5 + 0x10) = 0;
        *(undefined4 *)(iVar5 + 0x14) = 0;
        FUN_001be7b4(param_1 + 0x14,iVar5);
LAB_00119344:
        if (*(uint *)(iVar5 + 0x10) == 0) {
          *(undefined2 *)(iVar5 + 0xc) = 0;
        }
        else {
          uVar6 = (uint)*(ushort *)(iVar5 + 0xc) + (uint)auStack_30[0] & 0xfffeffff;
          if (*(uint *)(iVar5 + 0x10) < uVar6) {
            uVar8 = 0x81;
          }
          *(short *)(iVar5 + 0xc) = (short)uVar6;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)(uint)*(ushort *)(param_2 + 0x1a));
    }
  }
  return uVar8;
}

