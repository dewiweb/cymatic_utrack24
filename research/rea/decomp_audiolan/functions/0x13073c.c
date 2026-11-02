// rea decompile_all
// name: FUN_0013073c
// address: 0x13073c
// body: available
// range: 0x13073c-0x130813 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0013073c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [12];
  
  if (*(short *)(param_1 + 0xf8) != *(short *)(param_1 + 0x8c)) {
    FUN_0013f91c(param_1 + 0xf0);
    iVar2 = 0;
    if (*(short *)(param_1 + 0x8c) != 0) {
      do {
        FUN_0010e7e0(auStack_20);
        FUN_0010e6f4(auStack_20,iVar2 + 1);
        FUN_0013fa88(param_1 + 0xf0,auStack_20,0);
        FUN_0010e7f4(auStack_20);
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)(uint)*(ushort *)(param_1 + 0x8c));
    }
    if (*(int *)(param_1 + 0x124) != 0) {
      FUN_000e986c(*(int *)(*(int *)(param_1 + 0x84) + 0x24) + 0x484);
    }
    (**(code **)(**(int **)(param_1 + 0x7c) + 0x44))(auStack_18);
    uVar1 = FUN_0013966c(*(undefined4 *)(*(int *)(param_1 + 0x84) + 0x24),auStack_18,0,
                         param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x124) = uVar1;
    return;
  }
  return;
}

