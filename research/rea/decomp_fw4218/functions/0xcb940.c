// rea decompile_all
// name: FUN_000cb940
// address: 0xcb940
// body: available
// range: 0xcb940-0xcb9f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xcb9c0 to 0x6f678 FUN_0006f678 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000cb940(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0xd8) != '\0') {
    return 1;
  }
  uVar1 = FUN_000b4964(0);
  iVar2 = FUN_000b4840(uVar1,s_FileSystemService_000cb9f4,param_1 + 0xdc);
  if (iVar2 == 0) {
    FUN_00002898(DAT_000cba14);
    return 0;
  }
  iVar2 = (**(code **)(**(int **)(param_1 + 0xe4) + 0x14))(*(int **)(param_1 + 0xe4),param_1 + 0xc4)
  ;
  if (iVar2 == 0) {
    FUN_00002898(_DAT_000cba18);
    return 0;
  }
  iVar2 = FUN_001ad784(param_1 + 0xe8,1,*(undefined4 *)(param_1 + 0xcc));
  if (iVar2 == 0) {
    FUN_00002898(s____ERROR__FileAccessHandler__sta_000cba19 + 3);
    return 0;
  }
  *(undefined1 *)(param_1 + 0xd8) = 1;
  uVar1 = FUN_0006f678(param_1);
  return uVar1;
}

