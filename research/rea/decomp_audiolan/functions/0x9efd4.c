// rea decompile_all
// name: FUN_0009efd4
// address: 0x9efd4
// body: available
// range: 0x9efd4-0x9f0ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0009efd4(int param_1)

{
  int iVar1;
  int iVar2;
  char acStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (*(int **)(param_1 + 0x594) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x594) + 0x10))();
    if (*(int **)(param_1 + 0x594) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x594) + 4))();
    }
    *(undefined4 *)(param_1 + 0x594) = 0;
  }
  if (*(int *)(param_1 + 0x5cc) != 0) {
    acStack_30[0] = '\x01';
    acStack_30[1] = 0;
    acStack_30[2] = 0;
    uStack_24 = DAT_0009f0f4;
    uStack_20 = DAT_0009f0f4;
    uStack_1c = DAT_0009f0f4;
    uStack_18 = DAT_0009f0f4;
    uStack_14 = DAT_0009f0f4;
    uStack_2c = DAT_0009f0f0;
    uStack_28 = 0;
    FUN_0014fc7c(acStack_30);
    if (acStack_30[0] != '\0') {
      iVar1 = FUN_001a0808(0x164,1);
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = FUN_00058bd4(iVar1,acStack_30);
      }
      *(int *)(param_1 + 0x594) = iVar2;
      if ((iVar2 != 0) && (iVar2 = FUN_000578b0(iVar2,DAT_0009f0f8,0x11), iVar2 != 0)) {
        FUN_00057578(*(undefined4 *)(param_1 + 0x594),param_1 + 300);
      }
    }
    FUN_001da314(&uStack_14);
    FUN_001da314(&uStack_18);
    FUN_001da314(&uStack_1c);
    FUN_001da314(&uStack_20);
    FUN_001da314(&uStack_24);
    return;
  }
  return;
}

