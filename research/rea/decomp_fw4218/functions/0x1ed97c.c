// rea decompile_all
// name: FUN_001ed97c
// address: 0x1ed97c
// body: available
// range: 0x1ed97c-0x1ed9f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001ed97c(int param_1,int param_2)

{
  int iVar1;
  char local_48 [8];
  int local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 *local_34;
  undefined1 auStack_30 [32];
  
  if (param_1 == 0) {
    FUN_00013290(s_Assertion___s__failed_at_line__d_001eda38,
                 s_netconn_gethostbyname__invalid_n_001eda14,DAT_001eda10,DAT_001eda0c);
    return -0xf;
  }
  if (param_2 != 0) {
    iVar1 = FUN_001f934c(auStack_30,0,s_lwIP_gethostbyname_001ed9f4);
    local_48[0] = (char)iVar1;
    if (iVar1 == 0) {
      local_38 = auStack_30;
      local_40 = param_1;
      local_3c = param_2;
      local_34 = local_48;
      FUN_001fde6c(DAT_001eda08,&local_40,1);
      FUN_001f91d4(auStack_30,0);
      FUN_001f9344(auStack_30);
      iVar1 = (int)local_48[0];
    }
    return iVar1;
  }
  FUN_00013290(s_Assertion___s__failed_at_line__d_001eda38,
               s_netconn_gethostbyname__invalid_a_001eda6c,0x2f8,DAT_001eda0c);
  return -0xf;
}

