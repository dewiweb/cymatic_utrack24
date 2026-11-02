// rea decompile_all
// name: FUN_001138c4
// address: 0x1138c4
// body: available
// range: 0x1138c4-0x113c43 inclusive
// range: 0x113cb4-0x11435f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00114150) */
/* WARNING: Removing unreachable block (ram,0x0011415c) */
/* WARNING: Removing unreachable block (ram,0x00113adc) */
/* WARNING: Removing unreachable block (ram,0x00113ae8) */
/* WARNING: Removing unreachable block (ram,0x00113da0) */
/* WARNING: Removing unreachable block (ram,0x00113dac) */
/* WARNING: Removing unreachable block (ram,0x00113f6c) */
/* WARNING: Removing unreachable block (ram,0x00113f78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_001138c4(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  undefined4 uVar18;
  int *piVar19;
  int iVar20;
  uint uVar21;
  int *piVar22;
  undefined1 auStack_78 [8];
  int *local_70;
  uint local_6c;
  undefined1 auStack_68 [4];
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined4 local_60;
  int local_5c;
  int local_58;
  
  FUN_00094c54();
  FUN_000937a0();
  puVar8 = DAT_00113c48;
  pcVar1 = DAT_00113c44;
  if (*DAT_00113c44 == '\0') {
    *DAT_00113c48 = *DAT_00113c48 & 0xfffffffc | 2;
    *puVar8 = *puVar8 & 0xffffffcf | 0x20;
    *puVar8 = *puVar8 & 0xfffcffff;
    *puVar8 = *puVar8 & 0xff0fffff;
    puVar8[-0x800] = puVar8[-0x800] & 0xffffff00;
    puVar8[-0x7fc] = puVar8[-0x7fc] | 0x10000;
    puVar8[-0x7c0] = 0;
    *pcVar1 = '\x01';
  }
  *(undefined4 *)(param_1 + 0x14) = 0xff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  pcVar1 = (char *)FUN_0008b800(auStack_78);
  *(undefined4 *)pcVar1 = s_l0__AudioHWService_00113c4c._0_4_;
  uVar2 = FUN_0008cf78();
  iVar3 = FUN_0008ce54(uVar2,s_l0__AudioHWService_00113c4c + 4,auStack_78);
  if (iVar3 == 0) {
    FUN_000028a4(_DAT_00113c68,*(undefined4 *)(param_1 + 4));
    FUN_0008b818(auStack_78);
    return -200;
  }
  iVar3 = (**(code **)(*local_70 + 0x50))(local_70,*(undefined4 *)(param_1 + 4));
  if (iVar3 == 0) {
    FUN_000028a4(s_<__ERROR:_AvPort::init:_[port__d_00113c69 + 3,*(undefined4 *)(param_1 + 4));
    FUN_0008b818(auStack_78);
    return -0xd6;
  }
  puVar4 = (undefined4 *)FUN_001a0808(0x1c,1);
  if (puVar4 == (undefined4 *)0x0) {
    FUN_000028a4(DAT_00113cac,*(undefined4 *)(param_1 + 4));
    FUN_0008b818(auStack_78);
    return -0x35;
  }
  uVar2 = *DAT_00113c60;
  uVar18 = DAT_00113c60[1];
  puVar4[2] = param_1;
  puVar4[3] = param_1;
  puVar4[4] = iVar3;
  puVar4[5] = uVar2;
  puVar4[6] = uVar18;
  *puVar4 = DAT_00113c64;
  puVar4[1] = 0;
  local_5c = iVar3 + 0xc;
  FUN_00051b10(local_5c,puVar4);
  FUN_00051b10(iVar3 + 0x58,puVar4);
  FUN_00051b10(iVar3 + 0x9c,puVar4);
  puVar5 = *(undefined4 **)(param_1 + 0x24);
  piVar19 = (int *)(param_1 + 0x20);
  if (puVar5 == *(undefined4 **)(param_1 + 0x28)) {
    uVar13 = (int)puVar5 - *piVar19 >> 2;
    if (uVar13 < (uint)((int)*(undefined4 **)(param_1 + 0x28) - *piVar19 >> 2)) {
      *(undefined4 **)(param_1 + 0x24) = puVar5 + 1;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = puVar5[-1];
      }
      *puVar5 = puVar4;
    }
    else {
      uVar12 = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
      uVar21 = uVar13 + 1;
      if (uVar13 + 1 <= uVar12) {
        uVar21 = uVar12;
      }
      puVar6 = (undefined4 *)FUN_0010f82c(uVar21 << 2,0);
      puVar9 = puVar6;
      for (puVar14 = (undefined4 *)*piVar19; puVar14 != puVar5; puVar14 = puVar14 + 1) {
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = *puVar14;
        }
        puVar9 = puVar9 + 1;
      }
      puVar14 = (undefined4 *)(((int)puVar5 - *piVar19 & 0xfffffffcU) + (int)puVar6);
      if (puVar14 != (undefined4 *)0x0) {
        *puVar14 = puVar4;
      }
      puVar14 = *(undefined4 **)(param_1 + 0x24);
      puVar4 = (undefined4 *)(((int)puVar5 - *piVar19 & 0xfffffffcU) + (int)puVar6);
      for (; puVar5 != puVar14; puVar5 = puVar5 + 1) {
        puVar4 = puVar4 + 1;
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = *puVar5;
        }
      }
      iVar20 = *piVar19;
      iVar7 = *(int *)(param_1 + 0x24);
      FUN_0010fa20(iVar20,*(int *)(param_1 + 0x28) - iVar20 >> 2,0);
      *(undefined4 **)(param_1 + 0x28) = puVar6 + uVar21;
      *(undefined4 **)(param_1 + 0x24) = puVar6 + (iVar7 - iVar20 >> 2) + 1;
      *piVar19 = (int)puVar6;
    }
  }
  else {
    *(undefined4 **)(param_1 + 0x24) = puVar5 + 1;
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = puVar4;
    }
  }
  iVar20 = 0;
  local_60 = DAT_00113cb0;
  do {
    iVar7 = FUN_0014d24c(iVar3,iVar20);
    if (iVar20 == 0) {
      DAT_00113c48[*(int *)(param_1 + 4) + 4] =
           DAT_00113c48[*(int *)(param_1 + 4) + 4] & 0xffffff80 | 0x3e;
    }
    else if (iVar20 == 1) {
      puVar8 = DAT_00113c48 + *(int *)(param_1 + 4);
      uVar13 = puVar8[4] & 0xffff80ff | 0x3e00;
LAB_00113d08:
      puVar8[4] = uVar13;
    }
    else if (iVar20 == 2) {
      DAT_00113c48[*(int *)(param_1 + 4) + 4] =
           DAT_00113c48[*(int *)(param_1 + 4) + 4] & 0xff80ffff | 0x3e0000;
    }
    else if (iVar20 == 3) {
      puVar8 = DAT_00113c48 + *(int *)(param_1 + 4);
      uVar13 = puVar8[4] & 0x80ffffff | 0x3e000000;
      goto LAB_00113d08;
    }
    if (iVar7 != 0) {
      piVar19 = (int *)FUN_001a0808(8,1);
      if (piVar19 != (int *)0x0) {
        *piVar19 = iVar7;
        *(undefined2 *)(piVar19 + 1) = 0;
      }
      piVar22 = DAT_00114360;
      puVar4 = (undefined4 *)DAT_00114360[1];
      if (puVar4 == (undefined4 *)DAT_00114360[2]) {
        uVar13 = (int)puVar4 - *DAT_00114360 >> 2;
        if (uVar13 < (uint)(DAT_00114360[2] - *DAT_00114360 >> 2)) {
          DAT_00114360[1] = (int)(puVar4 + 1);
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = puVar4[-1];
          }
          *puVar4 = piVar19;
        }
        else {
          local_6c = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
          if (local_6c < uVar13 + 1) {
            local_6c = uVar13 + 1;
          }
          puVar9 = (undefined4 *)FUN_0010f82c(local_6c << 2,0);
          puVar14 = puVar9;
          for (puVar5 = (undefined4 *)*piVar22; puVar5 != puVar4; puVar5 = puVar5 + 1) {
            if (puVar14 != (undefined4 *)0x0) {
              *puVar14 = *puVar5;
            }
            puVar14 = puVar14 + 1;
          }
          puVar5 = (undefined4 *)(((int)puVar4 - *piVar22 & 0xfffffffcU) + (int)puVar9);
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = piVar19;
          }
          puVar14 = (undefined4 *)piVar22[1];
          puVar5 = (undefined4 *)(((int)puVar4 - *piVar22 & 0xfffffffcU) + (int)puVar9);
          for (; puVar4 != puVar14; puVar4 = puVar4 + 1) {
            puVar5 = puVar5 + 1;
            if (puVar5 != (undefined4 *)0x0) {
              *puVar5 = *puVar4;
            }
          }
          iVar11 = *piVar22;
          iVar17 = piVar22[1];
          FUN_0010fa20(iVar11,piVar22[2] - iVar11 >> 2,0);
          piVar22[2] = (int)(puVar9 + local_6c);
          piVar22[1] = (int)(puVar9 + (iVar17 - iVar11 >> 2) + 1);
          *piVar22 = (int)puVar9;
        }
      }
      else {
        DAT_00114360[1] = (int)(puVar4 + 1);
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = piVar19;
        }
      }
      puVar4 = (undefined4 *)FUN_001a0808(0x1c,1);
      if (puVar4 == (undefined4 *)0x0) {
LAB_001140f0:
        FUN_000028a4(DAT_0011436c,*(undefined4 *)(param_1 + 4));
        FUN_0008b818(auStack_78);
        return -0x35;
      }
      uVar2 = *DAT_00114364;
      uVar18 = DAT_00114364[1];
      puVar4[1] = 0;
      puVar4[2] = param_1;
      *puVar4 = local_60;
      puVar4[5] = uVar2;
      puVar4[6] = uVar18;
      puVar4[3] = param_1;
      puVar4[4] = iVar7;
      local_58 = iVar7 + 0x50;
      FUN_00051b10(local_58,puVar4);
      piVar19 = *(int **)(param_1 + 0x30);
      piVar22 = (int *)(param_1 + 0x2c);
      if (piVar19 == *(int **)(param_1 + 0x34)) {
        uVar13 = (int)piVar19 - *piVar22 >> 2;
        if (uVar13 < (uint)((int)*(int **)(param_1 + 0x34) - *piVar22 >> 2)) {
          *(int **)(param_1 + 0x30) = piVar19 + 1;
          if (piVar19 != (int *)0x0) {
            *piVar19 = piVar19[-1];
          }
          *piVar19 = (int)puVar4;
        }
        else {
          local_6c = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
          if (local_6c < uVar13 + 1) {
            local_6c = uVar13 + 1;
          }
          piVar10 = (int *)FUN_0010f82c(local_6c << 2,0);
          piVar16 = piVar10;
          for (piVar15 = (int *)*piVar22; piVar15 != piVar19; piVar15 = piVar15 + 1) {
            if (piVar16 != (int *)0x0) {
              *piVar16 = *piVar15;
            }
            piVar16 = piVar16 + 1;
          }
          piVar15 = (int *)(((int)piVar19 - *piVar22 & 0xfffffffcU) + (int)piVar10);
          if (piVar15 != (int *)0x0) {
            *piVar15 = (int)puVar4;
          }
          piVar16 = *(int **)(param_1 + 0x30);
          piVar15 = (int *)(((int)piVar19 - *piVar22 & 0xfffffffcU) + (int)piVar10);
          for (; piVar19 != piVar16; piVar19 = piVar19 + 1) {
            piVar15 = piVar15 + 1;
            if (piVar15 != (int *)0x0) {
              *piVar15 = *piVar19;
            }
          }
          iVar11 = *piVar22;
          iVar17 = *(int *)(param_1 + 0x30);
          FUN_0010fa20(iVar11,*(int *)(param_1 + 0x34) - iVar11 >> 2,0);
          *piVar22 = (int)piVar10;
          *(int **)(param_1 + 0x30) = piVar10 + (iVar17 - iVar11 >> 2) + 1;
          *(int **)(param_1 + 0x34) = piVar10 + local_6c;
        }
      }
      else {
        *(int **)(param_1 + 0x30) = piVar19 + 1;
        if (piVar19 != (int *)0x0) {
          *piVar19 = (int)puVar4;
        }
      }
      puVar4 = (undefined4 *)FUN_001a0808(0x1c,1);
      if (puVar4 == (undefined4 *)0x0) goto LAB_001140f0;
      uVar2 = *DAT_00114368;
      uVar18 = DAT_00114368[1];
      puVar4[1] = 0;
      puVar4[2] = param_1;
      *puVar4 = local_60;
      puVar4[5] = uVar2;
      puVar4[6] = uVar18;
      puVar4[3] = param_1;
      puVar4[4] = iVar7;
      FUN_00051b10(local_58,puVar4);
      piVar19 = *(int **)(param_1 + 0x30);
      piVar22 = (int *)(param_1 + 0x2c);
      if (piVar19 == *(int **)(param_1 + 0x34)) {
        uVar13 = (int)piVar19 - *piVar22 >> 2;
        if (uVar13 < (uint)((int)*(int **)(param_1 + 0x34) - *piVar22 >> 2)) {
          *(int **)(param_1 + 0x30) = piVar19 + 1;
          if (piVar19 != (int *)0x0) {
            *piVar19 = piVar19[-1];
          }
          *piVar19 = (int)puVar4;
        }
        else {
          local_6c = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
          if (local_6c < uVar13 + 1) {
            local_6c = uVar13 + 1;
          }
          piVar10 = (int *)FUN_0010f82c(local_6c << 2,0);
          piVar16 = piVar10;
          for (piVar15 = (int *)*piVar22; piVar15 != piVar19; piVar15 = piVar15 + 1) {
            if (piVar16 != (int *)0x0) {
              *piVar16 = *piVar15;
            }
            piVar16 = piVar16 + 1;
          }
          piVar15 = (int *)(((int)piVar19 - *piVar22 & 0xfffffffcU) + (int)piVar10);
          if (piVar15 != (int *)0x0) {
            *piVar15 = (int)puVar4;
          }
          piVar16 = *(int **)(param_1 + 0x30);
          piVar15 = (int *)(((int)piVar19 - *piVar22 & 0xfffffffcU) + (int)piVar10);
          for (; piVar19 != piVar16; piVar19 = piVar19 + 1) {
            piVar15 = piVar15 + 1;
            if (piVar15 != (int *)0x0) {
              *piVar15 = *piVar19;
            }
          }
          iVar11 = *piVar22;
          iVar17 = *(int *)(param_1 + 0x30);
          FUN_0010fa20(iVar11,*(int *)(param_1 + 0x34) - iVar11 >> 2,0);
          *(int **)(param_1 + 0x34) = piVar10 + local_6c;
          *(int **)(param_1 + 0x30) = piVar10 + (iVar17 - iVar11 >> 2) + 1;
          *piVar22 = (int)piVar10;
        }
      }
      else {
        *(int **)(param_1 + 0x30) = piVar19 + 1;
        if (piVar19 != (int *)0x0) {
          *piVar19 = (int)puVar4;
        }
      }
      FUN_00051b10(iVar7 + 0x90,puVar4);
    }
    iVar20 = iVar20 + 1;
    if (3 < iVar20) {
      iVar20 = FUN_0011146c(param_1,iVar3);
      if (iVar20 != 0) {
        FUN_0008b818(auStack_78);
        return iVar20;
      }
      FUN_0007b98c(auStack_68);
      local_64 = *(undefined1 *)(local_5c + 0x24);
      local_63 = *(undefined1 *)(local_5c + 0x25);
      local_62 = *(undefined1 *)(local_5c + 0x26);
      local_61 = *(undefined1 *)(local_5c + 0x27);
      iVar20 = FUN_00156078(auStack_68);
      if ((iVar20 == 5) || (iVar20 == 6 || iVar20 == 7)) {
        FUN_001112dc(&local_60,param_1,iVar3);
        iVar3 = FUN_00112850(param_1,&local_60);
        if (iVar3 != 0) {
          FUN_000028a4(DAT_00114370,*(undefined4 *)(param_1 + 4));
          FUN_0007b9a4(&local_5c);
          FUN_0007b9a4(auStack_68);
          FUN_0008b818(auStack_78);
          return iVar3;
        }
        FUN_0007b9a4(&local_5c);
      }
      FUN_0007b9a4(auStack_68);
      FUN_0008b818(auStack_78);
      return 0;
    }
  } while( true );
}

