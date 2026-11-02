// rea decompile_all
// name: FUN_001fb77c
// address: 0x1fb77c
// body: available
// range: 0x1fb77c-0x1fb867 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1fb7cc to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1fb7dc to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001fb77c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
  cVar1 = (char)param_1[6];
  if (((cVar1 != '\0') && (cVar1 != '\n')) && (cVar1 != '\x01')) {
    if (cVar1 == '\x03') {
      piVar3 = (int *)*DAT_001fb868;
      if (piVar3 == (int *)0x0) {
        FUN_00013290(s___Assertion___s__failed_at_line___001fb872 + 2,_DAT_001fb870,0x5d0,
                     DAT_001fb86c,param_4);
                    /* WARNING: Subroutine does not return */
        FUN_00003538();
      }
      do {
        if ((*(short *)((int)piVar3 + 0x1a) == *(short *)((int)param_1 + 0x1a)) &&
           (((piVar3 == (int *)0x0 || (*piVar3 == 0)) || (*param_1 == *piVar3)))) {
          if (*(char *)((int)piVar3 + 0x1d) == '\0') {
            FUN_00013290(s___Assertion___s__failed_at_line___001fb872 + 2,
                         s_tcp_pcb_purge__listen_pcb_does_n_001fb8ac,DAT_001fb8a8,DAT_001fb86c,
                         param_4);
                    /* WARNING: Subroutine does not return */
            FUN_00003538();
          }
          *(char *)((int)piVar3 + 0x1d) = *(char *)((int)piVar3 + 0x1d) + -1;
          break;
        }
        piVar3 = (int *)piVar3[3];
      } while (piVar3 != (int *)0x0);
    }
    if (param_1[0x1e] != 0) {
      FUN_001f0fa0();
      param_1[0x1e] = 0;
    }
    piVar3 = (int *)param_1[0x1d];
    while (piVar2 = piVar3, piVar2 != (int *)0x0) {
      piVar3 = (int *)*piVar2;
      if (piVar2 != (int *)0x0) {
        if (piVar2[1] != 0) {
          FUN_001f0fa0();
        }
        FUN_001ecfbc(4,piVar2);
      }
    }
    param_1[0x1d] = 0;
    *(undefined2 *)(param_1 + 0xd) = 0xffff;
    piVar3 = (int *)param_1[0x1b];
    while (piVar2 = piVar3, piVar2 != (int *)0x0) {
      piVar3 = (int *)*piVar2;
      if (piVar2 != (int *)0x0) {
        if (piVar2[1] != 0) {
          FUN_001f0fa0();
        }
        FUN_001ecfbc(4,piVar2);
      }
    }
    piVar3 = (int *)param_1[0x1c];
    while (piVar2 = piVar3, piVar2 != (int *)0x0) {
      piVar3 = (int *)*piVar2;
      if (piVar2 != (int *)0x0) {
        if (piVar2[1] != 0) {
          FUN_001f0fa0();
        }
        FUN_001ecfbc(4,piVar2);
      }
    }
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
  }
  return;
}

