// rea decompile_all
// name: FUN_001aa008
// address: 0x1aa008
// body: available
// range: 0x1aa008-0x1aa0a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1aa02c to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1aa03c to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1aa06e to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_001aa008(int *param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  char cVar4;
  int *piVar5;
  
  if (param_1 == (int *)0x0) {
    FUN_00015210(s_Assertion___s__failed_at_line__d_001aa0c8,s_p____NULL_001aa100,DAT_001aa0fc,
                 DAT_001aa0a8);
                    /* WARNING: Subroutine does not return */
    FUN_000032f8();
  }
  cVar4 = (char)param_1[3];
  if ((((cVar4 != '\0') && (cVar4 != '\x01')) && (cVar4 != '\x02')) && (cVar4 != '\x03')) {
    FUN_00015210(s_Assertion___s__failed_at_line__d_001aa0c8,s_pbuf_free__sane_type_001aa0b0,
                 DAT_001aa0ac,DAT_001aa0a8);
                    /* WARNING: Subroutine does not return */
    FUN_000032f8();
  }
  cVar4 = '\0';
  do {
    uVar3 = FUN_001b0bf0();
    sVar2 = *(short *)((int)param_1 + 0xe);
    if (sVar2 == 0) {
      FUN_00015210(s_Assertion___s__failed_at_line__d_001aa0c8,s_pbuf_free__p_>ref_>_0_001aa110,
                   DAT_001aa10c,DAT_001aa0a8);
                    /* WARNING: Subroutine does not return */
      FUN_000032f8();
    }
    *(short *)((int)param_1 + 0xe) = sVar2 + -1;
    FUN_001b0c3c(uVar3);
    if (sVar2 != 1) {
      return cVar4;
    }
    cVar1 = (char)param_1[3];
    piVar5 = (int *)*param_1;
    if (cVar1 == '\x03') {
      uVar3 = 0xd;
LAB_001aa0a0:
      FUN_0019cae4(uVar3,param_1);
    }
    else {
      if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
        uVar3 = 0xc;
        goto LAB_001aa0a0;
      }
      FUN_0019c4f8(param_1);
    }
    cVar4 = cVar4 + '\x01';
    param_1 = piVar5;
    if (piVar5 == (int *)0x0) {
      return cVar4;
    }
  } while( true );
}

