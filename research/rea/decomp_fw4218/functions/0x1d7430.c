// rea decompile_all
// name: FUN_001d7430
// address: 0x1d7430
// body: available
// range: 0x1d7430-0x1d7503 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1d74a4 to 0x13290 FUN_00013290 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1d74c8 to 0x13290 FUN_00013290 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001d7430(undefined4 param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  
  FUN_00013290(s_stack_backtrace___001d7504);
  if (param_3 == 0) {
    FUN_00013290(s_in_interrupt_001d7590);
    FUN_00013290(s_sp_at_0x_08x_001d75a4,param_2);
    FUN_00013290(s_pc_at_0x_08x_001d7554,param_1);
    return;
  }
  FUN_00013290(s_thread___s__001d751c,*(undefined4 *)(param_3 + 0x34));
  FUN_00013290(s_sp_at_0x_08x_in___0x_08x___0x_08_001d752c,param_2,*(undefined4 *)(param_3 + 0xc),
               *(undefined4 *)(param_3 + 0x10));
  FUN_00013290(s_pc_at_0x_08x_001d7554,param_1);
  FUN_00013290(s_backtrace__001d7568);
  if ((*(undefined4 **)(param_3 + 0xc) <= param_2) && (param_2 <= *(undefined4 **)(param_3 + 0x10)))
  {
    if (*(undefined4 **)(param_3 + 0x10) <= param_2) {
      return;
    }
    do {
      iVar1 = FUN_001d2d20(*param_2);
      if (iVar1 != 0xff) {
        FUN_00013290(s_sp_0x_08p___fn_0x_08x_001d75b8,param_2,*param_2);
      }
      param_2 = param_2 + 1;
    } while (param_2 < *(undefined4 **)(param_3 + 0x10));
    return;
  }
  FUN_00013290(s_<sp_outside_stack_>_001d7578);
  return;
}

