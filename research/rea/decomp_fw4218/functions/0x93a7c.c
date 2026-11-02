// rea decompile_all
// name: FUN_00093a7c
// address: 0x93a7c
// body: available
// range: 0x93a7c-0x93adb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00093a7c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_18 [8];
  int iStack_10;
  undefined4 local_c;
  
  iStack_10 = param_1;
  local_c = param_2;
  FUN_001a2920(auStack_18,param_1);
  *(undefined4 *)(param_1 + 0x128) = local_c;
  iVar1 = FUN_002011c4(&local_c,s_sds___cne_AppSettings_Global_uRe_00093adc);
  if (iVar1 != 0) {
    FUN_001a2938(auStack_18);
  }
  else {
    FUN_00002898(s_ERROR__GeneralSettings__Could_NO_00093b04);
    FUN_001a2938(auStack_18);
  }
  return iVar1 != 0;
}

