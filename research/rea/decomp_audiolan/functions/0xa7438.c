// rea decompile_all
// name: FUN_000a7438
// address: 0xa7438
// body: available
// range: 0xa7438-0xa7547 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000a7438(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  piVar5 = *(int **)(param_1 + 0x44);
  do {
    if (*(int **)(param_1 + 0x48) == piVar5) {
LAB_000a7528:
                    /* WARNING: Could not recover jumptable at 0x000a7544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(param_1 + 0x28) + 0x18))
                (*(int **)(param_1 + 0x28),param_2,param_4,param_5);
      return;
    }
    piVar2 = (int *)*piVar5;
    if (piVar2[2] == param_2) {
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))();
      }
      piVar2 = *(int **)(param_1 + 0x48);
      if (*(int **)(param_1 + 0x44) != piVar2) {
        piVar4 = piVar5 + 1;
        if (piVar4 != piVar2) {
          iVar1 = (int)piVar2 - (int)piVar4 >> 2;
          if (0 < iVar1) {
            iVar6 = 0;
            if (piVar4 < piVar2) {
              iVar3 = -(((int)piVar2 - (int)piVar4) * 0x20000000 >> 0x1f);
              if (iVar3 == 1) {
                iVar6 = 1;
                *piVar5 = *piVar4;
              }
            }
            else {
              iVar3 = 0;
            }
            for (; iVar3 < iVar1; iVar3 = iVar3 + 2) {
              piVar5[iVar6] = piVar4[iVar6];
              piVar5[iVar6 + 1] = piVar4[iVar6 + 1];
              iVar6 = iVar6 + 2;
            }
          }
        }
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -4;
      }
      goto LAB_000a7528;
    }
    piVar5 = piVar5 + 1;
  } while( true );
}

