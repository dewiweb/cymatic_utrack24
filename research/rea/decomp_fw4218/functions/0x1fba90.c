// rea decompile_all
// name: FUN_001fba90
// address: 0x1fba90
// body: available
// range: 0x1fba90-0x1fbb3d inclusive
// range: 0x1fbb46-0x1fbc31 inclusive
// range: 0x1fbc34-0x1fbd27 inclusive
// range: 0x1fbd2a-0x1fbe43 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1fbae8 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1fbc26 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1fbca4 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001fba90(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  byte *pbVar4;
  undefined1 uVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  pbVar4 = DAT_001fbe44;
  if ((int)((uint)*DAT_001fbe44 << 0x1d) < 0) {
    if (*(char *)(param_1 + 0x18) == '\x02') {
      if (*(int *)(param_1 + 0x50) != *(int *)(DAT_001fbe44 + 0x10)) {
        return 0;
      }
    }
    else {
      if (*(int *)(DAT_001fbe44 + 0xc) - *(int *)(param_1 + 0x28) < 0) {
        return 0;
      }
      if (0 < (int)(*(int *)(DAT_001fbe44 + 0xc) -
                   (*(int *)(param_1 + 0x28) + (uint)*(ushort *)(param_1 + 0x2c)))) {
        return 0;
      }
      if (*(char *)(param_1 + 0x18) == '\0') {
        FUN_00013290(s_Assertion___s__failed_at_line__d_001fbe70,
                     s_tcp_input__pcb_>state____CLOSED_001fbe50,DAT_001fbe4c,DAT_001fbe48);
                    /* WARNING: Subroutine does not return */
        FUN_00003538();
      }
    }
    DAT_001fbe44[1] = DAT_001fbe44[1] | 8;
    *(byte *)(param_1 + 0x1e) = *(byte *)(param_1 + 0x1e) & 0xfe;
    return 0xfffffff4;
  }
  if ((((int)((uint)*DAT_001fbe44 << 0x1e) < 0) && (*(char *)(param_1 + 0x18) != '\x02')) &&
     (*(char *)(param_1 + 0x18) != '\x03')) {
    *(byte *)(param_1 + 0x1e) = *(byte *)(param_1 + 0x1e) | 2;
    return 0;
  }
  if (-1 < (int)((uint)*(byte *)(param_1 + 0x1e) << 0x1b)) {
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)s__R__pcb_>snd_queuelen_>_0_001fbea4._0_4_;
  }
  iVar8 = param_1 + 0x80;
  *(undefined1 *)(param_1 + 0x96) = 0;
  FUN_001fb6f0(param_1);
  switch(*(undefined1 *)(param_1 + 0x18)) {
  case 2:
    if (-1 < (int)((uint)*pbVar4 << 0x1b)) {
      return 0;
    }
    if ((int)((uint)*pbVar4 << 0x1e) < 0) {
      iVar11 = *(int *)(*(int *)(param_1 + 0x70) + 0xc);
      iVar12 = *(int *)(pbVar4 + 0x10);
      if (((uint)CONCAT12(*(undefined1 *)(iVar11 + 5),
                          CONCAT11(*(undefined1 *)(iVar11 + 6),*(undefined1 *)(iVar11 + 7))) |
          (uint)*(uint3 *)(iVar11 + 4) << 0x18) + 1 == iVar12) {
        *(short *)(param_1 + 0x66) = *(short *)(param_1 + 0x66) + 1;
        iVar11 = *(int *)(pbVar4 + 0xc);
        iVar10 = iVar11 + 1;
        *(int *)(param_1 + 0x28) = iVar10;
        *(int *)(param_1 + 0x48) = iVar12;
        *(int *)(param_1 + 0x30) = iVar10;
        iVar12 = *(int *)(pbVar4 + 4);
        *(undefined2 *)(param_1 + 0x60) = *(undefined2 *)(iVar12 + 0xe);
        *(undefined2 *)(param_1 + 0x62) = *(undefined2 *)(iVar12 + 0xe);
        *(int *)(param_1 + 0x54) = iVar11 + -1;
        *(undefined1 *)(param_1 + 0x18) = 4;
        sVar6 = FUN_001fa374(*(undefined2 *)(param_1 + 0x36),param_1 + 4);
        *(short *)(param_1 + 0x36) = sVar6;
        *(short *)(param_1 + 0x4e) = sVar6 * 10;
        if (*(short *)(param_1 + 0x4c) == 1) {
          sVar6 = sVar6 << 1;
        }
        *(short *)(param_1 + 0x4c) = sVar6;
        if (*(short *)(param_1 + 0x68) != 0) {
          *(short *)(param_1 + 0x68) = *(short *)(param_1 + 0x68) + -1;
          *(undefined4 *)(param_1 + 0x70) = **(undefined4 **)(param_1 + 0x70);
          FUN_001fcfc2();
          if (*(int *)(param_1 + 0x70) == 0) {
            *(undefined2 *)(param_1 + 0x34) = 0xffff;
          }
          else {
            *(undefined2 *)(param_1 + 0x34) = 0;
            *(undefined1 *)(param_1 + 0x46) = 0;
          }
          if ((*(code **)(iVar8 + 4) != entry) &&
             (iVar8 = (**(code **)(iVar8 + 4))(*(undefined4 *)(param_1 + 0x10),param_1,0),
             iVar8 == -0xb)) {
            return 0xfffffff5;
          }
          *(byte *)(param_1 + 0x1e) = *(byte *)(param_1 + 0x1e) | 2;
          return 0;
        }
        FUN_00013290(s_Assertion___s__failed_at_line__d_001fbe70,
                     s__R__pcb_>snd_queuelen_>_0_001fbea4 + 4,0x28c,DAT_001fbe48);
                    /* WARNING: Subroutine does not return */
        FUN_00003538();
      }
    }
    uVar2 = **(undefined2 **)(pbVar4 + 4);
    uVar3 = (*(undefined2 **)(pbVar4 + 4))[1];
    iVar11 = *(int *)(pbVar4 + 0xc) + (uint)*(ushort *)(pbVar4 + 2);
    iVar8 = *(int *)(pbVar4 + 0x10);
    goto LAB_001fbcf8;
  case 3:
    if (-1 < (int)((uint)*pbVar4 << 0x1b)) {
      if (-1 < (int)((uint)*pbVar4 << 0x1e)) {
        return 0;
      }
      if (*(int *)(param_1 + 0x28) + -1 != *(int *)(pbVar4 + 0xc)) {
        return 0;
      }
      FUN_001fcd20(param_1);
      return 0;
    }
    iVar8 = *(int *)(pbVar4 + 0x10);
    if ((-1 < (iVar8 - *(int *)(param_1 + 0x48)) + -1) && (iVar8 - *(int *)(param_1 + 0x50) < 1)) {
      *(undefined1 *)(param_1 + 0x18) = 4;
      if (*(code **)(param_1 + 0x14) == entry) {
        FUN_00013290(s_Assertion___s__failed_at_line__d_001fbe70,s_pcb_>accept____NULL_001fbecc,
                     DAT_001fbec8,DAT_001fbe48);
                    /* WARNING: Subroutine does not return */
        FUN_00003538();
      }
      iVar8 = (**(code **)(param_1 + 0x14))(*(undefined4 *)(param_1 + 0x10),param_1,0);
      if (iVar8 != 0) {
        if (iVar8 != -0xb) {
          FUN_001f9e40(param_1);
        }
        return 0xfffffff5;
      }
      sVar6 = *(short *)(param_1 + 0x4c);
      FUN_001fbf7c(param_1);
      if (*(short *)(param_1 + 100) != 0) {
        *(short *)(param_1 + 100) = *(short *)(param_1 + 100) + -1;
      }
      sVar7 = *(short *)(param_1 + 0x36);
      if (sVar6 == 1) {
        sVar7 = sVar7 << 1;
      }
      *(short *)(param_1 + 0x4c) = sVar7;
      bVar1 = DAT_001fbe44[1];
      goto joined_r0x001fbd1e;
    }
    uVar2 = **(undefined2 **)(pbVar4 + 4);
    uVar3 = (*(undefined2 **)(pbVar4 + 4))[1];
    iVar11 = *(int *)(pbVar4 + 0xc) + (uint)*(ushort *)(pbVar4 + 2);
LAB_001fbcf8:
    FUN_001fce48(iVar8,iVar11,DAT_001fbec4,DAT_001fbec0,uVar3,uVar2);
switchD_001fbb3c_default:
    return 0;
  case 4:
  case 7:
    FUN_001fbf7c(param_1);
    bVar1 = pbVar4[1];
joined_r0x001fbd1e:
    if (-1 < (int)((uint)bVar1 << 0x1a)) {
      s__R__pcb_>snd_queuelen_>_0_001fbea4[0] = (char)s__R__pcb_>snd_queuelen_>_0_001fbea4._0_4_;
      s__R__pcb_>snd_queuelen_>_0_001fbea4[1] = SUB41(s__R__pcb_>snd_queuelen_>_0_001fbea4._0_4_,1);
      s__R__pcb_>snd_queuelen_>_0_001fbea4[2] = SUB41(s__R__pcb_>snd_queuelen_>_0_001fbea4._0_4_,2);
      s__R__pcb_>snd_queuelen_>_0_001fbea4[3] = SUB41(s__R__pcb_>snd_queuelen_>_0_001fbea4._0_4_,3);
      return 0;
    }
    *(byte *)(param_1 + 0x1e) = *(byte *)(param_1 + 0x1e) | 2;
    uVar5 = 7;
LAB_001fbd88:
    *(undefined1 *)(param_1 + 0x18) = uVar5;
    return 0;
  case 5:
    FUN_001fbf7c(param_1);
    if (-1 < (int)((uint)pbVar4[1] << 0x1a)) {
      if (-1 < (int)((uint)*pbVar4 << 0x1b)) {
        return 0;
      }
      if (*(int *)(param_1 + 0x50) != *(int *)(pbVar4 + 0x10)) {
        return 0;
      }
      uVar5 = 6;
      goto LAB_001fbd88;
    }
    if ((-1 < (int)((uint)*pbVar4 << 0x1b)) || (*(int *)(param_1 + 0x50) != *(int *)(pbVar4 + 0x10))
       ) {
      *(byte *)(param_1 + 0x1e) = *(byte *)(param_1 + 0x1e) | 2;
      uVar5 = 8;
      goto LAB_001fbd88;
    }
    *(byte *)(param_1 + 0x1e) = *(byte *)(param_1 + 0x1e) | 2;
    FUN_001fb77c(param_1);
    piVar9 = DAT_001fbee4;
    iVar8 = *DAT_001fbee0;
    if (iVar8 != param_1) {
      *DAT_001fbee4 = iVar8;
      while (iVar8 != 0) {
        iVar8 = *(int *)(iVar8 + 0xc);
        if (iVar8 == param_1) goto LAB_001fbd6e;
        *piVar9 = iVar8;
      }
      goto LAB_001fbe0a;
    }
    break;
  case 6:
    FUN_001fbf7c(param_1);
    if (-1 < (int)((uint)pbVar4[1] << 0x1a)) {
      return 0;
    }
    *(byte *)(param_1 + 0x1e) = *(byte *)(param_1 + 0x1e) | 2;
    FUN_001fb77c(param_1);
    piVar9 = DAT_001fbee4;
    iVar8 = *DAT_001fbee0;
    if (iVar8 != param_1) {
      *DAT_001fbee4 = iVar8;
      while (iVar8 != 0) {
        iVar8 = *(int *)(iVar8 + 0xc);
        if (iVar8 == param_1) goto LAB_001fbd6e;
        *piVar9 = iVar8;
      }
      goto LAB_001fbe0a;
    }
    break;
  case 8:
    FUN_001fbf7c(param_1);
    if (-1 < (int)((uint)*pbVar4 << 0x1b)) {
      return 0;
    }
    if (*(int *)(param_1 + 0x50) != *(int *)(pbVar4 + 0x10)) {
      return 0;
    }
    FUN_001fb77c(param_1);
    piVar9 = DAT_001fbee4;
    iVar8 = *DAT_001fbee0;
    if (iVar8 != param_1) {
      *DAT_001fbee4 = iVar8;
      while (iVar8 != 0) {
        iVar8 = *(int *)(iVar8 + 0xc);
        if (iVar8 == param_1) goto LAB_001fbd6e;
        *piVar9 = iVar8;
      }
      goto LAB_001fbe0a;
    }
    break;
  case 9:
    FUN_001fbf7c(param_1);
    if (((int)((uint)*pbVar4 << 0x1b) < 0) && (*(int *)(param_1 + 0x50) == *(int *)(pbVar4 + 0x10)))
    {
      pbVar4[1] = pbVar4[1] | 0x10;
    }
  default:
    goto switchD_001fbb3c_default;
  }
  *DAT_001fbee0 = *(int *)(iVar8 + 0xc);
LAB_001fbe0a:
  *DAT_001fbee8 = 1;
  *(undefined1 *)(param_1 + 0x18) = 10;
  piVar9 = DAT_001fbeec;
  *(int *)(param_1 + 0xc) = *DAT_001fbeec;
  *piVar9 = param_1;
  FUN_001fd6c8();
  return 0;
LAB_001fbd6e:
  *(undefined4 *)(*piVar9 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  goto LAB_001fbe0a;
}

