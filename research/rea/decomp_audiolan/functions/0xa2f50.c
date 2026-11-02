// rea decompile_all
// name: FUN_000a2f50
// address: 0xa2f50
// body: available
// range: 0xa2f50-0xa302f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xa302c to 0x1a0d18 FUN_001a0d18 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000a3020) */

void FUN_000a2f50(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  FUN_001a0700(param_1 + 0x59c);
  piVar1 = *(int **)(param_1 + 0x5c0);
  if (*(int **)(param_1 + 0x5c4) != piVar1) {
    piVar4 = *(int **)(param_1 + 0x5c4);
    piVar3 = piVar1;
    do {
      if (*piVar3 == param_2) {
        if (piVar1 != piVar4) {
          piVar1 = piVar3 + 1;
          if ((piVar1 != piVar4) && (iVar5 = (int)piVar4 - (int)piVar1, 0 < iVar5 >> 2)) {
            piVar4 = piVar3;
            piVar2 = piVar3 + -1;
            if (iVar5 * 0x20000000 < 0) {
              *piVar3 = *piVar1;
              piVar4 = piVar1;
              piVar2 = piVar3;
            }
            for (iVar5 = iVar5 >> 3; iVar5 != 0; iVar5 = iVar5 + -1) {
              piVar2[1] = piVar4[1];
              piVar4 = piVar4 + 2;
              piVar2 = piVar2 + 2;
              *piVar2 = *piVar4;
            }
          }
          *(int *)(param_1 + 0x5c4) = *(int *)(param_1 + 0x5c4) + -4;
        }
        break;
      }
      piVar3 = piVar3 + 1;
    } while (piVar4 != piVar3);
  }
  FUN_001a0d18(param_1 + 0x59c);
  return;
}

