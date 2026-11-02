// rea decompile_all
// name: FUN_001b3550
// address: 0x1b3550
// body: available
// range: 0x1b3550-0x1b35ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1b35ba to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1b35d2 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1b35e8 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001b3550(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_001b35f0;
  iVar2 = *param_1;
  if (iVar2 == param_2) {
    *param_1 = *(int *)(iVar2 + 0xc);
  }
  else {
    *(int *)(DAT_001b35f0 + 0x20) = iVar2;
    while (iVar2 != 0) {
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == param_2) {
        *(undefined4 *)(*(int *)(iVar1 + 0x20) + 0xc) = *(undefined4 *)(param_2 + 0xc);
        break;
      }
      *(int *)(iVar1 + 0x20) = iVar2;
    }
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  FUN_001b33e8(param_2);
  if (*(char *)(param_2 + 0x18) != '\n') {
    if (*(char *)(param_2 + 0x18) == '\x01') goto LAB_001b35ec;
    if ((*(byte *)(param_2 + 0x1e) & 1) != 0) {
      *(byte *)(param_2 + 0x1e) = *(byte *)(param_2 + 0x1e) | 2;
      FUN_001b2d18(param_2);
      if (*(char *)(param_2 + 0x18) == '\x01') goto LAB_001b35ec;
    }
  }
  if (*(int *)(param_2 + 0x6c) != 0) {
    FUN_00015210(s_Assertion___s__failed_at_line__d_001b3614,s_unsent_segments_leaking_001b35fc,
                 DAT_001b35f8,DAT_001b35f4);
                    /* WARNING: Subroutine does not return */
    FUN_000032f8();
  }
  if (*(int *)(param_2 + 0x70) != 0) {
    FUN_00015210(s_Assertion___s__failed_at_line__d_001b3614,s_unacked_segments_leaking_001b3648,
                 0x618,DAT_001b35f4);
                    /* WARNING: Subroutine does not return */
    FUN_000032f8();
  }
  if (*(int *)(param_2 + 0x74) != 0) {
    FUN_00015210(s_Assertion___s__failed_at_line__d_001b3614,s_ooseq_segments_leaking_001b3668,
                 DAT_001b3664,DAT_001b35f4);
                    /* WARNING: Subroutine does not return */
    FUN_000032f8();
  }
LAB_001b35ec:
  *(undefined1 *)(param_2 + 0x18) = 0;
  return;
}

