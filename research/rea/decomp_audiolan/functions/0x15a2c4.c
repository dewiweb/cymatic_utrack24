// rea decompile_all
// name: FUN_0015a2c4
// address: 0x15a2c4
// body: available
// range: 0x15a2c4-0x15a343 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x15a340 to 0x289c thunk_FUN_000028a4 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0015a2c4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_000028a4(s_deframer_warplet_configuration_0015a344);
  FUN_000028a4(s________________________________0015a368);
  uVar2 = 0;
  uVar3 = 0;
  uVar4 = 0;
  if ((**(int **)(param_2 + 0x14) != 0) &&
     (iVar1 = FUN_0016deb0(**(int **)(param_2 + 0x14),_DAT_0015a390,DAT_0015a38c,0xffffffff),
     iVar1 != 0)) {
    uVar2 = *(undefined1 *)(iVar1 + 0x10);
    uVar4 = *(undefined4 *)(iVar1 + 0x14);
    uVar3 = *(undefined4 *)(iVar1 + 0x18);
  }
  FUN_000028a4(s____Muted___d_0015a392 + 2,uVar2);
  FUN_000028a4(s_StartWaitCount___d_0015a3a4,uVar3);
  thunk_FUN_000028a4(s_CurWaitCounter___d_0015a3bc,uVar4);
  return;
}

