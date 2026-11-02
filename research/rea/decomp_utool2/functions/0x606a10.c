// rea decompile_all
// name: FUN_00606a10
// address: 0x606a10
// body: available
// range: 0x606a10-0x606d50 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00606a10(int *param_1,undefined4 param_2,int *param_3,int *param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int in_ECX;
  int iVar7;
  bool bVar8;
  uint uVar9;
  void *local_38;
  undefined4 local_34;
  int local_30;
  void *local_2c;
  LPCRITICAL_SECTION local_28;
  int local_24;
  LPCRITICAL_SECTION local_20;
  int local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071c1cc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_28 = (LPCRITICAL_SECTION)(in_ECX + 0x38);
  uVar9 = 0;
  local_14 = 0;
  local_18 = in_ECX;
  EnterCriticalSection(local_28);
  local_8 = 0;
  iVar3 = FUN_006070d0();
  if (iVar3 == 0) {
LAB_00606bae:
    iVar3 = FUN_0062c730(*param_1,0);
    if (iVar3 < 0) {
      local_38 = (void *)0x0;
      local_34 = 0;
      local_30 = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x38));
      local_8 = CONCAT31(local_8._1_3_,3);
      if (*(int **)(in_ECX + 0x34) == (int *)0x0) {
        (**(code **)(*param_4 + 8))(&local_38);
      }
      else {
        cVar2 = (**(code **)(**(int **)(in_ECX + 0x34) + 4))(param_4,&local_38);
        if (cVar2 == '\0') {
          FUN_006065e0();
        }
      }
      local_8 = CONCAT31(local_8._1_3_,2);
      EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x38));
      iVar3 = 0;
      if (0 < local_30) {
        do {
          FUN_00606ea0();
          operator_new(0x48);
          uVar6 = FUN_006074b0();
          iVar4 = param_3[2];
          iVar7 = iVar4 + 1;
          if (param_3[1] < iVar7) {
            if (iVar7 < 0) {
              iVar7 = iVar4 + 2;
            }
            uVar9 = iVar4 + 9 + (iVar7 >> 1) & 0xfffffff8;
            if (param_3[1] != uVar9) {
              if ((int)uVar9 < 1) {
                FID_conflict__free((void *)*param_3);
                *param_3 = 0;
              }
              else if (*param_3 == 0) {
                iVar4 = FUN_004c554b();
                *param_3 = iVar4;
              }
              else {
                iVar4 = FUN_004c553b(*param_3);
                *param_3 = iVar4;
              }
              param_3[1] = uVar9;
            }
          }
          iVar4 = param_3[2];
          iVar3 = iVar3 + 1;
          param_3[2] = iVar4 + 1;
          *(undefined4 *)(*param_3 + iVar4 * 4) = uVar6;
        } while (iVar3 < local_30);
      }
      bVar8 = 0 < local_30;
      while (0 < local_30) {
        local_30 = local_30 + -1;
        iVar3 = *(int *)((int)local_38 + local_30 * 4);
        if (iVar3 != 0) {
          FUN_00607580();
          FUN_004bfe14(iVar3);
        }
      }
      FID_conflict__free(local_38);
    }
    else {
      bVar8 = false;
    }
  }
  else {
    local_20 = (LPCRITICAL_SECTION)(in_ECX + 0x50);
    bVar8 = false;
    EnterCriticalSection(local_20);
    local_8 = CONCAT31(local_8._1_3_,1);
    local_1c = *(int *)(in_ECX + 0x24) + -1;
    if (-1 < local_1c) {
      do {
        iVar3 = *(int *)(*(int *)(in_ECX + 0x1c) + local_1c * 4);
        if ((*(int *)(iVar3 + 0x18) == *param_1) ||
           (iVar4 = FUN_00448730(*(undefined4 *)(iVar3 + 0x18)), iVar4 == 0)) {
          piVar5 = (int *)(**(code **)(*param_4 + 4))();
          local_14 = uVar9 | 1;
          if ((*(int *)(iVar3 + 8) != *piVar5) &&
             (iVar3 = FUN_00448730(*(undefined4 *)(iVar3 + 8)), iVar3 != 0)) goto LAB_00606aeb;
          bVar1 = true;
        }
        else {
LAB_00606aeb:
          bVar1 = false;
        }
        if ((local_14 & 1) != 0) {
          local_14 = local_14 & 0xfffffffe;
          piVar5 = (int *)(local_24 + -8);
          if (piVar5 != &DAT_00bfe124) {
            LOCK();
            iVar3 = *piVar5;
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (iVar3 == 0) {
              FID_conflict__free(piVar5);
            }
          }
        }
        if (bVar1) {
          cVar2 = (**(code **)(*param_4 + 0x14))();
          if (cVar2 == '\0') {
            local_2c = operator_new(0x48);
            uVar6 = FUN_006074b0();
            if (param_3[1] < param_3[2] + 1) {
              FUN_00409cf0();
            }
            iVar3 = param_3[2];
            param_3[2] = iVar3 + 1;
            *(undefined4 *)(*param_3 + iVar3 * 4) = uVar6;
          }
          else {
            bVar8 = true;
          }
        }
        local_1c = local_1c + -1;
        uVar9 = local_14;
        in_ECX = local_18;
      } while (-1 < local_1c);
      if (bVar8) {
        local_8 = local_8 & 0xffffff00;
        LeaveCriticalSection(local_20);
        goto LAB_00606bae;
      }
    }
    LeaveCriticalSection(local_20);
    bVar8 = false;
  }
  LeaveCriticalSection(local_28);
  ExceptionList = local_10;
  return bVar8;
}

