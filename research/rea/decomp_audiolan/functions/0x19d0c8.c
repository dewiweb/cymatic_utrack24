// rea decompile_all
// name: FUN_0019d0c8
// address: 0x19d0c8
// body: available
// range: 0x19d0c8-0x19d123 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0019d0c8(int param_1,undefined4 *param_2,undefined2 *param_3)

{
  if (param_1 == 0) {
    FUN_00015210(s_Assertion___s__failed_at_line__d_0019d144,
                 s___netbuf_data__invalid_buf_0019d126 + 2,0xc3,_DAT_0019d124);
    return 0xfffffff1;
  }
  if (param_2 == (undefined4 *)0x0) {
    FUN_00015210(s_Assertion___s__failed_at_line__d_0019d144,s_netbuf_data__invalid_dataptr_0019d178
                 ,0xc4,_DAT_0019d124);
    return 0xfffffff1;
  }
  if (param_3 == (undefined2 *)0x0) {
    FUN_00015210(s_Assertion___s__failed_at_line__d_0019d144,s_netbuf_data__invalid_len_0019d198,
                 0xc5,_DAT_0019d124);
    return 0xfffffff1;
  }
  if (*(int *)(param_1 + 4) != 0) {
    *param_2 = *(undefined4 *)(*(int *)(param_1 + 4) + 4);
    *param_3 = *(undefined2 *)(*(int *)(param_1 + 4) + 10);
    return 0;
  }
  return 0xfffffffd;
}

