// rea decompile_all
// name: FUN_001ed0b4
// address: 0x1ed0b4
// body: available
// range: 0x1ed0b4-0x1ed0fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1ed0f2 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_001ed0b4(uint param_1)

{
  undefined4 *puVar1;
  
  if (0xd < param_1) {
    FUN_00013290(s_Assertion___s__failed_at_line__d_001ed124,
                 s___memp_malloc__type_<_MEMP_MAX_001ed102 + 2,0x18e,_DAT_001ed100);
    return (undefined4 *)0x0;
  }
  FUN_001f91c4();
  puVar1 = *(undefined4 **)(_DAT_001ed158 + param_1 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)(_DAT_001ed158 + param_1 * 4) = *puVar1;
    if (((uint)puVar1 & 3) != 0) {
      FUN_00013290(s_Assertion___s__failed_at_line__d_001ed124,
                   s_E_memp_malloc__memp_properly_ali_001ed15a + 2,0x19f,_DAT_001ed100);
                    /* WARNING: Subroutine does not return */
      FUN_00003538();
    }
  }
  FUN_001f9210();
  return puVar1;
}

