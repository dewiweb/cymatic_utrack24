// rea decompile_all
// name: FUN_00138f94
// address: 0x138f94
// body: available
// range: 0x138f94-0x13901b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00138f94(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_60 [64];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  if (*(int *)(param_1 + 0xdc) == 2) {
    FUN_000028cc(auStack_60,&DAT_00139024,s_Stereo_0013901c);
  }
  else {
    FUN_000028cc(auStack_60,s__d_Ch_00139028,*(undefined4 *)(param_1 + 0xdc));
  }
  uVar1 = FUN_00232964(auStack_1c,auStack_60,auStack_20);
  uVar2 = FUN_00243490(param_1 + 0xa0,2);
  FUN_00232a4c(uVar2,uVar1);
  FUN_002329f0(auStack_1c);
  return;
}

