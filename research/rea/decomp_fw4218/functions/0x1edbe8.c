// rea decompile_all
// name: FUN_001edbe8
// address: 0x1edbe8
// body: available
// range: 0x1edbe8-0x1edc89 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1edc1c to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1edc34 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1edc4c to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1edc62 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_001edbe8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_001ed4e0(param_1,param_3);
  if (iVar1 != 0) {
    iVar2 = FUN_001fde2c();
    if (iVar2 != 0) {
      if (*(int *)(iVar1 + 4) != 0) {
        FUN_00013290(s_Assertion___s__failed_at_line__d_001edcb8,
                     s___freeing_conn_without_freeing_p_001edc92 + 2,0x4f,_DAT_001edc90);
                    /* WARNING: Subroutine does not return */
        FUN_00003538();
      }
      if (*(int *)(iVar1 + 0xc) != s_AMESconn_has_no_op_completed_001edcec._0_4_) {
        FUN_00013290(s_Assertion___s__failed_at_line__d_001edcb8,
                     s_AMESconn_has_no_op_completed_001edcec + 4,0x50,_DAT_001edc90);
                    /* WARNING: Subroutine does not return */
        FUN_00003538();
      }
      if (*(int *)(iVar1 + 0x2c) != s_UEUQconn_has_no_recvmbox_001edd0c._0_4_) {
        FUN_00013290(s_Assertion___s__failed_at_line__d_001edcb8,
                     s_UEUQconn_has_no_recvmbox_001edd0c + 4,0x51,_DAT_001edc90);
                    /* WARNING: Subroutine does not return */
        FUN_00003538();
      }
      if (*(int *)(iVar1 + 0x6c) == s_UEUQconn_has_no_recvmbox_001edd0c._0_4_) {
        FUN_00013290(s_Assertion___s__failed_at_line__d_001edcb8,
                     s_conn_>acceptmbox_shouldn_t_exist_001edd28,0x53,_DAT_001edc90);
                    /* WARNING: Subroutine does not return */
        FUN_00003538();
      }
      FUN_001f9344(iVar1 + 0xc);
      FUN_001f9220(iVar1 + 0x2c);
      FUN_001ecfbc(6,iVar1);
      return 0;
    }
  }
  return iVar1;
}

