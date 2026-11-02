// rea decompile_all
// name: FUN_0001c0f0
// address: 0x1c0f0
// body: available
// range: 0x1c0f0-0x1c1c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0001c0f0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0001c1f4;
  if (param_1 == 0 || param_4 == 0) {
    return 5;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_000028a4(s_ERROR__CHAIoNet_Start__Port_alre_0001c1c4);
    return 8;
  }
  *(int *)(param_1 + 4) = param_4;
  iVar1 = FUN_001a0808(*(undefined4 *)(iVar2 + 0x1d0),1);
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 0) {
    FUN_000028a4(s_ERROR__CHAIoNet_Start__Failed_to_0001c240);
    return 1;
  }
  FUN_00003850(iVar1,*(undefined4 *)(iVar2 + 0x1d0),0x32);
  iVar2 = FUN_0017b1b0(param_1 + 0x14,s__VnmCHAICon_0001c1fb + 1,_DAT_0001c1f8,param_1);
  if (iVar2 != 0) {
    FUN_000028a4(s_ERROR__CHAIoNet_Start__Failed_to_0001c208);
    return 1;
  }
  return 0;
}

