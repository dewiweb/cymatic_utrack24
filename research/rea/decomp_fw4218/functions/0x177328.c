// rea decompile_all
// name: FUN_00177328
// address: 0x177328
// body: available
// range: 0x177328-0x177487 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00177328(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  switch(param_2) {
  case 0:
    iVar1 = FUN_0005ac50(param_1 + 0x27c);
    if (iVar1 == 0) {
      pcVar2 = s_FAILED_0017748c;
    }
    else {
      pcVar2 = &DAT_00177488;
    }
    uVar3 = FUN_00002898(s_GPIO_test__s_00177494,pcVar2);
    break;
  case 1:
    if (-1 < *(int *)(param_1 + 0x5c)) {
      FUN_0001320c(*(undefined4 *)(param_1 + 0x5c));
    }
    iVar1 = FUN_0005aee4(param_1 + 0x27c);
    if (iVar1 == 0) {
      pcVar2 = s_FAILED_0017748c;
    }
    else {
      pcVar2 = &DAT_00177488;
    }
    uVar3 = FUN_00002898(s_UART_0_test__s_001774a4,pcVar2);
    break;
  case 2:
    iVar1 = FUN_0005a860(param_1 + 0x27c);
    if (iVar1 == 0) {
      pcVar2 = s_FAILED_0017748c;
    }
    else {
      pcVar2 = &DAT_00177488;
    }
    uVar3 = FUN_00002898(s_SPI_test__s_001774b8,pcVar2);
    break;
  case 3:
    iVar1 = FUN_0005a5ac(param_1 + 0x27c);
    if (iVar1 == 0) {
      pcVar2 = s_FAILED_0017748c;
    }
    else {
      pcVar2 = &DAT_00177488;
    }
    uVar3 = FUN_00002898(s_AV0_2_test__s_001774c8,pcVar2);
    break;
  case 4:
    iVar1 = FUN_0005a748(param_1 + 0x27c);
    if (iVar1 == 0) {
      pcVar2 = s_FAILED_0017748c;
    }
    else {
      pcVar2 = &DAT_00177488;
    }
    uVar3 = FUN_00002898(s_AV4_test__s_001774dc,pcVar2);
    break;
  default:
    uVar3 = FUN_00002898(s_Unknown_test_mode__d_001774ec,param_2);
  }
  return uVar3;
}

