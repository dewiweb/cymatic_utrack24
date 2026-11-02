// rea decompile_all
// name: FUN_005365b0
// address: 0x5365b0
// body: available
// range: 0x5365b0-0x536b54 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005365b0(undefined1 *param_1,undefined4 *param_2,int param_3,int param_4,char param_5)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  float in_ECX;
  int *piVar6;
  undefined1 *puVar7;
  char *pcVar8;
  undefined1 auStack_94 [4];
  undefined4 uStack_90;
  char **ppcStack_8c;
  undefined *local_88;
  undefined4 *local_84;
  int local_60;
  undefined4 *local_5c;
  char *local_58;
  int *local_54;
  int local_50;
  int local_48;
  char local_41;
  float local_40;
  undefined1 *local_3c;
  char *local_38 [5];
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_8 = 0xff;
  uStack_7 = 0xffffff;
  puStack_c = &LAB_0070d65b;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = param_1;
  local_5c = param_2;
  local_40 = in_ECX;
  if (((((int)param_1 < 0) ||
       (puVar7 = *(undefined1 **)(*(int *)((int)in_ECX + 4) + 0x20), (int)puVar7 <= (int)param_1))
      || (puVar7 <= param_1)) ||
     (local_54 = *(int **)(*(int *)(*(int *)((int)in_ECX + 4) + 0x18) + (int)param_1 * 4),
     local_54 == (int *)0x0)) goto LAB_00536b37;
  if (param_5 != '\0') {
    local_84 = (undefined4 *)0x53662e;
    FUN_00684a80();
  }
  local_84 = (undefined4 *)0x536646;
  FUN_00684c50();
  pcVar8 = "";
  local_58 = "";
  local_8 = 1;
  uStack_7 = 0;
  local_84 = *(undefined4 **)((int)in_ECX + 0xc);
  local_88 = (undefined *)0x536680;
  cVar2 = FUN_00540440();
  if (cVar2 == '\0') {
    local_84 = (undefined4 *)0x536699;
    FUN_0045c990();
    pcVar8 = local_38[0];
    local_58 = local_38[0];
    local_88 = &DAT_0073bf20;
    ppcStack_8c = local_38;
    uStack_90 = 0x5366b6;
    piVar3 = (int *)FUN_00636260();
    piVar6 = (int *)(*piVar3 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
    }
    LOCK();
    iVar4 = *(int *)((int)in_ECX + -4);
    *(int *)((int)in_ECX + -4) = *piVar3;
    UNLOCK();
    piVar3 = (int *)(iVar4 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        local_84 = (undefined4 *)0x5366ec;
        FID_conflict__free(piVar3);
      }
    }
    piVar3 = (int *)(local_38[0] + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        local_84 = (undefined4 *)0x536717;
        FID_conflict__free(piVar3);
      }
    }
  }
  else {
    FUN_005b2a40();
    local_84 = (undefined4 *)0x536738;
    FUN_00410a10();
    _local_8 = CONCAT31(uStack_7,3);
    local_84 = (undefined4 *)0x536744;
    cVar2 = FUN_00635500();
    local_41 = cVar2 == '\0';
    piVar3 = (int *)(local_38[0] + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        local_84 = (undefined4 *)0x53676c;
        FID_conflict__free(piVar3);
      }
    }
    local_8 = 1;
    piVar3 = (int *)(local_48 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        local_84 = (undefined4 *)0x536793;
        FID_conflict__free(piVar3);
      }
    }
    if (local_41 == '\0') {
      local_84 = (undefined4 *)0x53680b;
      FUN_0040a040();
    }
    else {
      local_84 = (undefined4 *)0x5367ad;
      FUN_0045c990();
      pcVar8 = local_38[0];
      local_58 = local_38[0];
      local_88 = &DAT_0073bf3c;
      ppcStack_8c = local_38;
      uStack_90 = 0x5367ca;
      FUN_00636260();
      local_84 = (undefined4 *)0x5367d6;
      FUN_0040a040();
      piVar3 = (int *)(local_38[0] + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          local_84 = (undefined4 *)0x5367f6;
          FID_conflict__free(piVar3);
        }
      }
    }
  }
  local_48 = param_4 + -4;
  local_50 = (param_4 * 3) / 2;
  local_38[0] = (char *)((float)(param_3 - local_50) - (float)local_48 * 0.5);
  local_40 = (float)((param_3 - local_50) - local_48) - 2.0;
  if (*pcVar8 != '\0') {
    local_18 = param_4;
    local_84 = &local_24;
    local_1c = param_3;
    local_24 = 0;
    local_20 = 0;
    local_88 = (undefined *)0x53688a;
    iVar4 = FUN_0057f1c0();
    local_40 = (float)iVar4;
  }
  puVar7 = local_3c + 1;
  local_3c = &stack0xffffff80;
  if ((int)puVar7 < 0) {
    local_84 = (undefined4 *)0x5368b8;
    iVar4 = FUN_006104a0();
    *(undefined1 *)(iVar4 + -1) = 0x2d;
    iVar4 = iVar4 + -1;
  }
  else {
    local_84 = (undefined4 *)0x5368ad;
    local_3c = &stack0xffffff80;
    iVar4 = FUN_006104a0();
  }
  local_84 = (undefined4 *)((int)&local_18 + (3 - iVar4));
  local_88 = (undefined *)0x5368cd;
  FUN_004557e0();
  local_84 = (undefined4 *)0x5368dd;
  FUN_006377c0();
  local_8 = 4;
  local_84 = (undefined4 *)0x28;
  local_88 = (undefined *)0x0;
  ppcStack_8c = (char **)0x5368f2;
  FUN_00472d90();
  local_84 = (undefined4 *)0x22;
  FUN_0040e4d0(auStack_94);
  FUN_006830c0(&local_60);
  local_84 = (undefined4 *)0x536920;
  uVar5 = FUN_00414bf0();
  local_8 = 5;
  local_84 = (undefined4 *)((int)local_40 + -0x2c);
  local_88 = (undefined *)0x0;
  ppcStack_8c = (char **)0x536941;
  FUN_00472d90();
  local_84 = (undefined4 *)0x21;
  FUN_0040e4d0(auStack_94);
  puVar1 = local_5c;
  FUN_006830c0(uVar5);
  local_8 = 4;
  piVar3 = (int *)(local_3c + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      local_84 = (undefined4 *)0x536987;
      FID_conflict__free(piVar3);
    }
  }
  if (*pcVar8 == '\0') {
    iVar4 = *local_54;
    if (iVar4 == 1) {
LAB_00536abc:
      local_84 = (undefined4 *)(float)local_48;
      local_88 = (undefined *)0x536ae0;
      FUN_00561df0();
    }
    else if (iVar4 == 2) {
      local_84 = (undefined4 *)(float)local_48;
      local_88 = (undefined *)0x5369f6;
      FUN_00561df0();
      local_40 = (float)(local_48 + 2) + local_40;
      local_3c = (undefined1 *)FUN_0057f440();
      local_8 = 6;
      if (*(char *)(puVar1 + 2) != '\0') {
        *(undefined1 *)(puVar1 + 2) = 0;
        (**(code **)(*(int *)*puVar1 + 0x34))();
      }
      local_84 = (undefined4 *)0x536a3a;
      (**(code **)(*(int *)*puVar1 + 0x68))();
      local_8 = 4;
      if (local_38[0] != (char *)0x0) {
        LOCK();
        piVar3 = (int *)(local_38[0] + 4);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          local_84 = (undefined4 *)0x536a5a;
          (*(code *)**(undefined4 **)local_38[0])();
        }
      }
      local_84 = (undefined4 *)0x536a68;
      uVar5 = FUN_00637c90();
      local_8 = 7;
      local_84 = (undefined4 *)local_50;
      local_88 = (undefined *)0x0;
      ppcStack_8c = (char **)0x536a83;
      FUN_00472d90();
      local_84 = (undefined4 *)0x24;
      FUN_0040e4d0(auStack_94);
      FUN_006830c0(uVar5);
      FUN_00637c10();
    }
    else if (iVar4 == 3) goto LAB_00536abc;
  }
  piVar3 = (int *)(local_60 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      local_84 = (undefined4 *)0x536b03;
      FID_conflict__free(piVar3);
    }
  }
  FUN_0040f7f0();
  local_84 = (undefined4 *)0x536b16;
  FID_conflict__free((void *)0x0);
  piVar3 = (int *)(pcVar8 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      local_84 = (undefined4 *)0x536b34;
      FID_conflict__free(piVar3);
    }
  }
LAB_00536b37:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

