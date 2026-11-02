// rea decompile_all
// name: FUN_00141c60
// address: 0x141c60
// body: available
// range: 0x141c60-0x141eeb inclusive
// range: 0x141ffc-0x142227 inclusive
// range: 0x142350-0x142387 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00141c60(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  uint local_88;
  int local_84;
  undefined1 auStack_80 [4];
  undefined1 auStack_7c [9];
  undefined1 auStack_73 [17];
  undefined1 auStack_62 [5];
  char local_5d;
  undefined1 auStack_5c [20];
  undefined4 local_48;
  
  (**(code **)(**(int **)(param_1 + 0x9c) + 0x24))(*(int **)(param_1 + 0x9c),1,0,DAT_00141eec,0);
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  FUN_000bdfe4(param_1 + 0x14);
  FUN_000f4e84();
  uVar1 = FUN_000f4fc0();
  iVar2 = FUN_001b5b2c(uVar1);
  if (iVar2 == 0) {
    FUN_000ce0b8(auStack_5c);
    uVar3 = FUN_0011a068();
    iVar2 = FUN_00118e04(uVar3,2,auStack_5c);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = local_48;
    }
    uVar4 = FUN_001b5968(uVar1);
    FUN_00081050(*DAT_00141f04,s_Fw__d_HwVs__d_00141f08,uVar3,uVar4);
    uVar3 = FUN_000944c4(uVar1);
    FUN_000b56a8(auStack_80,uVar3);
    if (local_5d == '\0') {
      pcVar5 = s_Hard_Drive_00141f18;
    }
    else {
      pcVar5 = s_Flash_Drive_00141f24;
    }
    FUN_00081050(*DAT_00141f04,s_Device_type__s__Vendor__s__Produ_00141f30,pcVar5,auStack_7c,
                 auStack_73,auStack_62);
    FUN_00081050(*DAT_00141f04,s_Start_prepare_pre_recording_00141f60);
    iVar2 = (**(code **)(**(int **)(param_1 + 8) + 8))();
    if ((iVar2 != 0) && (*(char *)(param_1 + 0x91) == '\0')) {
      if (*(char *)(param_1 + 0x92) == '\0') {
        uVar3 = FUN_0011eda0();
        FUN_0011ff88(uVar3,s_Starting_PRE_RECORDING_00141f94,&DAT_00141f7c);
      }
      else {
        uVar3 = FUN_0011eda0();
        FUN_0011ff88(uVar3,s_Preparing_Recording_00141f80,&DAT_00141f7c);
      }
      uVar3 = FUN_0011eda0();
      FUN_000a1000(uVar3,0x1c);
      FUN_00093c78(uVar1,3);
    }
    if (*(char *)(param_1 + 0x92) == '\0') {
      uVar3 = FUN_000bff84(param_1 + 0x14);
      FUN_000950f4(uVar1,uVar3);
      iVar2 = FUN_001b5ae8(uVar1);
      if (DAT_00141fac < iVar2) {
        FUN_001419e0(param_1,0x17);
        FUN_00002898(s_ERROR__Maximum_recording_take_re_00141fb0);
        uVar1 = FUN_001b5ae8(uVar1);
        FUN_00081050(*DAT_00141f04,s_Maximum_recording_take__d_reache_00141fd8,uVar1);
        uVar1 = FUN_000b575c(auStack_80);
        return uVar1;
      }
    }
    else {
      FUN_000f4e84();
      uVar3 = FUN_000f4fb4();
      uVar3 = FUN_001b275c(uVar3);
      uVar3 = FUN_000bd4d8(param_1 + 0x14,uVar3);
      FUN_000950f4(uVar1,uVar3);
    }
    FUN_000bdabc(param_1 + 0x14,&local_84,&local_88);
    if ((local_84 == 0) && (local_88 < 2)) {
      FUN_001419e0(param_1,0xb);
      FUN_00002898(s_ERROR__No_disk_space_left_to_sta_00142228);
      FUN_00081050(*DAT_00141f04,s_No_disk_space_left_to_start_pre__0014225c);
      uVar1 = FUN_000b575c(auStack_80);
    }
    else {
      FUN_000f4e84();
      uVar3 = FUN_000f5150();
      uVar4 = FUN_001b6f18(uVar3);
      iVar2 = FUN_000c016c(param_1 + 0x14,uVar4);
      iVar6 = FUN_000943f8(uVar1);
      if (iVar6 != 0) {
        uVar4 = FUN_001b6f18(uVar3);
        uVar7 = FUN_00178f04();
        FUN_00177bcc(uVar7,uVar4);
        uVar4 = FUN_000bd790(param_1 + 0x14,*(undefined4 *)(_DAT_00142288 + 0x1c));
        FUN_000bc170(param_1 + 0x14,uVar4);
        FUN_00081050(*DAT_00141f04,s____Madi_Card_Outputs_are_set_00142289 + 3);
      }
      iVar6 = FUN_000943d0(uVar1);
      if (iVar6 != 0) {
        uVar4 = FUN_001b6f18(uVar3);
        uVar7 = FUN_00178f04();
        FUN_00177bb0(uVar7,uVar4);
        uVar4 = FUN_000bd790(param_1 + 0x14,*(undefined4 *)(_DAT_00142288 + 0x1c));
        FUN_000bbfd8(param_1 + 0x14,uVar4);
        FUN_00081050(*DAT_00141f04,s_Adat_Card_Outputs_are_set_001422a8);
      }
      iVar6 = FUN_00094e7c(uVar1);
      if (iVar6 != 0) {
        uVar1 = FUN_001b6f18(uVar3);
        uVar3 = FUN_00178f04();
        FUN_001781a4(uVar3,uVar1);
        uVar1 = FUN_00178f04();
        FUN_00177818(uVar1,1);
        FUN_00081050(*DAT_00141f04,s_AudioLan_Card_Outputs_are_set_001422c4);
      }
      if (iVar2 == 0) {
        *(undefined1 *)(param_1 + 0x98) = 1;
        (**(code **)(**(int **)(param_1 + 0x9c) + 0x24))
                  (*(int **)(param_1 + 0x9c),1,0,DAT_001422e4,0);
        FUN_00081050(*DAT_00141f04,s_StreamingChannelMode_set_to_Reco_001422e8);
      }
      else if (iVar2 == 1) {
        FUN_001d0130(500);
        if (*_DAT_00141ef0 != '\0') {
          FUN_00141348(param_1);
        }
        FUN_00081050(*DAT_00141f04,s_StreamingChannelMode_set_to_Reco_0014231c);
      }
      else if (iVar2 == 2) {
        FUN_001419e0(param_1,0x15);
        FUN_00081050(*DAT_00141f04,s_StreamingChannelMode_set_to_Reco_00142388);
      }
      uVar1 = FUN_000b575c(auStack_80);
    }
  }
  else {
    uVar1 = 0;
    if ((*(char *)(param_1 + 0x91) != '\0') && (uVar1 = 0, *_DAT_00141ef0 != '\0')) {
      FUN_001a48f0(param_1,0x50,0);
      uVar1 = FUN_00081050(*DAT_00141f04,s____Start_Recording_00141ef1 + 3);
    }
  }
  return uVar1;
}

