// rea decompile_all
// name: FUN_0022b94c
// address: 0x22b94c
// body: available
// range: 0x22b94c-0x22b9bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0022b94c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_30;
  int *piStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 local_20;
  
  piStack_2c = param_1;
  uStack_28 = param_2;
  local_24 = param_3;
  local_20 = param_4;
  iVar1 = FUN_001c6b14(0x14,DAT_0022b9c0);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_30 = param_2;
    uVar2 = FUN_00202a24(iVar1,&local_30,local_24,local_20,param_5);
  }
  (**(code **)(*param_1 + 0x2c))(param_1,uVar2,param_6);
  return;
}

