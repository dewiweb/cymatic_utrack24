// rea decompile_all
// name: FUN_0019dd64
// address: 0x19dd64
// body: available
// range: 0x19dd64-0x19de29 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x19de26 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0019dd64(char *param_1,int *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int local_18;
  
  iVar1 = DAT_0019de2c;
  local_18 = param_4;
  if (param_2 == (int *)0x0) {
    FUN_00015210(s_Assertion___s__failed_at_line__d_0019de5c,
                 s_netconn_recv__invalid_pointer_0019de90,0x1cd,_DAT_0019de34);
    return iVar1;
  }
  *param_2 = 0;
  if (param_1 == (char *)0x0) {
    FUN_00015210(s_Assertion___s__failed_at_line__d_0019de5c,s_netconn_recv__invalid_conn_0019deb0,
                 0x1cf,_DAT_0019de34);
  }
  else {
    if (*(int *)(param_1 + 0x2c) != DAT_0019de30) {
      FUN_00015210(s_Assertion___s__failed_at_line__d_0019de5c,
                   s___netconn_accept__invalid_recvmb_0019de36 + 2,0x1d0,_DAT_0019de34);
      return iVar1 + 1;
    }
    if (*param_1 != '\x10') {
      iVar1 = FUN_0019ded8(param_1,param_2);
      return iVar1;
    }
    local_18 = 0;
    piVar2 = (int *)FUN_0019cbdc(5);
    if (piVar2 != (int *)0x0) {
      iVar1 = FUN_0019ded8(param_1,&local_18);
      if (iVar1 != 0) {
        FUN_0019cae4(5,piVar2);
        return iVar1;
      }
      if (local_18 != 0) {
        *piVar2 = local_18;
        piVar2[1] = local_18;
        *(undefined2 *)(piVar2 + 3) = 0;
        piVar2[2] = 0;
        *param_2 = (int)piVar2;
        return 0;
      }
      FUN_00015210(s_Assertion___s__failed_at_line__d_0019de5c,s_p____NULL_0019decc,0x1e5,
                   _DAT_0019de34);
                    /* WARNING: Subroutine does not return */
      FUN_000032f8();
    }
    FUN_001b0bf0();
    iVar1 = -2;
    if (-0xb < param_1[8]) {
      param_1[8] = -2;
    }
    FUN_001b0c3c();
  }
  return iVar1;
}

