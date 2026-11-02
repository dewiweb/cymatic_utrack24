// rea decompile_all
// name: FUN_001aa594
// address: 0x1aa594
// body: available
// range: 0x1aa594-0x1aa747 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001aa594(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  
  *param_1 = *param_2;
  iVar1 = FUN_002329b4(param_1 + 1,param_2 + 1);
  iVar1 = FUN_002329b4(iVar1 + 4,param_2 + 2);
  iVar1 = FUN_002383b4(iVar1 + 4,param_2 + 3);
  iVar1 = FUN_002383b4(iVar1 + 0x18,param_2 + 9);
  piVar7 = (int *)(iVar1 + 0x18);
  *piVar7 = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  piVar2 = (int *)FUN_00173860(0xc,0);
  iVar3 = FUN_00173860(0xc,0);
  piVar2[2] = iVar3;
  *piVar2 = *piVar7;
  piVar2[1] = 1;
  *piVar7 = (int)piVar2;
  iVar3 = piVar2[2];
  *(int *)(iVar1 + 0x20) = iVar3;
  *(int *)(iVar1 + 0x24) = iVar3 + 0xc;
  *(int *)(iVar1 + 0x28) = iVar3;
  *(int *)(iVar1 + 0x20) = iVar3 + 0xc;
  *(int *)iVar3 = iVar3;
  *(int *)(*(int *)(iVar1 + 0x28) + 4) = *(int *)(iVar1 + 0x28);
  piVar9 = (int *)param_2[0x13];
  iVar3 = **(int **)(iVar1 + 0x28);
  for (piVar2 = (int *)*piVar9; piVar2 != piVar9; piVar2 = (int *)*piVar2) {
    piVar4 = *(int **)(iVar1 + 0x1c);
    if (piVar4 == (int *)0x0) {
      piVar4 = *(int **)(iVar1 + 0x20);
      if (piVar4 == *(int **)(iVar1 + 0x24)) {
        uVar8 = 1;
        if (*piVar7 != 0) {
          uVar5 = *(uint *)(*piVar7 + 4);
          uVar8 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
          if (uVar8 < uVar5 + 1) {
            uVar8 = uVar5 + 1;
          }
        }
        piVar4 = (int *)FUN_00173860(0xc,0);
        iVar6 = FUN_00173860(uVar8 * 0xc,0);
        piVar4[2] = iVar6;
        *piVar4 = *piVar7;
        piVar4[1] = uVar8;
        *piVar7 = (int)piVar4;
        piVar4 = (int *)piVar4[2];
        *(int **)(iVar1 + 0x20) = piVar4;
        *(int **)(iVar1 + 0x24) = piVar4 + uVar8 * 3;
      }
      *(int **)(iVar1 + 0x20) = piVar4 + 3;
    }
    else {
      *(int *)(iVar1 + 0x1c) = *piVar4;
    }
    if (piVar4 + 2 != (int *)0x0) {
      *(undefined1 *)(piVar4 + 2) = *(undefined1 *)(piVar2 + 2);
    }
    *piVar4 = iVar3;
    piVar4[1] = *(int *)(iVar3 + 4);
    **(int **)(iVar3 + 4) = (int)piVar4;
    *(int **)(iVar3 + 4) = piVar4;
    *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) + 1;
  }
  return iVar1 + -0x24;
}

