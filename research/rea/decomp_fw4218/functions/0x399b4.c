// rea decompile_all
// name: FUN_000399b4
// address: 0x399b4
// body: available
// range: 0x399b4-0x39a1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000399b4(void)

{
  undefined4 *puVar1;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  
  puVar1 = DAT_00039a1c;
  *DAT_00039a1c = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined1 *)puVar1 = 0;
  FUN_0002b4b0(&local_10);
  *(undefined1 *)((int)puVar1 + 1) = local_10;
  *(undefined1 *)(puVar1 + 1) = local_b;
  *(undefined1 *)((int)puVar1 + 2) = local_f;
  *(undefined1 *)((int)puVar1 + 5) = local_a;
  *(undefined1 *)((int)puVar1 + 3) = local_e;
  *(undefined1 *)((int)puVar1 + 6) = local_9;
  puVar1[2] = (uint)DAT_00039a20[3] | (uint)*DAT_00039a20 << 0x18 |
              (uint)DAT_00039a20[1] << 0x10 | (uint)DAT_00039a20[2] << 8;
  FUN_000039e0(DAT_00039a28,DAT_00039a24,0x10);
  return;
}

