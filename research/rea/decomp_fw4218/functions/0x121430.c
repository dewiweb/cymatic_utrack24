// rea decompile_all
// name: FUN_00121430
// address: 0x121430
// body: available
// range: 0x121430-0x12146f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00121430(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = _DAT_00121470;
  iVar1 = FUN_00091838(param_1 + 1,s___Endpoint_Ctrl_lock_00121472 + 2);
  iVar1 = FUN_00204380(iVar1 + 0x24);
  iVar1 = FUN_001c70d8(iVar1 + 0xc,_DAT_00121488,0x100,0x7f);
  *(undefined4 *)(iVar1 + 0x7f00) = 0;
  uVar2 = FUN_000b4964();
  FUN_000b4840(uVar2,s__USBBusDriverService_0012148b + 1,iVar1 + -0xc);
  return iVar1 + -0x34;
}

