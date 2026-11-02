// rea decompile_all
// name: FUN_000b8b08
// address: 0xb8b08
// body: available
// range: 0xb8b08-0xb8bb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xb8ba0 to 0x289c thunk_FUN_000028a4 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000b8b08(int *param_1)

{
  int iVar1;
  undefined4 uStack_10;
  undefined1 uStack_c;
  
  if (param_1[0x74] == 0) {
    thunk_FUN_000028a4(DAT_000b8bb8);
    return;
  }
  iVar1 = (**(code **)(*param_1 + 0x58))(param_1,1);
  if (iVar1 != 0) {
    if (param_1[0x74] != 0) {
      uStack_c = 0;
      uStack_10 = DAT_000b8bb4;
      iVar1 = FUN_0008ab80(param_1,param_1[0x74],&uStack_10);
      if (iVar1 == 0) {
        FUN_000028a4(DAT_000b8bbc);
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000b8b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x38))(param_1,1,0);
    return;
  }
  return;
}

