// rea decompile_all
// name: FUN_0007c870
// address: 0x7c870
// body: available
// range: 0x7c870-0x7c96b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0007c870(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_18;
  
  local_18 = param_4;
  FUN_001a0700();
  iVar1 = FUN_001d8f14(param_1 + 0x40,param_2);
  if (iVar1 == 0) {
    FUN_001a0d18(param_1);
    return 1;
  }
  iVar1 = FUN_00041c14(*(undefined4 *)(param_1 + 0x28),&local_18);
  if (iVar1 == 0) {
    FUN_000028a4(s_ERROR__OutgoingStream__Could_NOT_0007c980);
  }
  else {
    iVar1 = FUN_00042a98(local_18,s_User_SIPIdentity_0007c96c,*param_2);
    if (iVar1 != 0) {
      FUN_00041dd4(local_18);
      FUN_001da4a8(param_1 + 0x40,param_2);
      FUN_001a0d18(param_1);
      if (*(int *)(param_1 + 0x24) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x24) + 0x250) = 1;
      }
      FUN_000bdd20(*(undefined4 *)(param_1 + 0x24),param_1,5);
      return 1;
    }
    FUN_000028a4(s_ERROR__OutgoingStream__Could_NOT_0007c9c0,s_User_SIPIdentity_0007c96c);
    FUN_00041dd4(local_18);
  }
  FUN_001a0d18(param_1);
  return 0;
}

