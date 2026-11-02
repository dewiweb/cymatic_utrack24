// rea decompile_all
// name: FUN_001f0c94
// address: 0x1f0c94
// body: available
// range: 0x1f0c94-0x1f0d9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1f0d0a to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1f0d20 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001f0c94(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  if (((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) ||
     (*(ushort *)(param_1 + 2) < *(ushort *)(param_2 + 2))) {
    FUN_00013290(s_Assertion___s__failed_at_line__d_001f0dd4,
                 s___pbuf_copy__target_not_big_enou_001f0da2 + 2,0x35c,_DAT_001f0da0,param_4);
    return 0xfffffff1;
  }
  while( true ) {
    uVar2 = *(ushort *)((int)param_1 + 10) - uVar3;
    uVar1 = *(ushort *)((int)param_2 + 10) - uVar4;
    if ((int)uVar1 <= (int)uVar2) {
      uVar2 = uVar1;
    }
    uVar2 = uVar2 & 0xffff;
    FUN_000039e0(param_1[1] + uVar3,param_2[1] + uVar4,uVar2);
    uVar3 = uVar3 + uVar2 & 0xffff;
    uVar4 = uVar4 + uVar2 & 0xffff;
    if (*(ushort *)((int)param_1 + 10) < uVar3) {
      FUN_00013290(s_Assertion___s__failed_at_line__d_001f0dd4,s_offset_to_<__p_to_>len_001f0e0c,
                   DAT_001f0e08,_DAT_001f0da0);
                    /* WARNING: Subroutine does not return */
      FUN_00003538();
    }
    if (*(ushort *)((int)param_2 + 10) < uVar4) {
      FUN_00013290(s_Assertion___s__failed_at_line__d_001f0dd4,s_offset_from_<__p_from_>len_001f0e28
                   ,DAT_001f0e24,_DAT_001f0da0);
                    /* WARNING: Subroutine does not return */
      FUN_00003538();
    }
    if (*(ushort *)((int)param_2 + 10) <= uVar4) {
      param_2 = (int *)*param_2;
      uVar4 = 0;
    }
    if (*(ushort *)((int)param_1 + 10) == uVar3) {
      param_1 = (int *)*param_1;
      uVar3 = 0;
      if (param_1 == (int *)0x0) {
        if (param_2 == (int *)0x0) {
          return 0;
        }
        FUN_00013290(s_Assertion___s__failed_at_line__d_001f0dd4,s_p_to____NULL_001f0e74,0x378,
                     _DAT_001f0da0);
        return 0xfffffff1;
      }
    }
    if (((param_2 != (int *)0x0) && (*(short *)((int)param_2 + 10) == (short)param_2[2])) &&
       (*param_2 != 0)) break;
    if (((param_1 != (int *)0x0) && (*(short *)((int)param_1 + 10) == (short)param_1[2])) &&
       (*param_1 != 0)) {
      FUN_00013290(s_Assertion___s__failed_at_line__d_001f0dd4,
                   s_pbuf_copy___does_not_allow_packe_001f0e48,DAT_001f0e84,_DAT_001f0da0);
      return 0xfffffff9;
    }
    if (param_2 == (int *)0x0) {
      return 0;
    }
  }
  FUN_00013290(s_Assertion___s__failed_at_line__d_001f0dd4,
               s_pbuf_copy___does_not_allow_packe_001f0e48,DAT_001f0e44,_DAT_001f0da0);
  return 0xfffffff9;
}

