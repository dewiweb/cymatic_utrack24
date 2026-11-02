// rea decompile_all
// name: FUN_0012a678
// address: 0x12a678
// body: available
// range: 0x12a678-0x12a7a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0012a678(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  piVar6 = *(int **)(param_1 + 0x124);
  do {
    if (*(int **)(param_1 + 0x128) == piVar6) {
LAB_0012a790:
      if (*(int *)(param_1 + 0x13c) == param_2) {
        *(undefined4 *)(param_1 + 0x13c) = 0;
      }
      return;
    }
    if (*piVar6 == param_2) {
      iVar2 = *(int *)(param_2 + 8);
      cVar1 = *(char *)(iVar2 + 0xcc);
      if ((cVar1 == '\x01') ||
         ((cVar1 != '\x02' &&
          (((cVar1 != '\x03' && (cVar1 == '\x04')) || (*(int *)(iVar2 + 0xd0) != 0xff)))))) {
        *(undefined4 *)(iVar2 + 0xd0) = 0xff;
        (**(code **)(*(int *)(iVar2 + 0xb0) + 8))();
      }
      piVar4 = *(int **)(param_1 + 0x128);
      if (*(int **)(param_1 + 0x124) != piVar4) {
        piVar3 = piVar6 + 1;
        if (piVar3 != piVar4) {
          iVar2 = (int)piVar4 - (int)piVar3 >> 2;
          if (0 < iVar2) {
            iVar7 = 0;
            if (piVar3 < piVar4) {
              iVar5 = -(((int)piVar4 - (int)piVar3) * 0x20000000 >> 0x1f);
              if (iVar5 == 1) {
                iVar7 = 1;
                *piVar6 = *piVar3;
              }
            }
            else {
              iVar5 = 0;
            }
            for (; iVar5 < iVar2; iVar5 = iVar5 + 2) {
              piVar6[iVar7] = piVar3[iVar7];
              piVar6[iVar7 + 1] = piVar3[iVar7 + 1];
              iVar7 = iVar7 + 2;
            }
          }
        }
        *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + -4;
      }
      goto LAB_0012a790;
    }
    piVar6 = piVar6 + 1;
  } while( true );
}

