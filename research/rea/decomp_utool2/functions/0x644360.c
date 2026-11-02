// rea decompile_all
// name: FUN_00644360
// address: 0x644360
// body: available
// range: 0x644360-0x644682 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00644360(undefined4 *param_1,int *param_2,int *param_3)

{
  float *pfVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *in_ECX;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  void *local_3c;
  undefined4 local_38;
  uint local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  int *local_1c;
  char *local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar3 = param_3;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071ff38;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar9 = param_3[2] + 1;
  local_1c = in_ECX;
  if (param_3[1] < iVar9) {
    FUN_00409cf0(iVar9 / 2 + 8 + iVar9 & 0xfffffff8);
  }
  iVar9 = param_3[2];
  param_3[2] = iVar9 + 1;
  puVar5 = (undefined4 *)(*param_3 + iVar9 * 4);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0;
  }
  local_14 = 0.0;
  local_18 = (char *)*param_1;
  cVar2 = *local_18;
  do {
    if (cVar2 == '\0') {
      ExceptionList = local_10;
      return;
    }
    param_3 = (int *)0x0;
    param_1 = (undefined4 *)0x0;
    local_20 = FUN_00443260(uVar4);
    puVar5 = (undefined4 *)FUN_00644820(local_20,1);
    if (puVar5 == (undefined4 *)0x0) {
      FUN_00644ae0();
      if ((param_2 != (int *)0x0) && (param_2 != local_1c)) {
        local_30 = (undefined4 *)0x0;
        local_2c = 0;
        local_28 = 0;
        local_3c = (void *)0x0;
        local_38 = 0;
        local_34 = 0;
        local_8._0_1_ = 2;
        local_8._1_3_ = 0;
        uVar6 = FUN_00622070();
        local_8 = CONCAT31(local_8._1_3_,3);
        (**(code **)(*param_2 + 0x18))(uVar6,&local_30,&local_3c);
        piVar8 = (int *)(local_24 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        if (0 < local_28) {
          param_1 = (undefined4 *)*local_30;
          if (local_34 < 2) {
            param_3 = (int *)0x0;
          }
          else {
            param_3 = *(int **)((int)local_3c + 4);
          }
        }
        FID_conflict__free(local_3c);
        FID_conflict__free(local_30);
      }
      local_8 = 0xffffffff;
      if (param_2 != (int *)0x0) {
        LOCK();
        piVar8 = param_2 + 1;
        iVar9 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)*param_2)(1);
        }
      }
    }
    else {
      iVar9 = FUN_00426f70();
      if ((iVar9 != 0) && (iVar7 = puVar5[0xc] + -1, -1 < iVar7)) {
        piVar8 = (int *)(puVar5[10] + iVar7 * 8);
        do {
          if (*piVar8 == iVar9) {
            param_3 = (int *)(*(float *)(puVar5[10] + 4 + iVar7 * 8) + (float)puVar5[9]);
            param_1 = (undefined4 *)*puVar5;
            goto LAB_0064455f;
          }
          piVar8 = piVar8 + -2;
          iVar7 = iVar7 + -1;
        } while (-1 < iVar7);
      }
      param_3 = (int *)puVar5[9];
      param_1 = (undefined4 *)*puVar5;
    }
LAB_0064455f:
    local_14 = (float)param_3 + local_14;
    iVar9 = param_2[2];
    iVar7 = iVar9 + 1;
    if (param_2[1] < iVar7) {
      if (iVar7 < 0) {
        iVar7 = iVar9 + 2;
      }
      uVar10 = iVar9 + 9 + (iVar7 >> 1) & 0xfffffff8;
      if (param_2[1] != uVar10) {
        if ((int)uVar10 < 1) {
          FID_conflict__free((void *)*param_2);
          *param_2 = 0;
        }
        else if (*param_2 == 0) {
          iVar9 = FUN_004c554b();
          *param_2 = iVar9;
        }
        else {
          iVar9 = FUN_004c553b(*param_2,uVar10 * 4);
          *param_2 = iVar9;
        }
        param_2[1] = uVar10;
      }
    }
    iVar9 = param_2[2];
    param_2[2] = iVar9 + 1;
    puVar5 = (undefined4 *)(*param_2 + iVar9 * 4);
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = param_1;
    }
    iVar9 = piVar3[2];
    iVar7 = iVar9 + 1;
    if (piVar3[1] < iVar7) {
      if (iVar7 < 0) {
        iVar7 = iVar9 + 2;
      }
      uVar10 = iVar9 + 9 + (iVar7 >> 1) & 0xfffffff8;
      if (piVar3[1] != uVar10) {
        if ((int)uVar10 < 1) {
          FID_conflict__free((void *)*piVar3);
          *piVar3 = 0;
        }
        else if (*piVar3 == 0) {
          iVar9 = FUN_004c554b();
          *piVar3 = iVar9;
        }
        else {
          iVar9 = FUN_004c553b(*piVar3,uVar10 * 4);
          *piVar3 = iVar9;
        }
        piVar3[1] = uVar10;
      }
    }
    iVar9 = piVar3[2];
    piVar3[2] = iVar9 + 1;
    pfVar1 = (float *)(*piVar3 + iVar9 * 4);
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = local_14;
    }
    cVar2 = *local_18;
  } while( true );
}

