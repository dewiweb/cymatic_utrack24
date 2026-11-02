// rea decompile_all
// name: FUN_001fb8e4
// address: 0x1fb8e4
// body: available
// range: 0x1fb8e4-0x1fb983 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1fb94e to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1fb966 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1fb97c to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001fb8e4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_001fb984;
  iVar2 = *param_1;
  if (iVar2 == param_2) {
    *param_1 = *(int *)(iVar2 + 0xc);
  }
  else {
    *(int *)(DAT_001fb984 + 0x20) = iVar2;
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
  FUN_001fb77c(param_2);
  if (*(char *)(param_2 + 0x18) != '\n') {
    if (*(char *)(param_2 + 0x18) == '\x01') goto LAB_001fb980;
    if ((*(byte *)(param_2 + 0x1e) & 1) != 0) {
      *(byte *)(param_2 + 0x1e) = *(byte *)(param_2 + 0x1e) | 2;
      FUN_001fb0ac(param_2);
      if (*(char *)(param_2 + 0x18) == '\x01') goto LAB_001fb980;
    }
  }
  if (*(int *)(param_2 + 0x6c) != 0) {
    FUN_00013290(s_Assertion___s__failed_at_line__d_001fb9a8,s_unsent_segments_leaking_001fb990,
                 DAT_001fb98c,DAT_001fb988);
                    /* WARNING: Subroutine does not return */
    FUN_00003538();
  }
  if (*(int *)(param_2 + 0x70) != 0) {
    FUN_00013290(s_Assertion___s__failed_at_line__d_001fb9a8,s_unacked_segments_leaking_001fb9dc,
                 0x618,DAT_001fb988);
                    /* WARNING: Subroutine does not return */
    FUN_00003538();
  }
  if (*(int *)(param_2 + 0x74) != 0) {
    FUN_00013290(s_Assertion___s__failed_at_line__d_001fb9a8,s_ooseq_segments_leaking_001fb9fc,
                 DAT_001fb9f8,DAT_001fb988);
                    /* WARNING: Subroutine does not return */
    FUN_00003538();
  }
LAB_001fb980:
  *(undefined1 *)(param_2 + 0x18) = 0;
  return;
}

