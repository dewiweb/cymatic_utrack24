// rea decompile_all
// name: FUN_00026374
// address: 0x26374
// body: available
// range: 0x26374-0x263e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00026374(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined1 auStack_70 [16];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [12];
  int iStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  iStack_24 = param_1;
  uStack_20 = param_2;
  local_1c = param_3;
  uStack_18 = param_4;
  FUN_000363ac(auStack_50);
  FUN_000363ac(auStack_40);
  FUN_000363ac(auStack_70);
  FUN_000369d8(auStack_70,param_2,local_1c);
  local_54 = param_6;
  local_58 = param_5;
  FUN_00036588(auStack_40,&local_58);
  FUN_000369d8(auStack_50,auStack_70,auStack_40);
  FUN_000363bc(auStack_70,auStack_50,DAT_000263e8);
  FUN_00036720(auStack_70,2);
  FUN_00036658(auStack_70,auStack_30);
  iVar1 = FUN_000257d8(&local_60,param_1 + 0x10,auStack_30);
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x14) = local_5c;
    *(undefined4 *)(param_1 + 0x10) = local_60;
  }
  return;
}

