// rea decompile_all
// name: FUN_00162ac0
// address: 0x162ac0
// body: available
// range: 0x162ac0-0x162b77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00162ac0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 auStack_18 [8];
  
  piVar1 = *(int **)(param_1 + 0x30);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1,param_2,param_3);
    if (*(char *)(param_1 + 0x34) != '\0') {
      return;
    }
  }
  auStack_18[0] = 0xf8;
  uVar3 = 0;
  while( true ) {
    if (*(ushort *)(param_1 + 0x28) <= uVar3) {
      return;
    }
    puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x24) + uVar3 * 4);
    if (puVar2 == (undefined4 *)0x0) break;
    piVar1 = *(int **)(param_1 + 0xc);
    if (piVar1 != (int *)0x0) {
      piVar1 = (int *)((int)piVar1 + *(int *)(*piVar1 + -0x14));
    }
    (**(code **)*puVar2)(puVar2,piVar1,1,auStack_18);
    uVar3 = uVar3 + 1 & 0xfffeffff;
  }
  return;
}

