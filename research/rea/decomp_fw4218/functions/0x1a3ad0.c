// rea decompile_all
// name: FUN_001a3ad0
// address: 0x1a3ad0
// body: available
// range: 0x1a3ad0-0x1a3b83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001a3ad0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    if (*(char *)(_DAT_001a3b84 + iVar3 * 2) == -1) {
      iVar3 = FUN_001a3dd0(param_1);
      if (iVar3 == 0) {
        FUN_00002898(s_ERROR__PCF8563__initialize__chec_001a3bc0);
        uVar2 = 0;
      }
      else if (*(char *)(param_1 + 0x44) == '\0') {
        uVar2 = 1;
      }
      else {
        uVar2 = 1;
      }
      return uVar2;
    }
    iVar1 = FUN_001a3c64(param_1,(uint)*(byte *)(_DAT_001a3b84 + iVar3 * 2) * 3 + param_1 + 0x14,3);
    if (iVar1 == 0) break;
    iVar3 = iVar3 + 1;
  }
  FUN_00002898(s___ERROR__PCF8563__initialize__wr_001a3b85 + 3,
               *(undefined1 *)((uint)*(byte *)(_DAT_001a3b84 + iVar3 * 2) * 3 + param_1 + 0x15),3);
  return 0;
}

