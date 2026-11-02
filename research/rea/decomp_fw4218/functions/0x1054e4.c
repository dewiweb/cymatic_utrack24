// rea decompile_all
// name: FUN_001054e4
// address: 0x1054e4
// body: available
// range: 0x1054e4-0x10557f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_001054e4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_30 [16];
  
  uVar2 = param_6;
  iVar1 = FUN_0022dad0(param_1 + 4,&param_5);
  if (iVar1 == 0) {
    FUN_00002898(s_UIOverlayActivations__addActivat_00105580);
    FUN_00002898(s_the_event_notification_function_f_001055b4);
    FUN_00002898(s_doesn_t_exist__or_wasn_t_added_t_001055ec);
    FUN_00002898(s_in_the_constructor_of_UIOverlayA_00105618);
  }
  else {
    uVar2 = FUN_001054cc(auStack_30,param_2,param_4,uVar2,param_3);
    uVar3 = FUN_00233574(param_1 + 4,&param_5);
    FUN_00235df4(uVar3,uVar2);
  }
  return iVar1 != 0;
}

