// rea decompile_all
// name: FUN_00126a80
// address: 0x126a80
// body: available
// range: 0x126a80-0x126b57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1
FUN_00126a80(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 auStack_84 [8];
  undefined1 auStack_7c [72];
  int iStack_34;
  undefined4 local_30;
  uint uStack_2c;
  undefined4 local_28;
  
  iStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  local_28 = param_4;
  FUN_001179e0();
  if ((param_3 & 0x1000) == 0) {
    uVar2 = 0x14;
  }
  else {
    FUN_000eea30(&local_90);
    FUN_000eadf8(&local_90,*(undefined4 *)(**(int **)(param_1 + 0x7c) + 0x188),param_1 + 0x40,
                 local_30,param_3,local_28,param_5,param_6,param_7,param_8,param_9);
    iVar1 = FUN_00149df0(**(int **)(param_1 + 0x7c) + 0x4a0,&local_90,0);
    uVar2 = iVar1 == 0;
    FUN_000ee880(&local_90);
    FUN_000e9f98(auStack_7c);
    FUN_000e9f98(auStack_84);
    local_8c = 0;
    local_90 = 0;
    local_88 = 0;
  }
  FUN_001179d0(param_1);
  return uVar2;
}

