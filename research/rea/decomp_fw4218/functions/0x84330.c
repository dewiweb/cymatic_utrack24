// rea decompile_all
// name: FUN_00084330
// address: 0x84330
// body: available
// range: 0x84330-0x843df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00084330(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_30 = param_1;
  uStack_2c = param_2;
  uStack_28 = param_3;
  uStack_24 = param_4;
  FUN_00176b20(&uStack_28,0,param_2);
  piVar1 = (int *)FUN_000f8ee0();
  iVar2 = (**(code **)(*piVar1 + 0x80))(piVar1,&uStack_28);
  if (iVar2 == 0) {
    FUN_00002898(s_ERROR__Could_not_pause_the_curre_000843e0);
  }
  FUN_00176b20(&uStack_30,1,param_2);
  piVar1 = (int *)FUN_000f8ee0();
  iVar3 = (**(code **)(*piVar1 + 0x80))(piVar1,&uStack_30);
  if (iVar3 == 0) {
    FUN_00002898(s_ERROR__Could_not_pause_the_curre_00084414);
  }
  FUN_00176b64(&uStack_30);
  FUN_00176b64(&uStack_28);
  return iVar3 != 0 && iVar2 != 0;
}

