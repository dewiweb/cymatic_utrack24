// rea decompile_all
// name: FUN_000356c4
// address: 0x356c4
// body: available
// range: 0x356c4-0x35739 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000356c4(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar2 = DAT_00035740;
  if (param_1 == 0) {
    return 0;
  }
  if (*(char *)(DAT_0003573c + 0xc) != '\0') {
    FUN_000357f4();
    uVar4 = DAT_00035748;
    puVar3 = DAT_00035744;
    if (DAT_00035744[2] < 0x40) {
      uVar1 = *DAT_00035744;
      *DAT_00035744 = (ushort)(uVar1 & 0x3f);
      FUN_000268c2((uVar1 & 0x3f) * 0x30 + DAT_0003576c,param_1);
      *puVar3 = *puVar3 + 1 & 0x3f;
      puVar3[2] = puVar3[2] + 1;
      FUN_000357ec(uVar2);
      return 1;
    }
    iVar5 = FUN_00030b90(DAT_00035748);
    if (iVar5 != 0) {
      FUN_00029e6c(uVar4);
      FUN_00029eac(3,s_QS__Environment_queue_is_full_0003574c);
    }
    FUN_000357ec(uVar2);
  }
  return 0;
}

