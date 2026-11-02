// rea decompile_all
// name: FUN_0019fae0
// address: 0x19fae0
// body: available
// range: 0x19fae0-0x19fbab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0019fae0(undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  
  uVar2 = FUN_00171e48(param_1,0x40);
  FUN_00171828(uVar2,s_CHAI__0019fbac);
  uVar1 = DAT_0019fbb4;
  FUN_001a6e88(auStack_20,DAT_0019fbb4);
  FUN_00171bc8(uVar2,auStack_20);
  FUN_00171ea4(auStack_20);
  FUN_00171b00(uVar2,s_VNM__0019fbb8);
  if (*(ushort *)(param_2 + 0x160) == 0) {
    FUN_00171b00(uVar2,s__not_connected__0019fbc0);
    return;
  }
  if (*(ushort *)(param_2 + 0x160) <= uVar1) {
    FUN_001a6e88(auStack_18);
    FUN_00171bc8(uVar2,auStack_18);
    FUN_00171ea4(auStack_18);
    return;
  }
  FUN_00171b00(uVar2,s__newer__0019fbd0);
  FUN_00171cdc(uVar2,*(undefined2 *)(param_2 + 0x160));
  FUN_00171b00(uVar2,&LAB_0019fbd8);
  return;
}

