// rea decompile_all
// name: FUN_000a7548
// address: 0xa7548
// body: available
// range: 0xa7548-0xa78f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000a77d8) */
/* WARNING: Removing unreachable block (ram,0x000a77e4) */

int FUN_000a7548(int param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  short *psVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  short *psVar13;
  int *piVar14;
  int *piVar15;
  uint uVar16;
  short *psVar17;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar2 = (**(code **)(**(int **)(param_1 + 0x28) + 0xc))
                    (*(int **)(param_1 + 0x28),param_2,param_4,param_5);
  if (iVar2 != 0) {
    return iVar2;
  }
  if (param_5 == 0) {
    *(int *)(param_1 + 0x40) = param_4;
    return 0;
  }
  iVar2 = param_1 + 4;
  FUN_001a0700(iVar2);
  psVar3 = *(short **)(param_1 + 0x2c);
  psVar17 = *(short **)(param_1 + 0x30);
  psVar9 = (short *)0x0;
  if (psVar17 != psVar3) {
    psVar9 = *(short **)(param_2 + 4);
  }
  psVar13 = (short *)0x0;
  if (psVar17 != psVar3) {
    do {
      psVar13 = psVar3;
      if (*psVar3 == *psVar9) break;
      psVar3 = psVar3 + 8;
      psVar13 = (short *)0x0;
    } while (psVar17 != psVar3);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x20) = *(undefined4 *)(param_4 + 0x14);
  if (psVar13 == (short *)0x0) {
    iVar4 = FUN_0006f860(*(undefined4 *)(param_1 + 0x28),param_2,*(undefined4 *)(param_1 + 0x40),0);
  }
  else {
    iVar4 = FUN_0006f860(*(undefined4 *)(param_1 + 0x28),param_2,*(undefined4 *)(param_1 + 0x40),
                         psVar13 + 2);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (iVar4 == 0) {
    puVar5 = (undefined4 *)FUN_001a0808(0x1b4,1);
    if (puVar5 == (undefined4 *)0x0) {
      FUN_001a0d18(iVar2);
      return -0x35;
    }
    uVar6 = *(undefined4 *)(param_1 + 0x28);
    *puVar5 = DAT_000a78f8;
    puVar5[1] = uVar6;
    puVar5[2] = 0;
    uStack_30 = DAT_000a78f4;
    puVar5[3] = 0;
    uStack_2c = uStack_30;
    uStack_28 = uStack_30;
    uStack_24 = uStack_30;
    iVar7 = FUN_0006d7e8(puVar5 + 4,puVar5,DAT_000a78fc);
    piVar15 = (int *)(iVar7 + -0x10);
    iVar11 = 0x10;
    iVar4 = 0;
    do {
      piVar15[iVar4 + 0x4c] = 8;
      iVar11 = iVar11 + -1;
      piVar15[iVar4 + 0x5c] = 0;
      iVar4 = iVar4 + 1;
    } while (iVar11 != 0);
    *(int *)(iVar7 + -8) = param_2;
    puVar5 = (undefined4 *)FUN_0008b800(&uStack_30);
    *puVar5 = DAT_000a7900;
    uVar6 = FUN_0008cf78();
    iVar4 = FUN_0008ce54(uVar6,DAT_000a7904,&uStack_30);
    if (iVar4 == 0) {
      FUN_0008b818(&uStack_30);
      iVar4 = -200;
    }
    else {
      iVar4 = FUN_0016deb0(param_2,DAT_000a790c,DAT_000a7908,0xffffffff);
      if (iVar4 != 0) {
        *(int *)(iVar7 + -4) = iVar4 + 0x18;
        FUN_0008b818(&uStack_30);
        puVar5 = *(undefined4 **)(param_1 + 0x48);
        piVar14 = (int *)(param_1 + 0x44);
        if (puVar5 == *(undefined4 **)(param_1 + 0x4c)) {
          uVar1 = (int)puVar5 - *piVar14 >> 2;
          if (uVar1 < (uint)((int)*(undefined4 **)(param_1 + 0x4c) - *piVar14 >> 2)) {
            *(undefined4 **)(param_1 + 0x48) = puVar5 + 1;
            if (puVar5 != (undefined4 *)0x0) {
              *puVar5 = puVar5[-1];
            }
            *puVar5 = piVar15;
          }
          else {
            uVar16 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
            if (uVar16 < uVar1 + 1) {
              uVar16 = uVar1 + 1;
            }
            puVar8 = (undefined4 *)FUN_0010f82c(uVar16 << 2,0);
            puVar12 = puVar8;
            for (puVar10 = (undefined4 *)*piVar14; puVar10 != puVar5; puVar10 = puVar10 + 1) {
              if (puVar12 != (undefined4 *)0x0) {
                *puVar12 = *puVar10;
              }
              puVar12 = puVar12 + 1;
            }
            puVar10 = (undefined4 *)(((int)puVar5 - *piVar14 & 0xfffffffcU) + (int)puVar8);
            if (puVar10 != (undefined4 *)0x0) {
              *puVar10 = piVar15;
            }
            puVar12 = *(undefined4 **)(param_1 + 0x48);
            puVar10 = (undefined4 *)(((int)puVar5 - *piVar14 & 0xfffffffcU) + (int)puVar8);
            for (; puVar5 != puVar12; puVar5 = puVar5 + 1) {
              puVar10 = puVar10 + 1;
              if (puVar10 != (undefined4 *)0x0) {
                *puVar10 = *puVar5;
              }
            }
            iVar4 = *piVar14;
            iVar7 = *(int *)(param_1 + 0x48);
            FUN_0010fa20(iVar4,*(int *)(param_1 + 0x4c) - iVar4 >> 2,0);
            *(undefined4 **)(param_1 + 0x4c) = puVar8 + uVar16;
            *(undefined4 **)(param_1 + 0x48) = puVar8 + (iVar7 - iVar4 >> 2) + 1;
            *piVar14 = (int)puVar8;
          }
        }
        else {
          *(undefined4 **)(param_1 + 0x48) = puVar5 + 1;
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = piVar15;
          }
        }
        FUN_001a0d18(iVar2);
        return 0;
      }
      FUN_0008b818(&uStack_30);
      iVar4 = -5;
    }
    (**(code **)(*piVar15 + 8))(piVar15);
  }
  FUN_001a0d18(iVar2);
  return iVar4;
}

