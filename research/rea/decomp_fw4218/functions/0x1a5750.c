// rea decompile_all
// name: FUN_001a5750
// address: 0x1a5750
// body: available
// range: 0x1a5750-0x1a590f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001a5750(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  
  if (param_2 != 0) {
    piVar8 = (int *)(param_1 + 8);
    piVar2 = *(int **)(param_1 + 0xc);
    if (piVar2 == *(int **)(param_1 + 0x10)) {
      uVar1 = (int)piVar2 - *piVar8 >> 3;
      if (uVar1 < (uint)((int)*(int **)(param_1 + 0x10) - *piVar8 >> 3)) {
        *(int **)(param_1 + 0xc) = piVar2 + 2;
        if (piVar2 != (int *)0x0) {
          *piVar2 = piVar2[-2];
          piVar2[1] = piVar2[-1];
        }
        piVar8 = piVar2 + -2;
        iVar5 = (int)piVar8 - (int)piVar2;
        if (0 < iVar5 >> 3) {
          piVar6 = piVar2;
          if (iVar5 * 0x10000000 < 0) {
            piVar8 = piVar2 + -4;
            piVar6 = piVar2 + -2;
            *piVar6 = *piVar8;
            piVar2[-1] = piVar2[-3];
          }
          for (iVar5 = iVar5 >> 4; iVar5 != 0; iVar5 = iVar5 + -1) {
            iVar10 = piVar8[-1];
            piVar6[-2] = piVar8[-2];
            piVar6[-1] = iVar10;
            iVar10 = piVar8[-3];
            piVar6[-4] = piVar8[-4];
            piVar6[-3] = iVar10;
            piVar6 = piVar6 + -4;
            piVar8 = piVar8 + -4;
          }
        }
        *piVar2 = param_2;
        piVar2[1] = 0;
      }
      else {
        uVar9 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
        if (uVar9 < uVar1 + 1) {
          uVar9 = uVar1 + 1;
        }
        piVar3 = (int *)FUN_00173860(uVar9 << 3,0);
        piVar7 = piVar3;
        for (piVar6 = (int *)*piVar8; piVar6 != piVar2; piVar6 = piVar6 + 2) {
          if (piVar7 != (int *)0x0) {
            iVar5 = piVar6[1];
            *piVar7 = *piVar6;
            piVar7[1] = iVar5;
          }
          piVar7 = piVar7 + 2;
        }
        piVar6 = (int *)(((int)piVar2 - *piVar8 & 0xfffffff8U) + (int)piVar3);
        if (piVar6 != (int *)0x0) {
          *piVar6 = param_2;
          piVar6[1] = 0;
        }
        piVar7 = *(int **)(param_1 + 0xc);
        piVar6 = (int *)(((int)piVar2 - *piVar8 & 0xfffffff8U) + (int)piVar3);
        for (; piVar2 != piVar7; piVar2 = piVar2 + 2) {
          piVar4 = piVar6 + 2;
          if (piVar4 != (int *)0x0) {
            iVar5 = piVar2[1];
            *piVar4 = *piVar2;
            piVar6[3] = iVar5;
          }
          piVar6 = piVar4;
        }
        iVar5 = *piVar8;
        iVar10 = *(int *)(param_1 + 0xc);
        FUN_00173a54(iVar5,*(int *)(param_1 + 0x10) - iVar5 >> 3,0);
        *(int **)(param_1 + 0x10) = piVar3 + uVar9 * 2;
        *(int **)(param_1 + 0xc) = piVar3 + (iVar10 - iVar5 >> 3) * 2 + 2;
        *piVar8 = (int)piVar3;
      }
    }
    else {
      *(int **)(param_1 + 0xc) = piVar2 + 2;
      if (piVar2 != (int *)0x0) {
        *piVar2 = param_2;
        piVar2[1] = 0;
      }
    }
    return 0;
  }
  return 0xffffff97;
}

