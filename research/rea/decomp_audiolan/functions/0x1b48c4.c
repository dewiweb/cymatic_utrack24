// rea decompile_all
// name: FUN_001b48c4
// address: 0x1b48c4
// body: available
// range: 0x1b48c4-0x1b495b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1b48e2 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1b48f2 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1b4954 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001b48c4(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = DAT_001b4978;
  uVar1 = DAT_001b495c;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_00015210(DAT_001b496c,DAT_001b4974,DAT_001b4970,DAT_001b4960,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_000032f8();
  }
  if (DAT_001b495c - *(ushort *)(param_1 + 0x2c) < param_2) {
    FUN_00015210(DAT_001b496c,DAT_001b4968,DAT_001b4964,DAT_001b4960,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_000032f8();
  }
  param_2 = *(ushort *)(param_1 + 0x2c) + param_2;
  *(short *)(param_1 + 0x2c) = (short)param_2;
  if (uVar3 < (param_2 & 0xffff)) {
    *(short *)(param_1 + 0x2c) = (short)uVar3;
  }
  iVar2 = DAT_001b4980;
  iVar5 = *(int *)(param_1 + 0x28);
  iVar6 = *(int *)(param_1 + 0x30);
  iVar4 = iVar5 + (uint)*(ushort *)(param_1 + 0x2c);
  uVar3 = DAT_001b497c;
  if (*(ushort *)(param_1 + 0x36) <= DAT_001b497c) {
    uVar3 = (uint)*(ushort *)(param_1 + 0x36);
  }
  if (-1 < (int)(iVar4 - (iVar6 + uVar3))) {
    *(ushort *)(param_1 + 0x2e) = *(ushort *)(param_1 + 0x2c);
    if (iVar2 <= iVar4 - *(int *)(param_1 + 0x30)) {
      *(byte *)(param_1 + 0x1e) = *(byte *)(param_1 + 0x1e) | 2;
      FUN_001b2d18();
    }
    return;
  }
  uVar3 = 0;
  if ((iVar5 - iVar6 < 1) && (uVar3 = iVar6 - iVar5, uVar1 < uVar3)) {
    FUN_00015210(DAT_001b496c,DAT_001b4988,600,DAT_001b4984,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_000032f8();
  }
  *(short *)(param_1 + 0x2e) = (short)uVar3;
  return;
}

