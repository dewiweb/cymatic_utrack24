// rea decompile_all
// name: FUN_0012bf50
// address: 0x12bf50
// body: available
// range: 0x12bf50-0x12bfdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012bf50(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  FUN_0010e728(auStack_38,s_Trashcan_seems_to_be_growing_out_0012bfe0);
  FUN_0010e6f4(auStack_38,param_2);
  FUN_0010e518(auStack_38,_DAT_0012c010);
  uVar1 = FUN_0015e89c(auStack_38);
  FUN_00116ec0(auStack_30,*param_1 + 0x1e0);
  uVar2 = FUN_0010f674(auStack_20,auStack_30,0);
  FUN_0012c434(param_1,uVar2,0x3000,0x2000,s____Trashcan_issue_0012c011 + 3,uVar1);
  FUN_0010e7f4(auStack_38);
  return;
}

