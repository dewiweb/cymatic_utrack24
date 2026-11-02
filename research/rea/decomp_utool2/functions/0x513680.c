// rea decompile_all
// name: FUN_00513680
// address: 0x513680
// body: available
// range: 0x513680-0x5139e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00513680(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int in_ECX;
  int *piVar8;
  undefined1 local_34 [8];
  int local_2c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar4 = (uint)param_2;
  puVar3 = param_1;
  puStack_c = &LAB_00708f10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = &DAT_00bfe12c;
  param_1[3] = &DAT_00bfe12c;
  local_8 = 0;
  iVar6 = *(int *)(in_ECX + 0x10);
  local_18 = 1;
  if (iVar6 == 0) {
    iVar6 = *(int *)(in_ECX + 8);
    if ((iVar6 != 0) && ((int)param_2 < (int)*(uint *)(iVar6 + 0x5c))) {
      if (*(uint *)(iVar6 + 0x5c) <= param_2) goto LAB_0051371a;
      iVar6 = *(int *)(*(int *)(iVar6 + 0x54) + (int)param_2 * 4);
      goto LAB_0051371c;
    }
  }
  else if ((int)param_2 < (int)*(uint *)(iVar6 + 0x4bc)) {
    if (param_2 < *(uint *)(iVar6 + 0x4bc)) {
      iVar6 = *(int *)(*(int *)(iVar6 + 0x4b4) + (int)param_2 * 4);
    }
    else {
LAB_0051371a:
      iVar6 = 0;
    }
LAB_0051371c:
    if (iVar6 != 0) {
      *param_1 = *(undefined4 *)(iVar6 + 8);
      puVar5 = (undefined4 *)FUN_005406d0(&param_2);
      uVar7 = puVar3[1];
      puVar3[1] = *puVar5;
      *puVar5 = uVar7;
      piVar8 = (int *)((int)param_2 - 8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      puVar3[2] = *(undefined4 *)(iVar6 + 0x24);
      puVar5 = (undefined4 *)FUN_00411300(&param_2);
      uVar7 = puVar3[3];
      puVar3[3] = *puVar5;
      *puVar5 = uVar7;
      piVar8 = (int *)((int)param_2 - 8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      puVar3[4] = *(undefined4 *)(iVar6 + 0x2c);
      puVar3[5] = *(undefined4 *)(iVar6 + 0x30);
      *(undefined1 *)(puVar3 + 6) = *(undefined1 *)(iVar6 + 0x34);
      goto LAB_005139c6;
    }
  }
  if (*(int *)(in_ECX + 0xc) != 0) {
    local_14 = in_ECX;
    iVar6 = FUN_00412c20(local_34,param_2);
    piVar8 = (int *)(local_2c + -8);
    param_2 = *(undefined4 **)(iVar6 + 4);
    if (piVar8 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar8);
      }
    }
    *puVar3 = param_2;
    switch(*(undefined4 *)(*(int *)(local_14 + 0xc) + 0x40)) {
    case 1:
    case 2:
      puVar5 = (undefined4 *)FUN_0055ed60(&param_2,uVar4);
      uVar7 = puVar3[1];
      puVar3[1] = *puVar5;
      *puVar5 = uVar7;
      FUN_0040ea50();
      puVar3[2] = 0;
      break;
    case 3:
    case 4:
      param_1 = (undefined4 *)FUN_00411090(&param_2,0);
      param_1 = (undefined4 *)*param_1;
      if (param_2 != (undefined4 *)0x0) {
        LOCK();
        piVar8 = param_2 + 1;
        iVar6 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)*param_2)(1);
        }
      }
      if (param_1 != (undefined4 *)0x0) {
        FUN_00411090(&param_1,0);
        puVar5 = (undefined4 *)FUN_00410ea0(&param_2);
        uVar7 = puVar3[1];
        puVar3[1] = *puVar5;
        *puVar5 = uVar7;
        FUN_0040ea50();
        FUN_004030d0();
        uVar7 = FUN_0055ee70(*puVar3);
        puVar3[2] = uVar7;
      }
    }
    puVar5 = (undefined4 *)FUN_00412980(&param_2,uVar4);
    uVar7 = puVar3[3];
    puVar3[3] = *puVar5;
    *puVar5 = uVar7;
    piVar8 = param_2 + -2;
    if (piVar8 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar8);
      }
    }
    iVar6 = FUN_00412c20(local_34,uVar4);
    piVar8 = (int *)(local_2c + -8);
    param_2 = *(undefined4 **)(iVar6 + 0xc);
    if (piVar8 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar8);
      }
    }
    puVar3[4] = param_2;
    iVar6 = FUN_00412c20(local_34,uVar4);
    piVar8 = (int *)(local_2c + -8);
    param_2 = *(undefined4 **)(iVar6 + 0x14);
    if (piVar8 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar8);
      }
    }
    puVar3[5] = param_2;
    iVar6 = FUN_00412c20(local_34,uVar4);
    uVar2 = *(undefined1 *)(iVar6 + 0x10);
    piVar8 = (int *)(local_2c + -8);
    if (piVar8 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar8);
      }
    }
    *(undefined1 *)(puVar3 + 6) = uVar2;
  }
LAB_005139c6:
  if ((int)puVar3[2] < 0) {
    puVar3[2] = 0;
  }
  ExceptionList = local_10;
  return puVar3;
}

