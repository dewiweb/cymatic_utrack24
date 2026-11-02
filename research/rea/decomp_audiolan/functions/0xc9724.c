// rea decompile_all
// name: FUN_000c9724
// address: 0xc9724
// body: available
// range: 0xc9724-0xc992b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000c980c) */
/* WARNING: Removing unreachable block (ram,0x000c9818) */

undefined4 FUN_000c9724(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  uVar3 = FUN_0008cf78();
  iVar4 = FUN_0008ce54(uVar3,s_AudioHWService_000c992c,param_1 + 0x38);
  uVar3 = DAT_000c9940;
  puVar2 = DAT_000c993c;
  if (iVar4 == 0) {
    return 0;
  }
  uVar11 = 0;
  do {
    piVar10 = *(int **)(param_1 + 0x40);
    iVar4 = (**(code **)(*piVar10 + 0x60))
                      (piVar10,uVar11,*(code **)(*piVar10 + 0x60),piVar10,param_4);
    if (iVar4 != 0) {
      iVar5 = FUN_001a0808(0x18,1);
      if (iVar5 == 0) {
        return 0;
      }
      uVar14 = *puVar2;
      uVar15 = puVar2[1];
      uVar12 = *(undefined4 *)(iVar4 + 4);
      puVar6 = (undefined4 *)FUN_0014fb44(iVar5,iVar4 + 0x18);
      *puVar6 = uVar3;
      puVar6[2] = param_1;
      puVar6[3] = uVar12;
      puVar6[4] = uVar14;
      puVar6[5] = uVar15;
      puVar13 = *(undefined4 **)(param_1 + 0x4c);
      piVar10 = (int *)(param_1 + 0x48);
      if (puVar13 == *(undefined4 **)(param_1 + 0x50)) {
        uVar1 = (int)puVar13 - *piVar10 >> 2;
        if (uVar1 < (uint)((int)*(undefined4 **)(param_1 + 0x50) - *piVar10 >> 2)) {
          *(undefined4 **)(param_1 + 0x4c) = puVar13 + 1;
          if (puVar13 != (undefined4 *)0x0) {
            *puVar13 = puVar13[-1];
          }
          *puVar13 = puVar6;
        }
        else {
          param_4 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
          if (param_4 < uVar1 + 1) {
            param_4 = uVar1 + 1;
          }
          puVar7 = (undefined4 *)FUN_0010f82c(param_4 << 2,0);
          puVar8 = puVar7;
          for (puVar9 = (undefined4 *)*piVar10; puVar9 != puVar13; puVar9 = puVar9 + 1) {
            if (puVar8 != (undefined4 *)0x0) {
              *puVar8 = *puVar9;
            }
            puVar8 = puVar8 + 1;
          }
          puVar9 = (undefined4 *)(((int)puVar13 - *piVar10 & 0xfffffffcU) + (int)puVar7);
          if (puVar9 != (undefined4 *)0x0) {
            *puVar9 = puVar6;
          }
          puVar9 = *(undefined4 **)(param_1 + 0x4c);
          puVar6 = (undefined4 *)(((int)puVar13 - *piVar10 & 0xfffffffcU) + (int)puVar7);
          for (; puVar13 != puVar9; puVar13 = puVar13 + 1) {
            puVar6 = puVar6 + 1;
            if (puVar6 != (undefined4 *)0x0) {
              *puVar6 = *puVar13;
            }
          }
          iVar4 = *piVar10;
          iVar5 = *(int *)(param_1 + 0x4c);
          FUN_0010fa20(iVar4,*(int *)(param_1 + 0x50) - iVar4 >> 2,0);
          *(undefined4 **)(param_1 + 0x50) = puVar7 + param_4;
          *(undefined4 **)(param_1 + 0x4c) = puVar7 + (iVar5 - iVar4 >> 2) + 1;
          *piVar10 = (int)puVar7;
        }
      }
      else {
        *(undefined4 **)(param_1 + 0x4c) = puVar13 + 1;
        if (puVar13 != (undefined4 *)0x0) {
          *puVar13 = puVar6;
        }
      }
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < 2);
  return 1;
}

