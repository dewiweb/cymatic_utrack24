// rea decompile_all
// name: FUN_000866f8
// address: 0x866f8
// body: available
// range: 0x866f8-0x86741 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000866f8(int param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 local_30 [4];
  uint local_2c;
  uint local_28;
  undefined1 auStack_20 [12];
  
  uVar1 = *(undefined1 *)(param_2 + 4);
  iVar2 = FUN_00086788();
  if (iVar2 == 0) {
    FUN_00002898(s_ERROR__USBAudioDevice__addUnitBl_00086748);
    return 0;
  }
  local_28 = param_2 & 0xffffff00;
  iVar2 = DAT_00086744;
  if (param_3 == 2) {
    iVar2 = 0x8a0;
  }
  local_30[0] = uVar1;
  local_2c = param_2;
  FUN_002338a8(auStack_20,param_1 + iVar2,local_30);
  return 1;
}

