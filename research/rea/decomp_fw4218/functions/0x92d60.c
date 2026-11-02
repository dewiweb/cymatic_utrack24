// rea decompile_all
// name: FUN_00092d60
// address: 0x92d60
// body: available
// range: 0x92d60-0x92def inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_00092d60(int param_1,uint param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uStack_20;
  undefined4 uStack_1c;
  uint local_18;
  
  uStack_20 = param_2;
  uStack_1c = param_3;
  local_18 = param_4;
  FUN_001a2920(&uStack_20,param_1);
  if (*(byte *)(param_1 + 0x100) == param_2) {
    FUN_001a2938(&uStack_20);
    uVar1 = 1;
  }
  else {
    local_18 = param_2;
    iVar2 = FUN_00200f9c(&local_18,s_sds___cne_AppSettings_Global_Dev_00092df0);
    if (iVar2 == 0) {
      FUN_00002898(s_ERROR__GeneralSettings__Could_NO_00092e18);
      FUN_00002898(s_ERROR__GeneralSettings__PARAMETE_00092e58);
      FUN_001a2938(&uStack_20);
      uVar1 = 0;
    }
    else {
      *(char *)(param_1 + 0x100) = (char)param_2;
      FUN_001a2938(&uStack_20);
      uVar1 = FUN_000f4e84();
      FUN_000f5268(uVar1,1);
      uVar1 = 1;
    }
  }
  return CONCAT44(uStack_20,uVar1);
}

