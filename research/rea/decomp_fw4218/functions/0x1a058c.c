// rea decompile_all
// name: FUN_001a058c
// address: 0x1a058c
// body: available
// range: 0x1a058c-0x1a063b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x001a05bc) */

bool FUN_001a058c(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  (**(code **)(*param_1 + 0x48))(param_1);
  piVar3 = (int *)param_1[0x6a];
  piVar2 = (int *)0x0;
  do {
    piVar1 = piVar3;
    if (piVar1 == (int *)0x0) {
LAB_001a061c:
      (**(code **)(*param_1 + 0x4c))(param_1);
      return piVar1 != (int *)0x0;
    }
    if (*(int *)(*piVar1 + -0x14) + (int)piVar1 == param_2) {
      if (piVar2 == (int *)0x0) {
        param_1[0x6a] = piVar1[0x14];
      }
      else {
        piVar2[0x14] = piVar1[0x14];
      }
      piVar1[0x14] = 0;
      FUN_0018ed70(piVar1);
      (**(code **)(*piVar1 + 0x3c))(piVar1);
      goto LAB_001a061c;
    }
    piVar3 = (int *)piVar1[0x14];
    piVar2 = piVar1;
  } while( true );
}

