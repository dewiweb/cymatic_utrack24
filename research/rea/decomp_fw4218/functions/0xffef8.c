// rea decompile_all
// name: FUN_000ffef8
// address: 0xffef8
// body: available
// range: 0xffef8-0xfffcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000ffef8(int param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [36];
  undefined1 auStack_14 [4];
  
  uVar1 = DAT_000fffd0;
  lVar2 = (ulonglong)DAT_000fffd0 * (ulonglong)*(uint *)(param_1 + 0x150);
  uVar3 = FUN_00002430((int)lVar2,(int)((ulonglong)lVar2 >> 0x20),
                       *(undefined4 *)(DAT_000fffcc + (uint)*(byte *)(param_1 + 0x255) * 4),0);
  if (uVar3 < 1000) {
    FUN_000028cc(auStack_38,DAT_000fffd4);
  }
  else if (uVar3 < uVar1) {
    uVar1 = (uint)((ulonglong)uVar3 * (ulonglong)DAT_000fffd8 >> 0x26);
    FUN_000028cc(auStack_38,DAT_000fffdc,uVar1,uVar3 + uVar1 * -1000);
  }
  else {
    uVar1 = (uint)((ulonglong)uVar3 * (ulonglong)DAT_000fffd8 >> 0x26);
    uVar3 = (uint)((ulonglong)uVar1 * (ulonglong)DAT_000fffd8 >> 0x26);
    FUN_000028cc(auStack_38,DAT_000fffe0,uVar3,uVar1 + uVar3 * -1000);
  }
  FUN_00232964(auStack_3c,auStack_38,auStack_14);
  FUN_00232a4c(param_1 + 0x154,auStack_3c);
  FUN_00232920(auStack_3c);
  return;
}

