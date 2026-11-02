// rea decompile_all
// name: FUN_00493ad0
// address: 0x493ad0
// body: available
// range: 0x493ad0-0x493ed8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00493ad0(int param_1,int param_2,undefined1 *param_3,int *param_4)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_3c [4];
  undefined4 uStack_38;
  undefined4 *local_34;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00702380;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_34 = (undefined4 *)0x493b1a;
  FUN_006320f0();
  if (((char)param_4 != *(char *)(in_ECX + 0xa4)) ||
     (param_3 != (undefined1 *)*(int *)(in_ECX + 0xa0))) {
    *(char *)(in_ECX + 0xa4) = (char)param_4;
    *(undefined1 **)(in_ECX + 0xa0) = param_3;
    FUN_006e6400(auStack_3c);
    FUN_006ce9f0(1);
  }
  iVar4 = param_2;
  puVar6 = &DAT_00bfe12c;
  param_3 = &DAT_00bfe12c;
  puVar7 = &DAT_00bfe12c;
  puVar8 = &DAT_00bfe12c;
  local_8 = 2;
  if (param_2 != 0) {
    local_34 = &param_4;
    uStack_38 = 0x493b8d;
    puVar3 = (undefined4 *)FUN_00635a10();
    puVar6 = (undefined1 *)*puVar3;
    *puVar3 = &DAT_00bfe12c;
    piVar5 = (int *)((int)param_4 + -8);
    param_3 = puVar6;
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        local_34 = (undefined4 *)0x493bb5;
        FID_conflict__free(piVar5);
      }
    }
    local_34 = *(undefined4 **)(iVar4 + 8);
    uStack_38 = 0x493bc6;
    puVar3 = (undefined4 *)FUN_00636d50();
    puVar7 = (undefined1 *)*puVar3;
    *puVar3 = &DAT_00bfe12c;
    piVar5 = (int *)((int)param_4 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        local_34 = (undefined4 *)0x493bf5;
        FID_conflict__free(piVar5);
      }
    }
    local_34 = (undefined4 *)0x493c09;
    FUN_0045c990();
    local_8 = CONCAT31(local_8._1_3_,3);
    local_34 = &param_1;
    uStack_38 = 0x493c20;
    puVar3 = (undefined4 *)FUN_0062f7d0();
    puVar8 = (undefined1 *)*puVar3;
    *puVar3 = &DAT_00bfe12c;
    piVar5 = (int *)(param_1 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        local_34 = (undefined4 *)0x493c4d;
        FID_conflict__free(piVar5);
      }
    }
    local_8 = CONCAT31(local_8._1_3_,2);
    piVar5 = (int *)((int)param_4 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        local_34 = (undefined4 *)0x493c77;
        FID_conflict__free(piVar5);
      }
    }
  }
  param_4 = (int *)(in_ECX + 0x90);
  if (puVar6 == (undefined1 *)*param_4) {
LAB_00493ca5:
    if (*(undefined1 **)(in_ECX + 0x94) != puVar7) {
      local_34 = *(undefined4 **)(in_ECX + 0x94);
      uStack_38 = 0x493cc2;
      iVar4 = FUN_00448730();
      if (iVar4 != 0) goto LAB_00493cf8;
    }
    if (*(undefined1 **)(in_ECX + 0x98) == puVar8) goto LAB_00493e04;
    local_34 = *(undefined4 **)(in_ECX + 0x98);
    uStack_38 = 0x493ced;
    iVar4 = FUN_00448730();
    if (iVar4 == 0) goto LAB_00493e04;
  }
  else {
    uStack_38 = 0x493c9b;
    local_34 = (undefined4 *)puVar6;
    iVar4 = FUN_0045c1e0();
    if (iVar4 == 0) goto LAB_00493ca5;
  }
LAB_00493cf8:
  piVar5 = (int *)(puVar6 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  LOCK();
  iVar4 = *param_4;
  *param_4 = (int)puVar6;
  UNLOCK();
  piVar5 = (int *)(iVar4 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      local_34 = (undefined4 *)0x493d2a;
      FID_conflict__free(piVar5);
    }
  }
  piVar5 = (int *)(puVar7 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  LOCK();
  iVar4 = *(int *)(in_ECX + 0x94);
  *(int *)(in_ECX + 0x94) = (int)puVar7;
  UNLOCK();
  piVar5 = (int *)(iVar4 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      local_34 = (undefined4 *)0x493d65;
      FID_conflict__free(piVar5);
    }
  }
  piVar5 = (int *)(puVar8 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  LOCK();
  iVar4 = *(int *)(in_ECX + 0x98);
  *(int *)(in_ECX + 0x98) = (int)puVar8;
  UNLOCK();
  piVar5 = (int *)(iVar4 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      local_34 = (undefined4 *)0x493da0;
      FID_conflict__free(piVar5);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x9c);
  *(undefined4 *)(in_ECX + 0x9c) = 0;
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar5 = puVar3 + 1;
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      local_34 = (undefined4 *)0x493dd2;
      (**(code **)*puVar3)();
    }
  }
  if ((param_2 == 0) || (*(char *)(param_2 + 0x20) == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)(in_ECX + 0xa5) = uVar2;
  FUN_006e6400(auStack_3c);
  FUN_006ce9f0(1);
LAB_00493e04:
  if ((undefined1 *)*param_4 != &DAT_00bfe12c) {
    local_34 = (undefined4 *)*param_4;
    uStack_38 = 0x493e24;
    iVar4 = FUN_0045c1e0();
    if (((iVar4 != 0) && (*(int *)(in_ECX + 0x9c) == 0)) && (*(char *)(in_ECX + 0xa5) == '\0')) {
      local_34 = (undefined4 *)0x493e49;
      FUN_00493f20();
      if (*(int *)(in_ECX + 0x9c) == 0) {
        local_34 = (undefined4 *)(in_ECX + 0x70);
        uStack_38 = 0x493e65;
        FUN_00632170();
      }
    }
  }
  piVar5 = (int *)(puVar8 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      local_34 = (undefined4 *)0x493e84;
      FID_conflict__free(piVar5);
    }
  }
  piVar5 = (int *)(puVar7 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      local_34 = (undefined4 *)0x493ea4;
      FID_conflict__free(piVar5);
    }
  }
  piVar5 = (int *)(puVar6 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      local_34 = (undefined4 *)0x493ec2;
      FID_conflict__free(piVar5);
    }
  }
  ExceptionList = local_10;
  return;
}

