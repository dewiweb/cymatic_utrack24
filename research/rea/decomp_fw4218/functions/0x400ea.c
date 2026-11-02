// rea decompile_all
// name: FUN_000400ea
// address: 0x400ea
// body: available
// range: 0x400ea-0x4015d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000400ea(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  pbVar1 = param_1;
  while( true ) {
    uVar6 = (uint)*pbVar1;
    if ((uVar6 == 0) && (*param_2 == 0)) {
      return 1;
    }
    pbVar2 = pbVar1 + uVar6 + 1;
    if (((param_1 + 0x100 <= pbVar2) || (0x3f < uVar6)) || (*param_2 != uVar6)) break;
    iVar7 = 0;
    pbVar3 = param_2;
    if (uVar6 != 0) {
      do {
        pbVar3 = pbVar3 + 1;
        pbVar1 = pbVar1 + 1;
        uVar4 = (uint)*pbVar1;
        uVar5 = (uint)*pbVar3;
        if (uVar4 - 0x41 < 0x1a) {
          uVar4 = uVar4 + 0x20 & 0xff;
        }
        if (uVar5 - 0x41 < 0x1a) {
          uVar5 = uVar5 + 0x20 & 0xff;
        }
        if (uVar4 != uVar5) {
          return 0;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)uVar6);
    }
    param_2 = param_2 + *param_2 + 1;
    pbVar1 = pbVar2;
  }
  return 0;
}

