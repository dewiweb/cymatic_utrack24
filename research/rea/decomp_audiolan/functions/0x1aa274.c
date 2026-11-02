// rea decompile_all
// name: FUN_001aa274
// address: 0x1aa274
// body: available
// range: 0x1aa274-0x1aa34d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1aa29a to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1aa2ac to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1aa2de to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1aa30a to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1aa34a to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001aa274(int *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001aa3bc;
  if (param_1 == (int *)0x0) {
    FUN_00015210(s_Assertion___s__failed_at_line__d_001aa370,s_pbuf_realloc__p____NULL_001aa3a4,
                 0x1b4,_DAT_001aa350);
                    /* WARNING: Subroutine does not return */
    FUN_000032f8();
  }
  cVar1 = (char)param_1[3];
  if ((((cVar1 != '\x03') && (cVar1 != '\x01')) && (cVar1 != '\0')) && (cVar1 != '\x02')) {
    FUN_00015210(s_Assertion___s__failed_at_line__d_001aa370,
                 s___pbuf_realloc__sane_p_>type_001aa352 + 2,0x1b5,_DAT_001aa350);
                    /* WARNING: Subroutine does not return */
    FUN_000032f8();
  }
  if (param_2 < *(ushort *)(param_1 + 2)) {
    iVar3 = param_2 - *(ushort *)(param_1 + 2);
    if (*(ushort *)((int)param_1 + 10) < param_2) {
      do {
        param_2 = param_2 - *(ushort *)((int)param_1 + 10) & 0xffff;
        if (iVar2 <= iVar3) {
          FUN_00015210(s_Assertion___s__failed_at_line__d_001aa370,s_grow_<_max_u16_t_001aa3c0,0x1cc
                       ,_DAT_001aa350);
                    /* WARNING: Subroutine does not return */
          FUN_000032f8();
        }
        *(short *)(param_1 + 2) = (short)param_1[2] + (short)iVar3;
        param_1 = (int *)*param_1;
        if (param_1 == (int *)0x0) {
          FUN_00015210(s_Assertion___s__failed_at_line__d_001aa370,
                       s_pbuf_realloc__q____NULL_001aa3d4,0x1d0,_DAT_001aa350);
                    /* WARNING: Subroutine does not return */
          FUN_000032f8();
        }
      } while (*(ushort *)((int)param_1 + 10) < param_2);
    }
    if ((((char)param_1[3] == '\0') && (*(ushort *)((int)param_1 + 10) != param_2)) &&
       (param_1 = (int *)FUN_0019c960(param_1,(param_1[1] - (int)param_1 & 0xffffU) + param_2),
       param_1 == (int *)0x0)) {
      FUN_00015210(s_Assertion___s__failed_at_line__d_001aa370,
                   s_mem_trim_returned_q____NULL_001aa3ec,0x1da,_DAT_001aa350);
                    /* WARNING: Subroutine does not return */
      FUN_000032f8();
    }
    *(short *)((int)param_1 + 10) = (short)param_2;
    *(short *)(param_1 + 2) = (short)param_2;
    if (*param_1 != 0) {
      FUN_001aa008();
    }
    *param_1 = 0;
  }
  return;
}

