// rea decompile_all
// name: FUN_001ec9c0
// address: 0x1ec9c0
// body: available
// range: 0x1ec9c0-0x1ecabd inclusive
// range: 0x1ecac0-0x1ecac1 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1ec9da to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1ec9fa to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1eca2a to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1eca3c to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1eca52 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1eca6c to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001ec9c0(uint param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  
  uVar1 = s__D__mem_free__legal_memory_001ecb20._0_4_;
  if (param_1 == 0) {
    return;
  }
  if ((param_1 & 3) != 0) {
    FUN_00013290(s_Assertion___s__failed_at_line__d_001ecaec,
                 s___mem_free__sanity_check_alignme_001ecac6 + 2,0x140,_DAT_001ecac4);
                    /* WARNING: Subroutine does not return */
    FUN_00003538();
  }
  if ((param_1 < *(uint *)s__D__mem_free__legal_memory_001ecb20._0_4_) ||
     (*(uint *)(s__D__mem_free__legal_memory_001ecb20._0_4_ + 4) <= param_1)) {
    FUN_00013290(s_Assertion___s__failed_at_line__d_001ecaec,
                 s__D__mem_free__legal_memory_001ecb20 + 4,0x142,_DAT_001ecac4);
                    /* WARNING: Subroutine does not return */
    FUN_00003538();
  }
  FUN_001f92fc(DAT_001ecb3c);
  puVar4 = (uint *)(param_1 - 0xc);
  if (*(char *)(param_1 - 4) == '\0') {
    FUN_00013290(s_Assertion___s__failed_at_line__d_001ecaec,s_mem_free__mem_>used_001ecb5c,0x153,
                 _DAT_001ecac4);
                    /* WARNING: Subroutine does not return */
    FUN_00003538();
  }
  *(undefined1 *)(param_1 - 4) = 0;
  if (puVar4 < *(uint **)(uVar1 + 8)) {
    *(uint **)(uVar1 + 8) = puVar4;
  }
  puVar2 = *(uint **)uVar1;
  if (puVar4 < puVar2) {
    FUN_00013290(s_Assertion___s__failed_at_line__d_001ecaec,s___plug_holes__mem_>__ram_001ecb42 + 2
                 ,0xf1,_DAT_001ecb40);
                    /* WARNING: Subroutine does not return */
    FUN_00003538();
  }
  if (*(uint **)(uVar1 + 4) <= puVar4) {
    FUN_00013290(s_Assertion___s__failed_at_line__d_001ecaec,s_plug_holes__mem_<_ram_end_001ecb70,
                 0xf2,_DAT_001ecb40);
                    /* WARNING: Subroutine does not return */
    FUN_00003538();
  }
  if (0x40000 < *puVar4) {
    FUN_00013290(s_Assertion___s__failed_at_line__d_001ecaec,
                 s_plug_holes__mem_>next_<__MEM_SIZ_001ecb8c,0xf6,_DAT_001ecb40);
                    /* WARNING: Subroutine does not return */
    FUN_00003538();
  }
  puVar3 = (uint *)(*puVar4 + (int)puVar2);
  if (((puVar4 != puVar3) && ((char)puVar3[2] == '\0')) && (puVar3 != *(uint **)(uVar1 + 4))) {
    if (*(uint **)(uVar1 + 8) == puVar3) {
      *(uint **)(uVar1 + 8) = puVar4;
    }
    *puVar4 = *puVar3;
    *(int *)((int)puVar2 + *puVar3 + 4) = (int)puVar4 - (int)puVar2;
  }
  puVar3 = (uint *)(*(int *)(param_1 - 8) + (int)puVar2);
  if ((puVar3 != puVar4) && ((char)puVar3[2] == '\0')) {
    if (*(uint **)(uVar1 + 8) == puVar4) {
      *(uint **)(uVar1 + 8) = puVar3;
    }
    *puVar3 = *puVar4;
    *(int *)((int)puVar2 + *puVar4 + 4) = (int)puVar3 - (int)puVar2;
  }
  FUN_001f9334(DAT_001ecb3c);
  return;
}

