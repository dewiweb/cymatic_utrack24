// rea decompile_all
// name: FUN_00006acc
// address: 0x6acc
// body: available
// range: 0x6acc-0x6ba7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_00006acc(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint unaff_r6;
  int unaff_r11;
  bool bVar3;
  bool bVar4;
  
  uVar2 = param_4;
  if ((int)param_4 < 0) {
    unaff_r6 = (unaff_r6 | unaff_r6 << 0x10) >> 0x10;
    if ((int)param_4 < -0x3f) {
      uVar1 = unaff_r6 | param_3;
      uVar2 = 0;
      param_3 = 0;
      unaff_r6 = (uVar1 | uVar1 << 0x10) >> 0x10 | param_2;
      param_2 = 0;
      if ((int)param_4 < -0x40) {
        unaff_r6 = (unaff_r6 | unaff_r6 << 0x10) >> 0x10;
      }
    }
    else {
      if ((int)param_4 < -0x1f) {
        unaff_r6 = unaff_r6 | param_3;
        param_4 = param_4 + 0x20;
        param_2 = 0;
        param_3 = param_2;
      }
      uVar1 = -param_4;
      uVar2 = 0;
      if (uVar1 != 0) {
        unaff_r6 = (unaff_r6 | unaff_r6 << 0x10) >> 0x10 | param_3 << (param_4 + 0x20 & 0xff);
        param_3 = param_3 >> (uVar1 & 0xff) | param_2 << (param_4 + 0x20 & 0xff);
        param_2 = param_2 >> (uVar1 & 0xff);
        uVar2 = 0;
      }
    }
  }
  bVar4 = SUB41(unaff_r6 >> 0x1f,0);
  if ((unaff_r6 & 0x7fffffff) == 0) {
    if (!bVar4) goto LAB_00006b18;
    bVar4 = (bool)((byte)param_3 & 1);
  }
  bVar3 = unaff_r11 != -1;
  if (unaff_r11 == 0) {
    bVar3 = SUB41(((uint)bVar4 << 0x1f) >> 0x1f,0);
  }
  bVar3 = bVar3 && 0xfffffffe < param_3;
  uVar1 = param_2;
  if (bVar3) {
    uVar1 = param_2 + 1;
  }
  bVar3 = bVar3 && 0xfffffffe < param_2;
  if (bVar3) {
    uVar1 = 0x80000000;
  }
  uVar2 = uVar2 + bVar3;
  param_2 = uVar1;
LAB_00006b18:
  return CONCAT44(param_2,uVar2 | param_1 & 0x80000000);
}

