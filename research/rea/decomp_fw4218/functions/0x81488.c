// rea decompile_all
// name: FUN_00081488
// address: 0x81488
// body: available
// range: 0x81488-0x81587 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00081488(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_14 [4];
  
  iVar1 = FUN_00071d70(param_1,s_LogFileThread_0008158c,1,2,0x14,DAT_00081588,0x14,DAT_00081588,
                       DAT_00081588,DAT_00081588,DAT_00081588);
  piVar2 = (int *)FUN_001054b8(iVar1 + 0x114);
  iVar1 = _DAT_0008159c;
  piVar2[-0x45] = _DAT_0008159c;
  *piVar2 = iVar1 + 0x38;
  uVar3 = FUN_00230e4c(auStack_14);
  iVar1 = FUN_00232050(piVar2 + 1,uVar3);
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  iVar1 = FUN_0006e188(iVar1 + 0x10,iVar1 + -4,s___TimerHandler_0008159e + 2,DAT_00081588,
                       DAT_00081588,DAT_00081588,DAT_00081588,DAT_00081588);
  *(undefined4 *)(iVar1 + 0x120) = param_2;
  FUN_00231388(iVar1 + -0x10);
  uVar3 = FUN_001c6a94(0x1000,DAT_000815b0);
  *(undefined4 *)(iVar1 + -0xc) = uVar3;
  FUN_0006df20(iVar1,0x1e,0x14,DAT_000815b8,DAT_000815b4);
  return iVar1 + -0x128;
}

