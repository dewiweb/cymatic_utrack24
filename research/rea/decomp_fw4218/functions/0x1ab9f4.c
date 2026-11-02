// rea decompile_all
// name: FUN_001ab9f4
// address: 0x1ab9f4
// body: available
// range: 0x1ab9f4-0x1abb87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001ab9f4(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_18 [8];
  
  uVar2 = FUN_000f4dc8(auStack_18,s_No_error_condition_is_present_001abb88);
  iVar3 = param_1 + 0x24;
  uVar1 = FUN_00078122(iVar3,uVar2);
  *(undefined1 *)(param_1 + 0x7a) = uVar1;
  FUN_000f4e1c(auStack_18);
  uVar2 = FUN_000f4dc8(auStack_18,s_File_is_not_targeted_for_use_by_t_001abba8);
  uVar1 = FUN_00078122(iVar3,uVar2);
  *(undefined1 *)(param_1 + 0x7b) = uVar1;
  FUN_000f4e1c(auStack_18);
  uVar2 = FUN_000f4dc8(auStack_18,_DAT_001abbd4);
  uVar1 = FUN_00078122(iVar3,uVar2);
  *(undefined1 *)(param_1 + 0x7c) = uVar1;
  FUN_000f4e1c(auStack_18);
  uVar2 = FUN_000f4dc8(auStack_18,s___Device_is_unable_to_write_memo_001abbd6 + 2);
  uVar1 = FUN_00078122(iVar3,uVar2);
  *(undefined1 *)(param_1 + 0x7d) = uVar1;
  FUN_000f4e1c(auStack_18);
  uVar2 = FUN_000f4dc8(auStack_18,s_Memory_erase_function_failed_001abbfc);
  uVar1 = FUN_00078122(iVar3,uVar2);
  *(undefined1 *)(param_1 + 0x7e) = uVar1;
  FUN_000f4e1c(auStack_18);
  uVar2 = FUN_000f4dc8(auStack_18,s_Memory_erase_check_failed_001abc1c);
  uVar1 = FUN_00078122(iVar3,uVar2);
  *(undefined1 *)(param_1 + 0x7f) = uVar1;
  FUN_000f4e1c(auStack_18);
  uVar2 = FUN_000f4dc8(auStack_18,s_Program_memory_function_failed_001abc38);
  uVar1 = FUN_00078122(iVar3,uVar2);
  *(undefined1 *)(param_1 + 0x80) = uVar1;
  FUN_000f4e1c(auStack_18);
  uVar2 = FUN_000f4dc8(auStack_18,s_Programmed_memory_failed_verific_001abc58);
  uVar1 = FUN_00078122(iVar3,uVar2);
  *(undefined1 *)(param_1 + 0x81) = uVar1;
  FUN_000f4e1c(auStack_18);
  uVar2 = FUN_000f4dc8(auStack_18,DAT_001abc80);
  uVar1 = FUN_00078122(iVar3,uVar2);
  *(undefined1 *)(param_1 + 0x82) = uVar1;
  FUN_000f4e1c(auStack_18);
  uVar2 = FUN_000f4dc8(auStack_18,DAT_001abc84);
  uVar1 = FUN_00078122(iVar3,uVar2);
  *(undefined1 *)(param_1 + 0x83) = uVar1;
  FUN_000f4e1c(auStack_18);
  uVar2 = FUN_000f4dc8(auStack_18,_DAT_001abc88);
  uVar1 = FUN_00078122(iVar3,uVar2);
  *(undefined1 *)(param_1 + 0x84) = uVar1;
  FUN_000f4e1c(auStack_18);
  uVar2 = FUN_000f4dc8(auStack_18,s___iString_indicates_a_vendor_spe_001abc8a + 2);
  uVar1 = FUN_00078122(iVar3,uVar2);
  *(undefined1 *)(param_1 + 0x85) = uVar1;
  FUN_000f4e1c(auStack_18);
  uVar2 = FUN_000f4dc8(auStack_18,s_Device_detected_unexpected_USB_r_001abcb8);
  uVar1 = FUN_00078122(iVar3,uVar2);
  *(undefined1 *)(param_1 + 0x86) = uVar1;
  FUN_000f4e1c(auStack_18);
  uVar2 = FUN_000f4dc8(auStack_18,s_Device_detected_unexpected_power_001abce8);
  uVar1 = FUN_00078122(iVar3,uVar2);
  *(undefined1 *)(param_1 + 0x87) = uVar1;
  FUN_000f4e1c(auStack_18);
  uVar2 = FUN_000f4dc8(auStack_18,s_Something_went_wrong__but_the_de_001abd14);
  uVar1 = FUN_00078122(iVar3,uVar2);
  *(undefined1 *)(param_1 + 0x88) = uVar1;
  FUN_000f4e1c(auStack_18);
  uVar2 = FUN_000f4dc8(auStack_18,s_Device_stalled_an_unexpected_req_001abd54);
  uVar1 = FUN_00078122(iVar3,uVar2);
  *(undefined1 *)(param_1 + 0x89) = uVar1;
  FUN_000f4e1c(auStack_18);
  return;
}

