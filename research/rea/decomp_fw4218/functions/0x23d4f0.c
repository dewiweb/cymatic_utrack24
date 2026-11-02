// rea decompile_all
// name: FUN_0023d4f0
// address: 0x23d4f0
// body: available
// range: 0x23d4f0-0x23d57b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0023d4f0(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_24;
  int *piStack_20;
  int local_1c;
  undefined4 uStack_18;
  
  piStack_20 = param_1;
  local_1c = param_2;
  uStack_18 = param_3;
  local_24 = FUN_0020b224(0,param_1);
  piVar1 = (int *)FUN_00247bfc(&local_1c,&local_24);
  iVar4 = *piVar1;
  iVar2 = FUN_0022f658(param_1,iVar4,0);
  *param_1 = iVar2;
  uVar3 = FUN_0023d3d4(param_1);
  FUN_00247864(uVar3,local_1c,param_3,param_1);
  param_1[1] = *param_1 + local_1c * 8;
  param_1[2] = *param_1 + iVar4 * 8;
  return;
}

