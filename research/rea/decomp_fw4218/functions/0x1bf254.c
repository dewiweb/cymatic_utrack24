// rea decompile_all
// name: FUN_001bf254
// address: 0x1bf254
// body: available
// range: 0x1bf254-0x1bf2a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001bf254(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 extraout_r2;
  undefined4 uVar4;
  byte *pbVar5;
  
  iVar2 = FUN_001bf21c(param_1,param_2,param_2);
  if ((iVar2 != 0) && (pbVar5 = *(byte **)(iVar2 + 0xc), pbVar5 != (byte *)0x0)) {
    bVar1 = *(byte *)(DAT_001bf2ac + (uint)*pbVar5);
    pbVar3 = pbVar5;
    while ((int)((uint)bVar1 << 0x1c) < 0) {
      pbVar3 = pbVar3 + 1;
      bVar1 = *(byte *)(DAT_001bf2ac + (uint)*pbVar3);
    }
    if (*pbVar3 == 0x2d) {
      pbVar3 = pbVar3 + 1;
    }
    if ((*pbVar3 == 0x30) && ((pbVar3[1] == 0x78 || (pbVar3[1] == 0x58)))) {
      uVar4 = 0x10;
    }
    else {
      uVar4 = 10;
    }
    uVar4 = FUN_0000328c(pbVar5,0,uVar4);
    return uVar4;
  }
  return extraout_r2;
}

