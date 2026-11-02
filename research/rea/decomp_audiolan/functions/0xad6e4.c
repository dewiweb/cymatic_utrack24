// rea decompile_all
// name: FUN_000ad6e4
// address: 0xad6e4
// body: available
// range: 0xad6e4-0xad731 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_000ad6e4(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*param_1 != 0) {
    FUN_0019f30c();
    *param_1 = 0;
  }
  iVar2 = FUN_00156024(param_1[2]);
  uVar1 = DAT_000ad738;
  if (iVar2 + DAT_000ad734 == 0) {
    *(undefined1 *)(param_1 + 1) = 0;
    iVar2 = FUN_0016d7a4(8,uVar1);
    puVar3 = (undefined4 *)0x0;
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)FUN_0009ceac(iVar2,param_1[2]);
    }
  }
  else {
    *(undefined1 *)(param_1 + 1) = 1;
    puVar3 = (undefined4 *)FUN_0016d7a4(4,DAT_000ad738);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = DAT_000ad73c;
    }
  }
  *param_1 = (int)puVar3;
  return (char)param_1[1];
}

