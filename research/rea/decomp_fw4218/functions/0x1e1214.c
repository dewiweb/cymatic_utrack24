// rea decompile_all
// name: FUN_001e1214
// address: 0x1e1214
// body: available
// range: 0x1e1214-0x1e13a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1e12ce to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1e1330 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1e1342 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1e1372 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_001e1214(uint param_1,int param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  int local_40;
  undefined4 local_3c;
  undefined2 local_38;
  ushort uStack_36;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  ushort local_28 [4];
  uint uStack_20;
  int local_1c;
  uint *puStack_18;
  
  iVar2 = DAT_001e13a4;
  if (0x1f < param_1) {
    return 0xffffffff;
  }
  piVar5 = (int *)(param_1 * 0x18 + DAT_001e13a4);
  iVar1 = *piVar5;
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  if (piVar5 == (int *)0x0) {
    return 0xffffffff;
  }
  if (((int)((uint)*(byte *)(iVar1 + 0xb8) << 0x1e) < 0) && (*(short *)((int)piVar5 + 10) < 1)) {
    piVar5[4] = 0xb;
    return 0xffffffff;
  }
  uStack_20 = param_1;
  local_1c = param_2;
  puStack_18 = param_3;
  iVar1 = FUN_001ed368(iVar1,&local_40);
  if (iVar1 == 0) {
    if (local_40 == 0) {
      FUN_00013290(s_Assertion___s__failed_at_line__d_001e13c0,s___newconn____NULL_001e13ae + 2,
                   0x16b,_DAT_001e13ac);
                    /* WARNING: Subroutine does not return */
      FUN_00003538();
    }
    *(byte *)(local_40 + 0xb8) = *(byte *)(local_40 + 0xb8) | 8;
    iVar1 = FUN_001ed868(local_40,&local_3c,local_28,0);
    if (iVar1 == 0) {
      if (local_1c != 0) {
        if (param_3 == (uint *)0x0) {
          FUN_00013290(s_Assertion___s__failed_at_line__d_001e13c0,
                       s_addr_valid_but_addrlen_NULL_001e140c,0x17c,_DAT_001e13ac);
                    /* WARNING: Subroutine does not return */
          FUN_00003538();
        }
        local_30 = 0;
        local_2c = 0;
        _local_38 = CONCAT22(local_28[0] >> 8 | local_28[0] << 8,0x210);
        local_34 = local_3c;
        uVar4 = *param_3;
        if (0x10 < uVar4) {
          uVar4 = 0x10;
        }
        *param_3 = uVar4;
        FUN_000039e0(local_1c,&local_38);
      }
      uVar4 = FUN_001d10d0(local_40,1);
      if (uVar4 == 0xffffffff) {
        FUN_001ed648(local_40);
        piVar5[4] = 0x17;
        return 0xffffffff;
      }
      if (0x1f < uVar4) {
        FUN_00013290(s_Assertion___s__failed_at_line__d_001e13c0,s_invalid_socket_index_001e13f4,399
                     ,_DAT_001e13ac);
                    /* WARNING: Subroutine does not return */
        FUN_00003538();
      }
      if (*(int *)(local_40 + 0xc4) == _DAT_001e1428) {
        iVar2 = uVar4 * 0x18 + iVar2;
        uVar3 = FUN_001f91c4();
        *(ushort *)(iVar2 + 10) = *(short *)(iVar2 + 10) + ~(ushort)*(undefined4 *)(local_40 + 0xac)
        ;
        *(uint *)(local_40 + 0xac) = uVar4;
        FUN_001f9210(uVar3);
        piVar5[4] = 0;
        return uVar4;
      }
      FUN_00013290(s_Assertion___s__failed_at_line__d_001e13c0,
                   s__newconn_>callback____event_call_001e142b + 1,400,_DAT_001e13ac);
                    /* WARNING: Subroutine does not return */
      FUN_00003538();
    }
    FUN_001ed648(local_40);
    if ((uint)-iVar1 < 0x11) {
      iVar2 = *(int *)(DAT_001e13a8 + iVar1 * -4);
      goto LAB_001e12b6;
    }
  }
  else {
    if (*(char *)*piVar5 != '\x10') {
      piVar5[4] = 0x5f;
      return 0x5f;
    }
    if ((uint)-iVar1 < 0x11) {
      iVar2 = *(int *)(DAT_001e13a8 + iVar1 * -4);
      goto LAB_001e12b6;
    }
  }
  iVar2 = 5;
LAB_001e12b6:
  piVar5[4] = iVar2;
  return 0xffffffff;
}

