// rea decompile_all
// name: FUN_0006df20
// address: 0x6df20
// body: available
// range: 0x6df20-0x6dfa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0006df20(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int iStack_24;
  int iStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iStack_24 = param_1;
  iStack_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  local_28 = FUN_001d06b8();
  iVar2 = param_1 + 200;
  FUN_001f00bc(iVar2);
  piVar1 = (int *)**(int **)(param_1 + 0x118);
  while( true ) {
    if (piVar1 == *(int **)(param_1 + 0x118)) {
      local_38 = local_1c;
      local_30 = local_28;
      local_2c = param_5;
      local_34 = local_18;
      local_3c = param_2;
      FUN_0023471c(param_1 + 0x108,&local_3c);
      thunk_EXT_FUN_0040010c(param_1 + 0xec);
      FUN_001f06d4(iVar2);
      return 1;
    }
    if (piVar1[2] == param_2) break;
    piVar1 = (int *)*piVar1;
  }
  FUN_001f06d4(iVar2);
  return 0;
}

