// rea decompile_all
// name: FUN_000b6878
// address: 0xb6878
// body: available
// range: 0xb6878-0xb694f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000b6878(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_1c [8];
  int iStack_14;
  int local_10;
  
  iStack_14 = param_1;
  local_10 = param_2;
  FUN_001a2920(auStack_1c,param_1);
  if (*(int *)(param_1 + 0x34) == local_10) {
    FUN_001a2938(auStack_1c);
    uVar1 = 1;
  }
  else if (((local_10 < 1) || (7 < local_10)) || (local_10 % 2 != 1)) {
    FUN_001a2938(auStack_1c);
    uVar1 = 0;
  }
  else {
    iVar2 = FUN_00200f9c(&local_10,s_sds___cne_AppSettings_Playback_S_000b6950);
    if (iVar2 == 0) {
      FUN_00002898(_DAT_000b6980);
      FUN_00002898(s___ERROR__PlaybackSettings__PARAM_000b6982 + 2);
      FUN_001a2938(auStack_1c);
      uVar1 = 0;
    }
    else {
      *(int *)(param_1 + 0x34) = local_10;
      FUN_001a2938(auStack_1c);
      uVar1 = FUN_000f4e84();
      FUN_000f52f4(uVar1,4);
      uVar1 = 1;
    }
  }
  return uVar1;
}

