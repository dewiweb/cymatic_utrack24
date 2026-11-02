// rea decompile_all
// name: FUN_000bf368
// address: 0xbf368
// body: available
// range: 0xbf368-0xbf67f inclusive
// range: 0xbf834-0xbf87f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000bf368(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint local_2a4;
  uint local_2a0;
  undefined *local_29c;
  undefined1 auStack_298 [4];
  undefined1 auStack_294 [9];
  undefined1 auStack_28b [17];
  undefined1 auStack_27a [5];
  char local_275;
  undefined1 auStack_274 [20];
  undefined4 local_260;
  undefined1 auStack_23c [4];
  undefined1 auStack_238 [12];
  undefined1 auStack_22c [4];
  undefined1 auStack_228 [512];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  
  FUN_000f4e84();
  uVar1 = FUN_000f4fc0();
  iVar2 = FUN_001b5ae8(uVar1);
  FUN_00094788(uVar1,iVar2 + 1);
  iVar2 = FUN_001b5a48(uVar1);
  if (DAT_000bf680 < iVar2) {
    uVar1 = 0;
  }
  else {
    uVar3 = FUN_001b5a48(uVar1);
    FUN_000bddec(auStack_28,param_1,uVar3);
    iVar2 = FUN_000bc6c0(param_1,auStack_28);
    if (iVar2 == 0) {
      FUN_00002898(s_ERROR__createDirectoryForRecordi_000bf684);
      uVar1 = FUN_0022d168(auStack_28);
      FUN_00081050(*DAT_000bf6f0,s_Error__PrepareNextGaplessTake_fa_000bf6b0,uVar1);
      FUN_00232190(auStack_28);
      uVar1 = 0;
    }
    else {
      uVar4 = FUN_001b5a48(uVar1);
      uVar3 = FUN_001b5a48(uVar1);
      local_29c = &DAT_000bf6f4;
      local_2a0 = 1;
      local_2a4 = uVar4;
      FUN_00002934(auStack_228,0x100,u__ls__ls_04d__ls_04d__04d__s_000bf720,u_MultiTrack_000bf708,
                   u_Take_000bf6fc,uVar3,u_Take_000bf6fc);
      uVar3 = FUN_00230e4c(auStack_24);
      FUN_00231ef4(auStack_22c,auStack_228,uVar3);
      FUN_00170c04(auStack_238,0,auStack_22c);
      piVar5 = (int *)FUN_000f8ee0();
      iVar2 = (**(code **)(*piVar5 + 0x80))(piVar5,auStack_238);
      if (iVar2 == 0) {
        FUN_00002898(s_ERROR__Setup_next_file_failed_000bf880);
        uVar1 = FUN_0022d168(auStack_22c);
        FUN_00081050(*DAT_000bf6f0,s_SetupNextFile__s_Failed____000bf8a0,uVar1);
        FUN_00170c54(auStack_238);
        FUN_00232190(auStack_22c);
        FUN_00232190(auStack_28);
        uVar1 = 0;
      }
      else {
        FUN_00081424(*DAT_000bf6f0);
        FUN_000ce0b8(auStack_274);
        uVar3 = FUN_0011a068();
        iVar2 = FUN_00118e04(uVar3,2,auStack_274);
        uVar3 = 0;
        if (iVar2 != 0) {
          uVar3 = local_260;
        }
        uVar6 = FUN_001b5968(uVar1);
        FUN_00081050(*DAT_000bf6f0,s_Fw__d_HwVs__d_000bf758,uVar3,uVar6);
        uVar1 = FUN_000944c4(uVar1);
        FUN_000b56a8(auStack_298,uVar1);
        if (local_275 == '\0') {
          pcVar7 = s_Hard_Drive_000bf768;
        }
        else {
          pcVar7 = s_Flash_Drive_000bf774;
        }
        FUN_00081050(*DAT_000bf6f0,s_Device_type__s__Vendor__s__Produ_000bf780,pcVar7,auStack_294,
                     auStack_28b,auStack_27a);
        uVar1 = FUN_00178f04();
        FUN_00176e14(uVar1,&local_29c,&local_2a0,&local_2a4);
        FUN_00081050(*DAT_000bf6f0,s_Date__02d__02d__02d_000bf7b0,local_2a4 & 0xff,local_2a0 & 0xff,
                     (uint)local_29c & 0xff);
        uVar1 = FUN_0022d168(auStack_28);
        FUN_00081050(*DAT_000bf6f0,s_Created_Folder____ls_000bf7c4,uVar1);
        uVar1 = FUN_000bfe18(param_1);
        uVar3 = FUN_000bda98(param_1);
        uVar6 = FUN_000bdc24(param_1);
        FUN_00081050(*DAT_000bf6f0,s_SR__d_depth__d__ActiveTracks__d_000bf7dc,uVar6,uVar3,uVar1);
        FUN_00248acc(auStack_23c,auStack_28,u__reclog_txt_000bf7fc);
        FUN_000813b8(*DAT_000bf6f0,auStack_23c);
        FUN_00232190(auStack_23c);
        uVar1 = FUN_0022d168(auStack_22c);
        FUN_00081050(*DAT_000bf6f0,s_SetupNextFile__ls_Successful_000bf814,uVar1);
        FUN_000b575c(auStack_298);
        FUN_00170c54(auStack_238);
        FUN_00232190(auStack_22c);
        FUN_00232190(auStack_28);
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}

