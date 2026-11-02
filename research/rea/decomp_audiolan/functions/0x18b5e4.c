// rea decompile_all
// name: FUN_0018b5e4
// address: 0x18b5e4
// body: available
// range: 0x18b5e4-0x18b693 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x18b684 to 0x3b20c FUN_0003b20c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0018b5e4(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)((int)param_1 - 0x155U & 0xffffffe0);
  FUN_00015210(s____>_HEAP_corrupt_ptr__p____s_0018b694,param_1,param_2);
  uVar1 = FUN_0017b3e4();
  iVar2 = FUN_0017b3e4();
  FUN_00185944(DAT_0018b6b4,*(undefined4 *)(iVar2 + 8),uVar1);
  iVar2 = 0;
  do {
    if ((iVar2 / 8) * 8 - iVar2 == 0) {
      FUN_000028a4(s_0x_08X__0018b6b8,puVar4);
    }
    if (puVar4 == param_1) {
      pcVar3 = s__0x_08X__0018b6c4;
    }
    else {
      pcVar3 = s_0x_08X_0018b6d0;
    }
    FUN_000028a4(pcVar3,*puVar4);
    iVar2 = iVar2 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar2 < 0x100);
  if (*(int *)s_____Heap_corruption_detected_0018b6dc._0_4_ == 0) {
    do {
      FUN_0017b9f8(1000);
    } while( true );
  }
  FUN_0003b20c(s_____Heap_corruption_detected_0018b6dc + 4);
  return;
}

