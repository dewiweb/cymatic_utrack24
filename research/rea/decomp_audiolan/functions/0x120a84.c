// rea decompile_all
// name: FUN_00120a84
// address: 0x120a84
// body: available
// range: 0x120a84-0x120b5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x120b5c to 0x133a80 FUN_00133a80 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00120a84(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1[2];
  if (piVar3 != (int *)0x0) {
    for (piVar2 = (int *)piVar3[0x57]; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0x57]) {
      piVar3 = piVar2;
    }
    while (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x38))(piVar3);
      iVar1 = FUN_0013ea84(piVar3 + 0x2a,param_2);
      if (iVar1 != 0) {
        FUN_00129060(piVar3);
        FUN_0012d218(piVar3 + 0x20,param_2);
        FUN_0012d218(piVar3 + 0x22,param_2);
        FUN_00125408(piVar3 + 0x26,param_2);
      }
      piVar2 = (int *)FUN_001d79fc(param_1 + 1,piVar3);
      (**(code **)(*piVar3 + 0x3c))(piVar3);
      piVar3 = piVar2;
    }
  }
  *(undefined1 *)(param_1 + 0xd) = 1;
  FUN_00133a80(*param_1 + 0x6a8,param_2);
  return;
}

