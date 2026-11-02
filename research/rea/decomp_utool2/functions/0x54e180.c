// rea decompile_all
// name: FUN_0054e180
// address: 0x54e180
// body: available
// range: 0x54e180-0x54e909 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0054e180(int *param_1,undefined4 param_2,int param_3,int param_4,int *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar5;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined *puVar6;
  undefined4 uVar7;
  char *pcVar8;
  int local_28;
  int local_24 [4];
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_0071025c;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = (int)&DAT_00bfe12c;
  local_8 = 0;
  local_24[1] = 1;
  switch(*(undefined4 *)(in_ECX + 8)) {
  case 1:
    break;
  case 2:
    switch(*(undefined4 *)(in_ECX + 0x2c)) {
    case 1:
      FUN_0045c990(&DAT_0073e574,uVar1);
      iVar3 = *param_1;
      *param_1 = local_24[2];
      break;
    case 2:
      FUN_0045c990(&DAT_0073e57c,uVar1);
      iVar3 = *param_1;
      *param_1 = local_24[2];
      break;
    case 3:
      FUN_0045c990("uTrack24",uVar1);
      iVar3 = *param_1;
      *param_1 = local_24[2];
      break;
    case 4:
      FUN_0045c990("uTrackX32",uVar1);
      iVar3 = *param_1;
      *param_1 = local_24[2];
      break;
    default:
      FUN_0045c990("[Unknown Device]",uVar1);
      iVar3 = *param_1;
      *param_1 = local_24[2];
      local_24[2] = iVar3;
      FUN_00637c10();
      FUN_0045c990("Unknown Device type");
      iVar3 = *param_5;
      *param_5 = local_24[2];
    }
    local_24[2] = iVar3;
    FUN_00637c10();
    uVar5 = extraout_ECX_01;
    FUN_00634140(extraout_ECX_01);
    piVar4 = (int *)FUN_006377c0(uVar5);
    iVar3 = *param_1;
    *param_1 = *piVar4;
    *piVar4 = iVar3;
    piVar4 = (int *)(local_28 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    FUN_00634140();
    local_8 = 4;
    uVar5 = extraout_ECX_02;
    FUN_00634140(extraout_ECX_02);
    piVar4 = (int *)FUN_00637730(uVar5);
    iVar3 = *param_1;
    *param_1 = *piVar4;
    *piVar4 = iVar3;
    piVar4 = (int *)(local_28 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    local_8 = local_8 & 0xffffff00;
    piVar4 = (int *)(local_24[0] + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    FUN_0040eb20(local_24);
    FUN_0040eb20(&local_28);
    local_11 = FUN_00637870();
    piVar4 = (int *)(local_28 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    piVar4 = (int *)(local_24[0] + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    if (local_11 != '\0') {
      FUN_0040eb20(local_24);
      local_8 = 5;
      uVar5 = extraout_ECX_03;
      FUN_00634140(extraout_ECX_03);
      piVar4 = (int *)FUN_00637730(uVar5);
      iVar3 = *param_1;
      *param_1 = *piVar4;
      *piVar4 = iVar3;
      FUN_00637c10();
      local_8 = local_8 & 0xffffff00;
      FUN_00637c10();
    }
    if ((char)param_4 == '\0') break;
    FUN_0040eb20(&local_28);
    local_8 = 6;
    uVar5 = extraout_ECX_04;
    goto LAB_0054e2f8;
  case 3:
    FUN_0045c990("Stereo Songs",uVar1);
    iVar3 = *param_1;
    *param_1 = local_24[2];
    piVar4 = (int *)(iVar3 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    FUN_0040eb20(&local_28);
    local_8 = 1;
    FUN_00634140();
    local_8 = CONCAT31(local_8._1_3_,2);
    uVar5 = extraout_ECX;
    uVar7 = extraout_ECX;
    FUN_00634140(extraout_ECX,extraout_ECX);
    FUN_00637730(uVar5);
    piVar4 = (int *)FUN_00637730(uVar7);
    iVar3 = *param_1;
    *param_1 = *piVar4;
    *piVar4 = iVar3;
    piVar4 = (int *)(local_24[2] + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    piVar4 = (int *)(local_24[0] + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    local_8 = local_8 & 0xffffff00;
    piVar4 = (int *)(local_28 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    if ((char)param_4 != '\0') {
      FUN_006369b0(&local_28);
      local_8 = 3;
      uVar5 = extraout_ECX_00;
      goto LAB_0054e2f8;
    }
    break;
  case 4:
    switch(*(undefined4 *)(in_ECX + 0x2c)) {
    case 1:
      puVar6 = &DAT_0073e52c;
      break;
    case 2:
      puVar6 = &DAT_0073e510;
      break;
    case 3:
      pcVar8 = "uTrack24";
      goto LAB_0054e65c;
    case 4:
      pcVar8 = "uTrackX32";
LAB_0054e65c:
      FUN_0045c990(pcVar8,uVar1);
      iVar3 = *param_1;
      *param_1 = local_24[2];
      local_24[2] = iVar3;
      FUN_00637c10();
      uVar5 = extraout_ECX_06;
      FUN_00634140(extraout_ECX_06);
      goto LAB_0054e768;
    default:
      FUN_0045c990("[Unknown Device]",uVar1);
      iVar3 = *param_1;
      *param_1 = local_24[2];
      local_24[2] = iVar3;
      FUN_00637c10();
      FUN_0045c990("Unknown Device type");
      iVar3 = *param_5;
      *param_5 = local_24[2];
      local_24[2] = iVar3;
      FUN_00637c10();
      uVar5 = extraout_ECX_07;
      goto LAB_0054e6dc;
    }
    FUN_0045c990(puVar6,uVar1);
    iVar3 = *param_1;
    *param_1 = local_24[2];
    local_24[2] = iVar3;
    FUN_00637c10();
    uVar5 = extraout_ECX_05;
LAB_0054e6dc:
    iVar3 = *(int *)(*(int *)(in_ECX + 0x38) + 0x44);
    if (iVar3 == 3) {
      FUN_00634140(uVar5);
LAB_0054e768:
      piVar4 = (int *)FUN_006377c0(uVar5);
      iVar3 = *param_1;
      *param_1 = *piVar4;
      *piVar4 = iVar3;
    }
    else {
      if (iVar3 == 4) {
        FUN_00634140(uVar5);
        goto LAB_0054e768;
      }
      if (iVar3 == 5) {
        FUN_00634140(uVar5);
        goto LAB_0054e768;
      }
      FUN_0045c990("[Unknown Playlist Type]",uVar1);
      iVar3 = *param_1;
      *param_1 = local_24[2];
      local_24[2] = iVar3;
      FUN_00637c10();
      FUN_0045c990("Unknown Playlist type");
      iVar3 = *param_5;
      *param_5 = local_24[2];
      local_24[2] = iVar3;
    }
    FUN_00637c10();
    FUN_0040eb20(local_24 + 2);
    local_8 = 7;
    FUN_00634140();
    local_8 = CONCAT31(local_8._1_3_,8);
    uVar5 = extraout_ECX_08;
    uVar7 = extraout_ECX_08;
    FUN_00634140(extraout_ECX_08,extraout_ECX_08);
    FUN_00637730(uVar5);
    piVar4 = (int *)FUN_00637730(uVar7);
    iVar3 = *param_1;
    *param_1 = *piVar4;
    *piVar4 = iVar3;
    piVar4 = (int *)(local_28 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    piVar4 = (int *)(local_24[0] + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    local_8 = local_8 & 0xffffff00;
    piVar4 = (int *)(local_24[2] + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    if ((char)param_4 != '\0') {
      FUN_006369b0(&local_28);
      local_8 = 9;
      uVar5 = extraout_ECX_09;
LAB_0054e2f8:
      FUN_00634140(uVar5);
      piVar4 = (int *)FUN_00637730(uVar5);
      iVar3 = *param_1;
      *param_1 = *piVar4;
      *piVar4 = iVar3;
      FUN_00637c10();
      local_8 = local_8 & 0xffffff00;
      FUN_00637c10();
    }
    break;
  default:
    FUN_0045c990("Unknown project type",uVar1);
    iVar3 = *param_5;
    *param_5 = param_4;
    piVar4 = (int *)(iVar3 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    goto LAB_0054e32d;
  }
LAB_0054e32d:
  if (*(char *)*param_5 != '\0') {
    ExceptionList = local_10;
    return param_1;
  }
  uVar2 = FUN_0054ef10(param_2,&PTR_DAT_00c7ed54,1);
  uVar2 = uVar2 & 0xf;
  if (uVar2 == 1) {
    if (param_3 == 1) {
      ExceptionList = local_10;
      return param_1;
    }
    pcVar8 = "Already exists";
  }
  else {
    if (uVar2 != 2) {
      if (uVar2 != 3) {
        ExceptionList = local_10;
        return param_1;
      }
      if (param_3 == 1) {
        ExceptionList = local_10;
        return param_1;
      }
      FUN_0045c990("New Source",uVar1);
      *param_5 = param_4;
      goto LAB_0054e8e9;
    }
    if (param_3 == 1) {
      ExceptionList = local_10;
      return param_1;
    }
    pcVar8 = "Older Source";
  }
  FUN_0045c990(pcVar8,uVar1);
  *param_5 = param_4;
LAB_0054e8e9:
  FUN_00637c10();
  ExceptionList = local_10;
  return param_1;
}

