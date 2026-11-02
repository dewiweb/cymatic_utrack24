// rea decompile_all
// name: FUN_0053d560
// address: 0x53d560
// body: available
// range: 0x53d560-0x53da6a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0053d560(undefined4 *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 in_ECX;
  undefined4 uVar8;
  int *piVar9;
  int in_EDX;
  double in_XMM0_Qa;
  undefined1 local_48 [8];
  int local_40;
  void *local_3c [3];
  void *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int local_1c;
  int local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070e209;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 1;
  local_1c = in_EDX;
  local_30 = operator_new(0x80);
  iVar3 = param_1[0xf];
  if (iVar3 == 0x10) {
    cVar1 = '\x01';
  }
  else if (iVar3 == 0x18) {
    cVar1 = '\x02';
  }
  else {
    cVar1 = (iVar3 != 0x20) + '\x03';
  }
  iVar3 = param_1[0xe];
  if (iVar3 < 0x15889) {
    if (iVar3 == 0x15888) {
      uVar8 = 3;
    }
    else if (iVar3 == 0xac44) {
      uVar8 = 1;
    }
    else {
      if (iVar3 != 48000) goto LAB_0053d609;
      uVar8 = 2;
    }
  }
  else if (iVar3 == 96000) {
    uVar8 = 4;
  }
  else {
LAB_0053d609:
    uVar8 = 6;
  }
  iVar3 = FUN_0053e340(uVar8,uVar8,cVar1,2,in_ECX);
  puVar4 = (undefined4 *)FUN_0040eb20(&local_24);
  uVar8 = *(undefined4 *)(iVar3 + 0x20);
  *(undefined4 *)(iVar3 + 0x20) = *puVar4;
  *puVar4 = uVar8;
  piVar9 = (int *)(local_24 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  FUN_0045c990(".songprj",uVar2);
  local_8._0_1_ = 2;
  iVar5 = *(int *)(iVar3 + 0x20);
  piVar9 = (int *)(iVar5 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    *piVar9 = *piVar9 + 1;
    UNLOCK();
  }
  puVar4 = (undefined4 *)FUN_00637730(iVar5);
  local_8 = CONCAT31(local_8._1_3_,3);
  puVar4 = (undefined4 *)FUN_00635a10(&local_24,*puVar4);
  uVar8 = *(undefined4 *)(iVar3 + 0x70);
  *(undefined4 *)(iVar3 + 0x70) = *puVar4;
  *puVar4 = uVar8;
  piVar9 = (int *)(local_24 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  piVar9 = local_20 + -2;
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  piVar9 = (int *)(local_18 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  FUN_006f56f0();
  local_18 = 0;
  *(double *)(iVar3 + 0x38) = in_XMM0_Qa / (double)(int)param_1[0xe];
  if ((local_1c != 0) && (local_1c == 1)) {
    switch(param_1[0x10]) {
    case 1:
    case 2:
      iVar5 = 0x10;
      break;
    case 3:
      iVar5 = 0x18;
      break;
    case 4:
      iVar5 = 0x20;
      break;
    default:
      iVar5 = 0;
    }
    switch(param_1[0xb]) {
    default:
      goto switchD_0053d787_caseD_0;
    case 2:
      break;
    case 3:
      iVar5 = iVar5 * 2;
      break;
    case 4:
      iVar5 = iVar5 * 3;
    }
    local_18 = iVar5;
  }
switchD_0053d787_caseD_0:
  local_24 = 0;
  if (0 < (int)param_1[0x19]) {
    do {
      iVar5 = local_24;
      iVar6 = FUN_00412c20(local_48,local_24);
      piVar9 = (int *)(local_40 + -8);
      local_30 = *(void **)(iVar6 + 0x14);
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar9);
        }
      }
      iVar6 = FUN_00412c20(local_48,iVar5);
      piVar9 = (int *)(local_40 + -8);
      local_11 = *(undefined1 *)(iVar6 + 0x10);
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar9);
        }
      }
      iVar6 = FUN_00412c20(local_48,iVar5);
      piVar9 = (int *)(local_40 + -8);
      local_2c = *(int *)(iVar6 + 0xc);
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar9);
        }
      }
      FUN_00412980(&local_1c,iVar5);
      iVar5 = FUN_00412c20(local_48,iVar5);
      piVar9 = (int *)(local_40 + -8);
      local_28 = *(int *)(iVar5 + 4);
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar9);
        }
      }
      local_8 = CONCAT31(local_8._1_3_,4);
      piVar7 = operator_new(0x38);
      piVar9 = (int *)(local_1c + -8);
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        *piVar9 = *piVar9 + 1;
        UNLOCK();
      }
      piVar9 = (int *)(local_1c + -8);
      piVar7[1] = *(int *)(iVar3 + 0x34);
      *piVar7 = iVar3;
      piVar7[2] = local_28 + local_18;
      piVar7[3] = (int)&DAT_00bfe12c;
      piVar7[4] = 0;
      piVar7[6] = 0;
      piVar7[7] = 0;
      piVar7[9] = -1;
      piVar7[10] = local_1c;
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        *piVar9 = *piVar9 + 1;
        UNLOCK();
      }
      piVar7[0xb] = local_2c;
      piVar7[0xc] = (int)local_30;
      *(undefined1 *)(piVar7 + 0xd) = local_11;
      local_20 = piVar7;
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar9);
        }
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      piVar9 = (int *)(local_1c + -8);
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar9);
        }
      }
      iVar5 = *(int *)(iVar3 + 0x5c);
      iVar6 = iVar5 + 1;
      if ((int)*(uint *)(iVar3 + 0x58) < iVar6) {
        if (iVar6 < 0) {
          iVar6 = iVar5 + 2;
        }
        uVar2 = iVar5 + 9 + (iVar6 >> 1) & 0xfffffff8;
        piVar7 = local_20;
        if (*(uint *)(iVar3 + 0x58) != uVar2) {
          if ((int)uVar2 < 1) {
            FID_conflict__free(*(void **)(iVar3 + 0x54));
            *(undefined4 *)(iVar3 + 0x54) = 0;
          }
          else if (*(int *)(iVar3 + 0x54) == 0) {
            uVar8 = FUN_004c554b();
            *(undefined4 *)(iVar3 + 0x54) = uVar8;
          }
          else {
            uVar8 = FUN_004c553b(*(int *)(iVar3 + 0x54),uVar2 * 4);
            *(undefined4 *)(iVar3 + 0x54) = uVar8;
          }
          *(uint *)(iVar3 + 0x58) = uVar2;
          piVar7 = local_20;
        }
      }
      iVar5 = *(int *)(iVar3 + 0x5c);
      *(int *)(iVar3 + 0x5c) = iVar5 + 1;
      *(int **)(*(int *)(iVar3 + 0x54) + iVar5 * 4) = piVar7;
      local_24 = local_24 + 1;
    } while (local_24 < (int)param_1[0x19]);
  }
  puVar4 = (undefined4 *)FUN_0055ed40(local_3c);
  uVar8 = *(undefined4 *)(iVar3 + 0x40);
  *(undefined4 *)(iVar3 + 0x40) = *puVar4;
  *puVar4 = uVar8;
  *(undefined4 *)(iVar3 + 0x44) = puVar4[1];
  *(undefined4 *)(iVar3 + 0x48) = puVar4[2];
  puVar4[2] = 0;
  FID_conflict__free(local_3c[0]);
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    piVar9 = param_1 + 1;
    iVar5 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)*param_1)(1);
    }
  }
  piVar9 = (int *)(param_2 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  ExceptionList = local_10;
  return iVar3;
}

