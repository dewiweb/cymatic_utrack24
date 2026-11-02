// rea decompile_all
// name: FUN_0012ab6c
// address: 0x12ab6c
// body: available
// range: 0x12ab6c-0x12abcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0012ab6c(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  uVar3 = *(uint *)(param_1 + 4);
  if (*(uint *)(param_1 + 4) != 0) {
    do {
      uVar4 = (uint)*(ushort *)(uVar3 + 0x90);
      bVar7 = param_2 < uVar4;
      bVar6 = param_2 == uVar4;
      if (!bVar7 && !bVar6) {
        uVar4 = 1;
      }
      if (bVar7) {
        uVar4 = 0;
      }
      if (bVar6) {
        if (uVar3 == 0) {
          return 0;
        }
        uVar2 = FUN_001d7aac();
        return uVar2;
      }
      uVar5 = *(uint *)(uVar3 + uVar4 * 4 + 0x104);
      if (uVar5 == 0) {
        return 0;
      }
      if (uVar4 != 0) {
        uVar3 = (uint)*(byte *)(uVar3 + 0x10c);
      }
      uVar1 = uVar3 & 0x80;
      uVar3 = uVar5;
    } while (uVar4 == 0 || uVar1 == 0);
  }
  return 0;
}

