// rea decompile_all
// name: FUN_000eb44c
// address: 0xeb44c
// body: available
// range: 0xeb44c-0xeb49b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_000eb44c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_r3;
  undefined8 uVar3;
  undefined1 auStack_68 [63];
  undefined1 local_29;
  int local_20;
  undefined4 local_1c;
  
  piVar2 = (int *)FUN_000f1278();
  iVar1 = DAT_000eb4a0;
  *piVar2 = DAT_000eb49c;
  piVar2[0x10] = iVar1;
  piVar2[0x11] = 0;
  uVar3 = FUN_00249b28(param_2);
  FUN_000028f8(auStack_68,0x40,DAT_000eb4a4,extraout_r3,uVar3);
  local_29 = 0;
  FUN_00063b78(&local_20,auStack_68);
  (**(code **)(*piVar2 + 0x54))(piVar2,&local_20);
  local_20 = iVar1;
  FUN_001eecc8(local_1c);
  return piVar2;
}

