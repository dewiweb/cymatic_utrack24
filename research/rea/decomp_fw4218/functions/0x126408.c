// rea decompile_all
// name: FUN_00126408
// address: 0x126408
// body: available
// range: 0x126408-0x126837 inclusive
// range: 0x126860-0x12703b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00126a2c) */
/* WARNING: Removing unreachable block (ram,0x00126a38) */
/* WARNING: Removing unreachable block (ram,0x00126da8) */
/* WARNING: Removing unreachable block (ram,0x00126db4) */
/* WARNING: Removing unreachable block (ram,0x00126f18) */
/* WARNING: Removing unreachable block (ram,0x00126f24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_00126408(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 **ppuVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  uint uVar17;
  int iVar18;
  undefined4 *local_84;
  undefined4 *local_80;
  undefined4 *local_7c;
  undefined4 local_78;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  undefined4 *local_70;
  undefined4 *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined1 local_5f;
  undefined4 local_5c;
  uint local_48;
  undefined4 local_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  
  uStack_34 = param_1;
  uStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  puVar3 = (undefined4 *)FUN_00130378();
  *puVar3 = _DAT_00126838;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  puVar3[0x14] = 0;
  puVar3[0x15] = 0;
  puVar3[0x16] = 0;
  puVar3[0x17] = param_2;
  puVar3[0x18] = 0;
  puVar3[0x19] = 0;
  puVar3[0x1a] = 0;
  puVar3[0x1b] = 0;
  puVar3[0x1c] = 0;
  puVar3[0x1d] = 0;
  *(char *)(puVar3 + 0x1e) = (char)local_2c;
  *(char *)((int)puVar3 + 0x79) = (char)local_28;
  puVar3[0x20] = 0;
  FUN_001f0168(puVar3 + 0x1f,s___FileStreamingInterface_0012683a + 2);
  FUN_000ec260(param_5);
  FUN_00145440(local_2c);
  piVar7 = puVar3 + 0x11;
  local_80 = local_2c;
  if ((undefined4 *)0x7ffffff < local_2c) {
    FUN_00173800(8,&DAT_00126854,&DAT_00126854,local_2c,0x7ffffff);
  }
  if ((undefined4 *)(puVar3[0x13] - *piVar7 >> 5) < local_80) {
    uVar8 = puVar3[0x12] - *piVar7 >> 5;
    local_6c = (undefined4 *)(uVar8 + (uVar8 >> 1) + (uVar8 >> 3));
    if (local_6c < (undefined4 *)(uVar8 + 1)) {
      local_6c = (undefined4 *)(uVar8 + 1);
    }
    ppuVar5 = &local_6c;
    if (local_6c <= local_80) {
      ppuVar5 = &local_80;
    }
    puVar16 = *ppuVar5;
    iVar4 = FUN_00173860((int)puVar16 << 5,0);
    iVar13 = puVar3[0x12];
    iVar18 = iVar4;
    for (iVar9 = *piVar7; iVar9 != iVar13; iVar9 = iVar9 + 0x20) {
      if (iVar18 != 0) {
        FUN_00147b24(iVar18,iVar9);
      }
      iVar18 = iVar18 + 0x20;
    }
    puVar14 = (undefined4 *)puVar3[0x12];
    for (puVar10 = (undefined4 *)*piVar7; puVar10 != puVar14; puVar10 = puVar10 + 8) {
      (**(code **)*puVar10)(puVar10);
    }
    FUN_00173a54(*piVar7,puVar3[0x13] - *piVar7 >> 5,0);
    iVar9 = *piVar7;
    *piVar7 = iVar4;
    puVar3[0x12] = (puVar3[0x12] - iVar9 & 0xffffffe0U) + iVar4;
    puVar3[0x13] = iVar4 + (int)puVar16 * 0x20;
  }
  piVar7 = puVar3 + 0x1b;
  local_70 = local_2c;
  if ((undefined4 *)0x3fffffff < local_2c) {
    FUN_00173800(8,&DAT_00126854,&DAT_00126854,local_2c,0x3fffffff);
  }
  if ((undefined4 *)(puVar3[0x1d] - *piVar7 >> 2) < local_70) {
    uVar8 = puVar3[0x1c] - *piVar7 >> 2;
    local_7c = (undefined4 *)(uVar8 + (uVar8 >> 1) + (uVar8 >> 3));
    if (local_7c < (undefined4 *)(uVar8 + 1)) {
      local_7c = (undefined4 *)(uVar8 + 1);
    }
    ppuVar5 = &local_7c;
    if (local_7c <= local_70) {
      ppuVar5 = &local_70;
    }
    puVar12 = *ppuVar5;
    puVar14 = (undefined4 *)FUN_00173860((int)puVar12 << 2,0);
    puVar6 = (undefined4 *)puVar3[0x1c];
    puVar10 = puVar14;
    for (puVar16 = (undefined4 *)*piVar7; puVar16 != puVar6; puVar16 = puVar16 + 1) {
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = *puVar16;
      }
      puVar10 = puVar10 + 1;
    }
    FUN_00173a54(*piVar7,puVar3[0x1d] - *piVar7 >> 2,0);
    iVar9 = *piVar7;
    *piVar7 = (int)puVar14;
    puVar3[0x1c] = (puVar3[0x1c] - iVar9 & 0xfffffffcU) + (int)puVar14;
    puVar3[0x1d] = puVar14 + (int)puVar12;
  }
  uVar15 = DAT_0012685c;
  puVar16 = (undefined4 *)0x0;
  if (local_2c != (undefined4 *)0x0) {
    local_3c = DAT_00126858;
    do {
      local_74 = 0;
      local_78 = uVar15;
      local_73 = SUB41(puVar16,0);
      local_72 = 0;
      local_71 = 0;
      local_70 = (undefined4 *)((uint)local_70 & 0xff000000);
      local_64 = local_3c;
      local_60 = 0;
      puVar11 = puVar3 + 0x11;
      local_6c = (undefined4 *)0x0;
      local_68 = 0;
      local_5f = 0;
      local_5c = 0x7fffffff;
      puVar10 = (undefined4 *)puVar3[0x12];
      if (puVar10 == (undefined4 *)puVar3[0x13]) {
        uVar8 = (int)((int)puVar10 - *puVar11) >> 5;
        local_7c = &local_78;
        if (uVar8 < (uint)((int)((int)puVar3[0x13] - *puVar11) >> 5)) {
          puVar3[0x12] = puVar10 + 8;
          if (puVar10 != (undefined4 *)0x0) {
            FUN_00147b24();
          }
          puVar6 = puVar10;
          puVar12 = puVar10 + -8;
          puVar14 = local_7c;
          while (puVar2 = puVar12, puVar1 = puVar6, local_7c = puVar14, puVar10 != puVar2) {
            puVar6 = puVar1 + -8;
            puVar12 = puVar2 + -8;
            if (puVar6 != puVar12) {
              *(undefined1 *)(puVar1 + -7) = *(undefined1 *)(puVar2 + -7);
              *(undefined1 *)((int)puVar1 - 0x1b) = *(undefined1 *)((int)puVar2 - 0x1b);
              *(undefined1 *)((int)puVar1 - 0x1a) = *(undefined1 *)((int)puVar2 - 0x1a);
              *(undefined1 *)((int)puVar1 - 0x19) = *(undefined1 *)((int)puVar2 - 0x19);
              *(undefined1 *)(puVar1 + -6) = *(undefined1 *)(puVar2 + -6);
              *(undefined1 *)((int)puVar1 - 0x17) = *(undefined1 *)((int)puVar2 - 0x17);
              *(undefined1 *)((int)puVar1 - 0x16) = *(undefined1 *)((int)puVar2 - 0x16);
              puVar1[-5] = puVar2[-5];
              puVar1[-4] = puVar2[-4];
              FUN_0023223c(puVar1 + -3,puVar2 + -3);
              *(undefined1 *)(puVar1 + -2) = *(undefined1 *)(puVar2 + -2);
              *(undefined1 *)((int)puVar1 - 7) = *(undefined1 *)((int)puVar2 - 7);
              puVar1[-1] = puVar2[-1];
              puVar14 = local_7c;
            }
          }
          if (puVar10 != puVar14) {
            *(undefined1 *)(puVar10 + 1) = *(undefined1 *)(puVar14 + 1);
            *(undefined1 *)((int)puVar10 + 5) = *(undefined1 *)((int)puVar14 + 5);
            *(undefined1 *)((int)puVar10 + 6) = *(undefined1 *)((int)puVar14 + 6);
            *(undefined1 *)((int)puVar10 + 7) = *(undefined1 *)((int)puVar14 + 7);
            *(undefined1 *)(puVar10 + 2) = *(undefined1 *)(puVar14 + 2);
            *(undefined1 *)((int)puVar10 + 9) = *(undefined1 *)((int)puVar14 + 9);
            *(undefined1 *)((int)puVar10 + 10) = *(undefined1 *)((int)puVar14 + 10);
            puVar10[3] = local_6c;
            puVar10[4] = local_68;
            FUN_0023223c(puVar10 + 5,puVar14 + 5);
            *(undefined1 *)(puVar10 + 6) = *(undefined1 *)(puVar14 + 6);
            *(undefined1 *)((int)puVar10 + 0x19) = *(undefined1 *)((int)puVar14 + 0x19);
            puVar10[7] = local_5c;
          }
        }
        else {
          local_48 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
          if (local_48 < uVar8 + 1) {
            local_48 = uVar8 + 1;
          }
          uVar17 = FUN_00173860(local_48 << 5,0);
          uVar8 = uVar17;
          for (puVar14 = (undefined4 *)*puVar11; puVar14 != puVar10; puVar14 = puVar14 + 8) {
            if (uVar8 != 0) {
              FUN_00147b24(uVar8,puVar14);
            }
            uVar8 = uVar8 + 0x20;
          }
          iVar9 = ((int)puVar10 - *puVar11 & 0xffffffe0) + uVar17;
          if (iVar9 != 0) {
            FUN_00147b24(iVar9,local_7c);
          }
          puVar14 = (undefined4 *)puVar3[0x12];
          iVar9 = ((int)puVar10 - *puVar11 & 0xffffffe0) + uVar17;
          for (; puVar10 != puVar14; puVar10 = puVar10 + 8) {
            iVar9 = iVar9 + 0x20;
            if (iVar9 != 0) {
              FUN_00147b24(iVar9,puVar10);
            }
          }
          puVar10 = (undefined4 *)*puVar11;
          puVar14 = (undefined4 *)puVar3[0x12];
          iVar9 = (int)puVar14 - (int)puVar10;
          for (; puVar10 != puVar14; puVar10 = puVar10 + 8) {
            (**(code **)*puVar10)(puVar10);
          }
          FUN_00173a54(*puVar11,(int)(puVar3[0x13] - *puVar11) >> 5,0);
          puVar3[0x13] = uVar17 + local_48 * 0x20;
          puVar3[0x12] = uVar17 + (iVar9 >> 5) * 0x20 + 0x20;
          *puVar11 = uVar17;
        }
      }
      else {
        puVar3[0x12] = puVar10 + 8;
        if (puVar10 != (undefined4 *)0x0) {
          FUN_00147b24(puVar10);
        }
      }
      local_78 = uVar15;
      FUN_00232190(&local_64);
      puVar10 = (undefined4 *)puVar3[0x1c];
      piVar7 = puVar3 + 0x1b;
      if (puVar10 == (undefined4 *)puVar3[0x1d]) {
        uVar8 = (int)puVar10 - *piVar7 >> 2;
        if (uVar8 < (uint)((int)puVar3[0x1d] - *piVar7 >> 2)) {
          puVar3[0x1c] = puVar10 + 1;
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = puVar10[-1];
          }
          *puVar10 = 0;
        }
        else {
          uVar17 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
          if (uVar17 < uVar8 + 1) {
            uVar17 = uVar8 + 1;
          }
          puVar12 = (undefined4 *)FUN_00173860(uVar17 << 2,0);
          puVar6 = puVar12;
          for (puVar14 = (undefined4 *)*piVar7; puVar14 != puVar10; puVar14 = puVar14 + 1) {
            if (puVar6 != (undefined4 *)0x0) {
              *puVar6 = *puVar14;
            }
            puVar6 = puVar6 + 1;
          }
          puVar14 = (undefined4 *)(((int)puVar10 - *piVar7 & 0xfffffffcU) + (int)puVar12);
          if (puVar14 != (undefined4 *)0x0) {
            *puVar14 = 0;
          }
          puVar6 = (undefined4 *)puVar3[0x1c];
          puVar14 = (undefined4 *)(((int)puVar10 - *piVar7 & 0xfffffffcU) + (int)puVar12);
          for (; puVar10 != puVar6; puVar10 = puVar10 + 1) {
            puVar14 = puVar14 + 1;
            if (puVar14 != (undefined4 *)0x0) {
              *puVar14 = *puVar10;
            }
          }
          iVar9 = *piVar7;
          iVar18 = puVar3[0x1c];
          FUN_00173a54(iVar9,puVar3[0x1d] - iVar9 >> 2,0);
          puVar3[0x1d] = puVar12 + uVar17;
          puVar3[0x1c] = puVar12 + (iVar18 - iVar9 >> 2) + 1;
          *piVar7 = (int)puVar12;
        }
      }
      else {
        puVar3[0x1c] = puVar10 + 1;
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = 0;
        }
      }
      puVar16 = (undefined4 *)((int)puVar16 + 1U & 0xff);
    } while (puVar16 < local_2c);
  }
  piVar7 = puVar3 + 0x14;
  local_84 = local_28;
  if ((undefined4 *)0x3fffffff < local_28) {
    FUN_00173800(8,&DAT_00126854,&DAT_00126854,local_28,0x3fffffff);
  }
  if ((undefined4 *)(puVar3[0x16] - *piVar7 >> 2) < local_84) {
    uVar8 = puVar3[0x15] - *piVar7 >> 2;
    local_70 = (undefined4 *)(uVar8 + (uVar8 >> 1) + (uVar8 >> 3));
    if (local_70 < (undefined4 *)(uVar8 + 1)) {
      local_70 = (undefined4 *)(uVar8 + 1);
    }
    ppuVar5 = &local_70;
    if (local_70 <= local_84) {
      ppuVar5 = &local_84;
    }
    puVar12 = *ppuVar5;
    puVar14 = (undefined4 *)FUN_00173860((int)puVar12 << 2,0);
    puVar6 = (undefined4 *)puVar3[0x15];
    puVar10 = puVar14;
    for (puVar16 = (undefined4 *)*piVar7; puVar16 != puVar6; puVar16 = puVar16 + 1) {
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = *puVar16;
      }
      puVar10 = puVar10 + 1;
    }
    FUN_00173a54(*piVar7,puVar3[0x16] - *piVar7 >> 2,0);
    iVar9 = *piVar7;
    *piVar7 = (int)puVar14;
    puVar3[0x15] = (puVar3[0x15] - iVar9 & 0xfffffffcU) + (int)puVar14;
    puVar3[0x16] = puVar14 + (int)puVar12;
  }
  piVar7 = puVar3 + 0x18;
  local_80 = local_28;
  if ((undefined4 *)0x3fffffff < local_28) {
    FUN_00173800(8,&DAT_00126854,&DAT_00126854,local_28,0x3fffffff);
  }
  if ((undefined4 *)(puVar3[0x1a] - *piVar7 >> 2) < local_80) {
    uVar8 = puVar3[0x19] - *piVar7 >> 2;
    local_7c = (undefined4 *)(uVar8 + (uVar8 >> 1) + (uVar8 >> 3));
    if (local_7c < (undefined4 *)(uVar8 + 1)) {
      local_7c = (undefined4 *)(uVar8 + 1);
    }
    ppuVar5 = &local_7c;
    if (local_7c <= local_80) {
      ppuVar5 = &local_80;
    }
    puVar12 = *ppuVar5;
    puVar14 = (undefined4 *)FUN_00173860((int)puVar12 << 2,0);
    puVar6 = (undefined4 *)puVar3[0x19];
    puVar10 = puVar14;
    for (puVar16 = (undefined4 *)*piVar7; puVar16 != puVar6; puVar16 = puVar16 + 1) {
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = *puVar16;
      }
      puVar10 = puVar10 + 1;
    }
    FUN_00173a54(*piVar7,puVar3[0x1a] - *piVar7 >> 2,0);
    iVar9 = *piVar7;
    *piVar7 = (int)puVar14;
    puVar3[0x19] = (puVar3[0x19] - iVar9 & 0xfffffffcU) + (int)puVar14;
    puVar3[0x1a] = puVar14 + (int)puVar12;
  }
  puVar16 = (undefined4 *)0x0;
  if (local_28 != (undefined4 *)0x0) {
    do {
      iVar9 = FUN_001f01c4(0x54,1);
      if (iVar9 == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = FUN_0014af30(iVar9,puVar16);
      }
      puVar10 = (undefined4 *)puVar3[0x15];
      piVar7 = puVar3 + 0x14;
      if (puVar10 == (undefined4 *)puVar3[0x16]) {
        uVar8 = (int)puVar10 - *piVar7 >> 2;
        if (uVar8 < (uint)((int)puVar3[0x16] - *piVar7 >> 2)) {
          puVar3[0x15] = puVar10 + 1;
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = puVar10[-1];
          }
          *puVar10 = uVar15;
        }
        else {
          uVar17 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
          if (uVar17 < uVar8 + 1) {
            uVar17 = uVar8 + 1;
          }
          puVar12 = (undefined4 *)FUN_00173860(uVar17 << 2,0);
          puVar6 = puVar12;
          for (puVar14 = (undefined4 *)*piVar7; puVar14 != puVar10; puVar14 = puVar14 + 1) {
            if (puVar6 != (undefined4 *)0x0) {
              *puVar6 = *puVar14;
            }
            puVar6 = puVar6 + 1;
          }
          puVar14 = (undefined4 *)(((int)puVar10 - *piVar7 & 0xfffffffcU) + (int)puVar12);
          if (puVar14 != (undefined4 *)0x0) {
            *puVar14 = uVar15;
          }
          puVar6 = (undefined4 *)puVar3[0x15];
          puVar14 = (undefined4 *)(((int)puVar10 - *piVar7 & 0xfffffffcU) + (int)puVar12);
          for (; puVar10 != puVar6; puVar10 = puVar10 + 1) {
            puVar14 = puVar14 + 1;
            if (puVar14 != (undefined4 *)0x0) {
              *puVar14 = *puVar10;
            }
          }
          iVar9 = *piVar7;
          iVar18 = puVar3[0x15];
          FUN_00173a54(iVar9,puVar3[0x16] - iVar9 >> 2,0);
          puVar3[0x16] = puVar12 + uVar17;
          puVar3[0x15] = puVar12 + (iVar18 - iVar9 >> 2) + 1;
          *piVar7 = (int)puVar12;
        }
      }
      else {
        puVar3[0x15] = puVar10 + 1;
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = uVar15;
        }
      }
      puVar10 = (undefined4 *)puVar3[0x19];
      piVar7 = puVar3 + 0x18;
      if (puVar10 == (undefined4 *)puVar3[0x1a]) {
        uVar8 = (int)puVar10 - *piVar7 >> 2;
        if (uVar8 < (uint)((int)puVar3[0x1a] - *piVar7 >> 2)) {
          puVar3[0x19] = puVar10 + 1;
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = puVar10[-1];
          }
          *puVar10 = 0;
        }
        else {
          uVar17 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
          if (uVar17 < uVar8 + 1) {
            uVar17 = uVar8 + 1;
          }
          puVar12 = (undefined4 *)FUN_00173860(uVar17 << 2,0);
          puVar6 = puVar12;
          for (puVar14 = (undefined4 *)*piVar7; puVar14 != puVar10; puVar14 = puVar14 + 1) {
            if (puVar6 != (undefined4 *)0x0) {
              *puVar6 = *puVar14;
            }
            puVar6 = puVar6 + 1;
          }
          puVar14 = (undefined4 *)(((int)puVar10 - *piVar7 & 0xfffffffcU) + (int)puVar12);
          if (puVar14 != (undefined4 *)0x0) {
            *puVar14 = 0;
          }
          puVar6 = (undefined4 *)puVar3[0x19];
          puVar14 = (undefined4 *)(((int)puVar10 - *piVar7 & 0xfffffffcU) + (int)puVar12);
          for (; puVar10 != puVar6; puVar10 = puVar10 + 1) {
            puVar14 = puVar14 + 1;
            if (puVar14 != (undefined4 *)0x0) {
              *puVar14 = *puVar10;
            }
          }
          iVar9 = *piVar7;
          iVar18 = puVar3[0x19];
          FUN_00173a54(iVar9,puVar3[0x1a] - iVar9 >> 2,0);
          puVar3[0x1a] = puVar12 + uVar17;
          puVar3[0x19] = puVar12 + (iVar18 - iVar9 >> 2) + 1;
          *piVar7 = (int)puVar12;
        }
      }
      else {
        puVar3[0x19] = puVar10 + 1;
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = 0;
        }
      }
      puVar16 = (undefined4 *)((int)puVar16 + 1U & 0xff);
    } while (puVar16 < local_28);
  }
  return puVar3;
}

