// rea decompile_all
// name: FUN_001f93a2
// address: 0x1f93a2
// body: available
// range: 0x1f93a2-0x1f9405 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_001f93a2(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5)

{
  undefined4 uVar1;
  undefined1 auStack_40 [4];
  int local_3c;
  undefined1 local_38;
  byte local_37;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  int iStack_18;
  
  uStack_24 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  iStack_18 = param_4;
  FUN_001eed34(param_1,auStack_40);
  if (param_4 < 0) {
    param_4 = local_3c;
  }
  if ((int)param_5 < 0) {
    param_5 = (uint)local_37;
  }
  uVar1 = FUN_001f01c4(param_4,local_38);
  FUN_00003c08(uVar1,param_4,0x32);
  local_2c = FUN_001f01c4(0xb8,1);
  FUN_00003c58(local_2c,0xb8);
  FUN_001cf8e8(local_2c,param_1,local_20,local_1c,uVar1,param_4,param_5,param_5,local_34,1);
  return local_2c;
}

