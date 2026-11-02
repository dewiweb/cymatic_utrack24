// rea decompile_all
// name: FUN_0019c794
// address: 0x19c794
// body: available
// range: 0x19c794-0x19c873 inclusive
// range: 0x19c876-0x19c899 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x19c844 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x19c864 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x19c87e to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0019c794(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  
  if (param_1 == 0) {
    return (int *)0x0;
  }
  uVar7 = param_1 + 3U & 0xfffffffc;
  if (uVar7 < 0xc) {
    uVar7 = 0xc;
  }
  else if (0x40000 < uVar7) {
    return (int *)0x0;
  }
  FUN_001b0d28(DAT_0019c89c);
  iVar3 = *DAT_0019c8a0;
  piVar2 = (int *)DAT_0019c8a0[2];
  uVar4 = (int)piVar2 - iVar3;
  while( true ) {
    if (0x40000 - uVar7 <= uVar4) {
      FUN_001b0d60(DAT_0019c89c);
      return (int *)0x0;
    }
    piVar6 = (int *)(iVar3 + uVar4);
    if (((char)piVar6[2] == '\0') && (uVar7 <= (*piVar6 - uVar4) - 0xc)) break;
    uVar4 = *(uint *)(iVar3 + uVar4);
  }
  if ((*piVar6 - uVar4) - 0xc < uVar7 + 0x18) {
    *(undefined1 *)(piVar6 + 2) = 1;
  }
  else {
    iVar8 = uVar4 + uVar7 + 0xc;
    piVar5 = (int *)(iVar3 + iVar8);
    *(undefined1 *)(piVar5 + 2) = 0;
    *piVar5 = *piVar6;
    piVar5[1] = uVar4;
    *piVar6 = iVar8;
    *(undefined1 *)(piVar6 + 2) = 1;
    if (*piVar5 != 0x40000) {
      *(int *)(*piVar5 + iVar3 + 4) = iVar8;
    }
  }
  piVar5 = DAT_0019c8a0;
  if (piVar6 == piVar2) {
    piVar1 = DAT_0019c8a0 + 1;
    for (; ((char)piVar2[2] != '\0' && (piVar2 != (int *)*piVar1));
        piVar2 = (int *)(*piVar2 + iVar3)) {
    }
    DAT_0019c8a0[2] = (int)piVar2;
    if ((piVar2 != (int *)*piVar1) && ((char)piVar2[2] != '\0')) {
      FUN_00015210(s_Assertion___s__failed_at_line__d_0019c8c8,s_mem_malloc___lfree_>used_0019c8ac,
                   DAT_0019c8a8,DAT_0019c8a4,param_4);
                    /* WARNING: Subroutine does not return */
      FUN_000032f8();
    }
  }
  FUN_001b0d60(DAT_0019c89c);
  if ((uint)piVar5[1] < (int)piVar6 + uVar7 + 0xc) {
    FUN_00015210(s_Assertion___s__failed_at_line__d_0019c8c8,
                 s_mem_malloc__allocated_memory_not_0019c900,DAT_0019c8fc,DAT_0019c8a4,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_000032f8();
  }
  if (((uint)piVar6 & 3) == 0) {
    return piVar6 + 3;
  }
  FUN_00015210(s_Assertion___s__failed_at_line__d_0019c8c8,
               s_mem_malloc__allocated_memory_pro_0019c930,0x268,DAT_0019c8a4,param_4);
                    /* WARNING: Subroutine does not return */
  FUN_000032f8();
}

