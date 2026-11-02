// rea decompile_all
// name: FUN_0003b4fe
// address: 0x3b4fe
// body: available
// range: 0x3b4fe-0x3b569 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0003b4fe(byte *param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  
  uVar5 = 0x101;
  pbVar4 = param_1;
  while( true ) {
    uVar2 = uVar5;
    if ((param_1 + 0x100 <= pbVar4) || (uVar3 = (uint)*pbVar4, 0x3f < uVar3)) goto LAB_0003b520;
    if (uVar3 == 0) break;
    pbVar4 = pbVar4 + uVar3 + 1;
  }
  uVar2 = (uint)(pbVar4 + (1 - (int)param_1)) & 0xffff;
LAB_0003b520:
  pbVar4 = param_2;
  while( true ) {
    if ((param_2 + 0x100 <= pbVar4) || (uVar3 = (uint)*pbVar4, 0x3f < uVar3)) goto LAB_0003b544;
    if (uVar3 == 0) break;
    pbVar4 = pbVar4 + uVar3 + 1;
  }
  uVar5 = (uint)(pbVar4 + (1 - (int)param_2)) & 0xffff;
LAB_0003b544:
  if (((uVar2 < 0x101) && (uVar2 == uVar5)) && (iVar1 = FUN_00195368(), iVar1 != 0)) {
    return 1;
  }
  return 0;
}

