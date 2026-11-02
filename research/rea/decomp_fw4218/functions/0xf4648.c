// rea decompile_all
// name: FUN_000f4648
// address: 0xf4648
// body: available
// range: 0xf4648-0xf47f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_000f4648(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 *param_4,
                 undefined2 *param_5,undefined2 *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined1 auStack_80 [20];
  undefined2 local_6c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined2 local_3c [2];
  undefined1 auStack_38 [24];
  
  FUN_002329fc(param_1,s_Archwave_AG__Switzerland_000f47f8);
  FUN_002329fc(param_2,s_Bebob7_000f4814);
  *param_4 = (short)DAT_000f481c;
  *param_5 = 1;
  *param_6 = 0;
  iVar1 = FUN_000466b0(s__cfg_USB_DeviceInfo_000f4820,&local_40);
  if (iVar1 == 0) {
    bVar6 = false;
    FUN_00002898(s_ERROR__USBDeviceInfoConfig__get__000f4848,s__cfg_USB_DeviceInfo_000f4820);
  }
  else {
    iVar1 = FUN_00048bd4(local_40,s_ManufacturerName_000f4834,param_1);
    if (iVar1 == 0) {
      FUN_00002898(s_ERROR__USBDeviceInfoConfig__get__000f4848,s_ManufacturerName_000f4834);
    }
    iVar2 = FUN_00048bd4(local_40,s_ProductName_000f4874,param_2);
    if (iVar2 == 0) {
      FUN_00002898(s_ERROR__USBDeviceInfoConfig__get__000f4848,s_ProductName_000f4874);
    }
    iVar3 = FUN_001db900(DAT_000f4880,&local_48);
    if (iVar3 == 0) {
      FUN_000028cc(auStack_38,DAT_000f48a4,local_48,uStack_44);
      FUN_002329fc(param_3,auStack_38);
    }
    else {
      FUN_002329fc(param_3,DAT_000f4884);
      FUN_00002898(_DAT_000f4888);
    }
    iVar3 = FUN_0004febc(local_40,s___VendorId_000f488a + 2,local_3c);
    if (iVar3 != 0) {
      *param_4 = local_3c[0];
    }
    else {
      FUN_00002898(s_ERROR__USBDeviceInfoConfig__get__000f4848,s___VendorId_000f488a + 2);
    }
    iVar4 = FUN_0004febc(local_40,s_ProductId_000f4898,local_3c);
    if (iVar4 != 0) {
      *param_5 = local_3c[0];
    }
    else {
      FUN_00002898(s_ERROR__USBDeviceInfoConfig__get__000f4848,s_ProductId_000f4898);
    }
    bVar6 = iVar4 != 0 && (iVar3 != 0 && (iVar2 != 0 && iVar1 != 0));
    FUN_00046b8c(local_40);
  }
  FUN_000ce0b8(auStack_80);
  uVar5 = FUN_0011a068();
  iVar1 = FUN_00118e04(uVar5,2,auStack_80);
  if (iVar1 != 0) {
    *param_6 = local_6c;
  }
  return bVar6;
}

