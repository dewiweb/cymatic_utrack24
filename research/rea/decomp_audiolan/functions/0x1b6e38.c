// rea decompile_all
// name: FUN_001b6e38
// address: 0x1b6e38
// body: available
// range: 0x1b6e38-0x1b6e77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1b6e62 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001b6e38(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_001910d0();
  puVar1 = _DAT_001b6e78;
  *_DAT_001b6e78 = param_1;
  puVar1[1] = param_2;
  iVar2 = FUN_001b0c5c(DAT_001b6e8c,0x40,s____lwIP_tcpip_mbox_001b6e79 + 3);
  if (iVar2 != 0) {
    FUN_00015210(s_Assertion___s__failed_at_line__d_001b6eb8,
                 s___failed_to_create_tcpip_thread_m_001b6e92 + 2,0x1ce,_DAT_001b6e90,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_000032f8();
  }
  FUN_001b0dce(&DAT_001b6ef0,DAT_001b6eec,0,0xffffffff,0xffffffff);
  return;
}

