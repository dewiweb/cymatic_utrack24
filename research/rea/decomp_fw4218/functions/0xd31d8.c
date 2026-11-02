// rea decompile_all
// name: FUN_000d31d8
// address: 0xd31d8
// body: available
// range: 0xd31d8-0xd32b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000d31d8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_000f4e84();
  uVar1 = FUN_000f4fc0();
  FUN_000f4e84();
  uVar2 = FUN_000f4fb4();
  FUN_0013f9e4(param_1 + 0xe8);
  if (*(int *)(param_1 + 0xe0) != 0) {
    FUN_000c1220(param_1 + 0x14,*(undefined4 *)(param_1 + 0xe0));
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  FUN_000bd334(param_1 + 0x14,1);
  FUN_000952d8(uVar1,0);
  FUN_000953e8(uVar1,0);
  FUN_00094f0c(uVar1,0);
  FUN_000950d8(uVar1);
  iVar3 = FUN_0006d818(uVar2);
  if (iVar3 == 2) {
    FUN_000aa570();
    uVar1 = FUN_000aa88c();
    FUN_0008c370(uVar1,1);
  }
  FUN_00081050(*DAT_000d32d0,s_Exiting_Recording_State_000d32b8);
  FUN_00081424(*DAT_000d32d0);
  return;
}

