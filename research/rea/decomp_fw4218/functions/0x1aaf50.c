// rea decompile_all
// name: FUN_001aaf50
// address: 0x1aaf50
// body: available
// range: 0x1aaf50-0x1aafa5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_001aaf50(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  
  *param_1 = DAT_001aafa8;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (param_2 < 0x80) {
    iVar2 = 1;
  }
  else if (param_2 < 0x800) {
    iVar2 = 2;
  }
  else {
    iVar2 = 3;
  }
  local_18 = param_4;
  iVar1 = FUN_001aae5c(param_1,iVar2 + 1);
  if (iVar1 != 0) {
    iVar1 = param_1[1];
    if (iVar1 != 0) {
      iVar1 = iVar1 + 8;
    }
    local_18 = CONCAT22(local_18._2_2_,(short)param_2);
    FUN_000c7830(&local_18,iVar1);
    param_1[2] = iVar2;
    *(undefined1 *)(iVar2 + iVar1) = 0;
  }
  return param_1;
}

