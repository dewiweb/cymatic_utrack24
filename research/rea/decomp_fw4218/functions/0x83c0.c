// rea decompile_all
// name: FUN_000083c0
// address: 0x83c0
// body: available
// range: 0x83c0-0x84d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x849c to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_000083c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_28 [2];
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  FUN_001f00bc(param_1 + 0x118);
  FUN_00233cc4(local_28,param_1 + 0x15c,&uStack_1c);
  if (local_28[0] == *(int *)(param_1 + 0x16c)) {
    return false;
  }
  FUN_001f00bc(DAT_00008be0);
  iVar3 = *(int *)(local_28[0] + 0x38);
  piVar4 = *(int **)(local_28[0] + 0x3c);
  if (piVar4 == (int *)0x0) {
    if (iVar3 != 0) goto LAB_0000849c;
  }
  else {
    if (iVar3 == 0) goto LAB_0000849c;
    *piVar4 = *piVar4 + 1;
  }
  FUN_001f06d4(DAT_00008be0);
  FUN_001f06d4(param_1 + 0x118);
  iVar1 = thunk_EXT_FUN_004001ec(iVar3,param_3);
  iVar5 = 0;
  FUN_001f00bc(DAT_00008be0);
  if (piVar4 == (int *)0x0) {
    if (iVar3 != 0) goto LAB_0000849c;
  }
  else {
    if (iVar3 == 0) {
LAB_0000849c:
                    /* WARNING: Subroutine does not return */
      FUN_00003538();
    }
    iVar2 = *piVar4;
    *piVar4 = iVar2 + -1;
    if (iVar2 + -1 == 0) {
      FUN_001eecc8(piVar4);
      iVar5 = iVar3;
    }
  }
  FUN_001f06d4(DAT_00008be0);
  if (iVar5 != 0) {
    FUN_001ce98c();
    FUN_001eecc8(iVar5);
  }
  return iVar1 == 0;
}

