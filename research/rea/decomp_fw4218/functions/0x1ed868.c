// rea decompile_all
// name: FUN_001ed868
// address: 0x1ed868
// body: available
// range: 0x1ed868-0x1ed8db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001ed868(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = DAT_001ed8dc;
  if (param_1 == 0) {
    FUN_00013290(s_Assertion___s__failed_at_line__d_001ed908,
                 s___netconn_getaddr__invalid_conn_001ed8e6 + 2,0x8c,_DAT_001ed8e4);
    return uVar1;
  }
  if (param_2 != 0) {
    if (param_3 == 0) {
      FUN_00013290(s_Assertion___s__failed_at_line__d_001ed908,
                   s_netconn_getaddr__invalid_port_001ed95c,0x8e,_DAT_001ed8e4);
    }
    else {
      uVar1 = FUN_001fde2c();
      FUN_001f91c4();
      if (-0xb < *(char *)(param_1 + 8)) {
        *(char *)(param_1 + 8) = (char)uVar1;
      }
      FUN_001f9210();
    }
    return uVar1;
  }
  FUN_00013290(s_Assertion___s__failed_at_line__d_001ed908,s_netconn_getaddr__invalid_addr_001ed93c,
               0x8d,_DAT_001ed8e4);
  return uVar1;
}

