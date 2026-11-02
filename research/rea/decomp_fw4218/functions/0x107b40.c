// rea decompile_all
// name: FUN_00107b40
// address: 0x107b40
// body: available
// range: 0x107b40-0x107ca3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00107b40(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  iVar2 = (**(code **)(**(int **)(param_1 + 8) + 8))();
  iVar3 = 0;
  if ((iVar2 != 0) && (iVar3 = FUN_000bd6fc(param_1 + 0x10), iVar3 != *(int *)(param_1 + 0xa4))) {
    uVar4 = FUN_0011eda0();
    FUN_00120008(uVar4,*(int *)(param_1 + 0xa4) + 1,*(int *)(param_1 + 0x9c) == 0);
    puVar5 = (undefined4 *)FUN_0023d888(param_1 + 0xcc,*(undefined4 *)(param_1 + 0xa4));
    uVar6 = *puVar5;
    uVar4 = FUN_0011eda0();
    FUN_0011fd30(uVar4,uVar6,*(int *)(param_1 + 0x9c) == 1);
    puVar5 = (undefined4 *)FUN_002444e4(param_1 + 0xd8,*(undefined4 *)(param_1 + 0xa4));
    uVar6 = *puVar5;
    uVar4 = FUN_0011eda0();
    FUN_0011f970(uVar4,uVar6,1);
    iVar3 = FUN_0023d888(param_1 + 0xcc,*(undefined4 *)(param_1 + 0xa4));
    uVar1 = *(undefined1 *)(iVar3 + 5);
    uVar4 = FUN_0011eda0();
    FUN_0011f1cc(uVar4,*(int *)(param_1 + 0x9c) == 3,uVar1);
    uVar4 = FUN_0006a588(*(undefined4 *)(param_1 + 0xc0),*(uint *)(param_1 + 0xa4) & 0xff);
    uVar6 = FUN_0011eda0();
    FUN_0011f234(uVar6,*(int *)(param_1 + 0x9c) == 4,uVar4);
    iVar3 = FUN_00069240(*(undefined4 *)(param_1 + 0xa4));
  }
  return iVar3;
}

