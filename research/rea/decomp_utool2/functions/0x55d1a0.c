// rea decompile_all
// name: FUN_0055d1a0
// address: 0x55d1a0
// body: available
// range: 0x55d1a0-0x55d718 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_0055d1a0(uint param_1,byte *param_2,int *param_3,undefined4 *param_4,undefined4 *param_5)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  int in_EDX;
  undefined8 uVar10;
  void *local_34;
  undefined1 local_30 [4];
  void *local_2c;
  int local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00711b37;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_2 = 0;
  local_14 = in_EDX;
  local_2c = operator_new(0xa0);
  puVar3 = (undefined4 *)FUN_0055de80(uVar2);
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    puVar3[1] = puVar3[1] + 1;
    UNLOCK();
  }
  local_8 = 0;
  puVar4 = (undefined4 *)FUN_005403c0(&local_28);
  uVar5 = puVar3[5];
  puVar3[5] = *puVar4;
  *puVar4 = uVar5;
  piVar9 = (int *)(local_28 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  puVar3[0xb] = param_1;
  if (*(int *)(in_EDX + 0x30) == 2) {
    local_1c = (undefined4 *)FUN_005bde60();
    puVar4 = (undefined4 *)0x1;
  }
  else {
    local_1c = (undefined4 *)FUN_005bde60();
    puVar4 = (undefined4 *)0x2;
  }
  uVar5 = puVar3[6];
  puVar3[6] = *local_1c;
  *local_1c = uVar5;
  if (((uint)puVar4 & 2) != 0) {
    local_24 = (undefined4 *)((uint)puVar4 & 0xfffffffd);
    piVar9 = (int *)(local_28 + -8);
    puVar4 = local_24;
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar7 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar7 == 0) {
        FID_conflict__free(piVar9);
        puVar4 = local_24;
      }
    }
  }
  local_8 = 0;
  if ((((uint)puVar4 & 1) != 0) && (piVar9 = (int *)(local_18 + -8), piVar9 != &DAT_00bfe124)) {
    LOCK();
    iVar7 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  puVar4 = (undefined4 *)FUN_00413680(local_30);
  puVar3[8] = *puVar4;
  puVar3[9] = puVar4[1];
  switch(*(undefined4 *)(in_EDX + 0x28)) {
  case 1:
    uVar5 = 0xac44;
    break;
  case 2:
    uVar5 = 48000;
    break;
  case 3:
    uVar5 = 0x15888;
    break;
  case 4:
    uVar5 = 96000;
    break;
  default:
    uVar5 = 0xffffffff;
  }
  puVar3[0xe] = uVar5;
  uVar10 = FUN_006f55d0();
  *(undefined8 *)(puVar3 + 0xc) = uVar10;
  iVar7 = *(int *)(in_EDX + 0x2c);
  if (iVar7 == 1) {
    uVar5 = 0x10;
  }
  else if (iVar7 == 2) {
    uVar5 = 0x18;
  }
  else if (iVar7 == 3) {
    uVar5 = 0x20;
  }
  else {
    uVar5 = 0xffffffff;
  }
  puVar3[0xf] = uVar5;
  puVar3[0x10] = *(undefined4 *)(in_EDX + 0x34);
  FUN_00410af0(&local_24);
  local_8 = CONCAT31(local_8._1_3_,2);
  puVar4 = (undefined4 *)FUN_00636a10(&local_28);
  uVar5 = puVar3[0x20];
  puVar3[0x20] = *puVar4;
  *puVar4 = uVar5;
  piVar9 = (int *)(local_28 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  local_8 = local_8 & 0xffffff00;
  piVar9 = local_24 + -2;
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  *(undefined8 *)(puVar3 + 0x22) = *(undefined8 *)(in_EDX + 0x68);
  uVar10 = FUN_006f55d0();
  *(undefined8 *)(puVar3 + 0x24) = uVar10;
  puVar4 = (undefined4 *)FUN_00540420(&local_34);
  uVar5 = puVar3[0x1d];
  puVar3[0x1d] = *puVar4;
  *puVar4 = uVar5;
  puVar3[0x1e] = puVar4[1];
  puVar3[0x1f] = puVar4[2];
  puVar4[2] = 0;
  FID_conflict__free(local_34);
  iVar7 = local_14;
  puVar4 = (undefined4 *)FUN_0053fdb0(&local_28);
  uVar5 = puVar3[0x26];
  puVar3[0x26] = *puVar4;
  *puVar4 = uVar5;
  piVar9 = (int *)(local_28 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  local_28 = FUN_005bd4e0();
  *param_3 = 0;
  local_18 = local_28;
  if (0 < (int)param_1) {
    local_18 = local_28 * param_1;
    *param_3 = (param_1 + -1) * local_28;
  }
  local_18 = local_18 + -1;
  iVar6 = *(int *)(iVar7 + 0x5c);
  local_1c = (undefined4 *)0x0;
  param_1 = 0;
  if (0 < iVar6) {
    do {
      if (((((int)param_1 < iVar6) && (param_1 < *(uint *)(iVar7 + 0x5c))) &&
          (iVar6 = *(int *)(*(int *)(iVar7 + 0x54) + param_1 * 4), iVar6 != 0)) &&
         ((*param_3 <= *(int *)(iVar6 + 8) && (*(int *)(iVar6 + 8) <= local_18)))) {
        FUN_0053f050(&local_24);
        puVar4 = local_24;
        local_8 = CONCAT31(local_8._1_3_,3);
        cVar1 = FUN_00548d30();
        puVar8 = local_1c;
        if (cVar1 == '\0') {
          *param_4 = 6;
          puVar8 = (undefined4 *)FUN_00410ea0(&param_1);
          uVar5 = *param_5;
          *param_5 = *puVar8;
          *puVar8 = uVar5;
          piVar9 = (int *)(param_1 - 8);
          if (piVar9 != &DAT_00bfe124) {
            LOCK();
            iVar7 = *piVar9;
            *piVar9 = *piVar9 + -1;
            UNLOCK();
            if (iVar7 == 0) {
              FID_conflict__free(piVar9);
            }
          }
          *local_20 = 0;
          if (puVar4 != (undefined4 *)0x0) {
            LOCK();
            piVar9 = puVar4 + 1;
            iVar7 = *piVar9;
            *piVar9 = *piVar9 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)*puVar4)(1);
            }
          }
          LOCK();
          piVar9 = puVar3 + 1;
          iVar7 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)*puVar3)(1);
          }
          ExceptionList = local_10;
          return local_20;
        }
        local_28 = FUN_0055d970(local_1c);
        local_1c = (undefined4 *)((int)puVar8 + 1);
        *(int *)(local_28 + 4) = *(int *)(iVar6 + 8) - *param_3;
        uVar10 = FUN_00411300(&local_2c);
        puVar4 = local_24;
        uVar5 = *(undefined4 *)((int)((ulonglong)uVar10 >> 0x20) + 8);
        *(undefined4 *)(local_28 + 8) = *(undefined4 *)uVar10;
        *(undefined4 *)uVar10 = uVar5;
        piVar9 = (int *)((int)local_2c + -8);
        if (piVar9 != &DAT_00bfe124) {
          LOCK();
          iVar7 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar7 == 0) {
            FID_conflict__free(piVar9);
          }
        }
        *(undefined4 *)(local_28 + 0xc) = *(undefined4 *)(iVar6 + 0x2c);
        *(undefined1 *)(local_28 + 0x10) = *(undefined1 *)(iVar6 + 0x34);
        *(undefined4 *)(local_28 + 0x14) = *(undefined4 *)(iVar6 + 0x30);
        *param_2 = *param_2 | puVar3[0xe] != puVar4[6];
        local_8 = local_8 & 0xffffff00;
        LOCK();
        piVar9 = puVar4 + 1;
        iVar6 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        iVar7 = local_14;
        if (iVar6 == 1) {
          (**(code **)*puVar4)(1);
          iVar7 = local_14;
        }
      }
      iVar6 = *(int *)(iVar7 + 0x5c);
      param_1 = param_1 + 1;
    } while ((int)param_1 < iVar6);
  }
  if (puVar3[0x19] == 0) {
    iVar7 = FUN_0055d970(local_1c);
    *(undefined4 *)(iVar7 + 4) = 0;
    FUN_0045c990("(--silent--)");
    piVar9 = (int *)(*(int *)(iVar7 + 8) + -8);
    *(uint *)(iVar7 + 8) = param_1;
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar9);
      }
    }
    *(undefined4 *)(iVar7 + 0xc) = 0xc1c00000;
    *(undefined1 *)(iVar7 + 0x10) = 1;
    *(undefined4 *)(iVar7 + 0x14) = 0;
  }
  *local_20 = puVar3;
  ExceptionList = local_10;
  return local_20;
}

