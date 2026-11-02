// rea decompile_all
// name: FUN_00168dc0
// address: 0x168dc0
// body: available
// range: 0x168dc0-0x168e6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00168dc0(int param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 0x71) == '\0') {
    iVar2 = (**(code **)(*param_2 + 0xdc))(param_2);
    if (iVar2 != 0) {
      uVar1 = 1;
      goto LAB_00168e18;
    }
    if (*(char *)(param_1 + 0x71) == '\0') {
      return;
    }
  }
  iVar2 = (**(code **)(*param_2 + 0xdc))(param_2);
  uVar1 = 0;
  if (iVar2 != 0) {
    return;
  }
LAB_00168e18:
  *(undefined1 *)(param_1 + 0x71) = uVar1;
  uVar4 = 0;
  while( true ) {
    if (*(ushort *)(param_1 + 100) <= uVar4) {
      return;
    }
    puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x60) + uVar4 * 4);
    if (puVar3 == (undefined4 *)0x0) break;
    (**(code **)*puVar3)
              (puVar3,*(int *)(*(int *)(param_1 + -0x170) + -0x14) + param_1 + -0x170,
               *(undefined1 *)(param_1 + 0x71));
    uVar4 = uVar4 + 1 & 0xfffeffff;
  }
  return;
}

