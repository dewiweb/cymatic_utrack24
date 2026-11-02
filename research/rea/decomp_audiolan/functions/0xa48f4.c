// rea decompile_all
// name: FUN_000a48f4
// address: 0xa48f4
// body: available
// range: 0xa48f4-0xa4983 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000a48f4(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_10;
  undefined4 uStack_c;
  
  uStack_c = 0;
  if (param_3 != 0) {
    uStack_c = FUN_0000317c(*param_2);
  }
  FUN_000028a4(s_power_mode_before_change__000a4984);
  FUN_0006c19c();
  FUN_0006bd58();
  FUN_0017b9f8(200);
  local_10 = 2;
  uVar1 = FUN_0006c19c();
  iVar2 = FUN_0015478c(uVar1,&local_10);
  if (iVar2 == 0) {
    FUN_000028a4(s_power_mode_is_not_supported_000a49bc);
  }
  else {
    uVar1 = FUN_0006c19c();
    FUN_0006b9b0(uVar1,&local_10);
    FUN_0017b9f8(200);
    FUN_000028a4(s_power_mode_after_change__000a49a0);
    FUN_0006c19c();
    FUN_0006bd58();
  }
  return 0;
}

