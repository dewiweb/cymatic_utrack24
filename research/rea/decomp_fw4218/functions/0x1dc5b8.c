// rea decompile_all
// name: FUN_001dc5b8
// address: 0x1dc5b8
// body: available
// range: 0x1dc5b8-0x1dc667 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1dc658 to 0x3fe6c FUN_0003fe6c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001dc5b8(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)((int)param_1 - 0x155U & 0xffffffe0);
  FUN_00013290(s____>_HEAP_corrupt_ptr__p____s_001dc668,param_1,param_2);
  uVar1 = FUN_001cfb1c();
  iVar2 = FUN_001cfb1c();
  FUN_001d7430(DAT_001dc688,*(undefined4 *)(iVar2 + 8),uVar1);
  iVar2 = 0;
  do {
    if ((iVar2 / 8) * 8 - iVar2 == 0) {
      FUN_00002898(s_0x_08X__001dc68c,puVar4);
    }
    if (puVar4 == param_1) {
      pcVar3 = s__0x_08X__001dc698;
    }
    else {
      pcVar3 = s_0x_08X_001dc6a4;
    }
    FUN_00002898(pcVar3,*puVar4);
    iVar2 = iVar2 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar2 < 0x100);
  if (*(int *)s__P__Heap_corruption_detected_001dc6b0._0_4_ == 0) {
    do {
      FUN_001d0130(1000);
    } while( true );
  }
  FUN_0003fe6c(s__P__Heap_corruption_detected_001dc6b0 + 4);
  return;
}

