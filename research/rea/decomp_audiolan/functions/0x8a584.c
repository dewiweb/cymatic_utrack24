// rea decompile_all
// name: FUN_0008a584
// address: 0x8a584
// body: available
// range: 0x8a584-0x8a93f inclusive
// range: 0x8ab1c-0x8ab7f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0008a584(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  char *pcVar10;
  int *piVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined *puVar14;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  
  iVar2 = FUN_0006e06c(param_1,s_ARCTransportUART_0008a944,0,DAT_0008a940,DAT_0008a940,DAT_0008a940,
                       DAT_0008a940,DAT_0008a940);
  piVar3 = (int *)FUN_0006762c(iVar2 + 0xc0);
  iVar2 = DAT_0008a958;
  piVar9 = piVar3 + -0x30;
  *piVar3 = DAT_0008a958 + 0x30;
  piVar3[3] = -1;
  iVar1 = DAT_0008a95c;
  *piVar9 = iVar2;
  piVar3[2] = iVar1;
  piVar3[4] = -1;
  *(undefined1 *)(piVar3 + 5) = 1;
  *(undefined2 *)((int)piVar3 + 0x16) = 0;
  local_54 = DAT_0008a960;
  local_28 = 0;
  local_58 = iVar1;
  iVar2 = FUN_00041c14(s__cfg_AppSettings_ARC_UART_0008a964,&local_3c);
  if (iVar2 == 0) {
    FUN_000028a4(s_ERROR__ARCTransportUART____s__co_0008a98c,s__cfg_AppSettings_ARC_UART_0008a964);
  }
  else {
    iVar2 = FUN_00048ef8(local_3c,s_Interface_0008a980,&local_28);
    if (iVar2 == 0) {
      FUN_000028a4(s_ERROR__ARCTransportUART____s__co_0008a98c,s_Interface_0008a980);
    }
    iVar2 = FUN_00048ef8(local_3c,s_Baudrate_0008a9c4,&local_54);
    if (iVar2 == 0) {
      FUN_000028a4(s_ERROR__ARCTransportUART____s__co_0008a98c,s_Baudrate_0008a9c4);
    }
    iVar2 = FUN_00042a00(local_3c,s_Parity_0008a9d0,&local_58);
    if (iVar2 == 0) {
      FUN_000028a4(s_ERROR__ARCTransportUART____s__co_0008a98c,s_Parity_0008a9d0);
    }
    FUN_00041dd4(local_3c);
  }
  if (local_28 != 0) {
    if (local_28 == 1) {
      pcVar10 = s_uart1_0008a9d8;
      goto LAB_0008a6c8;
    }
    if (local_28 == 2) {
      pcVar10 = s_uart2_0008a9e0;
      goto LAB_0008a6c8;
    }
    if (local_28 == 3) {
      pcVar10 = s_uart3_0008a9e8;
      goto LAB_0008a6c8;
    }
  }
  pcVar10 = s_uart0_0008a9f0;
LAB_0008a6c8:
  uVar4 = FUN_0018afdc();
  iVar2 = FUN_00003960(uVar4,pcVar10);
  if (iVar2 == 0) {
    FUN_000151c4(s_ARCTransportUART__Disabling_the_s_0008a9f8);
    FUN_001ac500(s_ARCTransportUART_0008a944 + 0x10);
    FUN_001ac5a0(s_ARCTransportUART_0008a944 + 0x10);
    FUN_001ac444(s_ARCTransportUART_0008a944 + 0x10);
    FUN_001ac364(s_ARCTransportUART_0008a944 + 0x10);
  }
  piVar11 = piVar3 + 2;
  iVar2 = FUN_000034d0(s__dev__0008aa24);
  if (iVar2 == 0) {
    iVar2 = *piVar11;
    piVar5 = (int *)(iVar2 + -0xc);
    iVar7 = *piVar5;
    if (iVar7 == 0) {
      *(undefined4 *)(iVar2 + -4) = 0;
      *(undefined1 *)*piVar11 = 0;
    }
    else {
      if (iVar2 != iVar1) {
        if (iVar7 == -1) {
          FUN_0010fa20(piVar5,*(int *)(iVar2 + -8) + 0xe,0);
        }
        else if (piVar5 != _DAT_0008aa2c) {
          *piVar5 = iVar7 + -1;
        }
      }
      *piVar11 = iVar1;
    }
  }
  else {
    FUN_001da110(piVar11,0,*(undefined4 *)(*piVar11 + -4),s__dev__0008aa24,iVar2,0,iVar2);
  }
  uVar13 = *(undefined4 *)(piVar3[2] + -4);
  uVar4 = FUN_000034d0(pcVar10);
  FUN_001da110(piVar3 + 2,uVar13,0,pcVar10,uVar4,0,uVar4);
  piVar11 = piVar3 + 2;
  iVar2 = FUN_000151a4(piVar3[2],1);
  piVar3[3] = iVar2;
  if (iVar2 == -1) {
    FUN_000028a4(s_I_ERROR__ARCTransportUART__Could_0008aa2e + 2,*piVar11);
  }
  local_38 = 8;
  local_34 = 2;
  iVar2 = FUN_0001545c(piVar3[3],0xf,&local_38);
  if (iVar2 != 0) {
    FUN_000028a4(s_ERROR__RCTransportUART__Could_no_0008aa68,*piVar11);
  }
  local_50 = 0x14;
  uStack_4c = local_54;
  uStack_48 = 8;
  uVar12 = *(uint *)(local_58 + -4);
  puVar14 = &DAT_0008aaa4;
  uVar6 = FUN_000034d0();
  if (*(uint *)(local_58 + -4) < uVar12) {
    uVar12 = *(uint *)(local_58 + -4);
  }
  uVar8 = uVar12;
  if (uVar6 <= uVar12) {
    uVar8 = uVar6;
  }
  iVar2 = FUN_0000339c(local_58,puVar14,uVar8);
  if (iVar2 == 0 && uVar12 == uVar6) {
    local_44 = 1;
  }
  else {
    uVar12 = *(uint *)(local_58 + -4);
    puVar14 = &DAT_0008aaa8;
    uVar6 = FUN_000034d0();
    if (*(uint *)(local_58 + -4) < uVar12) {
      uVar12 = *(uint *)(local_58 + -4);
    }
    uVar8 = uVar12;
    if (uVar6 <= uVar12) {
      uVar8 = uVar6;
    }
    iVar2 = FUN_0000339c(local_58,puVar14,uVar8);
    if (iVar2 == 0 && uVar12 == uVar6) {
      local_44 = 2;
    }
    else {
      local_44 = 0;
    }
  }
  local_40 = 1;
  iVar2 = FUN_0001545c(piVar3[3],3,&local_50);
  if (iVar2 != 0) {
    FUN_000028a4(s_ERROR__RCTransportUART__Could_no_0008aab0,*piVar11);
  }
  local_2c = 2000;
  local_30 = 8;
  iVar2 = FUN_0001545c(piVar3[3],0xc,&local_30);
  if (iVar2 != 0) {
    FUN_000028a4(s_ERROR__RCTransportUART__Could_no_0008aae0,*piVar11);
  }
  FUN_0006e024(piVar9);
  if (local_58 != iVar1) {
    piVar3 = (int *)(local_58 + -0xc);
    iVar2 = *piVar3;
    if ((iVar2 == -1) || ((piVar3 != _DAT_0008aa2c && (*piVar3 = iVar2 + -1, iVar2 == 0)))) {
      FUN_0010fa20(local_58 + -0xc,*(int *)(local_58 + -8) + 0xe,0);
    }
  }
  return piVar9;
}

