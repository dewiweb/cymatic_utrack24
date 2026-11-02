// rea decompile_all
// name: FUN_001907f0
// address: 0x1907f0
// body: available
// range: 0x1907f0-0x19097d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1908aa to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x19090c to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x19091e to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x19094e to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_001907f0(uint param_1,int param_2,uint *param_3)

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
  
  iVar2 = DAT_00190980;
  if (0x1f < param_1) {
    return 0xffffffff;
  }
  piVar5 = (int *)(param_1 * 0x18 + DAT_00190980);
  iVar1 = *piVar5;
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  if (piVar5 == (int *)0x0) {
    return 0xffffffff;
  }
  if (((int)((uint)*(byte *)(iVar1 + 0xb4) << 0x1e) < 0) && (*(short *)((int)piVar5 + 10) < 1)) {
    piVar5[4] = 0xb;
    return 0xffffffff;
  }
  uStack_20 = param_1;
  local_1c = param_2;
  puStack_18 = param_3;
  iVar1 = FUN_0019d27c(iVar1,&local_40);
  if (iVar1 == 0) {
    if (local_40 == 0) {
      FUN_00015210(s_Assertion___s__failed_at_line__d_0019099c,s___newconn____NULL_0019098a + 2,
                   0x16b,_DAT_00190988);
                    /* WARNING: Subroutine does not return */
      FUN_000032f8();
    }
    *(byte *)(local_40 + 0xb4) = *(byte *)(local_40 + 0xb4) | 8;
    iVar1 = FUN_0019d880(local_40,&local_3c,local_28,0);
    if (iVar1 == 0) {
      if (local_1c != 0) {
        if (param_3 == (uint *)0x0) {
          FUN_00015210(s_Assertion___s__failed_at_line__d_0019099c,
                       s_addr_valid_but_addrlen_NULL_001909e8,0x17c,_DAT_00190988);
                    /* WARNING: Subroutine does not return */
          FUN_000032f8();
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
        FUN_00003628(local_1c,&local_38);
      }
      uVar4 = FUN_0017dc38(local_40,1);
      if (uVar4 == 0xffffffff) {
        FUN_0019d660(local_40);
        piVar5[4] = 0x17;
        return 0xffffffff;
      }
      if (0x1f < uVar4) {
        FUN_00015210(s_Assertion___s__failed_at_line__d_0019099c,s_invalid_socket_index_001909d0,399
                     ,_DAT_00190988);
                    /* WARNING: Subroutine does not return */
        FUN_000032f8();
      }
      if (*(int *)(local_40 + 0xc0) == _DAT_00190a04) {
        iVar2 = uVar4 * 0x18 + iVar2;
        uVar3 = FUN_001b0bf0();
        *(ushort *)(iVar2 + 10) = *(short *)(iVar2 + 10) + ~(ushort)*(undefined4 *)(local_40 + 0xac)
        ;
        *(uint *)(local_40 + 0xac) = uVar4;
        FUN_001b0c3c(uVar3);
        piVar5[4] = 0;
        return uVar4;
      }
      FUN_00015210(s_Assertion___s__failed_at_line__d_0019099c,
                   s__newconn_>callback____event_call_00190a07 + 1,400,_DAT_00190988);
                    /* WARNING: Subroutine does not return */
      FUN_000032f8();
    }
    FUN_0019d660(local_40);
    if ((uint)-iVar1 < 0x11) {
      iVar2 = *(int *)(DAT_00190984 + iVar1 * -4);
      goto LAB_00190892;
    }
  }
  else {
    if (*(char *)*piVar5 != '\x10') {
      piVar5[4] = 0x5f;
      return 0x5f;
    }
    if ((uint)-iVar1 < 0x11) {
      iVar2 = *(int *)(DAT_00190984 + iVar1 * -4);
      goto LAB_00190892;
    }
  }
  iVar2 = 5;
LAB_00190892:
  piVar5[4] = iVar2;
  return 0xffffffff;
}

