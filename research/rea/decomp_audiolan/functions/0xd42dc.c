// rea decompile_all
// name: FUN_000d42dc
// address: 0xd42dc
// body: available
// range: 0xd42dc-0xd4443 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000d42dc(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  
  piVar5 = *(int **)(param_1 + 0x5a0);
  if (param_3 == 0) {
    uVar6 = 0;
    if (*(int **)(param_1 + 0x5a4) != piVar5) {
      do {
        piVar1 = (int *)FUN_0006a6e4();
        iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,*piVar5);
        if (iVar2 == 0) {
          FUN_000028a4(DAT_000d4444,*piVar5);
        }
        piVar5 = piVar5 + 1;
      } while (*(int **)(param_1 + 0x5a4) != piVar5);
    }
    iVar2 = *(int *)(param_1 + 0x5a4);
    if (*(int *)(param_1 + 0x5a0) != iVar2) {
      *(uint *)(param_1 + 0x5a4) = iVar2 - (iVar2 - *(int *)(param_1 + 0x5a0) & 0xfffffffcU);
    }
  }
  else {
    uVar6 = 0x1b;
    for (; *(int **)(param_1 + 0x5a4) != piVar5; piVar5 = piVar5 + 1) {
      if (*piVar5 == param_3) {
        piVar1 = (int *)FUN_0006a6e4();
        iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,param_3);
        if (iVar2 == 0) {
          FUN_000028a4(DAT_000d4444,*piVar5);
        }
        piVar1 = *(int **)(param_1 + 0x5a4);
        if (*(int **)(param_1 + 0x5a0) != piVar1) {
          piVar3 = piVar5 + 1;
          if ((piVar1 != piVar3) && (iVar2 = (int)piVar1 - (int)piVar3, 0 < iVar2 >> 2)) {
            piVar1 = piVar5;
            piVar4 = piVar5 + -1;
            if (iVar2 * 0x20000000 < 0) {
              *piVar5 = *piVar3;
              piVar1 = piVar3;
              piVar4 = piVar5;
            }
            for (iVar2 = iVar2 >> 3; iVar2 != 0; iVar2 = iVar2 + -1) {
              piVar4[1] = piVar1[1];
              piVar1 = piVar1 + 2;
              piVar4 = piVar4 + 2;
              *piVar4 = *piVar1;
            }
          }
          *(int *)(param_1 + 0x5a4) = *(int *)(param_1 + 0x5a4) + -4;
        }
        uVar6 = 0;
        break;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000d4440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x118) + 8))(*(int **)(param_1 + 0x118),param_2,uVar6);
  return;
}

