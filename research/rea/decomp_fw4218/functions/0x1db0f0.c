// rea decompile_all
// name: FUN_001db0f0
// address: 0x1db0f0
// body: available
// range: 0x1db0f0-0x1db197 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte * FUN_001db0f0(byte *param_1,byte *param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  
  pbVar6 = param_4 + 0x100;
  pbVar9 = (byte *)0x0;
  if ((param_1 <= param_2) && (param_2 < param_3)) {
    while( true ) {
      *param_4 = 0;
      while( true ) {
        pbVar4 = param_2;
        bVar1 = *pbVar4;
        uVar8 = (uint)bVar1;
        pbVar3 = pbVar4 + 1;
        if (uVar8 == 0) {
          if (pbVar9 != (byte *)0x0) {
            pbVar3 = pbVar9;
          }
          return pbVar3;
        }
        bVar2 = bVar1 >> 6;
        if (bVar2 == 0) break;
        if (bVar2 == 1) {
          return (byte *)0x0;
        }
        if (bVar2 == 2) {
          return (byte *)0x0;
        }
        param_2 = pbVar3;
        if (bVar2 == 3) {
          pbVar4 = pbVar4 + 2;
          if (pbVar9 != (byte *)0x0) {
            pbVar4 = pbVar9;
          }
          param_2 = param_1 + ((uint)*pbVar3 | (uVar8 & 0x3f) << 8);
          if (param_2 < param_1) {
            return (byte *)0x0;
          }
          if (param_3 <= param_2) {
            return (byte *)0x0;
          }
          pbVar9 = pbVar4;
          if (*param_2 >> 6 != 0) {
            return (byte *)0x0;
          }
        }
      }
      param_2 = pbVar3 + uVar8;
      if ((param_3 <= param_2) || (pbVar6 <= param_4 + uVar8 + 1)) break;
      *param_4 = bVar1;
      pbVar5 = param_4 + 1;
      if ((bVar1 & 1) != 0) {
        *pbVar5 = *pbVar3;
        pbVar4 = pbVar3;
        param_4 = pbVar5;
      }
      for (uVar7 = (uint)(bVar1 >> 1); uVar7 != 0; uVar7 = uVar7 - 1) {
        pbVar3 = pbVar4 + 1;
        pbVar4 = pbVar4 + 2;
        param_4[1] = *pbVar3;
        param_4 = param_4 + 2;
        *param_4 = *pbVar4;
      }
      param_4 = pbVar5 + uVar8;
    }
  }
  return (byte *)0x0;
}

