// rea decompile_all
// name: FUN_001d8d38
// address: 0x1d8d38
// body: available
// range: 0x1d8d38-0x1d8dc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1d8dc0 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001d8d38(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  
  if (*(uint *)(param_1 + 0x10) <= *(int *)(param_1 + 0xc) + 1U) {
    iVar5 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8);
    uVar4 = *(int *)(param_1 + 0x14) << 1;
    uVar1 = iVar5 + 1;
    if (uVar4 < uVar1) {
      uVar4 = uVar1;
    }
    iVar2 = FUN_001ab47c(*(int *)(param_1 + 8),uVar4);
    *(uint *)(param_1 + 0x14) = uVar4;
    *(int *)(param_1 + 8) = iVar2;
    *(int *)(param_1 + 0xc) = iVar2 + iVar5;
    *(uint *)(param_1 + 0x10) = iVar2 + uVar4;
  }
  puVar3 = *(undefined1 **)(param_1 + 0xc);
  *(undefined1 **)(param_1 + 0xc) = puVar3 + 1;
  *puVar3 = 0;
  if (*(int *)(param_1 + 0xc) == *(int *)(param_1 + 8)) {
                    /* WARNING: Subroutine does not return */
    FUN_000032f8();
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  return;
}

