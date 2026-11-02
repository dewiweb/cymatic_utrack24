// rea decompile_all
// name: FUN_004f5b70
// address: 0x4f5b70
// body: available
// range: 0x4f5b70-0x4f60c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f5b70(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *in_ECX;
  int *piVar7;
  undefined1 *local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  void *pvStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  void *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 *local_48;
  int *local_44;
  undefined4 *local_40;
  undefined1 *local_3c;
  undefined4 *local_38;
  undefined1 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  void *pvStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &LAB_00706245;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(uint *)(in_ECX[0x60] + 0x88c) < 2) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(*(int *)(in_ECX[0x60] + 0x884) + 4);
  }
  local_48 = in_ECX;
  local_14 = uVar2;
  FUN_006e9790(param_1,0,uVar5,in_ECX[7]);
  iVar4 = in_ECX[0x60];
  in_ECX[0x61] = (float)(param_1 + in_ECX[0x6b]);
  if (*(uint *)(iVar4 + 0x88c) < 3) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(iVar4 + 0x884) + 8);
  }
  in_ECX[0x62] = (float)iVar3;
  in_ECX[99] = (float)(int)((float)iVar3 + (float)(param_1 + in_ECX[0x6b]));
  if (*(uint *)(iVar4 + 0x88c) < 4) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(iVar4 + 0x884) + 0xc);
  }
  uVar1 = in_ECX[0x20];
  in_ECX[100] = (float)iVar3;
  if ((int)uVar1 < (int)*(uint *)(iVar4 + 0x880)) {
    if (uVar1 < *(uint *)(iVar4 + 0x880)) {
      piVar7 = *(int **)(*(int *)(iVar4 + 0x878) + uVar1 * 4);
    }
    else {
      piVar7 = (int *)0x0;
    }
    local_44 = piVar7;
    if (*piVar7 == 0) {
      local_34 = &DAT_00bfe12c;
      local_30 = 0;
      local_2c = 1;
      uStack_28 = 1;
      uStack_24 = 0;
      pvStack_20 = (void *)0x0;
      local_1c = 0;
      local_18 = 0;
      local_8 = 10;
      FUN_0045c990(&DAT_00739278,uVar2);
      local_48 = DAT_00c7ebbc;
      uVar5 = FUN_0057f460();
      local_8 = CONCAT31(local_8._1_3_,0xc);
      FUN_00636ec0(&local_3c);
      FUN_0044ec90();
      FUN_00644f50(uVar5,&local_48);
      if (local_38 != (undefined4 *)0x0) {
        LOCK();
        piVar7 = local_38 + 1;
        iVar4 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)*local_38)(1);
        }
      }
      local_8._0_1_ = 10;
      piVar7 = (int *)(local_3c + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      FUN_00684960(&local_34);
      local_5c = 0;
      local_54 = 0;
      local_50 = 0;
      local_4c = 9;
      FUN_00471a50();
      local_60 = (void *)in_ECX[0xb8];
      in_ECX[0xb8] = 0;
      in_ECX[0xb9] = 0;
      in_ECX[0xba] = 0;
      in_ECX[0xbb] = 0;
      in_ECX[0xbc] = 0;
      local_58 = 0;
      in_ECX[0xbd] = 9;
      FUN_00471a50();
      FID_conflict__free(local_60);
      FUN_00471bf0();
      FID_conflict__free(pvStack_20);
      local_3c = local_34;
    }
    else {
      FUN_00636a10(&local_3c);
      local_8 = 0;
      if (-1 < piVar7[1]) {
        if (piVar7[1] + 1 < 0) {
          iVar4 = FUN_006104a0();
          *(undefined1 *)(iVar4 + -1) = 0x2d;
          iVar4 = iVar4 + -1;
        }
        else {
          iVar4 = FUN_006104a0();
        }
        FUN_004557e0((int)&local_18 + (3 - iVar4));
        local_8._0_1_ = 1;
        uVar5 = FUN_00637690(&local_40);
        local_8 = CONCAT31(local_8._1_3_,2);
        FUN_00636ec0(uVar5);
        piVar7 = local_38 + -2;
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar4 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar4 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        piVar7 = local_40 + -2;
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar4 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar4 == 0) {
            FID_conflict__free(piVar7);
          }
        }
      }
      local_80 = &DAT_00bfe12c;
      local_7c = 0;
      local_78 = 1;
      uStack_74 = 1;
      uStack_70 = 0;
      pvStack_6c = (void *)0x0;
      local_68 = 0;
      local_64 = 0;
      local_38 = DAT_00c7ebbc;
      uVar5 = FUN_0057f460();
      local_8._0_1_ = 4;
      FUN_00636ec0(&local_3c);
      FUN_0044ec90();
      FUN_00644f50(uVar5,&local_38);
      local_8._0_1_ = 3;
      if (local_40 != (undefined4 *)0x0) {
        LOCK();
        piVar7 = local_40 + 1;
        iVar4 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)*local_40)(1);
        }
      }
      FUN_00684960(&local_80);
      if (*(int *)(*local_44 + 4) == 0) {
        local_60 = (void *)0x0;
        local_5c = 0;
        local_58 = 0;
        local_54 = 0;
        local_50 = 0;
        local_4c = 9;
        FUN_00683e80(&local_60);
        FUN_00471a50();
        FID_conflict__free(local_60);
      }
      else {
        FUN_00683e00();
        local_38 = DAT_00c7ebbc;
        uVar5 = FUN_0057f440();
        local_8._0_1_ = 6;
        uVar6 = FUN_00549490(&local_44);
        local_8 = CONCAT31(local_8._1_3_,9);
        FUN_00636ec0(uVar6);
        FUN_0044ec90();
        FUN_00644f50(uVar5,&local_38);
        piVar7 = local_44 + -2;
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar4 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar4 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        local_8._0_1_ = 3;
        if (local_40 != (undefined4 *)0x0) {
          LOCK();
          piVar7 = local_40 + 1;
          iVar4 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)*local_40)(1);
          }
        }
        FUN_00684960(&local_80);
      }
      FUN_00471bf0();
      FID_conflict__free(pvStack_6c);
      piVar7 = (int *)(local_80 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar7);
        }
      }
    }
    piVar7 = (int *)(local_3c + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar7);
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

