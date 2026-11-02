// rea decompile_all
// name: FUN_000f41c8
// address: 0xf41c8
// body: available
// range: 0xf41c8-0xf421b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000f41c8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != param_2) {
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
    *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 10);
    if (*(int *)(param_2 + 0xc) != 0) {
      iVar1 = FUN_001c6b14(0x14,DAT_000f421c);
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = FUN_00147468(iVar1,*(undefined4 *)(param_2 + 0xc));
      }
      *(undefined4 *)(param_1 + 0xc) = uVar2;
    }
    FUN_0023d9aa();
    FUN_00247eac(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),param_1 + 0x10);
  }
  return param_1;
}

