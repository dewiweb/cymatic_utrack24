// rea decompile_all
// name: FUN_00148b08
// address: 0x148b08
// body: available
// range: 0x148b08-0x148bb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00148b08(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_r1;
  
  (**(code **)(*param_1 + 0x48))(param_1);
  iVar1 = FUN_0017bfc0();
  iVar2 = FUN_0017bfc0();
  iVar3 = FUN_001184d4(param_1 + 0x1b0,iVar2);
  param_1[0x5d] = iVar3;
  iVar3 = FUN_00148f8c(param_1 + 0x128);
  if (iVar3 == 0x10) {
    thunk_EXT_FUN_0040010c(param_1 + 0x119);
  }
  FUN_00118760(param_1 + 0x196);
  FUN_001472d4(param_1,extraout_r1,iVar1 * 1000,0,iVar2);
  iVar1 = FUN_0017bfc0();
  if ((uint)(iVar1 - iVar2) < (uint)param_1[0x5d]) {
    iVar1 = param_1[0x5d] - (iVar1 - iVar2);
  }
  else {
    iVar1 = 1;
  }
  param_1[0x5d] = iVar1;
  param_1[0x1a] = iVar1;
                    /* WARNING: Could not recover jumptable at 0x00148bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x4c))(param_1);
  return;
}

