// rea decompile_all
// name: FUN_000b1d48
// address: 0xb1d48
// body: available
// range: 0xb1d48-0xb1dff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_000b1d48(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  
  puVar1 = (undefined4 *)FUN_0009b834();
  *puVar1 = DAT_000b1e00;
  piVar2 = puVar1 + 0x11;
  puVar1[0x10] = param_2;
  *piVar2 = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  *(undefined1 *)(puVar1 + 0x17) = 0;
  *(char *)((int)puVar1 + 0x5d) = (char)piVar2;
  puVar1[0x14] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  piVar3 = (int *)FUN_0010f82c(0xc,0);
  iVar4 = FUN_0010f82c(0x18,0);
  piVar3[2] = iVar4;
  *piVar3 = *piVar2;
  piVar3[1] = 1;
  *piVar2 = (int)piVar3;
  puVar5 = (undefined1 *)piVar3[2];
  puVar1[0x13] = puVar5;
  puVar1[0x14] = puVar5 + 0x18;
  puVar1[0x13] = puVar5 + 0x18;
  *(undefined4 *)(puVar5 + 8) = 0;
  *(undefined4 *)(puVar5 + 0xc) = 0;
  *puVar5 = 0;
  puVar1[0x15] = puVar5;
  *(undefined4 *)(puVar5 + 4) = 0;
  *(undefined4 *)(puVar1[0x15] + 8) = puVar1[0x15];
  *(undefined4 *)(puVar1[0x15] + 0xc) = puVar1[0x15];
  return puVar1;
}

