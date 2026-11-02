// rea decompile_all
// name: FUN_00078a98
// address: 0x78a98
// body: available
// range: 0x78a98-0x78b3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x78b3c to 0x1a0d18 FUN_001a0d18 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00078b1c) */
/* WARNING: Removing unreachable block (ram,0x00078b30) */

void FUN_00078a98(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  FUN_001a0700(param_1 + 0x148);
  piVar2 = *(int **)(param_1 + 0x2e8);
  piVar1 = (int *)*piVar2;
  do {
    if (piVar1 == piVar2) {
LAB_00078b34:
      FUN_001a0d18(param_1 + 0x148);
      return;
    }
    if (piVar1[2] == param_2) {
      if (piVar1 != piVar2) {
        *(int *)piVar1[1] = *piVar1;
        *(int *)(*piVar1 + 4) = piVar1[1];
        *(int *)(param_1 + 0x2ec) = *(int *)(param_1 + 0x2ec) + -1;
        *piVar1 = *(undefined4 *)(param_1 + 0x2dc);
        *(int **)(param_1 + 0x2dc) = piVar1;
      }
      goto LAB_00078b34;
    }
    piVar1 = (int *)*piVar1;
  } while( true );
}

