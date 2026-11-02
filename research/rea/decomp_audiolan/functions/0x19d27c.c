// rea decompile_all
// name: FUN_0019d27c
// address: 0x19d27c
// body: available
// range: 0x19d27c-0x19d34b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0019d27c(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int local_30 [2];
  undefined4 local_28;
  int local_24;
  
  iVar2 = DAT_0019d34c;
  if (param_2 == (int *)0x0) {
    FUN_00015210(s_Assertion___s__failed_at_line__d_0019d37c,
                 s_netconn_accept__invalid_pointer_0019d3b0,0x11e,_DAT_0019d354);
    return iVar2;
  }
  *param_2 = 0;
  if (param_1 == 0) {
    FUN_00015210(s_Assertion___s__failed_at_line__d_0019d37c,s_netconn_accept__invalid_conn_0019d3d0
                 ,0x120,_DAT_0019d354);
  }
  else {
    if (*(int *)(param_1 + 0x6c) != DAT_0019d350) {
      FUN_00015210(s_Assertion___s__failed_at_line__d_0019d37c,
                   s___netconn_accept__invalid_accept_0019d356 + 2,0x121,_DAT_0019d354);
      return iVar2;
    }
    iVar2 = (int)*(char *)(param_1 + 8);
    if (-0xb < iVar2) {
      iVar2 = FUN_001b0b64(param_1 + 0x6c,local_30,*(undefined4 *)(param_1 + 0xb0));
      if (iVar2 == -1) {
        FUN_001b0bf0();
        cVar1 = *(char *)(param_1 + 8);
        iVar2 = -4;
      }
      else {
        if (*(code **)(param_1 + 0xc0) != entry) {
          (**(code **)(param_1 + 0xc0))(param_1,1,0);
        }
        if (local_30[0] != 0) {
          local_28 = DAT_0019d3f0;
          local_24 = param_1;
          FUN_001b6d94(&local_28);
          *param_2 = local_30[0];
          return 0;
        }
        FUN_001b0bf0();
        cVar1 = *(char *)(param_1 + 8);
        iVar2 = -0xb;
      }
      if (-0xb < cVar1) {
        *(char *)(param_1 + 8) = (char)iVar2;
      }
      FUN_001b0c3c();
      return iVar2;
    }
  }
  return iVar2;
}

