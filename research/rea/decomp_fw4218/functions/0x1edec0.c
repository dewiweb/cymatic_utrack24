// rea decompile_all
// name: FUN_001edec0
// address: 0x1edec0
// body: available
// range: 0x1edec0-0x1edfe1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1edfde to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_001edec0(char *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  int *local_38;
  undefined4 local_34;
  char *local_30;
  uint local_28;
  
  local_38 = (int *)0x0;
  if (param_2 == (undefined4 *)0x0) {
    FUN_00013290(s_Assertion___s__failed_at_line__d_001ee010,
                 s_netconn_recv__invalid_pointer_001ee044,0x15f,_DAT_001edfe8);
    return -0xf;
  }
  *param_2 = 0;
  if (param_1 == (char *)0x0) {
    FUN_00013290(s_Assertion___s__failed_at_line__d_001ee010,s_netconn_recv__invalid_conn_001ee064,
                 0x161,_DAT_001edfe8);
    return -0xf;
  }
  if (*(int *)(param_1 + 0x2c) != DAT_001edfe4) {
    FUN_00013290(s_Assertion___s__failed_at_line__d_001ee010,
                 s___netconn_accept__invalid_recvmb_001edfea + 2,0x162,_DAT_001edfe8);
    return -0xe;
  }
  if (param_1[8] < -10) {
    return (int)param_1[8];
  }
  iVar3 = FUN_001f9138(param_1 + 0x2c,&local_38,*(undefined4 *)(param_1 + 0xb4));
  if (iVar3 != -1) {
    if (*param_1 == '\x10') {
      if ((-1 < (int)((uint)(byte)param_1[0xb8] << 0x1c)) || (local_38 == (int *)0x0)) {
        local_34 = _DAT_001ee080;
        if (local_38 == (int *)0x0) {
          local_28 = 1;
        }
        else {
          local_28 = (uint)*(ushort *)(local_38 + 2);
        }
        local_30 = param_1;
        FUN_001fde2c(&local_34);
        if (local_38 == (int *)0x0) {
          if (*(code **)(param_1 + 0xc4) != entry) {
            (**(code **)(param_1 + 0xc4))(param_1,1,0);
          }
          FUN_001f91c4();
          cVar2 = param_1[8];
          iVar3 = -0xd;
          goto joined_r0x001edf70;
        }
      }
      uVar1 = (undefined2)local_38[2];
    }
    else {
      if (local_38 == (int *)0x0) {
        FUN_00013290(s_Assertion___s__failed_at_line__d_001ee010,s__buf____NULL_001ee083 + 1,0x199,
                     _DAT_001edfe8);
                    /* WARNING: Subroutine does not return */
        FUN_00003538();
      }
      uVar1 = *(undefined2 *)(*local_38 + 8);
    }
    if (*(code **)(param_1 + 0xc4) != entry) {
      (**(code **)(param_1 + 0xc4))(param_1,1,uVar1);
    }
    *param_2 = local_38;
    return 0;
  }
  FUN_001f91c4();
  cVar2 = param_1[8];
  iVar3 = -4;
joined_r0x001edf70:
  if (-0xb < cVar2) {
    param_1[8] = (char)iVar3;
  }
  FUN_001f9210();
  return iVar3;
}

