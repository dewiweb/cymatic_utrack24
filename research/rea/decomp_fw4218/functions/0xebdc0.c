// rea decompile_all
// name: FUN_000ebdc0
// address: 0xebdc0
// body: available
// range: 0xebdc0-0xebf7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000ebdc0(undefined4 param_1,uint param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 in_CY;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_30 = *param_3;
  local_2c = param_3[1];
  FUN_0024a1b0(local_30,0);
  if (!(bool)in_CY) {
    local_30 = 0;
  }
  FUN_00249f7c(local_30,DAT_000ebf7c);
  if (!(bool)in_CY) {
    local_30 = DAT_000ebf7c;
  }
  if ((char)local_2c < -0x7f) {
    local_2c = CONCAT31(local_2c._1_3_,0x81);
  }
  if ('\x7f' < (char)local_2c) {
    local_2c = CONCAT31(local_2c._1_3_,0x7f);
  }
  if (local_2c._1_1_ != '\0') {
    local_30 = DAT_000ebf7c;
  }
  uVar1 = FUN_000ebcb8(&local_30,param_4);
  uVar3 = FUN_00249b28(local_30);
  uVar4 = FUN_00248dc0((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0,DAT_000ebf80,uVar3);
  uVar3 = FUN_001f1784(0,DAT_000ebf84,(int)uVar4,(int)((ulonglong)uVar4 >> 0x20),uVar3,uVar4);
  FUN_00249444((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0,DAT_000ebf88);
  uVar2 = FUN_00249194();
  if ((param_2 & 1) == 0) {
    *(undefined4 *)(DAT_000ebf8c + ((int)param_2 / 2) * 0xc) = uVar1;
    *(uint *)(DAT_000ebf8c + (((int)param_2 / 2) * 3 + 2) * 4) =
         *(uint *)(DAT_000ebf8c + (((int)param_2 / 2) * 3 + 2) * 4) & 0xffff0000 | uVar2 & 0xffff;
  }
  else {
    *(undefined4 *)(DAT_000ebf8c + (((int)param_2 / 2) * 3 + 1) * 4) = uVar1;
    *(uint *)(DAT_000ebf8c + (((int)param_2 / 2) * 3 + 2) * 4) =
         *(uint *)(DAT_000ebf8c + (((int)param_2 / 2) * 3 + 2) * 4) & 0xffff | uVar2 << 0x10;
  }
  return;
}

