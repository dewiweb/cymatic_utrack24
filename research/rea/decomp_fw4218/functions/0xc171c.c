// rea decompile_all
// name: FUN_000c171c
// address: 0xc171c
// body: available
// range: 0xc171c-0xc17bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000c171c(int param_1,int param_2,uint param_3,int param_4,int *param_5)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  if (param_3 == 0) {
    if (*(int *)(param_1 + 0xd8) == param_2 && param_4 == 2) {
      *param_5 = param_1 + 0xd4;
      return 1;
    }
  }
  else {
    if (param_4 == 0) {
      param_1 = param_1 + 500;
    }
    else {
      if (param_4 != 1) {
        return 0;
      }
      param_1 = param_1 + 0xd4;
    }
    uVar1 = 1;
    do {
      uVar2 = param_1 + uVar1 * 0x24;
      bVar3 = *(int *)(uVar2 + 4) == param_2;
      if (bVar3) {
        uVar2 = (uint)*(byte *)(uVar2 + 1);
      }
      if (bVar3 && uVar2 == param_3) {
        *param_5 = param_1 + uVar1 * 0x24;
        return 1;
      }
      uVar1 = uVar1 + 1 & 0xff;
    } while (uVar1 < 8);
  }
  return 0;
}

