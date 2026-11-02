// rea decompile_all
// name: FUN_00139584
// address: 0x139584
// body: available
// range: 0x139584-0x13960b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00139584(int *param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_3 != 0) {
    FUN_000f4e84();
    uVar2 = FUN_000f5150();
    *(undefined1 *)(param_1 + 0x3d) = 0;
    uVar1 = FUN_001b6f0c(uVar2);
    *(undefined1 *)(param_1 + 0x36) = uVar1;
    *(undefined1 *)((int)param_1 + 0xd9) = uVar1;
    iVar3 = FUN_001b6f18(uVar2);
    param_1[0x39] = iVar3;
    param_1[0x3a] = iVar3;
    iVar3 = FUN_001b6f24(uVar2);
    param_1[0x3b] = iVar3;
    param_1[0x3c] = iVar3;
    iVar3 = FUN_001b6f74(uVar2);
    param_1[0x38] = iVar3;
    param_1[0x37] = iVar3;
    param_1 = (int *)(**(code **)(*param_1 + 0x50))(param_1);
  }
  return param_1;
}

