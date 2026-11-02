// rea decompile_all
// name: FUN_00176e6c
// address: 0x176e6c
// body: available
// range: 0x176e6c-0x17723b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00176e6c(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined1 auStack_34 [12];
  int *local_28;
  
  FUN_00203e2c(auStack_34);
  piVar1 = (int *)FUN_000b4964();
  iVar2 = FUN_000b4840(piVar1,s_AudioHWService_0017723c,auStack_34);
  uVar3 = DAT_00177250;
  if (iVar2 == 0) {
    FUN_00002898(DAT_0017724c);
    uVar3 = FUN_000d04f8(auStack_34);
  }
  else {
    uVar4 = FUN_001dbf34();
    if (*(uint *)(param_1 + 0x54) < 2) {
      piVar1 = (int *)FUN_0022bc60(auStack_34);
      uVar5 = (**(code **)(*piVar1 + 0x80))(piVar1,uVar4,2);
      *(undefined4 *)(param_1 + 0x94) = uVar5;
      if (*(int *)(param_1 + 0x94) == 0) {
        FUN_00002898(uVar3,&DAT_00177254);
      }
      FUN_0009682c(*(undefined4 *)(param_1 + 0x94));
      FUN_0009678c(*(undefined4 *)(param_1 + 0x94));
      FUN_00096734(*(undefined4 *)(param_1 + 0x94));
    }
    piVar6 = (int *)FUN_0022bc60(auStack_34);
    uVar5 = (**(code **)(*piVar6 + 0x80))(piVar6,uVar4,3,*(code **)(*piVar6 + 0x80),piVar1);
    *(undefined4 *)(param_1 + 0x90) = uVar5;
    if (*(int *)(param_1 + 0x90) == 0) {
      FUN_00002898(uVar3,s_NRESET_0017725c);
    }
    FUN_0009682c(*(undefined4 *)(param_1 + 0x90));
    FUN_00096760(*(undefined4 *)(param_1 + 0x90));
    FUN_00096734(*(undefined4 *)(param_1 + 0x90));
    piVar1 = (int *)FUN_0022bc60(auStack_34);
    uVar5 = (**(code **)(*piVar1 + 0x80))(piVar1,uVar4,0x11);
    *(undefined4 *)(param_1 + 0x98) = uVar5;
    if (*(int *)(param_1 + 0x98) == 0) {
      FUN_00002898(uVar3,s_Ethernet_NRESET_00177264);
    }
    FUN_0009682c(*(undefined4 *)(param_1 + 0x98));
    FUN_00096734(*(undefined4 *)(param_1 + 0x98));
    FUN_0009678c(*(undefined4 *)(param_1 + 0x98));
    FUN_00096760(*(undefined4 *)(param_1 + 0x98));
    FUN_001d0130(1);
    FUN_0009678c(*(undefined4 *)(param_1 + 0x98));
    piVar1 = (int *)FUN_0022bc60(auStack_34);
    uVar5 = (**(code **)(*piVar1 + 0x80))(piVar1,uVar4,0x10);
    *(undefined4 *)(param_1 + 0x9c) = uVar5;
    if (*(int *)(param_1 + 0x9c) == 0) {
      FUN_00002898(uVar3,s_Ethernet_GPIO_00177274);
    }
    FUN_000967ec(*(undefined4 *)(param_1 + 0x9c));
    FUN_00096734(*(undefined4 *)(param_1 + 0x9c));
    piVar1 = (int *)FUN_0022bc60(auStack_34);
    uVar5 = (**(code **)(*piVar1 + 0x80))(piVar1,uVar4,9);
    *(undefined4 *)(param_1 + 0xa8) = uVar5;
    if (*(int *)(param_1 + 0xa8) == 0) {
      FUN_00002898(uVar3,s_USB_device_detect_00177284);
    }
    FUN_000967ec(*(undefined4 *)(param_1 + 0xa8));
    FUN_00096734(*(undefined4 *)(param_1 + 0xa8));
    piVar1 = (int *)FUN_0022bc60(auStack_34);
    uVar5 = (**(code **)(*piVar1 + 0x80))(piVar1,uVar4,0xc);
    *(undefined4 *)(param_1 + 0xac) = uVar5;
    if (*(int *)(param_1 + 0xac) == 0) {
      FUN_00002898(uVar3,s_USB_host_detect_00177298);
    }
    FUN_000967ec(*(undefined4 *)(param_1 + 0xac));
    FUN_00096734(*(undefined4 *)(param_1 + 0xac));
    piVar1 = (int *)FUN_0022bc60(auStack_34);
    uVar5 = (**(code **)(*piVar1 + 0x80))(piVar1,uVar4,8);
    *(undefined4 *)(param_1 + 0xb0) = uVar5;
    if (*(int *)(param_1 + 0xb0) == 0) {
      FUN_00002898(uVar3,s_USB_host_enable_001772a8);
    }
    FUN_0009682c(*(undefined4 *)(param_1 + 0xb0));
    FUN_0009678c(*(undefined4 *)(param_1 + 0xb0));
    FUN_00096734(*(undefined4 *)(param_1 + 0xb0));
    piVar1 = (int *)FUN_0022bc60(auStack_34);
    uVar5 = (**(code **)(*piVar1 + 0x80))(piVar1,uVar4,10);
    *(undefined4 *)(param_1 + 0xa0) = uVar5;
    if (*(int *)(param_1 + 0xa0) == 0) {
      FUN_00002898(uVar3,s_uREC2500_LED_001772b8);
    }
    FUN_0009682c(*(undefined4 *)(param_1 + 0xa0));
    FUN_00096760(*(undefined4 *)(param_1 + 0xa0));
    FUN_00096734(*(undefined4 *)(param_1 + 0xa0));
    local_28 = (int *)FUN_0022bc60(auStack_34);
    uVar4 = (**(code **)(*local_28 + 0x80))(local_28,uVar4,6);
    *(undefined4 *)(param_1 + 0xa4) = uVar4;
    if (*(int *)(param_1 + 0xa4) == 0) {
      FUN_00002898(uVar3,s_LCD_A0_001772c8);
    }
    FUN_0009682c(*(undefined4 *)(param_1 + 0xa4));
    FUN_00096760(*(undefined4 *)(param_1 + 0xa4));
    FUN_00096734(*(undefined4 *)(param_1 + 0xa4));
    FUN_00177728(param_1,0);
    FUN_0009678c(*(undefined4 *)(param_1 + 0x90));
    FUN_000b8700(param_1 + 0x68);
    iVar2 = FUN_000967b8(*(undefined4 *)(param_1 + 0xa8));
    if (iVar2 != 1) {
      *(undefined1 *)(param_1 + 0x378) = 0;
      FUN_00096760(*(undefined4 *)(param_1 + 0xb0));
    }
    FUN_001a3ad0(param_1 + 0x2cc);
    uVar3 = FUN_000d04f8(auStack_34);
  }
  return uVar3;
}

