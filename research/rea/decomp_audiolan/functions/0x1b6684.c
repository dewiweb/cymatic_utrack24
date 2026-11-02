// rea decompile_all
// name: FUN_001b6684
// address: 0x1b6684
// body: available
// range: 0x1b6684-0x1b66d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1b66c8 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001b6684(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = iVar4 + (uint)*(ushort *)(param_1 + 0x2c);
  uVar1 = DAT_001b66d4;
  if (*(ushort *)(param_1 + 0x36) <= DAT_001b66d4) {
    uVar1 = (uint)*(ushort *)(param_1 + 0x36);
  }
  if (-1 < (int)(iVar3 - (iVar2 + uVar1))) {
    *(ushort *)(param_1 + 0x2e) = *(ushort *)(param_1 + 0x2c);
    return iVar3 - iVar2;
  }
  if (iVar4 - iVar2 < 1) {
    if (DAT_001b66d8 < (uint)(iVar2 - iVar4)) {
      FUN_00015210(DAT_001b66e4,DAT_001b66e0,600,DAT_001b66dc);
                    /* WARNING: Subroutine does not return */
      FUN_000032f8();
    }
    *(short *)(param_1 + 0x2e) = (short)(iVar2 - iVar4);
  }
  else {
    *(undefined2 *)(param_1 + 0x2e) = 0;
  }
  return 0;
}

