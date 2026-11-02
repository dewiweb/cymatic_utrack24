// rea decompile_all
// name: FUN_001fded0
// address: 0x1fded0
// body: available
// range: 0x1fded0-0x1fdf0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1fdefa to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001fded0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_001e15b0();
  uVar1 = s_D__lwIP_tcpip_mbox_001fdf10._0_4_;
  *(undefined4 *)s_D__lwIP_tcpip_mbox_001fdf10._0_4_ = param_1;
  *(undefined4 *)(uVar1 + 4) = param_2;
  iVar2 = FUN_001f9230(DAT_001fdf24,0x40,s_D__lwIP_tcpip_mbox_001fdf10 + 4);
  if (iVar2 != 0) {
    FUN_00013290(s_Assertion___s__failed_at_line__d_001fdf50,
                 s___failed_to_create_tcpip_thread_m_001fdf2a + 2,0x1ce,_DAT_001fdf28,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_00003538();
  }
  FUN_001f93a2(&DAT_001fdf88,DAT_001fdf84,0,0xffffffff,0xffffffff);
  return;
}

