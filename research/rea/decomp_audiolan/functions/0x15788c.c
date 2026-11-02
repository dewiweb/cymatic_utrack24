// rea decompile_all
// name: FUN_0015788c
// address: 0x15788c
// body: available
// range: 0x15788c-0x15791f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0015788c(void)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  FUN_0018ab18(0);
  pbVar1 = (byte *)FUN_0018a740();
  uVar2 = (uint)(pbVar1[1] ^ pbVar1[3]) << 0x10 | (uint)pbVar1[4] << 8 |
          (uint)pbVar1[5] | (uint)(*pbVar1 ^ pbVar1[2]) << 0x18;
  iVar4 = (int)((longlong)(int)uVar2 * (longlong)(int)DAT_00157920 + ((ulonglong)uVar2 << 0x20) >>
               0x20);
  iVar3 = (int)((longlong)(int)uVar2 * (longlong)(int)DAT_00157920 + ((ulonglong)uVar2 << 0x20) >>
               0x20);
  iVar3 = (DAT_00157920 >> 0x11) * (((iVar4 >> 0x10) - (iVar4 >> 0x1f)) * DAT_00157924 + uVar2) +
          ((iVar3 >> 0x10) - (iVar3 >> 0x1f)) * -0xb14;
  if (iVar3 < 1) {
    iVar3 = iVar3 + 0x7fffffff;
  }
  return iVar3;
}

