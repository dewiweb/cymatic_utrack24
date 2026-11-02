// rea decompile_all
// name: FUN_0006b340
// address: 0x6b340
// body: available
// range: 0x6b340-0x6b5b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0006b340(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_20;
  
  uVar1 = DAT_0006b5b8;
  local_20 = param_4;
  if (*DAT_0006b5b4 != 0) {
    FUN_001a0700();
    for (piVar4 = DAT_0006b5b4; iVar3 = *piVar4, iVar3 != 0; piVar4 = piVar4 + 1) {
      if ((*(char *)(iVar3 + 0x14) == '\0') && (*(int *)(iVar3 + 0x28) == 3)) {
        *(undefined2 *)(param_1 + 2) = *(undefined2 *)(iVar3 + 0x24);
        param_1[3] = *(undefined4 *)(*(int *)(iVar3 + 8) + 0x20);
        param_1[4] = *(undefined4 *)(*(int *)(iVar3 + 8) + 0x1c);
        param_1[5] = **(undefined4 **)(iVar3 + 0x18);
        param_1[6] = *(undefined4 *)(*(int *)(iVar3 + 0x18) + 4);
        param_1[7] = *(undefined4 *)(*(int *)(iVar3 + 0x18) + 8);
        param_1[8] = *(undefined4 *)(*(int *)(iVar3 + 0x18) + 0xc);
        param_1[9] = *(undefined4 *)(*(int *)(iVar3 + 0x18) + 0x10);
        param_1[10] = *(undefined4 *)(*(int *)(iVar3 + 0x18) + 0x14);
        param_1[0xb] = *(undefined4 *)(*(int *)(iVar3 + 0x18) + 0x18);
        param_1[0xc] = *(undefined4 *)(*(int *)(iVar3 + 0x18) + 0x1c);
        param_1[0xd] = *(undefined4 *)(*(int *)(iVar3 + 0x18) + 0x20);
        param_1[0xe] = *(undefined4 *)(*(int *)(iVar3 + 0x18) + 0x24);
        param_1[0xf] = *(undefined4 *)(*(int *)(iVar3 + 0x18) + 0x28);
        param_1[0x10] = *(undefined4 *)(*(int *)(iVar3 + 0x18) + 0x2c);
      }
    }
    FUN_001a0d18(uVar1);
  }
  uVar1 = DAT_0006b5b8;
  if (*DAT_0006b5bc != 0) {
    FUN_001a0700();
    for (piVar4 = DAT_0006b5bc; iVar3 = *piVar4, iVar3 != 0; piVar4 = piVar4 + 1) {
      if ((*(char *)(iVar3 + 0x10) == '\0') && (*(int *)(iVar3 + 0x24) == 3)) {
        *(undefined2 *)(param_1 + 0x11) = *(undefined2 *)(iVar3 + 0x20);
        param_1[0x12] = *(undefined4 *)(*(int *)(iVar3 + 4) + 0x20);
        param_1[0x13] = *(undefined4 *)(*(int *)(iVar3 + 4) + 0x1c);
        param_1[0x14] = **(undefined4 **)(iVar3 + 0x14);
        param_1[0x15] = *(undefined4 *)(*(int *)(iVar3 + 0x14) + 4);
        param_1[0x16] = *(undefined4 *)(*(int *)(iVar3 + 0x14) + 8);
        param_1[0x17] = *(undefined4 *)(*(int *)(iVar3 + 0x14) + 0xc);
        param_1[0x18] = *(undefined4 *)(*(int *)(iVar3 + 0x14) + 0x10);
        param_1[0x19] = *(undefined4 *)(*(int *)(iVar3 + 0x14) + 0x14);
        param_1[0x1a] = *(undefined4 *)(*(int *)(iVar3 + 0x14) + 0x18);
        param_1[0x1b] = *(undefined4 *)(*(int *)(iVar3 + 0x14) + 0x1c);
        param_1[0x1c] = *(undefined4 *)(*(int *)(iVar3 + 0x14) + 0x20);
        param_1[0x1d] = *(undefined4 *)(*(int *)(iVar3 + 0x14) + 0x24);
        param_1[0x1e] = *(undefined4 *)(*(int *)(iVar3 + 0x14) + 0x28);
        param_1[0x1f] = *(undefined4 *)(*(int *)(iVar3 + 0x14) + 0x2c);
      }
    }
    FUN_001a0d18(uVar1);
  }
  FUN_001b714c(&local_20);
  puVar2 = DAT_0006b5c0;
  *param_1 = *DAT_0006b5c0;
  param_1[1] = puVar2[1];
  FUN_001b7160(local_20);
  return 1;
}

