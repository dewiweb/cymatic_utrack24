// rea decompile_all
// name: FUN_000fe1e4
// address: 0xfe1e4
// body: available
// range: 0xfe1e4-0xfe29f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000fe1e4(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined2 local_60;
  undefined2 local_5e;
  undefined4 local_5c;
  undefined2 local_58;
  undefined2 local_56;
  undefined1 auStack_54 [64];
  
  local_6c = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_64 = 0;
  local_5e = 0;
  local_5c = 0;
  local_56 = 0;
  iVar1 = FUN_0010f718(auStack_54);
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined1 *)(iVar1 + 0x35) = 1;
  FUN_000ee880(iVar1 + -0x1c);
  uVar2 = FUN_0015e07c(param_1);
  FUN_000ed7d4(&local_70,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x18),
               *(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20),uVar2);
  (**(code **)(**(int **)(param_1 + 0x18) + 0x10))(*(int **)(param_1 + 0x18),&local_70,param_3);
  FUN_000ee880(&local_70);
  FUN_000e9f98(&local_5c);
  FUN_000e9f98(&local_64);
  return;
}

