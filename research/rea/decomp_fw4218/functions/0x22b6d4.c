// rea decompile_all
// name: FUN_0022b6d4
// address: 0x22b6d4
// body: available
// range: 0x22b6d4-0x22b77f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0022b6d4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  bool bVar2;
  undefined1 auStack_4c [16];
  undefined4 local_3c;
  int local_38;
  int *piStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  piStack_34 = param_1;
  uStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  local_38 = FUN_001c6b14(0x24,DAT_0022b780);
  bVar2 = local_38 == 0;
  if (bVar2) {
    local_38 = 0;
  }
  else {
    FUN_0012e0cc(auStack_4c,param_5);
    local_3c = param_2;
    local_38 = FUN_00202d9c(local_38,&local_3c,local_2c,local_28,auStack_4c,param_6);
  }
  uVar1 = (**(code **)(*param_1 + 0x2c))(param_1,local_38,param_7);
  if (!bVar2) {
    FUN_0012e13c(auStack_4c);
  }
  return uVar1;
}

