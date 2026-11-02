// rea decompile_all
// name: FUN_000549d4
// address: 0x549d4
// body: available
// range: 0x549d4-0x54ac3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000549d4(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int local_20;
  int local_1c;
  undefined4 local_18 [2];
  
  uVar2 = *_DAT_00054ac8;
  uVar4 = uVar2 + *DAT_00054ac4;
  while( true ) {
    iVar1 = FUN_001daad8(0,uVar2,local_18);
    if (iVar1 != 0) {
      FUN_00013244(s____ERROR__Could_not_query_flash_b_00054ac9 + 3);
      return 0;
    }
    iVar1 = FUN_001daa88(0,local_18[0],&local_20,&local_1c);
    if (iVar1 != 0) {
      FUN_00013244(s_ERROR__Could_not_query_flash_blo_00054af8);
      return 0;
    }
    uVar2 = local_1c + 1;
    iVar3 = uVar2 - local_20;
    iVar1 = FUN_001da98c(0,local_20,iVar3);
    if (iVar1 != 0) {
      FUN_00013244(s_ERROR__Could_not_add_r_w_area_00054b24);
      return 0;
    }
    iVar1 = FUN_001da9b4(0,local_20,iVar3);
    if (iVar1 != 0) break;
    if (uVar4 <= uVar2) {
      return 1;
    }
  }
  FUN_00013244(s_ERROR__Could_not_erase_flash_00054b44);
  return 0;
}

