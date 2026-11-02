// rea decompile_all
// name: FUN_000faed0
// address: 0xfaed0
// body: available
// range: 0xfaed0-0xfaf4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000faed0(undefined4 param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 extraout_r1;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  puVar1 = DAT_000faf4c;
  uVar5 = *DAT_000faf4c;
  iVar2 = (int)((longlong)(int)uVar5 * (longlong)DAT_000faf50 + ((ulonglong)uVar5 << 0x20) >> 0x20);
  iVar4 = (int)((longlong)(int)uVar5 * (longlong)DAT_000faf50 + ((ulonglong)uVar5 << 0x20) >> 0x20);
  uVar5 = DAT_000faf58 * (DAT_000faf54 * ((iVar2 >> 0x10) - (iVar2 >> 0x1f)) + uVar5);
  uVar3 = uVar5 + ((iVar4 >> 0x10) - (iVar4 >> 0x1f)) * -0xb14;
  if ((int)uVar3 < 1) {
    uVar5 = uVar3 + 0x7fffffff;
  }
  *DAT_000faf4c = uVar3;
  if ((int)uVar3 < 1) {
    *puVar1 = uVar5;
  }
  FUN_00006158(*puVar1,param_1);
  return extraout_r1;
}

