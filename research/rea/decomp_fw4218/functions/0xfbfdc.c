// rea decompile_all
// name: FUN_000fbfdc
// address: 0xfbfdc
// body: available
// range: 0xfbfdc-0xfc0f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000fbfdc(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 auStack_3c [20];
  undefined1 auStack_28 [20];
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    FUN_001b8b80(auStack_28,param_1);
    FUN_001b8b80(auStack_3c,param_1);
    uVar2 = FUN_001b2390(auStack_28);
    FUN_000649d4(auStack_28,uVar2);
    iVar1 = FUN_001b2390(auStack_28);
    FUN_000649bc(auStack_28,iVar1 + -2);
    piVar3 = (int *)FUN_0022bc90(param_1 + 1);
    (**(code **)(*piVar3 + 0x38))(piVar3,auStack_28,1,1,1);
    uVar2 = FUN_001b23c8(auStack_3c);
    FUN_000649bc(auStack_3c,uVar2);
    iVar1 = FUN_001b2390(auStack_3c);
    FUN_000649d4(auStack_3c,iVar1 + 2);
    piVar3 = (int *)FUN_0022bc90(param_1 + 1);
    (**(code **)(*piVar3 + 0x38))(piVar3,auStack_3c,1,1,1);
    FUN_00064a58(auStack_3c);
    uVar2 = FUN_00064a58(auStack_28);
  }
  return uVar2;
}

