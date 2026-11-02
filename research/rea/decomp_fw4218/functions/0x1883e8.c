// rea decompile_all
// name: FUN_001883e8
// address: 0x1883e8
// body: available
// range: 0x1883e8-0x1884a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001883e8(int *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  
  (**(code **)(*param_1 + 0x38))(param_1);
  FUN_00180064(param_1);
  if (param_1[0x50] != 0) {
    FUN_0017e2ac(auStack_30);
    (**(code **)(*param_1 + 0x1c0))(param_1,DAT_001884a8,0,0,0,0,0,auStack_30);
    uVar1 = FUN_0017277c(auStack_20,auStack_30);
    FUN_001850b4(param_1[0x1f],0,0,uVar1);
    FUN_001802e8(param_1[0x50],0);
  }
  param_1[0x50] = 0;
  FUN_00180054(param_1);
                    /* WARNING: Could not recover jumptable at 0x001884a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x3c))(param_1);
  return;
}

