// rea decompile_all
// name: FUN_00128ca8
// address: 0x128ca8
// body: available
// range: 0x128ca8-0x1292f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00128ca8(int param_1)

{
  byte *pbVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  int iVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *extraout_r2;
  byte *extraout_r2_00;
  byte *extraout_r2_01;
  byte *extraout_r2_02;
  uint unaff_r6;
  byte *pbVar11;
  byte *pbVar12;
  byte *unaff_r7;
  uint uVar13;
  uint uVar14;
  undefined1 uVar15;
  uint uVar16;
  undefined4 local_30;
  uint local_2c;
  
  iVar7 = *(int *)(param_1 + 4);
  pbVar10 = *(byte **)(iVar7 + 0xf44);
  pbVar1 = (byte *)(uint)(*(byte *)(param_1 + 0x8c) >> 3);
  uVar14 = (uint)pbVar10 & *(uint *)(iVar7 + 0xf54);
  if ((uVar14 & 0x300) != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    unaff_r7 = *(byte **)(iVar7 + 0xf18);
    unaff_r6 = *(uint *)(param_1 + 0x18);
    iVar7 = *(int *)(unaff_r6 + 8);
    FUN_001fe1e4(&local_30);
    uVar13 = *(uint *)(unaff_r6 + 0x34);
    uVar16 = *(uint *)(unaff_r6 + 0x38);
    FUN_001fe1f8(local_30);
    if (uVar16 < uVar13) {
      iVar4 = *(int *)(unaff_r6 + 8) - (uVar13 - uVar16);
    }
    else {
      iVar4 = uVar16 - uVar13;
    }
    uVar13 = iVar7 - iVar4;
    pbVar10 = extraout_r2;
joined_r0x00128d20:
    if (pbVar1 <= unaff_r7) {
      unaff_r7 = unaff_r7 + -(int)pbVar1;
      *(byte **)(param_1 + 0x58) = pbVar1 + *(int *)(param_1 + 0x58);
      if (pbVar1 == (byte *)0x1) {
        uVar15 = *(undefined1 *)(*(int *)(param_1 + 4) + 0xe00);
        unaff_r6 = *(uint *)(param_1 + 0x18);
        FUN_001fe1e4(&local_30);
        if (*(char *)(unaff_r6 + 0x3c) != '\0') {
          *(undefined4 *)(unaff_r6 + 0x38) = *(undefined4 *)(unaff_r6 + 0x34);
          *(undefined1 *)(unaff_r6 + 0x3c) = 0;
          *(undefined1 *)(unaff_r6 + 0x3d) = 1;
        }
        puVar8 = *(undefined1 **)(unaff_r6 + 0x38);
        puVar5 = puVar8 + 1;
        if (*(undefined1 **)(unaff_r6 + 0x30) <= puVar5) {
          puVar5 = *(undefined1 **)(unaff_r6 + 0x2c);
        }
        uVar16 = uVar13;
        if (*(undefined1 **)(unaff_r6 + 0x34) == puVar5) {
          FUN_001fe1f8(local_30);
          pbVar10 = extraout_r2_00;
          goto LAB_001290a4;
        }
        goto LAB_00129088;
      }
      if (pbVar1 != (byte *)0x2) goto code_r0x00128d48;
      uVar2 = *(ushort *)(*(int *)(param_1 + 4) + 0xe00);
      if (uVar13 < 3) goto LAB_001290a4;
      iVar7 = *(int *)(param_1 + 0x18);
      local_2c = uVar2 & 0xff;
      uVar16 = uVar13 - 2;
      FUN_001fe1e4(&local_30);
      if (*(char *)(iVar7 + 0x3c) != '\0') {
        *(undefined4 *)(iVar7 + 0x38) = *(undefined4 *)(iVar7 + 0x34);
        *(undefined1 *)(iVar7 + 0x3c) = 0;
        *(undefined1 *)(iVar7 + 0x3d) = 1;
      }
      puVar5 = *(undefined1 **)(iVar7 + 0x38) + 1;
      if (*(undefined1 **)(iVar7 + 0x30) <= puVar5) {
        puVar5 = *(undefined1 **)(iVar7 + 0x2c);
      }
      if (*(undefined1 **)(iVar7 + 0x34) == puVar5) {
        FUN_001fe1f8(local_30);
      }
      else {
        **(undefined1 **)(iVar7 + 0x38) = (char)local_2c;
        *(undefined1 **)(iVar7 + 0x38) = puVar5;
        FUN_001fe1f8(local_30);
        FUN_001cf828(iVar7 + 0xc);
      }
      unaff_r6 = *(uint *)(param_1 + 0x18);
      uVar15 = (undefined1)(uVar2 >> 8);
      FUN_001fe1e4(&local_30);
      if (*(char *)(unaff_r6 + 0x3c) != '\0') {
        *(undefined4 *)(unaff_r6 + 0x38) = *(undefined4 *)(unaff_r6 + 0x34);
        *(undefined1 *)(unaff_r6 + 0x3c) = 0;
        *(undefined1 *)(unaff_r6 + 0x3d) = 1;
      }
      puVar8 = *(undefined1 **)(unaff_r6 + 0x38);
      puVar5 = puVar8 + 1;
      if (*(undefined1 **)(unaff_r6 + 0x30) <= puVar5) {
        puVar5 = *(undefined1 **)(unaff_r6 + 0x2c);
      }
      if (*(undefined1 **)(unaff_r6 + 0x34) != puVar5) goto LAB_00129088;
      goto LAB_0012907c;
    }
    *(uint *)(*(int *)(param_1 + 4) + 0xf44) = uVar14;
  }
  if ((uVar14 & 0x400) != 0) {
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    bVar3 = false;
    uVar16 = *(uint *)(*(int *)(param_1 + 4) + 0xf1c) & ~(uint)(pbVar1 + -1);
    uVar14 = *(uint *)(param_1 + 0x14);
    uVar13 = *(uint *)(param_1 + 0x10);
    if (uVar14 < uVar13) {
      unaff_r6 = *(uint *)(param_1 + 8);
      pbVar10 = *(byte **)(param_1 + 0xc);
      pbVar6 = pbVar10 + ((uVar14 - unaff_r6) - uVar13);
    }
    else {
      pbVar6 = (byte *)(uVar14 - uVar13);
    }
    if (uVar16 == 0) {
LAB_00129290:
      *(undefined4 *)(*(int *)(param_1 + 4) + 0xf54) = 0x400;
    }
    else {
      do {
        if (pbVar6 < pbVar1) {
          if (!bVar3) goto LAB_00129290;
          break;
        }
        bVar3 = true;
        pbVar6 = pbVar6 + -(int)pbVar1;
        uVar16 = uVar16 - (int)pbVar1;
        *(byte **)(param_1 + 0x68) = pbVar1 + *(int *)(param_1 + 0x68);
        if (pbVar1 == (byte *)0x1) {
          pbVar12 = *(byte **)(param_1 + 0x10);
          pbVar10 = pbVar12;
          if (*(byte **)(param_1 + 0x14) != pbVar12) {
            pbVar10 = pbVar12 + 1;
            unaff_r6 = (uint)*pbVar12;
            if (*(byte **)(param_1 + 0xc) <= pbVar10) {
              pbVar10 = *(byte **)(param_1 + 8);
            }
            *(byte **)(param_1 + 0x10) = pbVar10;
          }
          *(char *)(*(int *)(param_1 + 4) + 0xe80) = (char)unaff_r6;
        }
        else if (pbVar1 == (byte *)0x2) {
          pbVar12 = *(byte **)(param_1 + 0x10);
          pbVar10 = pbVar12;
          if (*(byte **)(param_1 + 0x14) != pbVar12) {
            pbVar10 = pbVar12 + 1;
            unaff_r7 = (byte *)(uint)*pbVar12;
            if (*(byte **)(param_1 + 0xc) <= pbVar10) {
              pbVar10 = *(byte **)(param_1 + 8);
            }
            *(byte **)(param_1 + 0x10) = pbVar10;
          }
          unaff_r6 = (uint)unaff_r7 & 0xff;
          if (*(byte **)(param_1 + 0x14) != pbVar10) {
            pbVar12 = pbVar10 + 1;
            unaff_r7 = (byte *)(uint)*pbVar10;
            if (*(byte **)(param_1 + 0xc) <= pbVar12) {
              pbVar12 = *(byte **)(param_1 + 8);
            }
            *(byte **)(param_1 + 0x10) = pbVar12;
          }
          pbVar10 = (byte *)(*(int *)(param_1 + 4) + 0xe00);
          *(ushort *)(*(int *)(param_1 + 4) + 0xe80) =
               (ushort)unaff_r6 | (ushort)((int)unaff_r7 << 8);
        }
        else if (pbVar1 == (byte *)0x4) {
          pbVar9 = *(byte **)(param_1 + 0x14);
          pbVar11 = *(byte **)(param_1 + 0x10);
          pbVar12 = pbVar11;
          if (pbVar9 != pbVar11) {
            pbVar12 = pbVar11 + 1;
            pbVar10 = (byte *)(uint)*pbVar11;
            if (*(byte **)(param_1 + 0xc) <= pbVar12) {
              pbVar12 = *(byte **)(param_1 + 8);
            }
            *(byte **)(param_1 + 0x10) = pbVar12;
          }
          uVar14 = (uint)pbVar10 & 0xff;
          if (pbVar9 != pbVar12) {
            pbVar11 = pbVar12 + 1;
            pbVar10 = (byte *)(uint)*pbVar12;
            if (*(byte **)(param_1 + 0xc) <= pbVar11) {
              pbVar11 = *(byte **)(param_1 + 8);
            }
            *(byte **)(param_1 + 0x10) = pbVar11;
          }
          uVar13 = (uint)pbVar10 & 0xff;
          pbVar12 = *(byte **)(param_1 + 0x10);
          if (pbVar9 != pbVar12) {
            pbVar11 = pbVar12 + 1;
            pbVar10 = (byte *)(uint)*pbVar12;
            if (*(byte **)(param_1 + 0xc) <= pbVar11) {
              pbVar11 = *(byte **)(param_1 + 8);
            }
            *(byte **)(param_1 + 0x10) = pbVar11;
          }
          unaff_r7 = (byte *)(uVar14 | uVar13 << 8 | ((uint)pbVar10 & 0xff) << 0x10);
          pbVar12 = *(byte **)(param_1 + 0x10);
          if (pbVar9 != pbVar12) {
            pbVar9 = pbVar12 + 1;
            pbVar10 = (byte *)(uint)*pbVar12;
            if (*(byte **)(param_1 + 0xc) <= pbVar9) {
              pbVar9 = *(byte **)(param_1 + 8);
            }
            *(byte **)(param_1 + 0x10) = pbVar9;
          }
          unaff_r6 = *(uint *)(param_1 + 4);
          *(uint *)(unaff_r6 + 0xe80) = (uint)unaff_r7 | (int)pbVar10 << 0x18;
        }
      } while (uVar16 != 0);
    }
    if (pbVar6 < pbVar1) {
      thunk_EXT_FUN_0040010c(param_1 + 0x38);
    }
  }
  uVar14 = *(uint *)(*(int *)(param_1 + 4) + 0x24);
  if ((uVar14 & 3) != 0) {
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
  }
  if ((uVar14 & 4) != 0) {
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  }
  if ((uVar14 & 0x10) != 0) {
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
  }
  *(uint *)(*(int *)(param_1 + 4) + 0x24) = uVar14;
  return;
code_r0x00128d48:
  if (pbVar1 == (byte *)0x4) {
    uVar16 = *(uint *)(*(int *)(param_1 + 4) + 0xe00);
    if (uVar13 < 5) {
LAB_001290a4:
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    }
    else {
      iVar7 = *(int *)(param_1 + 0x18);
      local_2c = uVar16 & 0xff;
      FUN_001fe1e4(&local_30);
      if (*(char *)(iVar7 + 0x3c) != '\0') {
        *(undefined4 *)(iVar7 + 0x38) = *(undefined4 *)(iVar7 + 0x34);
        *(undefined1 *)(iVar7 + 0x3c) = 0;
        *(undefined1 *)(iVar7 + 0x3d) = 1;
      }
      puVar5 = *(undefined1 **)(iVar7 + 0x38) + 1;
      if (*(undefined1 **)(iVar7 + 0x30) <= puVar5) {
        puVar5 = *(undefined1 **)(iVar7 + 0x2c);
      }
      if (*(undefined1 **)(iVar7 + 0x34) == puVar5) {
        FUN_001fe1f8(local_30);
      }
      else {
        **(undefined1 **)(iVar7 + 0x38) = (char)local_2c;
        *(undefined1 **)(iVar7 + 0x38) = puVar5;
        FUN_001fe1f8(local_30);
        FUN_001cf828(iVar7 + 0xc);
      }
      iVar7 = *(int *)(param_1 + 0x18);
      local_2c = (uVar16 & 0xffff) >> 8;
      FUN_001fe1e4(&local_30);
      if (*(char *)(iVar7 + 0x3c) != '\0') {
        *(undefined4 *)(iVar7 + 0x38) = *(undefined4 *)(iVar7 + 0x34);
        *(undefined1 *)(iVar7 + 0x3c) = 0;
        *(undefined1 *)(iVar7 + 0x3d) = 1;
      }
      puVar5 = *(undefined1 **)(iVar7 + 0x38) + 1;
      if (*(undefined1 **)(iVar7 + 0x30) <= puVar5) {
        puVar5 = *(undefined1 **)(iVar7 + 0x2c);
      }
      if (*(undefined1 **)(iVar7 + 0x34) == puVar5) {
        FUN_001fe1f8(local_30);
      }
      else {
        **(undefined1 **)(iVar7 + 0x38) = (char)local_2c;
        *(undefined1 **)(iVar7 + 0x38) = puVar5;
        FUN_001fe1f8(local_30);
        FUN_001cf828(iVar7 + 0xc);
      }
      iVar7 = *(int *)(param_1 + 0x18);
      local_2c = (uVar16 & 0xffffff) >> 0x10;
      FUN_001fe1e4(&local_30);
      if (*(char *)(iVar7 + 0x3c) != '\0') {
        *(undefined4 *)(iVar7 + 0x38) = *(undefined4 *)(iVar7 + 0x34);
        *(undefined1 *)(iVar7 + 0x3c) = 0;
        *(undefined1 *)(iVar7 + 0x3d) = 1;
      }
      puVar5 = *(undefined1 **)(iVar7 + 0x38) + 1;
      if (*(undefined1 **)(iVar7 + 0x30) <= puVar5) {
        puVar5 = *(undefined1 **)(iVar7 + 0x2c);
      }
      if (*(undefined1 **)(iVar7 + 0x34) == puVar5) {
        FUN_001fe1f8(local_30);
      }
      else {
        **(undefined1 **)(iVar7 + 0x38) = (char)local_2c;
        *(undefined1 **)(iVar7 + 0x38) = puVar5;
        FUN_001fe1f8(local_30);
        FUN_001cf828(iVar7 + 0xc);
      }
      unaff_r6 = *(uint *)(param_1 + 0x18);
      uVar15 = (undefined1)(uVar16 >> 0x18);
      FUN_001fe1e4(&local_30);
      if (*(char *)(unaff_r6 + 0x3c) != '\0') {
        *(undefined4 *)(unaff_r6 + 0x38) = *(undefined4 *)(unaff_r6 + 0x34);
        *(undefined1 *)(unaff_r6 + 0x3c) = 0;
        *(undefined1 *)(unaff_r6 + 0x3d) = 1;
      }
      puVar8 = *(undefined1 **)(unaff_r6 + 0x38);
      puVar5 = puVar8 + 1;
      if (*(undefined1 **)(unaff_r6 + 0x30) <= puVar5) {
        puVar5 = *(undefined1 **)(unaff_r6 + 0x2c);
      }
      uVar16 = uVar13 - 2;
      if (*(undefined1 **)(unaff_r6 + 0x34) == puVar5) {
LAB_0012907c:
        FUN_001fe1f8(local_30);
        uVar13 = uVar13 - 2;
        pbVar10 = extraout_r2_01;
      }
      else {
LAB_00129088:
        *puVar8 = uVar15;
        *(undefined1 **)(unaff_r6 + 0x38) = puVar5;
        FUN_001fe1f8(local_30);
        FUN_001cf828(unaff_r6 + 0xc);
        uVar13 = uVar16;
        pbVar10 = extraout_r2_02;
      }
    }
  }
  goto joined_r0x00128d20;
}

