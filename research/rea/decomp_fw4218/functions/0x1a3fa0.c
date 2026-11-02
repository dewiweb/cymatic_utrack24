// rea decompile_all
// name: FUN_001a3fa0
// address: 0x1a3fa0
// body: available
// range: 0x1a3fa0-0x1a406f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001a3fa0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  byte extraout_r1;
  byte extraout_r1_00;
  byte extraout_r1_01;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_20 = CONCAT22((short)((uint)param_3 >> 0x10),0x5a2);
  local_1c = param_4;
  iVar1 = FUN_00003e14(param_4,10);
  local_20._0_3_ = CONCAT12((char)((uint)(iVar1 << 0x1c) >> 0x18),(undefined2)local_20);
  FUN_00003e14(param_4,10);
  local_20._0_3_ = CONCAT12(local_20._2_1_ | extraout_r1,(undefined2)local_20);
  local_20 = (uint)(uint3)local_20;
  iVar1 = FUN_00003e14(param_3,10);
  local_1c._0_1_ = (byte)((uint)(iVar1 << 0x1c) >> 0x18);
  FUN_00003e14(param_3,10);
  local_1c = CONCAT31(local_1c._1_3_,(byte)local_1c | extraout_r1_00);
  iVar1 = FUN_00003e14(param_2,10);
  local_1c._0_2_ = CONCAT11((char)((uint)(iVar1 << 0x1c) >> 0x18),(byte)local_1c);
  FUN_00003e14(param_2,10);
  local_1c._0_2_ = CONCAT11(local_1c._1_1_ | extraout_r1_01,(byte)local_1c);
  FUN_001a3c64(param_1,&local_20,6);
  return;
}

