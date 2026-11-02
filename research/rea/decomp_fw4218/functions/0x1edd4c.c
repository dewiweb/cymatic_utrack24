// rea decompile_all
// name: FUN_001edd4c
// address: 0x1edd4c
// body: available
// range: 0x1edd4c-0x1ede11 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1ede0e to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_001edd4c(char *param_1,int *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int local_18;
  
  iVar1 = DAT_001ede14;
  local_18 = param_4;
  if (param_2 == (int *)0x0) {
    FUN_00013290(s_Assertion___s__failed_at_line__d_001ede44,
                 s_netconn_recv__invalid_pointer_001ede78,0x1cd,_DAT_001ede1c);
    return iVar1;
  }
  *param_2 = 0;
  if (param_1 == (char *)0x0) {
    FUN_00013290(s_Assertion___s__failed_at_line__d_001ede44,s_netconn_recv__invalid_conn_001ede98,
                 0x1cf,_DAT_001ede1c);
  }
  else {
    if (*(int *)(param_1 + 0x2c) != DAT_001ede18) {
      FUN_00013290(s_Assertion___s__failed_at_line__d_001ede44,
                   s___netconn_accept__invalid_recvmb_001ede1e + 2,0x1d0,_DAT_001ede1c);
      return iVar1 + 1;
    }
    if (*param_1 != '\x10') {
      iVar1 = FUN_001edec0(param_1,param_2);
      return iVar1;
    }
    local_18 = 0;
    piVar2 = (int *)FUN_001ed0b4(5);
    if (piVar2 != (int *)0x0) {
      iVar1 = FUN_001edec0(param_1,&local_18);
      if (iVar1 != 0) {
        FUN_001ecfbc(5,piVar2);
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
      FUN_00013290(s_Assertion___s__failed_at_line__d_001ede44,s_p____NULL_001edeb4,0x1e5,
                   _DAT_001ede1c);
                    /* WARNING: Subroutine does not return */
      FUN_00003538();
    }
    FUN_001f91c4();
    iVar1 = -2;
    if (-0xb < param_1[8]) {
      param_1[8] = -2;
    }
    FUN_001f9210();
  }
  return iVar1;
}

