// rea decompile_all
// name: FUN_000d7140
// address: 0xd7140
// body: available
// range: 0xd7140-0xd72fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000d723c) */
/* WARNING: Removing unreachable block (ram,0x000d7240) */

undefined4 FUN_000d7140(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined4 uVar14;
  
  puVar12 = *(undefined4 **)(param_1 + 0x48);
  if (*(undefined4 **)(param_1 + 0x4c) != puVar12) {
    do {
      uVar14 = *puVar12;
      uVar1 = FUN_0015727c(uVar14);
      uVar2 = FUN_0015563a(param_2);
      iVar3 = FUN_00160a14(uVar1,uVar2);
      if (iVar3 != 0) {
        iVar3 = FUN_000803fc(uVar14,param_2);
        if (iVar3 != 0) {
          uVar1 = (**(code **)(*param_2 + 8))(param_2);
          iVar3 = FUN_00051b10(uVar1,uVar14);
          if (iVar3 != 0) goto LAB_000d72f2;
          FUN_000804e8(uVar14,param_2);
        }
        return 0;
      }
      puVar12 = puVar12 + 1;
    } while (*(undefined4 **)(param_1 + 0x4c) != puVar12);
  }
  iVar3 = FUN_001a0808(0x1c,1);
  if (iVar3 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_00080754(iVar3,param_1);
  }
  iVar3 = FUN_000803fc(piVar4,param_2);
  if (iVar3 != 0) {
    uVar1 = (**(code **)(*param_2 + 8))(param_2);
    iVar3 = FUN_00051b10(uVar1,piVar4);
    if (iVar3 != 0) {
      puVar12 = *(undefined4 **)(param_1 + 0x4c);
      piVar13 = (int *)(param_1 + 0x48);
      if (puVar12 == *(undefined4 **)(param_1 + 0x50)) {
        uVar11 = (int)puVar12 - *piVar13 >> 2;
        if (uVar11 < (uint)((int)*(undefined4 **)(param_1 + 0x50) - *piVar13 >> 2)) {
          *(undefined4 **)(param_1 + 0x4c) = puVar12 + 1;
          if (puVar12 != (undefined4 *)0x0) {
            *puVar12 = puVar12[-1];
          }
          *puVar12 = piVar4;
        }
        else {
          uVar7 = (uVar11 >> 1) + uVar11 + (uVar11 >> 3);
          uVar5 = uVar11 + 1;
          if (uVar11 + 1 <= uVar7) {
            uVar5 = uVar7;
          }
          puVar6 = (undefined4 *)FUN_0010f82c(uVar5 * 4,0);
          puVar10 = puVar6;
          for (puVar8 = (undefined4 *)*piVar13; puVar8 != puVar12; puVar8 = puVar8 + 1) {
            if (puVar10 != (undefined4 *)0x0) {
              *puVar10 = *puVar8;
            }
            puVar10 = puVar10 + 1;
          }
          puVar8 = (undefined4 *)(((int)puVar12 - *piVar13 & 0xfffffffcU) + (int)puVar6);
          if (puVar8 != (undefined4 *)0x0) {
            *puVar8 = piVar4;
          }
          puVar10 = *(undefined4 **)(param_1 + 0x4c);
          puVar8 = (undefined4 *)(((int)puVar12 - *piVar13 & 0xfffffffcU) + (int)puVar6);
          for (; puVar12 != puVar10; puVar12 = puVar12 + 1) {
            puVar8 = puVar8 + 1;
            if (puVar8 != (undefined4 *)0x0) {
              *puVar8 = *puVar12;
            }
          }
          iVar9 = *(int *)(param_1 + 0x4c);
          iVar3 = *piVar13;
          FUN_0010fa20(iVar3,*(int *)(param_1 + 0x50) - iVar3 >> 2,0);
          *piVar13 = (int)puVar6;
          *(undefined4 **)(param_1 + 0x4c) = puVar6 + (iVar9 - iVar3 >> 2) + 1;
          *(undefined4 **)(param_1 + 0x50) = puVar6 + uVar5;
        }
      }
      else {
        *(undefined4 **)(param_1 + 0x4c) = puVar12 + 1;
        if (puVar12 != (undefined4 *)0x0) {
          *puVar12 = piVar4;
        }
      }
LAB_000d72f2:
      FUN_000b60d8(param_1);
      return 1;
    }
    FUN_000804e8(piVar4,param_2);
  }
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  return 0;
}

