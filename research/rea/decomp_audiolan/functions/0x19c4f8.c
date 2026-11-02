// rea decompile_all
// name: FUN_0019c4f8
// address: 0x19c4f8
// body: available
// range: 0x19c4f8-0x19c5f5 inclusive
// range: 0x19c5f8-0x19c5f9 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x19c512 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x19c532 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x19c562 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x19c574 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x19c58a to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x19c5a4 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019c4f8(uint param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar1 = _DAT_0019c658;
  if (param_1 == 0) {
    return;
  }
  if ((param_1 & 3) != 0) {
    FUN_00015210(s_Assertion___s__failed_at_line__d_0019c624,
                 s___mem_free__sanity_check_alignme_0019c5fe + 2,0x140,_DAT_0019c5fc);
                    /* WARNING: Subroutine does not return */
    FUN_000032f8();
  }
  if ((param_1 < *_DAT_0019c658) || (_DAT_0019c658[1] <= param_1)) {
    FUN_00015210(s_Assertion___s__failed_at_line__d_0019c624,
                 s____mem_free__legal_memory_0019c659 + 3,0x142,_DAT_0019c5fc);
                    /* WARNING: Subroutine does not return */
    FUN_000032f8();
  }
  FUN_001b0d28(DAT_0019c674);
  puVar4 = (uint *)(param_1 - 0xc);
  if (*(char *)(param_1 - 4) == '\0') {
    FUN_00015210(s_Assertion___s__failed_at_line__d_0019c624,s_mem_free__mem_>used_0019c694,0x153,
                 _DAT_0019c5fc);
                    /* WARNING: Subroutine does not return */
    FUN_000032f8();
  }
  *(undefined1 *)(param_1 - 4) = 0;
  if (puVar4 < (uint *)puVar1[2]) {
    puVar1[2] = (uint)puVar4;
  }
  puVar2 = (uint *)*puVar1;
  if (puVar4 < puVar2) {
    FUN_00015210(s_Assertion___s__failed_at_line__d_0019c624,s___plug_holes__mem_>__ram_0019c67a + 2
                 ,0xf1,_DAT_0019c678);
                    /* WARNING: Subroutine does not return */
    FUN_000032f8();
  }
  if ((uint *)puVar1[1] <= puVar4) {
    FUN_00015210(s_Assertion___s__failed_at_line__d_0019c624,s_plug_holes__mem_<_ram_end_0019c6a8,
                 0xf2,_DAT_0019c678);
                    /* WARNING: Subroutine does not return */
    FUN_000032f8();
  }
  if (0x40000 < *puVar4) {
    FUN_00015210(s_Assertion___s__failed_at_line__d_0019c624,
                 s_plug_holes__mem_>next_<__MEM_SIZ_0019c6c4,0xf6,_DAT_0019c678);
                    /* WARNING: Subroutine does not return */
    FUN_000032f8();
  }
  puVar3 = (uint *)(*puVar4 + (int)puVar2);
  if (((puVar4 != puVar3) && ((char)puVar3[2] == '\0')) && (puVar3 != (uint *)puVar1[1])) {
    if ((uint *)puVar1[2] == puVar3) {
      puVar1[2] = (uint)puVar4;
    }
    *puVar4 = *puVar3;
    *(int *)((int)puVar2 + *puVar3 + 4) = (int)puVar4 - (int)puVar2;
  }
  puVar3 = (uint *)(*(int *)(param_1 - 8) + (int)puVar2);
  if ((puVar3 != puVar4) && ((char)puVar3[2] == '\0')) {
    if ((uint *)puVar1[2] == puVar4) {
      puVar1[2] = (uint)puVar3;
    }
    *puVar3 = *puVar4;
    *(int *)((int)puVar2 + *puVar4 + 4) = (int)puVar3 - (int)puVar2;
  }
  FUN_001b0d60(DAT_0019c674);
  return;
}

