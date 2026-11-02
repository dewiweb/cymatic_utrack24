// rea decompile_all
// name: FUN_0014bb44
// address: 0x14bb44
// body: available
// range: 0x14bb44-0x14bcf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0014bbe8) */
/* WARNING: Removing unreachable block (ram,0x0014bbf4) */

undefined4 FUN_0014bb44(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  
  iVar2 = FUN_001a0808(0x14,1);
  if ((iVar2 != 0) && (iVar2 = FUN_000e7edc(iVar2,param_2,param_3), iVar2 != 0)) {
    piVar8 = (int *)(param_1 + 0x14);
    piVar7 = *(int **)(param_1 + 0x18);
    if (piVar7 == *(int **)(param_1 + 0x1c)) {
      uVar1 = (int)piVar7 - *piVar8 >> 2;
      if (uVar1 < (uint)((int)*(int **)(param_1 + 0x1c) - *piVar8 >> 2)) {
        *(int **)(param_1 + 0x18) = piVar7 + 1;
        if (piVar7 != (int *)0x0) {
          *piVar7 = piVar7[-1];
        }
        *piVar7 = iVar2;
      }
      else {
        uVar9 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
        if (uVar9 < uVar1 + 1) {
          uVar9 = uVar1 + 1;
        }
        piVar3 = (int *)FUN_0010f82c(uVar9 << 2,0);
        piVar5 = piVar3;
        for (piVar4 = (int *)*piVar8; piVar4 != piVar7; piVar4 = piVar4 + 1) {
          if (piVar5 != (int *)0x0) {
            *piVar5 = *piVar4;
          }
          piVar5 = piVar5 + 1;
        }
        piVar4 = (int *)(((int)piVar7 - *piVar8 & 0xfffffffcU) + (int)piVar3);
        if (piVar4 != (int *)0x0) {
          *piVar4 = iVar2;
        }
        piVar5 = *(int **)(param_1 + 0x18);
        piVar4 = (int *)(((int)piVar7 - *piVar8 & 0xfffffffcU) + (int)piVar3);
        for (; piVar7 != piVar5; piVar7 = piVar7 + 1) {
          piVar4 = piVar4 + 1;
          if (piVar4 != (int *)0x0) {
            *piVar4 = *piVar7;
          }
        }
        iVar2 = *piVar8;
        iVar6 = *(int *)(param_1 + 0x18);
        FUN_0010fa20(iVar2,*(int *)(param_1 + 0x1c) - iVar2 >> 2,0);
        *(int **)(param_1 + 0x1c) = piVar3 + uVar9;
        *(int **)(param_1 + 0x18) = piVar3 + (iVar6 - iVar2 >> 2) + 1;
        *piVar8 = (int)piVar3;
      }
    }
    else {
      *(int **)(param_1 + 0x18) = piVar7 + 1;
      if (piVar7 != (int *)0x0) {
        *piVar7 = iVar2;
      }
    }
    return 0;
  }
  return 0xffffff9a;
}

