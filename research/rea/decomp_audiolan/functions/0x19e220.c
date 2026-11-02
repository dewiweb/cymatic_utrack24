// rea decompile_all
// name: FUN_0019e220
// address: 0x19e220
// body: available
// range: 0x19e220-0x19e2d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0019e220(char *param_1,undefined4 param_2,int param_3,byte param_4,int *param_5)

{
  bool bVar1;
  int iVar2;
  undefined4 local_30;
  char *local_2c;
  undefined4 local_24;
  int local_20;
  byte local_1c;
  
  if (param_1 == (char *)0x0) {
    FUN_00015210(s_Assertion___s__failed_at_line__d_0019e300,s_netconn_write__invalid_conn_0019e338,
                 DAT_0019e334,DAT_0019e2d4);
    return -0xf;
  }
  if (*param_1 == '\x10') {
    if (param_3 == 0) {
      return 0;
    }
    if ((param_1[0xb4] & 2U) == 0 && (param_4 & 4) == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
      if (param_5 == (int *)0x0) {
        return -7;
      }
    }
    local_30 = DAT_0019e354;
    local_2c = param_1;
    local_24 = param_2;
    local_20 = param_3;
    local_1c = param_4;
    iVar2 = FUN_001b6d94(&local_30);
    if ((iVar2 == 0) && (param_5 != (int *)0x0)) {
      if (bVar1) {
        *param_5 = local_20;
      }
      else {
        *param_5 = param_3;
      }
    }
    FUN_001b0bf0();
    if (-0xb < param_1[8]) {
      param_1[8] = (char)iVar2;
    }
    FUN_001b0c3c();
    return iVar2;
  }
  FUN_00015210(s_Assertion___s__failed_at_line__d_0019e300,
               s_netconn_write__invalid_conn_>typ_0019e2dc,DAT_0019e2d8,DAT_0019e2d4);
  return -7;
}

