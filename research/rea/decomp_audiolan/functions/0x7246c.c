// rea decompile_all
// name: FUN_0007246c
// address: 0x7246c
// body: available
// range: 0x7246c-0x7268b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00072580) */
/* WARNING: Removing unreachable block (ram,0x0007258c) */

int * FUN_0007246c(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  
  iVar2 = FUN_000760f8(0xc4);
  if ((iVar2 != 0) && (iVar2 = FUN_000dcfcc(), iVar2 != 0)) {
    piVar3 = (int *)FUN_001a0808(0x38,1);
    if (piVar3 != (int *)0x0) {
      *piVar3 = 0;
      piVar3[1] = 0;
      piVar3[2] = 0;
      piVar3[3] = 0;
      piVar3[4] = 0;
      piVar3[5] = 0;
      piVar3[6] = 0;
      piVar3[7] = 0;
      piVar3[8] = 0;
      piVar3[9] = 0;
      piVar3[10] = 0;
      piVar3[0xb] = 0;
      piVar3[0xc] = 0;
      piVar3[0xd] = 0;
      *piVar3 = iVar2;
      FUN_000dc514(iVar2,*(undefined4 *)(param_1 + 4));
      FUN_000dcd48(*piVar3,*(undefined4 *)(param_1 + 0x18));
      piVar9 = (int *)(param_1 + 8);
      puVar4 = *(undefined4 **)(param_1 + 0xc);
      if (puVar4 == *(undefined4 **)(param_1 + 0x10)) {
        uVar1 = (int)puVar4 - *piVar9 >> 2;
        if (uVar1 < (uint)((int)*(undefined4 **)(param_1 + 0x10) - *piVar9 >> 2)) {
          *(undefined4 **)(param_1 + 0xc) = puVar4 + 1;
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = puVar4[-1];
          }
          *puVar4 = piVar3;
        }
        else {
          uVar10 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
          if (uVar10 < uVar1 + 1) {
            uVar10 = uVar1 + 1;
          }
          puVar5 = (undefined4 *)FUN_0010f82c(uVar10 << 2,0);
          puVar7 = puVar5;
          for (puVar6 = (undefined4 *)*piVar9; puVar6 != puVar4; puVar6 = puVar6 + 1) {
            if (puVar7 != (undefined4 *)0x0) {
              *puVar7 = *puVar6;
            }
            puVar7 = puVar7 + 1;
          }
          puVar6 = (undefined4 *)(((int)puVar4 - *piVar9 & 0xfffffffcU) + (int)puVar5);
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = piVar3;
          }
          puVar7 = *(undefined4 **)(param_1 + 0xc);
          puVar6 = (undefined4 *)(((int)puVar4 - *piVar9 & 0xfffffffcU) + (int)puVar5);
          for (; puVar4 != puVar7; puVar4 = puVar4 + 1) {
            puVar6 = puVar6 + 1;
            if (puVar6 != (undefined4 *)0x0) {
              *puVar6 = *puVar4;
            }
          }
          iVar2 = *piVar9;
          iVar8 = *(int *)(param_1 + 0xc);
          FUN_0010fa20(iVar2,*(int *)(param_1 + 0x10) - iVar2 >> 2,0);
          *(undefined4 **)(param_1 + 0x10) = puVar5 + uVar10;
          *(undefined4 **)(param_1 + 0xc) = puVar5 + (iVar8 - iVar2 >> 2) + 1;
          *piVar9 = (int)puVar5;
        }
      }
      else {
        *(undefined4 **)(param_1 + 0xc) = puVar4 + 1;
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = piVar3;
        }
      }
      return piVar3;
    }
    FUN_000dd024(iVar2);
    FUN_000760e0();
  }
  return (int *)0x0;
}

