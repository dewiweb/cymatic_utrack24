// rea decompile_all
// name: FUN_0006d6cc
// address: 0x6d6cc
// body: available
// range: 0x6d6cc-0x6d773 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_0006d6cc(void)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = (undefined4 *)FUN_001a42dc();
  *puVar1 = DAT_0006d774;
  puVar1[5] = 0xffffffff;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined1 *)(puVar1 + 8) = 2;
  *(undefined1 *)((int)puVar1 + 0x21) = 2;
  puVar1[9] = 0xffffffff;
  puVar2 = (undefined1 *)FUN_001f01c4(0x24,1);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    puVar2[8] = 0xff;
    puVar2[9] = 0xff;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    *(undefined4 *)(puVar2 + 0x10) = 0;
    *(undefined2 *)(puVar2 + 0x14) = 0;
    *(undefined2 *)(puVar2 + 0x16) = 0;
    *(undefined2 *)(puVar2 + 0x18) = 0;
    *(undefined4 *)(puVar2 + 0x1c) = 0;
    puVar2[0x20] = 1;
    puVar2[0x21] = 1;
  }
  puVar1[10] = puVar2;
  return puVar1;
}

