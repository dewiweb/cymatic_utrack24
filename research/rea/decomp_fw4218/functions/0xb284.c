// rea decompile_all
// name: FUN_0000b284
// address: 0xb284
// body: available
// range: 0xb284-0xb367 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0000b284(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = *(int *)(param_1 + 0x18);
  bVar4 = false;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    if (*(char *)(iVar1 + 0x65) == '\0') {
      if (*(char *)(iVar1 + 100) == '\x01') {
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
      else {
        bVar4 = *(int *)(param_1 + 0x34) != 0;
        *(uint *)(param_1 + 0x30) = (uint)bVar4;
      }
      *(bool *)(iVar1 + 0xb0) = bVar4;
    }
  }
  FUN_0000a87c(param_1,0);
  if ((*(int *)(param_1 + 0x18) != 0) && (*(char *)(*(int *)(param_1 + 0x18) + 0x65) == '\0')) {
    iVar2 = 0;
    iVar1 = 0;
    do {
      *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2 * 4 + 0x68) = 0xffffffff;
      iVar3 = iVar2 + 1;
      iVar1 = iVar1 + 2;
      iVar2 = iVar2 + 2;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar3 * 4 + 0x68) = 0xffffffff;
    } while (iVar1 < 0x10);
  }
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  iVar1 = *(int *)(param_1 + 0x4c);
  if (*(int *)(param_1 + 0x48) != iVar1) {
    *(uint *)(param_1 + 0x4c) = iVar1 - (iVar1 - *(int *)(param_1 + 0x48) & 0xfffffffcU);
    return;
  }
  return;
}

