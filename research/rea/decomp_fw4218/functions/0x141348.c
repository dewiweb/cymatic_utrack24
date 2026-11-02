// rea decompile_all
// name: FUN_00141348
// address: 0x141348
// body: available
// range: 0x141348-0x141663 inclusive
// range: 0x1417c0-0x141987 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00141348(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined1 local_44 [4];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [5];
  undefined1 local_2f;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  
  FUN_000f4e84();
  uVar1 = FUN_000f4fc0();
  FUN_000f4e84();
  uVar2 = FUN_000f5150();
  if (*(int *)(param_1 + 0x94) == 0) {
    uVar2 = FUN_001b6f18(uVar2);
    uVar3 = FUN_000bdf40(param_1 + 0x14,uVar2);
    if (DAT_00141664 < uVar3) {
      FUN_001435d0(local_44,_DAT_00141670,DAT_00141668);
      while( true ) {
        piVar4 = (int *)FUN_000f8ee0();
        iVar5 = (**(code **)(*piVar4 + 0x80))(piVar4,local_44);
        if (iVar5 != 0) break;
        FUN_001d0130(100);
      }
      FUN_00143614(local_44);
    }
    else {
      FUN_001435d0(local_44,DAT_0014166c,DAT_00141668);
      while( true ) {
        piVar4 = (int *)FUN_000f8ee0();
        iVar5 = (**(code **)(*piVar4 + 0x80))(piVar4,local_44);
        if (iVar5 != 0) break;
        FUN_001d0130(100);
      }
      FUN_00143614(local_44);
    }
    if ((*(char *)(param_1 + 0x91) == '\0') && (*(char *)(param_1 + 0x92) == '\0')) {
      FUN_001d0130(1000);
    }
    uVar2 = FUN_001b5ae8(uVar1);
    FUN_000c09dc(auStack_2c,param_1 + 0x14,uVar2);
    uVar2 = FUN_00232084(auStack_28,auStack_2c);
    FUN_000954f4(uVar1,uVar2);
    FUN_00232190(auStack_28);
    uVar2 = FUN_00095470(uVar1);
    FUN_000bc800(param_1 + 0x14,uVar2);
    uVar2 = FUN_00095470(uVar1);
    iVar5 = FUN_000bc6c0(param_1 + 0x14,uVar2);
    if (iVar5 == 0) {
      FUN_00095470(uVar1);
      uVar2 = FUN_0022d168();
      FUN_00002898(s__ERROR__createDirectoryForRecord_00141673 + 1,uVar2);
      FUN_001419e0(param_1,7);
      FUN_00095470(uVar1);
      uVar1 = FUN_0022d168();
      FUN_00081050(*_DAT_001416e4,s_Error__Failed_to_create_the_dire_001416b0,uVar1);
      FUN_00232190(auStack_2c);
      return 0;
    }
    uVar2 = FUN_00178f04();
    FUN_00176e14(uVar2,local_3c,local_40,local_44);
    FUN_00081050(*_DAT_001416e4,s____Date__02d__02d__02d_001416e5 + 3,local_44[0],local_40[0],
                 local_3c[0]);
    FUN_00095470(uVar1);
    uVar2 = FUN_0022d168();
    FUN_00081050(*_DAT_001416e4,s_Created_Folder____ls_001416fc,uVar2);
    uVar2 = FUN_00095470(uVar1);
    FUN_00248acc(auStack_38,uVar2,u__reclog_txt_00141714);
    FUN_000813b8(*_DAT_001416e4,auStack_38);
    FUN_00232190(auStack_38);
    uVar2 = FUN_001b5ae8(uVar1);
    iVar5 = FUN_000c0228(param_1 + 0x14,uVar2,1);
    if (iVar5 == 0) {
      FUN_00002898(s_ERROR__prepareMultiTrackRecordin_0014172c);
      FUN_000bcafc(param_1 + 0x14);
      FUN_00081050(*_DAT_001416e4,s_Error__prepareMultiTrackRecordin_00141758);
      uVar1 = FUN_00095470(uVar1);
      iVar5 = FUN_000bc800(param_1 + 0x14,uVar1);
      if (iVar5 == 0) {
        FUN_00002898(s_ERROR__Delete_Recording_Director_00141794);
      }
      FUN_001419e0(param_1,0x15);
      FUN_00232190(auStack_2c);
      return 0;
    }
    if ((*(char *)(param_1 + 0x91) == '\0') && (*(char *)(param_1 + 0x92) == '\0')) {
      FUN_000bd598(param_1 + 0x14);
      FUN_00081050(*_DAT_001416e4,s_Started_pre_recording_00141988);
    }
    FUN_000f8ee0();
    uVar1 = FUN_000f6910();
    FUN_001282fc(auStack_34,0,0);
    for (uVar3 = 0; uVar6 = FUN_000beb60(param_1 + 0x14), uVar3 < uVar6; uVar3 = uVar3 + 1) {
      FUN_00069ed4(uVar1,uVar3 & 0xff,auStack_34);
      uVar6 = FUN_000bfe18(param_1 + 0x14);
      local_2f = uVar6 <= uVar3;
      FUN_00069f60(uVar1,uVar3 & 0xff,auStack_34,1);
    }
    FUN_00069468();
    FUN_00069498();
    FUN_00232190(auStack_2c);
  }
  if (*(int *)(param_1 + 0x94) == 0) {
    *(undefined1 *)(param_1 + 0x98) = 0;
    FUN_000f4e84();
    uVar1 = FUN_000f4fc0();
    FUN_0009526c(uVar1,1);
    if (*(char *)(param_1 + 0x92) != '\0') {
      FUN_000f4e84();
      uVar2 = FUN_000f4fb4();
      FUN_0006de54(uVar2,1);
      FUN_00081050(*_DAT_001416e4,s_Recording_prepared_in_Slave__001419a0);
    }
    if (*(char *)(param_1 + 0x91) == '\0') {
      FUN_00093c78(uVar1,2);
      FUN_001a48f0(param_1,0x2a,0);
    }
    else if (*_DAT_001419c0 == '\0') {
      FUN_001419e0(param_1,0x14);
      FUN_00081050(*_DAT_001416e4,s____Error__Clock_not_in_sync__001419c1 + 3);
    }
    else {
      FUN_001a48f0(param_1,0x50,0);
    }
    uVar1 = 1;
  }
  else {
    FUN_001a48f0(param_1,0x29,0);
    uVar1 = 0;
  }
  return uVar1;
}

