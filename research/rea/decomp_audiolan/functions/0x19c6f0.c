// rea decompile_all
// name: FUN_0019c6f0
// address: 0x19c6f0
// body: available
// range: 0x19c6f0-0x19c733 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x19c72e to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019c6f0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = DAT_0019c738;
  puVar2 = (undefined4 *)(DAT_0019c734 & 0xfffffffc);
  *DAT_0019c738 = puVar2;
  puVar2[1] = 0;
  *puVar2 = 0x40000;
  *(undefined1 *)(puVar2 + 2) = 0;
  puVar1[1] = puVar2 + 0x10000;
  *(undefined1 *)(puVar2 + 0x10002) = 1;
  puVar2[0x10000] = 0x40000;
  puVar2[0x10001] = 0x40000;
  puVar1[2] = puVar2;
  iVar3 = FUN_001b0d34(DAT_0019c73c);
  if (iVar3 != 0) {
    FUN_00015210(s_Assertion___s__failed_at_line__d_0019c760,
                 s___failed_to_create_mem_mutex_0019c742 + 2,300,_DAT_0019c740);
                    /* WARNING: Subroutine does not return */
    FUN_000032f8();
  }
  return;
}

