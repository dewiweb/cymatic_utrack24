// rea decompile_all
// name: FUN_001ed200
// address: 0x1ed200
// body: available
// range: 0x1ed200-0x1ed24f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1ed236 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001ed200(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    FUN_00013290(s_Assertion___s__failed_at_line__d_001ed278,s_netbuf_alloc__invalid_buf_001ed2ac,
                 0x6d,_DAT_001ed250);
  }
  else {
    if (*param_1 != 0) {
      FUN_001f0fa0();
    }
    iVar1 = FUN_001f0830(0,param_2);
    *param_1 = iVar1;
    if (iVar1 != 0) {
      if (*(ushort *)(iVar1 + 10) < param_2) {
        FUN_00013290(s_Assertion___s__failed_at_line__d_001ed278,
                     s___check_that_first_pbuf_can_hold_001ed252 + 2,0x77,_DAT_001ed250);
                    /* WARNING: Subroutine does not return */
        FUN_00003538();
      }
      param_1[1] = iVar1;
      return *(undefined4 *)(iVar1 + 4);
    }
  }
  return 0;
}

