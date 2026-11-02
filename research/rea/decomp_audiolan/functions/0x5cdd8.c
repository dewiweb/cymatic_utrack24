// rea decompile_all
// name: FUN_0005cdd8
// address: 0x5cdd8
// body: available
// range: 0x5cdd8-0x5cf0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0005cdd8(undefined4 param_1,byte param_2,char *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  ushort local_24 [2];
  byte local_20 [16];
  
  local_20[1] = 0;
  local_24[0] = 2;
  local_20[0] = param_2;
  FUN_000778e8(3,local_20,local_24);
  bVar3 = param_3[2] != '\0';
  if (param_3[5] != '\0') {
    bVar3 = bVar3 | 2;
  }
  if (param_3[3] != '\0') {
    bVar3 = bVar3 | 4;
  }
  if (param_3[4] != '\0') {
    bVar3 = bVar3 | 8;
  }
  if (param_3[1] != '\0') {
    bVar3 = bVar3 | 0x40;
  }
  if (*param_3 != '\0') {
    bVar3 = bVar3 | 0x80;
  }
  local_20[local_24[0]] = bVar3;
  uVar2 = local_24[0] + 1 & 0xfffeffff;
  bVar3 = param_3[7] != '\0';
  if (param_3[8] != '\0') {
    bVar3 = bVar3 | 2;
  }
  if (param_3[9] == '\0') {
    bVar3 = bVar3 | 0x10;
  }
  else if (param_3[9] == '\x01') {
    bVar3 = bVar3 | 0x20;
  }
  uVar1 = uVar2 + 1 & 0xfffeffff;
  local_20[uVar2] = bVar3;
  bVar3 = param_3[10] != '\0';
  if (param_3[0xb] != '\0') {
    bVar3 = bVar3 | 2;
  }
  if (param_3[0xc] != '\0') {
    bVar3 = bVar3 | 4;
  }
  if (param_3[0xd] != '\0') {
    bVar3 = bVar3 | 8;
  }
  local_24[0] = (short)uVar1 + 1;
  local_20[uVar1] = bVar3;
  FUN_0005ad9c(param_1,local_20);
  return;
}

