// rea decompile_all
// name: FUN_000ce8f4
// address: 0xce8f4
// body: available
// range: 0xce8f4-0xce97f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xce97c to 0x3b29c FUN_0003b29c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000ce8f4(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*(int *)param_1[0x46] + 8))((int *)param_1[0x46],param_2,0);
  if (param_3 != 0) {
    (**(code **)(*(int *)param_1[0x47] + 0x58))();
    *(undefined1 *)(param_1 + 0x11c) = 1;
    (**(code **)(*param_1 + 0x1c))(param_1,500);
    (**(code **)(*(int *)param_1[0x46] + 0xd0))
              ((int *)param_1[0x46],(char)param_1[0x11c],0,*(undefined1 *)((int)param_1 + 0x472),
               *(undefined1 *)((int)param_1 + 0x475));
    return;
  }
  FUN_0003b29c(s_Restarting_on_ARC_command_000ce980);
  return;
}

