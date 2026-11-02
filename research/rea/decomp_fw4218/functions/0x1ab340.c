// rea decompile_all
// name: FUN_001ab340
// address: 0x1ab340
// body: available
// range: 0x1ab340-0x1ab3a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001ab340(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_18;
  
  if (param_2 < 0x80) {
    iVar1 = 1;
  }
  else if (param_2 < 0x800) {
    iVar1 = 2;
  }
  else {
    iVar1 = 3;
  }
  iVar1 = *(int *)(param_1 + 8) + iVar1;
  local_18 = param_4;
  if (*(char *)(param_1 + 0xc) != '\0') {
    uVar4 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      uVar4 = *(uint *)(*(int *)(param_1 + 4) + 4);
    }
    if (iVar1 + 1U <= uVar4) goto LAB_001ab380;
  }
  iVar2 = FUN_000d6154(param_1 + 4);
  if (iVar2 == 0) {
    return param_1;
  }
LAB_001ab380:
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != 0) {
    iVar2 = iVar2 + 8;
  }
  iVar2 = iVar2 + *(int *)(param_1 + 8);
  local_18 = CONCAT22(local_18._2_2_,(short)param_2);
  iVar3 = FUN_000c7830(&local_18,iVar2);
  *(undefined1 *)(iVar2 + iVar3) = 0;
  *(int *)(param_1 + 8) = iVar1;
  return param_1;
}

