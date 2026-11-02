// rea decompile_all
// name: FUN_001bf058
// address: 0x1bf058
// body: available
// range: 0x1bf058-0x1bf0ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001bf058(int *param_1,undefined4 param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  byte *pbVar4;
  
  if ((*param_1 != 0) && (pbVar4 = *(byte **)(*param_1 + 8), pbVar4 != (byte *)0x0)) {
    bVar1 = *(byte *)(DAT_001bf0ac + (uint)*pbVar4);
    pbVar2 = pbVar4;
    while ((int)((uint)bVar1 << 0x1c) < 0) {
      pbVar2 = pbVar2 + 1;
      bVar1 = *(byte *)(DAT_001bf0ac + (uint)*pbVar2);
    }
    if (*pbVar2 == 0x2d) {
      pbVar2 = pbVar2 + 1;
    }
    if ((*pbVar2 == 0x30) && ((pbVar2[1] == 0x78 || (pbVar2[1] == 0x58)))) {
      uVar3 = 0x10;
    }
    else {
      uVar3 = 10;
    }
    uVar3 = FUN_000032fc(pbVar4,0,uVar3);
    return uVar3;
  }
  return param_2;
}

