// rea decompile_all
// name: FUN_00075770
// address: 0x75770
// body: available
// range: 0x75770-0x758b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00075770(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x18) + 4))();
  }
  uVar1 = FUN_0019f358(param_1);
  pcVar2 = (char *)FUN_001a0808(0x40,uVar1);
  if (pcVar2 != (char *)0x0) {
    iVar4 = *(int *)(param_1 + 0x24);
    uVar1 = FUN_0019f358(param_1);
    *(undefined4 *)pcVar2 = s__S__SuluSIFDevice_UART__initiali_000758c8._0_4_;
    pcVar2[0xc] = '\0';
    pcVar2[0xd] = '\0';
    pcVar2[0xe] = '\0';
    pcVar2[0xf] = '\0';
    *(char **)(pcVar2 + 4) = s_UartRxBuffer_000758b8;
    *(int *)(pcVar2 + 8) = iVar4;
    FUN_0017ae30(pcVar2 + 0xc,s_UartRxBuffer_000758b8,1);
    pcVar2[0x2c] = '\0';
    pcVar2[0x2d] = '\0';
    pcVar2[0x2e] = '\0';
    pcVar2[0x2f] = '\0';
    pcVar2[0x30] = '\0';
    pcVar2[0x31] = '\0';
    pcVar2[0x32] = '\0';
    pcVar2[0x33] = '\0';
    pcVar2[0x34] = '\0';
    pcVar2[0x35] = '\0';
    pcVar2[0x36] = '\0';
    pcVar2[0x37] = '\0';
    pcVar2[0x38] = '\0';
    pcVar2[0x39] = '\0';
    pcVar2[0x3a] = '\0';
    pcVar2[0x3b] = '\0';
    pcVar2[0x3c] = '\0';
    pcVar2[0x3d] = '\0';
    iVar3 = FUN_001a0808(iVar4,uVar1);
    *(int *)(pcVar2 + 0x2c) = iVar3;
    *(int *)(pcVar2 + 0x30) = iVar3 + iVar4;
    *(int *)(pcVar2 + 0x34) = iVar3;
    *(int *)(pcVar2 + 0x38) = iVar3;
  }
  *(char **)(param_1 + 0x18) = pcVar2;
  if (pcVar2 != (char *)0x0) {
    iVar3 = *(int *)(param_1 + 0x24);
    uVar1 = FUN_0019f358(param_1);
    if (*(int *)(param_1 + 8) != 0) {
      FUN_0019f30c();
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    iVar3 = iVar3 + 1;
    iVar4 = FUN_001a0808(iVar3,uVar1);
    *(int *)(param_1 + 8) = iVar4;
    if (iVar4 != 0) {
      *(int *)(param_1 + 0x10) = iVar4;
      *(int *)(param_1 + 0xc) = iVar4 + iVar3;
      *(int *)(param_1 + 0x14) = iVar4;
      return 1;
    }
    FUN_000028a4(s_SuluSIFDevice_UART__initialize__C_0007590c);
    return 0;
  }
  FUN_000028a4(s__S__SuluSIFDevice_UART__initiali_000758c8 + 4);
  return 0;
}

