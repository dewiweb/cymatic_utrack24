// rea decompile_all
// name: FUN_001de0c4
// address: 0x1de0c4
// body: available
// range: 0x1de0c4-0x1de13f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_001de0c4(uint param_1,ushort *param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  uVar4 = 0;
  if (DAT_001de140 < param_1) {
    for (; 1 < param_1; param_1 = param_1 - 2) {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      uVar4 = uVar1 + uVar4;
    }
  }
  else {
    uVar2 = -((int)-param_1 / 2);
    if ((int)-param_1 / 2 != 0 && -1 < (int)uVar2) {
      bVar8 = (uVar2 & 1) != 0;
      if (bVar8) {
        uVar4 = (uint)*param_2;
      }
      uVar5 = (uint)bVar8;
      iVar7 = 0;
      for (iVar6 = (int)uVar2 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
        iVar3 = uVar5 + 1;
        uVar4 = param_2[uVar5] + uVar4;
        uVar5 = uVar5 + 2;
        iVar7 = (uint)param_2[iVar3] + iVar7;
      }
      uVar4 = uVar4 + iVar7;
      param_2 = (ushort *)((param_1 - ((int)param_1 >> 0x1f) & 0xfffffffe) + (int)param_2);
      param_1 = (int)param_1 % 2;
    }
  }
  if (param_1 != 0) {
    uVar4 = (byte)*param_2 + uVar4;
  }
  for (; uVar4 >> 0x10 != 0; uVar4 = (uVar4 & 0xffff) + (uVar4 >> 0x10)) {
  }
  return ~uVar4 & 0xffff;
}

