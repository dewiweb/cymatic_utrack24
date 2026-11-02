// rea decompile_all
// name: FUN_001fa39c
// address: 0x1fa39c
// body: available
// range: 0x1fa39c-0x1fa4b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1fa3d2 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1fa404 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1fa430 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1fa454 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1fa4b6 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x001fa3c2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001fa39c(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  
  if ((param_2 & 3) == 0) {
    FUN_00013290(s___Assertion___s__failed_at_line___001fa4c6 + 2,_DAT_001fa4c4,DAT_001fa4c0,
                 DAT_001fa4bc,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_00003538();
  }
  if (0x7f < *(ushort *)(param_1 + 0x68)) {
LAB_001fa434:
    *(byte *)(param_1 + 0x1e) = *(byte *)(param_1 + 0x1e) | 0x80;
    return 0xfffffffe;
  }
  uVar6 = (uint)((int)(param_2 << 0x1e) < 0);
  uVar2 = uVar6 << 0x1f;
  if (uVar6 != 0) {
    uVar2 = 4;
  }
  if (*(short *)(param_1 + 0x66) == 0) {
    return 0xfffffffe;
  }
  iVar3 = FUN_001f0830(0,uVar2);
  if (iVar3 == 0) goto LAB_001fa434;
  if (*(ushort *)(iVar3 + 10) < uVar2) {
    FUN_00013290(s___Assertion___s__failed_at_line___001fa4c6 + 2,
                 s_tcp_enqueue_flags__check_that_fi_001fa500,DAT_001fa4fc,DAT_001fa4bc);
                    /* WARNING: Subroutine does not return */
    FUN_00003538();
  }
  iVar3 = FUN_001fa2a0(param_1,iVar3,param_2,*(undefined4 *)(param_1 + 0x5c),uVar6);
  if (iVar3 == 0) goto LAB_001fa434;
  if ((*(uint *)(iVar3 + 0xc) & 3) != 0) {
    FUN_00013290(s___Assertion___s__failed_at_line___001fa4c6 + 2,s_seg_>tcphdr_not_aligned_001fa540
                 ,DAT_001fa53c,DAT_001fa4bc);
                    /* WARNING: Subroutine does not return */
    FUN_00003538();
  }
  if (*(short *)(iVar3 + 8) != 0) {
    FUN_00013290(s___Assertion___s__failed_at_line___001fa4c6 + 2,
                 s_tcp_enqueue_flags__invalid_segme_001fa55c,DAT_001fa558,DAT_001fa4bc);
                    /* WARNING: Subroutine does not return */
    FUN_00003538();
  }
  piVar5 = *(int **)(param_1 + 0x6c);
  if (*(int **)(param_1 + 0x6c) == (int *)0x0) {
    *(int *)(param_1 + 0x6c) = iVar3;
  }
  else {
    do {
      piVar4 = piVar5;
      piVar5 = (int *)*piVar4;
    } while (piVar5 != (int *)0x0);
    *piVar4 = iVar3;
    if ((param_2 & 3) == 0) goto LAB_001fa47c;
  }
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  *(short *)(param_1 + 0x66) = *(short *)(param_1 + 0x66) + -1;
LAB_001fa47c:
  if ((param_2 & 1) != 0) {
    *(byte *)(param_1 + 0x1e) = *(byte *)(param_1 + 0x1e) | 0x20;
  }
  sVar1 = FUN_001f0c7c(*(undefined4 *)(iVar3 + 4));
  sVar1 = sVar1 + *(short *)(param_1 + 0x68);
  *(short *)(param_1 + 0x68) = sVar1;
  if (((sVar1 != 0) && (*(int *)(param_1 + 0x70) == 0)) && (*(int *)(param_1 + 0x6c) == 0)) {
    FUN_00013290(s___Assertion___s__failed_at_line___001fa4c6 + 2,
                 s_tcp_enqueue_flags__invalid_queue_001fa58c,DAT_001fa588,DAT_001fa4bc);
                    /* WARNING: Subroutine does not return */
    FUN_00003538();
  }
  return 0;
}

