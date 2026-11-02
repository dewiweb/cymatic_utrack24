// rea decompile_all
// name: FUN_000080bc
// address: 0x80bc
// body: available
// range: 0x80bc-0x829f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0000818c) */
/* WARNING: Removing unreachable block (ram,0x00008198) */

undefined4 FUN_000080bc(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  
  FUN_001f00bc(param_1 + 0x118);
  piVar7 = *(int **)(param_1 + 0x17c);
  piVar2 = *(int **)(param_1 + 0x178);
  for (piVar8 = piVar2; piVar7 != piVar8; piVar8 = piVar8 + 1) {
    if (*piVar8 == param_2) goto LAB_00008110;
  }
  piVar8 = (int *)(param_1 + 0x178);
  if (piVar7 == *(int **)(param_1 + 0x180)) {
    uVar1 = (int)piVar7 - (int)piVar2 >> 2;
    if (uVar1 < (uint)((int)*(int **)(param_1 + 0x180) - (int)piVar2 >> 2)) {
      *(int **)(param_1 + 0x17c) = piVar7 + 1;
      if (piVar7 != (int *)0x0) {
        *piVar7 = piVar7[-1];
      }
      *piVar7 = param_2;
    }
    else {
      uVar9 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
      if (uVar9 < uVar1 + 1) {
        uVar9 = uVar1 + 1;
      }
      piVar3 = (int *)FUN_00173860(uVar9 << 2,0);
      piVar5 = piVar3;
      for (piVar2 = (int *)*piVar8; piVar2 != piVar7; piVar2 = piVar2 + 1) {
        if (piVar5 != (int *)0x0) {
          *piVar5 = *piVar2;
        }
        piVar5 = piVar5 + 1;
      }
      piVar2 = (int *)(((int)piVar7 - *piVar8 & 0xfffffffcU) + (int)piVar3);
      if (piVar2 != (int *)0x0) {
        *piVar2 = param_2;
      }
      piVar5 = *(int **)(param_1 + 0x17c);
      piVar2 = (int *)(((int)piVar7 - *piVar8 & 0xfffffffcU) + (int)piVar3);
      for (; piVar7 != piVar5; piVar7 = piVar7 + 1) {
        piVar2 = piVar2 + 1;
        if (piVar2 != (int *)0x0) {
          *piVar2 = *piVar7;
        }
      }
      iVar4 = *piVar8;
      iVar6 = *(int *)(param_1 + 0x17c);
      FUN_00173a54(iVar4,*(int *)(param_1 + 0x180) - iVar4 >> 2,0);
      *(int **)(param_1 + 0x180) = piVar3 + uVar9;
      *(int **)(param_1 + 0x17c) = piVar3 + (iVar6 - iVar4 >> 2) + 1;
      *piVar8 = (int)piVar3;
    }
  }
  else {
    *(int **)(param_1 + 0x17c) = piVar7 + 1;
    if (piVar7 != (int *)0x0) {
      *piVar7 = param_2;
    }
  }
LAB_00008110:
  FUN_001f06d4(param_1 + 0x118);
  return 1;
}

