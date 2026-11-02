// rea decompile_all
// name: FUN_0024a000
// address: 0x24a000
// body: available
// range: 0x24a000-0x24a0cf inclusive
// range: 0x24a0e0-0x24a0e7 inclusive
// range: 0x24a1a0-0x24a1af inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0024a000(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr9;
  undefined8 uVar8;
  
  uVar2 = param_1 >> 7 & 0xff0000;
  bVar6 = uVar2 == 0;
  if (!bVar6) {
    param_4 = param_2 >> 7 & 0xff0000;
    bVar6 = param_4 == 0;
  }
  if (!bVar6) {
    bVar6 = uVar2 == 0xff0000;
  }
  if (!bVar6) {
    bVar6 = param_4 == 0xff0000;
  }
  if (bVar6) {
    if ((int)(param_1 ^ param_2) < 0) {
      uVar2 = uVar2 | 0x100;
    }
    bVar7 = 0xfeffff < (param_2 >> 7 & 0xff0000);
    bVar6 = 0xfeffff < uVar2 || bVar7;
    if (0xfeffff >= uVar2 && !bVar7) {
      return (param_1 ^ param_2) & 0x80000000;
    }
    uVar8 = FUN_0024a100();
    if (!bVar6) {
      coprocessor_function(0,0,4,in_cr0,in_cr1,in_cr9);
    }
    uVar2 = (uint)uVar8 ^ (uint)((ulonglong)uVar8 >> 0x20);
  }
  else {
    if ((int)(param_1 ^ param_2) < 0) {
      uVar2 = uVar2 | 0x100;
    }
    lVar1 = (ulonglong)(param_2 << 8 | 0x80000000) * (ulonglong)(param_1 << 8 | 0x80000000);
    uVar5 = (uint)((ulonglong)lVar1 >> 0x20);
    iVar3 = uVar2 + param_4 + -0x800000;
    if ((int)lVar1 != 0) {
      uVar5 = uVar5 | 1;
    }
    bVar6 = SUB41(uVar5 >> 0x1f,0);
    uVar2 = uVar5 << 1;
    uVar4 = iVar3 + (iVar3 >> 0x10) + (uint)bVar6;
    if (bVar6) {
      uVar2 = uVar5 & 0x7fffffff | 0x80000000;
    }
    bVar6 = (bool)((byte)(uVar2 >> 7) & 1);
    uVar5 = uVar2 >> 8;
    if (bVar6) {
      uVar5 = uVar2 & 0x7f;
    }
    uVar2 = (uVar2 >> 8) + uVar4 * 0x800000 + (uint)bVar6;
    if (uVar5 != 0) {
      bVar6 = 0xfbffff < uVar4;
    }
    if (!bVar6) {
      return uVar2;
    }
    if (uVar5 == 0 || uVar4 == 0xfc0000) {
      uVar2 = uVar2 & 0xfffffffe;
    }
    if (uVar4 < 0xfc0000) {
      return uVar2;
    }
    if ((int)(uVar4 - 0xfc0000) < 0) {
      if (-0x10000 < (int)(uVar4 ^ 0xff)) {
        return uVar2;
      }
      uVar2 = uVar2 + 0x60000000;
      if ((int)(uVar4 ^ 0xff) < -0xffff) {
        uVar2 = uVar2 & 0x80000000;
      }
      return uVar2;
    }
    if ((int)((uVar2 + 0x800000) * 2) < 0) {
      return uVar2;
    }
    uVar2 = uVar2 + 0xa0000000;
  }
  return (uVar2 >> 0x17 | 0xff) << 0x17;
}

