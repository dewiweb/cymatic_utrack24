// rea decompile_all
// name: FUN_0016f6bc
// address: 0x16f6bc
// body: available
// range: 0x16f6bc-0x16f703 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0016f6bc(int param_1,int *param_2,int param_3,undefined4 param_4,undefined1 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int local_30;
  int local_2c;
  int iStack_24;
  int *piStack_20;
  int iStack_1c;
  undefined4 local_18;
  
  iStack_24 = param_1;
  piStack_20 = param_2;
  iStack_1c = param_3;
  local_18 = param_4;
  FUN_001a44cc(&local_30,0);
  if ((((param_1 != 0) && (param_3 != 0)) && (iVar1 = *param_2, iVar1 != -1)) &&
     ((iVar1 < local_30 || ((local_30 == iVar1 && (param_2[1] < local_2c)))))) {
    uVar2 = FUN_0016e268(param_5,local_18);
    return uVar2;
  }
  return 0;
}

