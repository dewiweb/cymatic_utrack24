// rea decompile_all
// name: FUN_000a9818
// address: 0xa9818
// body: available
// range: 0xa9818-0xa9c5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000a9818(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  byte bVar4;
  uint *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  
  puVar5 = DAT_000a9c60;
  puVar14 = (uint *)((uint)DAT_000a9c60 | (uint)DAT_000a9c60 >> 0x14);
  puVar13 = DAT_000a9c60 + -0x51;
  uVar15 = *DAT_000a9c60 & *puVar14;
  if ((uVar15 & 0x300) != 0) {
    uVar7 = DAT_000a9c60[-0xb];
    bVar4 = *(byte *)(param_1 + 0x98) >> 3;
    if (bVar4 == 1) {
      uVar10 = *(uint *)(param_1 + 0x70);
      iVar16 = *(int *)(param_1 + 0x6c);
      if (uVar7 < 0x80000000) {
        iVar11 = 1;
        if (1 < (int)(uVar7 + 1)) {
          do {
            iVar11 = iVar11 + 1;
            *(char *)(iVar16 + uVar10) = (char)*puVar13;
            uVar10 = uVar10 + 1;
            if (*(uint *)(param_1 + 0x90) <= uVar10) {
              uVar10 = 0;
            }
          } while (iVar11 < (int)(uVar7 + 1));
        }
      }
      else {
        do {
          uVar7 = uVar7 - 1;
          *(char *)(iVar16 + uVar10) = (char)*puVar13;
          uVar10 = uVar10 + 1;
          if (*(uint *)(param_1 + 0x90) <= uVar10) {
            uVar10 = 0;
          }
        } while (uVar7 != 0);
      }
LAB_000a98dc:
      *(uint *)(param_1 + 0x70) = uVar10;
    }
    else {
      if (bVar4 == 2) {
        uVar10 = *(uint *)(param_1 + 0x70);
        iVar16 = *(int *)(param_1 + 0x6c);
        if (uVar7 < 0x80000000) {
          iVar11 = 1;
          while (iVar11 < (int)uVar7 / 2 + 1) {
            iVar9 = uVar10 * 2;
            uVar10 = uVar10 + 1;
            *(short *)(iVar16 + iVar9) = (short)*puVar13;
            iVar11 = iVar11 + 1;
            if (*(uint *)(param_1 + 0x90) <= uVar10) {
              uVar10 = 0;
            }
          }
        }
        else {
          do {
            iVar11 = uVar10 * 2;
            uVar10 = uVar10 + 1;
            *(short *)(iVar16 + iVar11) = (short)*puVar13;
            uVar7 = uVar7 - 2;
            if (*(uint *)(param_1 + 0x90) <= uVar10) {
              uVar10 = 0;
            }
          } while (1 < uVar7);
        }
        goto LAB_000a98dc;
      }
      if (bVar4 == 4) {
        uVar10 = *(uint *)(param_1 + 0x70);
        iVar16 = *(int *)(param_1 + 0x6c);
        if (uVar7 < 0x80000000) {
          iVar11 = 1;
          while (iVar11 < ((int)(uVar7 + ((uint)((int)uVar7 >> 0x1f) >> 0x1e)) >> 2) + 1) {
            iVar11 = iVar11 + 1;
            *(uint *)(iVar16 + uVar10 * 4) = *puVar13;
            uVar10 = uVar10 + 1;
            if (*(uint *)(param_1 + 0x90) <= uVar10) {
              uVar10 = 0;
            }
          }
        }
        else {
          do {
            uVar7 = uVar7 - 4;
            *(uint *)(iVar16 + uVar10 * 4) = *puVar13;
            uVar10 = uVar10 + 1;
            if (*(uint *)(param_1 + 0x90) <= uVar10) {
              uVar10 = 0;
            }
          } while (3 < uVar7);
        }
        goto LAB_000a98dc;
      }
    }
    *puVar5 = uVar15;
    thunk_EXT_FUN_0040010c(param_1 + 0x34);
  }
  puVar6 = DAT_000a9c64;
  if ((uVar15 & 0x400) == 0) {
    if ((uVar15 & 0x800) != 0) {
      *puVar14 = 0x800;
      (**(code **)(param_1 + 0x84))(0);
      if (*(int *)(param_1 + 0x88) != -1) {
        if (*(char *)(param_1 + 0x8c) == '\0') {
          piVar8 = (int *)FUN_00080010();
          (**(code **)(*piVar8 + 0x10))(piVar8,*(undefined4 *)(param_1 + 0x88));
        }
        else {
          piVar8 = (int *)FUN_00080010();
          (**(code **)(*piVar8 + 0x14))(piVar8,*(undefined4 *)(param_1 + 0x88));
        }
      }
      if (*(char *)(param_1 + 0x8d) != '\0') {
        thunk_EXT_FUN_0040010c(param_1 + 0x50);
      }
    }
    goto LAB_000a9c50;
  }
  iVar16 = *(int *)(param_1 + 0x78);
  if (iVar16 == 0) {
    *(undefined1 *)(param_1 + 0x8d) = 0;
    *puVar14 = 0x400;
    *puVar6 = 0x800;
    goto LAB_000a9c50;
  }
  cVar3 = *(char *)(param_1 + 0x98);
  puVar12 = DAT_000a9c64 + -0x34;
  uVar15 = DAT_000a9c64[-0xd];
  if (cVar3 == '\b') {
    iVar11 = *(int *)(param_1 + 0x7c);
    uVar7 = *(int *)(param_1 + 0x80) - iVar11;
    if (uVar7 < uVar15) {
      uVar15 = uVar7;
    }
    if (uVar15 < 0x80000000) {
      iVar9 = 1;
      if (1 < (int)(uVar15 + 1)) {
        do {
          puVar2 = (undefined1 *)(iVar16 + iVar11);
          iVar9 = iVar9 + 1;
          iVar11 = iVar11 + 1;
          *(undefined1 *)puVar12 = *puVar2;
        } while (iVar9 < (int)(uVar15 + 1));
      }
    }
    else {
      do {
        puVar2 = (undefined1 *)(iVar16 + iVar11);
        uVar15 = uVar15 - 1;
        iVar11 = iVar11 + 1;
        *(undefined1 *)puVar12 = *puVar2;
      } while (uVar15 != 0);
    }
LAB_000a9a80:
    *(int *)(param_1 + 0x7c) = iVar11;
  }
  else {
    if (cVar3 == '\x10') {
      iVar11 = *(int *)(param_1 + 0x7c);
      uVar10 = *(int *)(param_1 + 0x80) - iVar11;
      uVar7 = uVar15 >> 1;
      if (uVar10 < uVar15 >> 1) {
        uVar7 = uVar10;
      }
      if (uVar7 < 0x80000000) {
        iVar9 = 1;
        if (1 < (int)(uVar7 + 1)) {
          do {
            iVar1 = iVar11 * 2;
            iVar9 = iVar9 + 1;
            iVar11 = iVar11 + 1;
            *(undefined2 *)(puVar5 + -0x31) = *(undefined2 *)(iVar16 + iVar1);
          } while (iVar9 < (int)(uVar7 + 1));
        }
      }
      else {
        do {
          iVar9 = iVar11 * 2;
          uVar7 = uVar7 - 1;
          iVar11 = iVar11 + 1;
          *(undefined2 *)(puVar5 + -0x31) = *(undefined2 *)(iVar16 + iVar9);
        } while (uVar7 != 0);
      }
      goto LAB_000a9a80;
    }
    if (cVar3 == ' ') {
      iVar11 = *(int *)(param_1 + 0x7c);
      uVar10 = *(int *)(param_1 + 0x80) - iVar11;
      uVar7 = uVar15 >> 2;
      if (uVar10 < uVar15 >> 2) {
        uVar7 = uVar10;
      }
      if (uVar7 < 0x80000000) {
        iVar9 = 1;
        if (1 < (int)(uVar7 + 1)) {
          do {
            iVar1 = iVar11 * 4;
            iVar9 = iVar9 + 1;
            iVar11 = iVar11 + 1;
            *puVar12 = *(undefined4 *)(iVar16 + iVar1);
          } while (iVar9 < (int)(uVar7 + 1));
        }
      }
      else {
        do {
          iVar9 = iVar11 * 4;
          uVar7 = uVar7 - 1;
          iVar11 = iVar11 + 1;
          *puVar12 = *(undefined4 *)(iVar16 + iVar9);
        } while (uVar7 != 0);
      }
      goto LAB_000a9a80;
    }
  }
  (**(code **)(param_1 + 0x84))(1);
  if (*(int *)(param_1 + 0x88) != -1) {
    if (*(char *)(param_1 + 0x8c) == '\0') {
      piVar8 = (int *)FUN_00080010();
      (**(code **)(*piVar8 + 0x14))(piVar8,*(undefined4 *)(param_1 + 0x88));
    }
    else {
      piVar8 = (int *)FUN_00080010();
      (**(code **)(*piVar8 + 0x10))(piVar8,*(undefined4 *)(param_1 + 0x88));
    }
  }
  if (*(uint *)(param_1 + 0x80) <= *(uint *)(param_1 + 0x7c)) {
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined1 *)(param_1 + 0x8d) = 1;
    *puVar14 = 0x400;
    *puVar6 = 0x800;
  }
LAB_000a9c50:
  *(undefined4 *)(DAT_000a9c68 + 0x24) = *(undefined4 *)(DAT_000a9c68 + 0x24);
  return;
}

