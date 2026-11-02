// rea decompile_all
// name: FUN_000467e4
// address: 0x467e4
// body: available
// range: 0x467e4-0x469c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000467e4(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (*DAT_000469c4 == 0) {
    uVar1 = *DAT_000469c8 >> 0x18 & 3;
    if (uVar1 == 0) {
      *DAT_000469c4 = 0x400;
    }
    else if (uVar1 == 1) {
      *DAT_000469c4 = 0x800;
    }
    else if (uVar1 == 2) {
      *DAT_000469c4 = 0x1000;
    }
    else {
      *DAT_000469c4 = 0;
    }
    if ((*DAT_000469c8 >> 0x1a & 1U) == 0) {
      *DAT_000469cc = ((int)(*DAT_000469c4 + ((uint)(*DAT_000469c4 >> 0x1f) >> 0x17)) >> 9) << 3;
    }
    else {
      *DAT_000469cc = ((int)(*DAT_000469c4 + ((uint)(*DAT_000469c4 >> 0x1f) >> 0x17)) >> 9) << 4;
    }
    uVar1 = *DAT_000469c8 >> 0x1c & 3;
    if (uVar1 == 0) {
      *DAT_000469d0 = 0x40;
    }
    else if (uVar1 == 1) {
      *DAT_000469d0 = 0x80;
    }
    else if (uVar1 == 2) {
      *DAT_000469d0 = 0x100;
    }
    else if (uVar1 == 3) {
      *DAT_000469d0 = 0x200;
    }
  }
  uVar2 = FUN_00003e14(*DAT_000469d0 << 10,*DAT_000469c4);
  *DAT_000469d4 = uVar2;
  FUN_00013290(s_M__FLASH_Size____4d_MB_000469d9 + 3,*_DAT_000469d8);
  FUN_00013290(s_Page_Size____4d_B_000469f4,*DAT_000469c4);
  FUN_00013290(s_Block_Size____4d_kB_00046a0c,*DAT_000469d0);
  FUN_00013290(s_Spare_Bytes____4d_B_00046a24,*DAT_000469cc);
  FUN_00013290(s_Pages_Block____4d_00046a3c,*DAT_000469d4);
  return;
}

