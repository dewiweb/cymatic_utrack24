// rea decompile_all
// name: FUN_000d58dc
// address: 0xd58dc
// body: available
// range: 0xd58dc-0xd5a83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000d5978) */
/* WARNING: Removing unreachable block (ram,0x000d5984) */

undefined4 FUN_000d58dc(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int unaff_r6;
  uint uVar8;
  int *piVar9;
  
  piVar9 = *(int **)(param_1 + 0x58);
  piVar6 = *(int **)(param_1 + 0x5c);
  piVar7 = piVar9;
  while( true ) {
    if (piVar7 != piVar6) {
      unaff_r6 = *piVar7;
    }
    if (piVar7 == piVar6 || unaff_r6 == param_2) break;
    piVar7 = piVar7 + 1;
  }
  if (piVar6 != piVar7) {
    return 0;
  }
  piVar7 = (int *)(param_1 + 0x58);
  if (piVar6 == *(int **)(param_1 + 0x60)) {
    uVar1 = (int)piVar6 - (int)piVar9 >> 2;
    if (uVar1 < (uint)((int)*(int **)(param_1 + 0x60) - (int)piVar9 >> 2)) {
      *(int **)(param_1 + 0x5c) = piVar6 + 1;
      if (piVar6 != (int *)0x0) {
        *piVar6 = piVar6[-1];
      }
      *piVar6 = param_2;
    }
    else {
      uVar8 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
      if (uVar8 < uVar1 + 1) {
        uVar8 = uVar1 + 1;
      }
      piVar2 = (int *)FUN_00173860(uVar8 << 2,0);
      piVar4 = piVar2;
      for (piVar9 = (int *)*piVar7; piVar9 != piVar6; piVar9 = piVar9 + 1) {
        if (piVar4 != (int *)0x0) {
          *piVar4 = *piVar9;
        }
        piVar4 = piVar4 + 1;
      }
      piVar9 = (int *)(((int)piVar6 - *piVar7 & 0xfffffffcU) + (int)piVar2);
      if (piVar9 != (int *)0x0) {
        *piVar9 = param_2;
      }
      piVar4 = *(int **)(param_1 + 0x5c);
      piVar9 = (int *)(((int)piVar6 - *piVar7 & 0xfffffffcU) + (int)piVar2);
      for (; piVar6 != piVar4; piVar6 = piVar6 + 1) {
        piVar9 = piVar9 + 1;
        if (piVar9 != (int *)0x0) {
          *piVar9 = *piVar6;
        }
      }
      iVar3 = *piVar7;
      iVar5 = *(int *)(param_1 + 0x5c);
      FUN_00173a54(iVar3,*(int *)(param_1 + 0x60) - iVar3 >> 2,0);
      *(int **)(param_1 + 0x60) = piVar2 + uVar8;
      *(int **)(param_1 + 0x5c) = piVar2 + (iVar5 - iVar3 >> 2) + 1;
      *piVar7 = (int)piVar2;
    }
  }
  else {
    *(int **)(param_1 + 0x5c) = piVar6 + 1;
    if (piVar6 != (int *)0x0) {
      *piVar6 = param_2;
    }
  }
  return 1;
}

