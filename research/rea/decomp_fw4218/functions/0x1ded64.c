// rea decompile_all
// name: FUN_001ded64
// address: 0x1ded64
// body: available
// range: 0x1ded64-0x1dede1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1ded84 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_001ded64(int param_1,undefined4 param_2,uint *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (*(short *)(param_1 + 0xe) != 1) {
    FUN_00013290(s_Assertion___s__failed_at_line__d_001dedf8,s_p_>ref____1_001dedec,DAT_001dede8,
                 DAT_001dede4);
                    /* WARNING: Subroutine does not return */
    FUN_00003538();
  }
  for (piVar2 = (int *)*DAT_001dee2c; piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
    if (((*(byte *)((int)piVar2 + 0x39) & 1) != 0) &&
       ((*param_3 & piVar2[2]) == (piVar2[1] & piVar2[2]))) goto LAB_001dedbe;
  }
  piVar2 = (int *)*DAT_001dee30;
  if ((piVar2 != (int *)0x0) && ((*(byte *)((int)piVar2 + 0x39) & 1) != 0)) {
LAB_001dedbe:
    if (piVar2 != (int *)0x0) {
      uVar1 = FUN_001dee50(param_1,param_2,param_3,param_4,param_5,param_6,piVar2,0,0,param_1,
                           param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0xfffffffb;
}

