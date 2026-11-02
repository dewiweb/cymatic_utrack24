// rea decompile_all
// name: FUN_000e1a0c
// address: 0xe1a0c
// body: available
// range: 0xe1a0c-0xe1ab3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_000e1a0c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_44 [16];
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar2 = param_7;
  iStack_34 = param_1;
  uStack_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  iVar1 = FUN_0022dab4(param_1 + 4,&param_6);
  if (iVar1 == 0) {
    FUN_00002898(s_UIStateTransitions__addTransitio_000e1ab4);
    FUN_00002898(s_the_event_notification_function_f_000e1ae8);
    FUN_00002898(s_doesn_t_exist__or_wasn_t_added_t_000e1b20);
    FUN_00002898(s_in_the_constructor_of_UIStateTra_000e1b4c);
  }
  else {
    uVar2 = FUN_000e19f4(auStack_44,param_4,param_5,uVar2,param_3);
    uVar3 = FUN_00233478(param_1 + 4,&param_6);
    uVar3 = FUN_00233674(uVar3,&uStack_30);
    FUN_002357a0(uVar3,uVar2);
  }
  return iVar1 != 0;
}

