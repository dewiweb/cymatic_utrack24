// rea decompile_all
// name: FUN_0019c960
// address: 0x19c960
// body: available
// range: 0x19c960-0x19ca49 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x19c99e to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x19c9c0 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0019c960(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  
  uVar5 = param_2 + 3U & 0xfffffffc;
  if (uVar5 < 0xc) {
    uVar5 = 0xc;
  }
  else if (0x40000 < uVar5) {
    return 0;
  }
  if ((param_1 < *DAT_0019ca4c) || (DAT_0019ca4c[1] <= param_1)) {
    FUN_00015210(s_Assertion___s__failed_at_line__d_0019ca6c,s___mem_trim__legal_memory_0019ca52 + 2
                 ,0x186,_DAT_0019ca50);
                    /* WARNING: Subroutine does not return */
    FUN_000032f8();
  }
  piVar6 = (int *)(param_1 - 0xc);
  iVar7 = (int)piVar6 - *DAT_0019ca4c;
  uVar8 = (*piVar6 - iVar7) - 0xc;
  if (uVar8 < uVar5) {
    FUN_00015210(s_Assertion___s__failed_at_line__d_0019ca6c,
                 s_mem_trim_can_only_shrink_memory_0019caa0,0x198,_DAT_0019ca50);
                    /* WARNING: Subroutine does not return */
    FUN_000032f8();
  }
  if (uVar5 == uVar8) {
    return param_1;
  }
  FUN_001b0d28(DAT_0019cac0);
  uVar2 = *DAT_0019ca4c;
  piVar3 = (int *)(*piVar6 + uVar2);
  if ((char)piVar3[2] == '\0') {
    iVar1 = *piVar3;
    iVar4 = iVar7 + uVar5 + 0xc;
    if ((int *)DAT_0019ca4c[2] == piVar3) {
      DAT_0019ca4c[2] = uVar2 + iVar4;
    }
    piVar3 = (int *)(uVar2 + iVar4);
    *(undefined1 *)(piVar3 + 2) = 0;
    *piVar3 = iVar1;
    piVar3[1] = iVar7;
    *piVar6 = iVar4;
    if (*piVar3 != 0x40000) {
      *(int *)(*piVar3 + uVar2 + 4) = iVar4;
    }
  }
  else if (uVar5 + 0x18 <= uVar8) {
    iVar4 = iVar7 + uVar5 + 0xc;
    piVar3 = (int *)(uVar2 + iVar4);
    if (piVar3 < (int *)DAT_0019ca4c[2]) {
      DAT_0019ca4c[2] = (uint)piVar3;
    }
    *(undefined1 *)(piVar3 + 2) = 0;
    iVar1 = *piVar6;
    piVar3[1] = iVar7;
    *piVar3 = iVar1;
    *piVar6 = iVar4;
    if (*piVar3 != 0x40000) {
      *(int *)(*piVar3 + uVar2 + 4) = iVar4;
    }
  }
  FUN_001b0d60(DAT_0019cac0);
  return param_1;
}

