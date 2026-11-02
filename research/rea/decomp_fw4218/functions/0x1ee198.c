// rea decompile_all
// name: FUN_001ee198
// address: 0x1ee198
// body: available
// range: 0x1ee198-0x1ee263 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001ee198(char *param_1,undefined4 param_2,int param_3,byte param_4,int *param_5)

{
  bool bVar1;
  undefined4 local_38;
  char *local_34;
  undefined4 local_2c;
  int local_28;
  byte local_24;
  undefined4 local_20;
  char *local_1c;
  int local_18;
  
  if (param_1 == (char *)0x0) {
    FUN_00013290(s_Assertion___s__failed_at_line__d_001ee290,s_netconn_write__invalid_conn_001ee2c8,
                 DAT_001ee2c4,DAT_001ee264);
    return -0xf;
  }
  if (*param_1 == '\x10') {
    if (param_3 == 0) {
      return 0;
    }
    if ((param_1[0xb8] & 2U) == 0 && (param_4 & 4) == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
      if (param_5 == (int *)0x0) {
        return -7;
      }
    }
    local_38 = DAT_001ee2e4;
    local_1c = param_1 + 0x80;
    local_20 = 0;
    local_34 = param_1;
    local_2c = param_2;
    local_28 = param_3;
    local_24 = param_4;
    if (*(int *)(param_1 + 0xb0) != 0) {
      local_20 = FUN_001f933c();
    }
    local_18 = FUN_001fde2c(&local_38);
    if ((local_18 == 0) && (param_5 != (int *)0x0)) {
      if ((bVar1) || (*(int *)(local_1c + 0x30) != 0)) {
        *param_5 = local_28;
      }
      else {
        *param_5 = param_3;
      }
    }
    FUN_001f91c4();
    if (-0xb < param_1[8]) {
      param_1[8] = (char)local_18;
    }
    FUN_001f9210();
    return local_18;
  }
  FUN_00013290(s_Assertion___s__failed_at_line__d_001ee290,
               s_netconn_write__invalid_conn_>typ_001ee26c,DAT_001ee268,DAT_001ee264);
  return -7;
}

