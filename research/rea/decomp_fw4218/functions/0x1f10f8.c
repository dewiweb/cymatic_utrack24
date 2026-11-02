// rea decompile_all
// name: FUN_001f10f8
// address: 0x1f10f8
// body: available
// range: 0x1f10f8-0x1f1189 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1f112a to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1f1156 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001f10f8(int param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    FUN_00013290(s_Assertion___s__failed_at_line__d_001f11b4,s_p____NULL_001f11ec,DAT_001f11e8,
                 DAT_001f118c);
                    /* WARNING: Subroutine does not return */
    FUN_00003538();
  }
  if (param_2 == 0) {
    return 0;
  }
  if ((int)param_2 < 0) {
    uVar2 = -param_2 & 0xffff;
    if (*(ushort *)(param_1 + 10) < uVar2) {
      FUN_00013290(s_Assertion___s__failed_at_line__d_001f11b4,
                   s_increment_magnitude_<__p_>len_001f1194,DAT_001f1190,DAT_001f118c);
      return 1;
    }
  }
  else {
    uVar2 = param_2 & 0xffff;
  }
  cVar1 = *(char *)(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 4);
  if ((cVar1 == '\0') || (cVar1 == '\x03')) {
    *(uint *)(param_1 + 4) = iVar3 - param_2;
    if (param_1 + 0x10U <= iVar3 - param_2) goto LAB_001f117a;
    *(int *)(param_1 + 4) = iVar3;
  }
  else {
    if ((cVar1 != '\x02') && (cVar1 != '\x01')) {
      FUN_00013290(s_Assertion___s__failed_at_line__d_001f11b4,s_bad_pbuf_type_001f11fc,DAT_001f11f8
                   ,DAT_001f118c);
                    /* WARNING: Subroutine does not return */
      FUN_00003538();
    }
    if (((int)param_2 < 0) && (uVar2 <= *(ushort *)(param_1 + 10))) {
      *(uint *)(param_1 + 4) = iVar3 - param_2;
LAB_001f117a:
      *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + (short)param_2;
      *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + (short)param_2;
      return 0;
    }
  }
  return 1;
}

