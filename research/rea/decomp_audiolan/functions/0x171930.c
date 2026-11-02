// rea decompile_all
// name: FUN_00171930
// address: 0x171930
// body: available
// range: 0x171930-0x171c6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00171930(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4,
                undefined4 param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  char local_dc [68];
  undefined4 *local_98;
  int *local_94;
  undefined1 local_90 [68];
  undefined4 local_4c;
  undefined4 *local_48;
  undefined4 local_44;
  int local_40 [2];
  undefined1 local_38 [12];
  int *local_2c;
  int local_28;
  int *piStack_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 *puStack_18;
  
  *param_2 = 0;
  if (param_4 == (undefined4 *)0x0) {
    return -2;
  }
  if (*param_1 < 1) {
    return -10;
  }
  local_90[0] = 0;
  local_38[0] = 0;
  piStack_24 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  puStack_18 = param_4;
  if ((code *)param_1[0x17] != entry) {
    (*(code *)param_1[0x17])(param_1,local_90,0x41,local_38,10);
  }
  iVar3 = FUN_001a5740(&local_94);
  if (iVar3 != 0) {
    return iVar3;
  }
  if (param_4[10] == 0) {
    FUN_001a52e0(local_94);
    return -5;
  }
  FUN_000038a0(local_dc,0x44);
  FUN_00175564(param_1,param_1[0xb],local_dc,0x31);
  if (local_dc[0] == '\0') {
    FUN_001a52e0(local_94);
    return -10;
  }
  iVar3 = FUN_001a6f50(local_1c);
  local_94[2] = iVar3;
  if (iVar3 == 0) {
LAB_001719fe:
    FUN_001a52e0();
    return -4;
  }
  iVar3 = FUN_001a6f50(s_SIP_2_0_00171c6c);
  *local_94 = iVar3;
  if (iVar3 == 0) goto LAB_001719fe;
  local_94[3] = 0;
  local_94[4] = 0;
  local_98 = param_4 + 4;
  iVar3 = FUN_001a4bc4(local_98,0);
  piVar2 = local_94;
  if (iVar3 == 0) {
    iVar3 = 0;
    local_48 = local_98;
    local_98 = (undefined4 *)FUN_001a4bdc(local_98,0);
    FUN_001a7c44(local_98[1] + 0x14,&DAT_00171c74,&local_28);
    if (local_28 == 0) {
      iVar4 = FUN_001a7830(local_98[1],piVar2 + 1);
      if (iVar4 != 0) {
LAB_00171afa:
        FUN_001a52e0(local_94);
        return iVar4;
      }
      local_2c = piVar2 + 0x29;
      while (iVar4 = FUN_001a4bc4(local_48,iVar3), iVar4 == 0) {
        uVar5 = FUN_001a4bdc(local_48,iVar3);
        iVar4 = FUN_001a3ee4(uVar5,&local_44);
        if (iVar4 != 0) goto LAB_00171afa;
        iVar4 = FUN_001a4bc4(local_48,iVar3 + 1);
        if (iVar4 == 0) {
          FUN_001a4a80(local_2c,local_44,0xffffffff);
        }
        else {
          FUN_001a6e7c(local_44);
        }
        iVar3 = iVar3 + 1;
      }
      iVar4 = FUN_001a82fc(*(undefined4 *)(param_4[10] + 4),local_40);
      if (iVar4 != 0) goto LAB_00171afa;
      iVar4 = FUN_001a66e8(piVar2,local_40[0]);
      if (local_40[0] != 0) {
        if ((code *)*DAT_00171c78 == entry) {
          FUN_0018a280();
        }
        else {
          (*(code *)*DAT_00171c78)();
        }
      }
      if (iVar4 != 0) goto LAB_00171afa;
    }
    else {
      iVar4 = FUN_001a7830(*(undefined4 *)(param_4[10] + 4),piVar2 + 1);
      if (iVar4 != 0) goto LAB_00171afa;
      while (iVar4 = FUN_001a4bc4(local_48,iVar3), iVar4 == 0) {
        uVar5 = FUN_001a4bdc(local_48,iVar3);
        iVar4 = FUN_001a3ee4(uVar5,&local_4c);
        if (iVar4 != 0) goto LAB_00171afa;
        FUN_001a4a80(piVar2 + 0x29,local_4c,0xffffffff);
        iVar3 = iVar3 + 1;
      }
    }
  }
  else {
    iVar3 = FUN_001a7830(*(undefined4 *)(param_4[10] + 4),local_94 + 1);
    if (iVar3 != 0) goto LAB_00171b22;
  }
  iVar3 = FUN_001a71c8(param_4[8],local_94 + 0x2b);
  if ((iVar3 != 0) || (iVar3 = FUN_001a3ee4(param_4[9],local_94 + 0x1f), iVar3 != 0)) {
LAB_00171b22:
    FUN_001a52e0(local_94);
    return iVar3;
  }
  FUN_001a5bb8(local_94,*param_4);
  iVar3 = FUN_00003960(&DAT_00171c7c,local_1c);
  puVar1 = DAT_00171c80;
  if (iVar3 == 0) {
    iVar3 = FUN_001a3844(&local_98);
    if (iVar3 == 0) {
      pcVar6 = (code *)*puVar1;
      if (pcVar6 == entry) {
        iVar3 = FUN_0019b388(0x14);
      }
      else {
        iVar3 = (*pcVar6)(0x14);
      }
      if (iVar3 == 0) goto LAB_00171c06;
      FUN_000028d8(iVar3,&DAT_00171c84,param_4[6]);
      FUN_001a39a4(local_98,iVar3);
      uVar5 = FUN_001a6f50(local_1c);
      FUN_001a39a0(local_98,uVar5);
      local_94[0x1c] = (int)local_98;
      goto LAB_00171be0;
    }
  }
  else {
    iVar3 = FUN_001a3844(&local_98);
    if (iVar3 == 0) {
      param_4[6] = param_4[6] + 1;
      pcVar6 = (code *)*puVar1;
      if (pcVar6 == entry) {
        iVar3 = FUN_0019b388(0x14);
      }
      else {
        iVar3 = (*pcVar6)(0x14);
      }
      if (iVar3 == 0) {
LAB_00171c06:
        FUN_001a52e0(local_94);
        return -4;
      }
      FUN_000027f4(iVar3,0x14,&DAT_00171c84,param_4[6]);
      FUN_001a39a4(local_98,iVar3);
      uVar5 = FUN_001a6f50(local_1c);
      FUN_001a39a0(local_98,uVar5);
      local_94[0x1c] = (int)local_98;
LAB_00171be0:
      FUN_001a6054(local_94,s_Max_Forwards_00171c8c,&DAT_00171c88);
      iVar3 = FUN_00178820(param_1,local_94,param_5,local_dc);
      if (iVar3 != 0) {
        FUN_001a52e0(local_94);
        return iVar3;
      }
      FUN_001736ac(param_1,local_94,0);
      iVar3 = FUN_00003960(s_NOTIFY_00171c9c,local_1c);
      if ((iVar3 != 0) && (iVar3 = FUN_00003960(&DAT_00171ca4,local_1c), iVar3 != 0)) {
        iVar3 = FUN_00003960(s_OPTIONS_00171cac,local_1c);
        if (iVar3 == 0) {
          FUN_001a585a(local_94,s_application_sdp_00171cc0);
        }
        else {
          FUN_00003960(&DAT_00171c7c,local_1c);
        }
      }
      FUN_001a6054(local_94,s_User_Agent_00171cb4,param_1[0x21]);
      *local_20 = local_94;
      return 0;
    }
  }
  FUN_001a52e0(local_94);
  return iVar3;
}

