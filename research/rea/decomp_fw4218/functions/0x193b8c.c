// rea decompile_all
// name: FUN_00193b8c
// address: 0x193b8c
// body: available
// range: 0x193b8c-0x193c43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00193b8c(int param_1)

{
  undefined4 uVar1;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  
  FUN_0019f188(auStack_40,0x40);
  uVar1 = FUN_001be138(param_1);
  FUN_0019f024(auStack_40,uVar1);
  FUN_0019f024(auStack_40,0x82);
  FUN_0019f024(auStack_40,0);
  uVar1 = FUN_0017277c(auStack_20,param_1 + 100);
  (**(code **)(**(int **)(param_1 + 0x60) + 0xd4))(auStack_30);
  FUN_0019a864(**(undefined4 **)(*(int *)(param_1 + 0x60) + 0x7c),auStack_30,uVar1,
               *(undefined2 *)(param_1 + 0x74),0x81,auStack_40);
  uVar1 = FUN_001be138(param_1);
  FUN_0018952c(*(undefined4 *)(param_1 + 0x60),uVar1);
  FUN_0019f1d8(auStack_40);
  return;
}

