// rea decompile_all
// name: FUN_00138190
// address: 0x138190
// body: available
// range: 0x138190-0x13828f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00138190(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_30 [20];
  
  FUN_0009c3b0(param_1);
  FUN_00064a34(auStack_30);
  FUN_000649bc(auStack_30,0x2e);
  FUN_000649d4(auStack_30,0x3b);
  FUN_000649c4(auStack_30,0x14);
  iVar1 = FUN_001b23b0(auStack_30);
  FUN_000649cc(auStack_30,iVar1 + 0xb0);
  piVar2 = (int *)FUN_0022bc90(param_1 + 4);
  (**(code **)(*piVar2 + 0x38))(piVar2,auStack_30,1,1,0);
  iVar1 = FUN_001b23b0(auStack_30);
  iVar3 = FUN_00003e14(*(int *)(param_1 + 0x14) * 0xb0,100);
  FUN_000649cc(auStack_30,iVar1 + iVar3);
  piVar2 = (int *)FUN_0022bc90(param_1 + 4);
  (**(code **)(*piVar2 + 0x38))(piVar2,auStack_30,1,0,1);
  FUN_00064a58(auStack_30);
  return;
}

