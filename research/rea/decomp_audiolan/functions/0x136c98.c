// rea decompile_all
// name: FUN_00136c98
// address: 0x136c98
// body: available
// range: 0x136c98-0x136d17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00136c98(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = DAT_00136d1c;
  param_1[3] = 0;
  uVar2 = DAT_00136d18;
  param_1[4] = param_2;
  *param_1 = uVar1;
  *(short *)(param_1 + 6) = (short)uVar2;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  uVar2 = FUN_001339a0(*(int *)(param_2 + 0x24) + 0x8a4,0);
  piVar3 = (int *)FUN_001315a0(uVar2,0);
  param_1[5] = piVar3;
  (**(code **)(*piVar3 + 0x38))();
  (**(code **)(*(int *)param_1[5] + 0x50))((int *)param_1[5],param_1);
  return param_1;
}

