// rea decompile_all
// name: FUN_00082868
// address: 0x82868
// body: available
// range: 0x82868-0x8291f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00082868(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8,int param_9)

{
  undefined4 uVar1;
  undefined1 auStack_a4 [64];
  undefined1 auStack_64 [64];
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  int local_18;
  
  uStack_24 = param_1;
  local_20 = param_2;
  uStack_1c = param_3;
  local_18 = param_4;
  if (param_4 == 0x3c) {
    FUN_000028cc(auStack_64,s_Rem__xx_xx_xx_00082920);
  }
  else if (param_8 == 0) {
    FUN_000028cc(auStack_64,s_Rem___02d__02d__02d_00082940,param_2,param_3,param_4);
  }
  else {
    FUN_000028cc(auStack_64,s__02d__02d__02d_00082930,param_2,param_3,param_4);
  }
  FUN_000028cc(auStack_a4,s__02d__02d__02d_00082930,param_5,param_6,param_7);
  uVar1 = FUN_0011eda0();
  FUN_0011f4bc(uVar1,auStack_a4,auStack_64,param_8);
  if (param_9 != 0) {
    FUN_00081fd4(param_1,param_8);
  }
  return;
}

