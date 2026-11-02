// rea decompile_all
// name: FUN_000be010
// address: 0xbe010
// body: available
// range: 0xbe010-0xbe0cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000be010(undefined4 param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [36];
  
  uVar1 = DAT_000be0d0;
  uVar2 = FUN_0000243c((int)((ulonglong)DAT_000be0d0 * (ulonglong)param_3),
                       (int)((ulonglong)DAT_000be0d0 * (ulonglong)param_3 >> 0x20),
                       *(undefined4 *)(DAT_000be0cc + (uint)*(byte *)(param_2 + 0x251) * 4),0);
  if (uVar2 < 1000) {
    FUN_000028d8(auStack_30,DAT_000be0d4);
  }
  else if (uVar2 < uVar1) {
    uVar1 = (uint)((ulonglong)uVar2 * (ulonglong)DAT_000be0d8 >> 0x26);
    FUN_000028d8(auStack_30,DAT_000be0dc,uVar1,uVar2 + uVar1 * -1000);
  }
  else {
    uVar1 = (uint)((ulonglong)uVar2 * (ulonglong)DAT_000be0d8 >> 0x26);
    uVar2 = (uint)((ulonglong)uVar1 * (ulonglong)DAT_000be0d8 >> 0x26);
    FUN_000028d8(auStack_30,DAT_000be0e0,uVar2,uVar1 + uVar2 * -1000);
  }
  FUN_001da358(param_1,auStack_30,auStack_34);
  return;
}

