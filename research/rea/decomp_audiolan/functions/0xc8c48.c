// rea decompile_all
// name: FUN_000c8c48
// address: 0xc8c48
// body: available
// range: 0xc8c48-0xc8df3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000c8ce8) */
/* WARNING: Removing unreachable block (ram,0x000c8cf4) */

undefined4 FUN_000c8c48(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  
  piVar7 = *(int **)(param_1 + 0x88);
  piVar8 = *(int **)(param_1 + 0x8c);
  piVar9 = piVar7;
  while( true ) {
    if (piVar8 == piVar9) {
      piVar9 = (int *)(param_1 + 0x88);
      if (piVar8 == *(int **)(param_1 + 0x90)) {
        uVar1 = (int)piVar8 - (int)piVar7 >> 2;
        if (uVar1 < (uint)((int)*(int **)(param_1 + 0x90) - (int)piVar7 >> 2)) {
          *(int **)(param_1 + 0x8c) = piVar8 + 1;
          if (piVar8 != (int *)0x0) {
            *piVar8 = piVar8[-1];
          }
          *piVar8 = param_2;
        }
        else {
          uVar4 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
          uVar10 = uVar1 + 1;
          if (uVar1 + 1 <= uVar4) {
            uVar10 = uVar4;
          }
          piVar2 = (int *)FUN_0010f82c(uVar10 << 2,0);
          piVar5 = piVar2;
          for (piVar7 = (int *)*piVar9; piVar7 != piVar8; piVar7 = piVar7 + 1) {
            if (piVar5 != (int *)0x0) {
              *piVar5 = *piVar7;
            }
            piVar5 = piVar5 + 1;
          }
          piVar7 = (int *)(((int)piVar8 - *piVar9 & 0xfffffffcU) + (int)piVar2);
          if (piVar7 != (int *)0x0) {
            *piVar7 = param_2;
          }
          piVar5 = *(int **)(param_1 + 0x8c);
          piVar7 = (int *)(((int)piVar8 - *piVar9 & 0xfffffffcU) + (int)piVar2);
          for (; piVar8 != piVar5; piVar8 = piVar8 + 1) {
            piVar7 = piVar7 + 1;
            if (piVar7 != (int *)0x0) {
              *piVar7 = *piVar8;
            }
          }
          iVar3 = *piVar9;
          iVar6 = *(int *)(param_1 + 0x8c);
          FUN_0010fa20(iVar3,*(int *)(param_1 + 0x90) - iVar3 >> 2,0);
          *(int **)(param_1 + 0x90) = piVar2 + uVar10;
          *(int **)(param_1 + 0x8c) = piVar2 + (iVar6 - iVar3 >> 2) + 1;
          *piVar9 = (int)piVar2;
        }
      }
      else {
        *(int **)(param_1 + 0x8c) = piVar8 + 1;
        if (piVar8 != (int *)0x0) {
          *piVar8 = param_2;
        }
      }
      return 1;
    }
    if (*piVar9 == param_2) break;
    piVar9 = piVar9 + 1;
  }
  return 0;
}

