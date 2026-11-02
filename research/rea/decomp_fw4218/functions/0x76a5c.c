// rea decompile_all
// name: FUN_00076a5c
// address: 0x76a5c
// body: available
// range: 0x76a5c-0x76bbf inclusive
// range: 0x76d28-0x76ddb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00076a5c(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90;
  undefined1 local_8f;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 auStack_78 [49];
  undefined1 local_47;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  
  iVar1 = FUN_00003d18(param_2[1],&DAT_00076bc0);
  if (iVar1 != 0) {
    FUN_00002898(s_Unknown_command__s_00076bc8,param_2[1]);
    return 6;
  }
  FUN_000028f8(auStack_78,0x32,s__dev__s_00076bdc,*param_2);
  local_47 = 0;
  iVar1 = FUN_00013224(auStack_78,2);
  if (iVar1 == -1) {
    FUN_00002898(s_Could_NOT_open_specified_device___00076c08,*param_2);
    return 6;
  }
  iVar2 = FUN_00003928(*param_2,&DAT_00076be4,3);
  if (iVar2 == 0) {
    FUN_00002898(s_Statistic_of_SPI___s__00076c30,*param_2);
    local_40 = 0x30;
    iVar2 = FUN_000134dc(iVar1,6,&local_40);
    if (iVar2 == 0) {
      FUN_00002898(s_NoOfRxInterrupts___d_00076c7c,local_3c);
      FUN_00002898(s_NoOfRxISRBytes___d_00076c94,local_38);
      FUN_00002898(s_NoOfReceivedBytes___d_00076cac,local_34);
      FUN_00002898(s_NoOfRxOverflows___d_00076cc4,local_30);
      FUN_00002898(s_NoOfTransferredBytes___d_00076cdc,local_20);
      FUN_00002898(s_NoOfTxInterrupts___d_00076cf8,local_2c);
      pcVar3 = s_NoOfTxISRBytes___d_00076d10;
      local_7c = local_28;
    }
    else {
      local_7c = *param_2;
      pcVar3 = s_Could_NOT_get_SPI_Statistic_of_s_00076c48;
    }
  }
  else {
    iVar2 = FUN_00003928(*param_2,&DAT_00076be8,4);
    if (iVar2 != 0) {
      FUN_00002898(s_unsupported_device__s_00076bf0,*param_2);
      goto LAB_00076b04;
    }
    FUN_00002898(s_Statistic_of_UART___s__00076ddc,*param_2);
    local_a4 = 0x2c;
    iVar2 = FUN_000134dc(iVar1,0x10,&local_a4);
    if (iVar2 == 0) {
      FUN_00002898(s_NoOfRxInterrupts___d_00076c7c,local_a0);
      FUN_00002898(s_NoOfRxISRBytes___d_00076c94,local_9c);
      FUN_00002898(s_NoOfReceivedBytes___d_00076cac,local_98);
      FUN_00002898(s_NoOfRxOverflows___d_00076cc4,local_94);
      FUN_00002898(s_MaxRxFifoFillLevel___d_00076e2c,local_90);
      FUN_00002898(s_MinRxFifoFillLevel___d_00076e48,local_8f);
      FUN_00002898(s_NoOfTxInterrupts___d_00076cf8,local_8c);
      FUN_00002898(s_NoOfBlockedTXInterrupts___d_00076e64,local_88);
      FUN_00002898(s_NoOfTxISRBytes___d_00076d10,local_84);
      FUN_00002898(s_NoOfTransferredBytes___d_00076cdc,local_80);
      pcVar3 = s_NoOfDirectTransferredBytes___d_00076e84;
    }
    else {
      local_7c = *param_2;
      pcVar3 = s_Could_NOT_get_Uart_Statistic_of_s_00076df4;
    }
  }
  FUN_00002898(pcVar3,local_7c);
LAB_00076b04:
  FUN_0001320c(iVar1);
  return 0;
}

