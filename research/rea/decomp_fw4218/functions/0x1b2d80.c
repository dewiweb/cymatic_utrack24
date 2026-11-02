// rea decompile_all
// name: FUN_001b2d80
// address: 0x1b2d80
// body: available
// range: 0x1b2d80-0x1b2e07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_001b2d80(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar1 = FUN_001a6044();
  iVar2 = FUN_001a5b10(uVar1,param_2);
  if (iVar2 != 0) {
    for (puVar4 = *(undefined4 **)(param_1 + 8); *(undefined4 **)(param_1 + 0xc) != puVar4;
        puVar4 = puVar4 + 1) {
      if (*(int *)*puVar4 == iVar2) {
        puVar4 = (undefined4 *)*puVar4;
        goto LAB_001b2de0;
      }
    }
  }
  puVar4 = (undefined4 *)0x0;
LAB_001b2de0:
  if (param_4 == 1) {
    uVar3 = FUN_001bc05c(*puVar4,param_3);
  }
  else {
    uVar3 = FUN_001bc074();
  }
  return (uVar3 & 0x20) >> 5;
}

