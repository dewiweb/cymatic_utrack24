// rea decompile_all
// name: FUN_000499ac
// address: 0x499ac
// body: available
// range: 0x499ac-0x49a63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000499ac(undefined4 param_1,char *param_2,char *param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint local_18;
  
  local_18 = param_4;
  iVar1 = FUN_001f3414(param_1,0,&local_18);
  if (iVar1 == 0) {
    if ((local_18 & 0x2000) == 0) {
      *param_2 = '\0';
    }
    else {
      *param_2 = '\x01';
    }
    if ((local_18 & 0x100) == 0) {
      *param_3 = '\0';
    }
    else {
      *param_3 = '\x01';
    }
    if (*param_3 == '\x01') {
      puVar3 = &DAT_00049a64;
    }
    else {
      puVar3 = (undefined *)0x49a6c;
    }
    if (*param_2 == '\x01') {
      puVar4 = &DAT_00049a74;
    }
    else {
      puVar4 = &DAT_00049a7c;
    }
    FUN_00013290(s_Current_status___s___s_duplex_00049a80,puVar4,puVar3);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

