// rea decompile_all
// name: FUN_000ca058
// address: 0xca058
// body: available
// range: 0xca058-0xca1c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xca15c to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000ca058(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)(param_1 + 0x24);
  FUN_001f00bc(DAT_000ca1c4);
  if (*piVar3 == 0) {
    FUN_001f06d4(DAT_000ca1c4);
  }
  else {
    iVar4 = 0;
    FUN_001f00bc(DAT_000ca1c4);
    piVar1 = *(int **)(param_1 + 0x28);
    if (piVar1 == (int *)0x0) {
      if (*piVar3 != 0) goto LAB_000ca15c;
    }
    else {
      if (*piVar3 == 0) goto LAB_000ca15c;
      iVar2 = *piVar1;
      *piVar1 = iVar2 + -1;
      if (iVar2 + -1 == 0) {
        FUN_001eecc8(*(undefined4 *)(param_1 + 0x28));
        iVar4 = *piVar3;
      }
      *piVar3 = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    FUN_001f06d4(DAT_000ca1c4);
    FUN_001f06d4(DAT_000ca1c4);
    if (iVar4 != 0) {
      FUN_001ce98c(iVar4);
      FUN_001eecc8(iVar4);
    }
  }
  piVar1 = (int *)(param_1 + 0x24);
  iVar4 = 0;
  FUN_001f00bc(DAT_000ca1c4);
  piVar3 = *(int **)(param_1 + 0x28);
  if (piVar3 == (int *)0x0) {
    if (*piVar1 != 0) goto LAB_000ca15c;
  }
  else {
    if (*piVar1 == 0) {
LAB_000ca15c:
                    /* WARNING: Subroutine does not return */
      FUN_00003538();
    }
    iVar2 = *piVar3;
    *piVar3 = iVar2 + -1;
    if (iVar2 + -1 == 0) {
      FUN_001eecc8(*(undefined4 *)(param_1 + 0x28));
      iVar4 = *piVar1;
    }
    *piVar1 = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  FUN_001f06d4(DAT_000ca1c4);
  if (iVar4 != 0) {
    FUN_001ce98c();
    FUN_001eecc8(iVar4);
  }
  FUN_00173a54(*(int *)(param_1 + 0x14),*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14) >> 2,0);
  FUN_00173a54(*(int *)(param_1 + 8),*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8) >> 2,0);
  return param_1;
}

