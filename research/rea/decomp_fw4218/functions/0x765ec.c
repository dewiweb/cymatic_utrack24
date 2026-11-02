// rea decompile_all
// name: FUN_000765ec
// address: 0x765ec
// body: available
// range: 0x765ec-0x76733 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000765ec(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x18) + 4))();
  }
  uVar1 = FUN_001eed14(param_1);
  puVar2 = (undefined4 *)FUN_001f01c4(0x40,uVar1);
  if (puVar2 != (undefined4 *)0x0) {
    iVar4 = *(int *)(param_1 + 0x24);
    uVar1 = FUN_001eed14(param_1);
    *puVar2 = _DAT_00076744;
    puVar2[3] = 0;
    puVar2[1] = s_UartRxBuffer_00076734;
    puVar2[2] = iVar4;
    FUN_001cf568(puVar2 + 3,s_UartRxBuffer_00076734,1);
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    *(undefined1 *)(puVar2 + 0xf) = 0;
    *(undefined1 *)((int)puVar2 + 0x3d) = 0;
    iVar3 = FUN_001f01c4(iVar4,uVar1);
    puVar2[0xb] = iVar3;
    puVar2[0xc] = iVar3 + iVar4;
    puVar2[0xd] = iVar3;
    puVar2[0xe] = iVar3;
  }
  *(undefined4 **)(param_1 + 0x18) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    iVar3 = *(int *)(param_1 + 0x24);
    uVar1 = FUN_001eed14(param_1);
    if (*(int *)(param_1 + 8) != 0) {
      FUN_001eecc8();
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    iVar3 = iVar3 + 1;
    iVar4 = FUN_001f01c4(iVar3,uVar1);
    *(int *)(param_1 + 8) = iVar4;
    if (iVar4 != 0) {
      *(int *)(param_1 + 0x10) = iVar4;
      *(int *)(param_1 + 0xc) = iVar4 + iVar3;
      *(int *)(param_1 + 0x14) = iVar4;
      return 1;
    }
    FUN_00002898(s_SuluSIFDevice_UART__initialize__C_00076788);
    return 0;
  }
  FUN_00002898(s___SuluSIFDevice_UART__initialize_00076746 + 2);
  return 0;
}

