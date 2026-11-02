// rea decompile_all
// name: FUN_0016afc0
// address: 0x16afc0
// body: available
// range: 0x16afc0-0x16b08f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0016afc0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = DAT_0016b090;
  if (*(char *)(param_1 + 0x70) == '\0') {
    iVar3 = DAT_0016b090 + -3;
  }
  else {
    iVar1 = FUN_001c6b14(0xc4,DAT_0016b094);
    puVar2 = (undefined4 *)0x0;
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_0016731c();
      *puVar2 = DAT_0016b098;
      puVar2[0x2d] = 0;
      puVar2[0x2e] = 0;
      puVar2[0x2f] = 0;
      *(undefined1 *)(puVar2 + 0x30) = 0;
      *(undefined1 *)(puVar2 + 0x2c) = 2;
    }
    *(undefined4 **)(param_1 + 100) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      iVar1 = FUN_00167308(puVar2,*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),
                           *(undefined4 *)(param_1 + 0x60));
      if (iVar1 == 0) {
        FUN_00171828(puVar2 + 0x24,DAT_0016b09c);
        puVar2[0x2d] = param_1;
        *(undefined1 *)(puVar2 + 0x30) = 1;
        iVar3 = FUN_0015ec0c(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 100));
        if (iVar3 == 0) {
          *(undefined1 *)(param_1 + 0x71) = 1;
          return 0;
        }
      }
      if (*(int **)(param_1 + 100) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 100) + 4))();
      }
      *(undefined4 *)(param_1 + 100) = 0;
    }
  }
  return iVar3;
}

