// rea decompile_all
// name: FUN_0005d058
// address: 0x5d058
// body: available
// range: 0x5d058-0x5d1a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0005d058(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined4 param_6,uint param_7,int *param_8)

{
  uint uVar1;
  uint uVar2;
  ushort local_40 [2];
  int local_3c;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_3c = (param_7 & 0x3fff3fff) * 4 + 0xb;
  uVar2 = 0;
  local_40[0] = 0;
  iStack_34 = param_1;
  uStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  FUN_001a0700(param_1 + 0xc);
  *(char *)((uint)local_40[0] + param_1 + 0x30) = (char)param_2;
  uVar1 = local_40[0] + 1 & 0xfffeffff;
  *(undefined1 *)(param_1 + uVar1 + 0x30) = 0;
  local_40[0] = (short)uVar1 + 1;
  FUN_000778e8(local_3c,param_1 + 0x30,local_40);
  FUN_0007791c(local_2c,param_1 + 0x30,local_40);
  *(char *)((uint)local_40[0] + param_1 + 0x30) = (char)local_28;
  uVar1 = local_40[0] + 1 & 0xfffeffff;
  *(undefined1 *)(param_1 + uVar1 + 0x30) = param_5;
  local_40[0] = (short)uVar1 + 1;
  FUN_0007791c(param_6,param_1 + 0x30,local_40);
  *(char *)((uint)local_40[0] + param_1 + 0x30) = (char)param_7;
  local_40[0] = local_40[0] + 1;
  if (param_7 != 0) {
    do {
      FUN_0007791c(*(undefined4 *)(*param_8 + uVar2 * 4),param_1 + 0x30,local_40);
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < param_7);
  }
  FUN_0005ad9c(param_1,param_1 + 0x30,local_40[0]);
  FUN_001a0d18(param_1 + 0xc);
  return;
}

