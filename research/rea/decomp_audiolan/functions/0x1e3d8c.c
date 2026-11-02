// rea decompile_all
// name: FUN_001e3d8c
// address: 0x1e3d8c
// body: available
// range: 0x1e3d8c-0x1e3e53 inclusive
// range: 0x1e3e98-0x1e3eeb inclusive
// range: 0x1e3ef8-0x1e3f17 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulonglong FUN_001e3d8c(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  undefined4 in_cr7;
  undefined4 in_cr9;
  undefined4 in_cr12;
  undefined8 uVar9;
  
  uVar3 = param_1 >> 7 & 0xff0000;
  bVar8 = uVar3 == 0;
  if (!bVar8) {
    param_4 = param_2 >> 7 & 0xff0000;
    bVar8 = param_4 == 0;
  }
  if (!bVar8) {
    bVar8 = uVar3 == 0xff0000;
  }
  if (!bVar8) {
    bVar8 = param_4 == 0xff0000;
  }
  if (bVar8) {
    if ((int)(param_1 ^ param_2) < 0) {
      uVar3 = uVar3 | 0x100;
    }
    uVar2 = param_2 >> 7 & 0xff0000;
    bVar8 = 0xfeffff < uVar3 || 0xfeffff < uVar2;
    if (bVar8) {
      uVar9 = FUN_001e410c();
      if (!bVar8) {
        coprocessor_function(0xe,0xf,0,in_cr7,in_cr12,in_cr9);
      }
      param_1 = ((uint)uVar9 ^ (uint)((ulonglong)uVar9 >> 0x20)) & 0x80000000;
    }
    else {
      if (uVar2 != 0) {
        return CONCAT44(param_2,param_1 ^ param_2) & 0xffffffff80000000;
      }
      if ((uVar3 & 0xff0000) == 0) {
        return CONCAT44(param_2,DAT_001e3f18);
      }
      param_1 = param_1 ^ param_2;
    }
  }
  else {
    uVar2 = param_1 & 0xffffff | 0x800000;
    uVar1 = param_2 & 0xffffff | 0x800000;
    uVar6 = (uint)*(byte *)(0x1e3ed4 - (uVar1 >> 0x11));
    if ((int)(param_1 ^ param_2) < 0) {
      uVar3 = uVar3 | 0x100;
    }
    bVar8 = uVar1 <= uVar2;
    uVar1 = -uVar1;
    iVar7 = uVar6 * 2;
    if (!bVar8) {
      uVar2 = uVar2 << 1;
    }
    iVar4 = (uVar3 - param_4) + 0x7d0000;
    uVar5 = iVar4 + (iVar4 >> 0x10) + (uint)bVar8;
    iVar7 = uVar6 * 0x100 + (((int)(uVar1 * iVar7) >> 4) * iVar7 >> 0x15);
    uVar3 = iVar7 * (uVar2 >> 8) >> 0x14;
    uVar6 = uVar1 * uVar3 + uVar2 * 0x800;
    uVar2 = iVar7 * (uVar6 >> 8) >> 0x13;
    uVar6 = uVar1 * uVar2 + uVar6 * 0x1000;
    bVar8 = CARRY4(uVar6,uVar1);
    if (bVar8) {
      uVar6 = uVar6 + uVar1;
    }
    iVar7 = uVar1 + uVar6 * 2;
    param_1 = uVar2 + uVar3 * 0x1000 + (uint)bVar8 + uVar5 * 0x800000 +
              (uint)CARRY4(uVar1,uVar6 * 2);
    if (uVar5 < 0xfc0000) {
      return CONCAT44(iVar7,param_1);
    }
    if ((int)(uVar5 - 0xfc0000) < 0) {
      if ((uVar5 & 0xf0) != 0) {
        param_1 = param_1 + 0x60000000 & 0x80000000;
      }
      return CONCAT44(iVar7,param_1);
    }
    if (0xfdffffff < param_1 * 2 + 0x1000000) {
      return CONCAT44(iVar7,param_1);
    }
    param_1 = param_1 + 0xa0000000;
  }
  return CONCAT44(0xff,(param_1 >> 0x17 | 0xff) << 0x17);
}

