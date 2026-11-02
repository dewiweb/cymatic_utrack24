// rea decompile_all
// name: FUN_00510f50
// address: 0x510f50
// body: available
// range: 0x510f50-0x511753 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00510f50(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  int *piVar3;
  float fVar5;
  float fVar6;
  undefined1 *puVar7;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  int iVar4;
  
  puVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00708c50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00684c50();
  iVar1 = *(int *)(*(int *)(in_ECX + 0x84) + 0x74);
  FUN_00510480();
  FUN_00472db0();
  (**(code **)(*(int *)*param_1 + 0x50))();
  fVar5 = *(float *)(in_ECX + 0xa4);
  if (fVar5 != 0.0) {
    local_1c = 0;
    if (*(int *)(in_ECX + 0xa0) < 1) {
      ExceptionList = local_10;
      return;
    }
    do {
      fVar5 = (float)local_1c * *(float *)(in_ECX + 0xa4) + 0.5;
      if ((local_1c == *(int *)(in_ECX + 0x90)) || (*(int *)(in_ECX + 0x94) <= local_1c)) {
        FUN_00510af0(in_ECX);
        if (fVar5 <= -2.0) {
          if (fVar5 <= -8.0) {
            FUN_0045c990();
            local_8 = 2;
            FUN_0057f430();
            FUN_00684c50();
            iVar4 = local_18;
          }
          else {
            FUN_0045c990();
            local_8 = 1;
            FUN_0057f430();
            FUN_00684c50();
            iVar4 = local_14;
          }
        }
        else {
          FUN_0045c990();
          local_8 = 0;
          FUN_0057f430();
          FUN_00684c50();
          iVar4 = iVar1;
        }
        local_8 = 0xffffffff;
        piVar3 = (int *)(iVar4 + -8);
        if (piVar3 != &DAT_00bfe124) {
          LOCK();
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 0) {
            FID_conflict__free(piVar3);
          }
        }
      }
      else {
        FUN_00681fc0(0x22,0);
        FUN_00684c50();
      }
      FUN_00510480();
      FUN_00472db0();
      (**(code **)(*(int *)*param_1 + 0x50))();
      local_1c = local_1c + 1;
    } while (local_1c < *(int *)(in_ECX + 0xa0));
    ExceptionList = local_10;
    return;
  }
  if (0 < *(int *)(in_ECX + 0x8c)) {
    iVar1 = *(int *)(in_ECX + 0x84);
    fVar6 = (float)*(int *)(in_ECX + 0x90);
    FUN_00510480();
    fVar5 = (fVar5 + *(float *)(iVar1 + 0x74)) - 1.0;
    if (fVar6 < fVar5) {
      if (*(int *)(in_ECX + 0x88) == 2) {
        if ((fVar6 < (float)*(int *)(in_ECX + 0x94)) && (fVar6 < (float)*(int *)(in_ECX + 0xac))) {
          puVar7 = &stack0xffffffa4;
          FUN_0045c990();
          local_8 = 3;
          FUN_0057f430(&stack0xffffffa4);
          FUN_006842b0(puVar7);
          FUN_00684c50();
          local_8 = 0xffffffff;
          FUN_00637c10();
          FUN_00472db0();
          (**(code **)(*(int *)*param_1 + 0x50))();
          fVar6 = (float)*(int *)(in_ECX + 0xac);
        }
        param_1 = (undefined4 *)fVar6;
        if (((float)param_1 < (float)*(int *)(in_ECX + 0x94)) &&
           ((float)param_1 < (float)*(int *)(in_ECX + 0xa8))) {
          puVar7 = &stack0xffffffa4;
          FUN_0045c990();
          local_8 = 4;
          FUN_0057f430(&stack0xffffffa4);
          FUN_006842b0(puVar7);
          FUN_00684c50();
          local_8 = 0xffffffff;
          FUN_00637c10();
          FUN_00472db0();
          (**(code **)(*(int *)*puVar2 + 0x50))();
          param_1 = (undefined4 *)(float)*(int *)(in_ECX + 0xa8);
        }
        fVar5 = (float)*(int *)(in_ECX + 0x94);
        if (fVar5 <= (float)param_1) goto LAB_005114e7;
        puVar7 = &stack0xffffffa4;
        FUN_0045c990();
        local_8 = 5;
        FUN_0057f430(&stack0xffffffa4);
        FUN_006842b0(puVar7);
        FUN_00684c50();
        local_8 = 0xffffffff;
        FUN_00637c10();
        fVar5 = (float)*(int *)(in_ECX + 0x94) - (float)param_1;
      }
      else {
        fVar5 = (float)*(int *)(in_ECX + 0xac);
        if (fVar5 <= fVar6) {
          fVar5 = (float)*(int *)(in_ECX + 0xa8);
          if (fVar5 <= fVar6) {
            FUN_0045c990();
            local_8 = 8;
          }
          else {
            FUN_0045c990();
            local_8 = 7;
          }
        }
        else {
          FUN_0045c990();
          local_8 = 6;
        }
        FUN_0057f430();
        FUN_00684c50();
        local_8 = 0xffffffff;
        FUN_00637c10();
      }
      FUN_00472db0();
      (**(code **)(*(int *)*puVar2 + 0x50))();
    }
  }
LAB_005114e7:
  iVar1 = *(int *)(in_ECX + 0x84);
  fVar6 = (float)*(int *)(in_ECX + 0x94);
  FUN_00510480();
  if (fVar6 < (fVar5 + *(float *)(iVar1 + 0x74)) - 1.0) {
    if (fVar6 < (float)*(int *)(in_ECX + 0xac)) {
      FUN_0045c990();
      local_8 = 9;
      FUN_0057f430();
      FUN_00684c50();
      local_8 = 0xffffffff;
      piVar3 = (int *)(local_1c + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar3);
        }
      }
      FUN_00472db0();
      (**(code **)(*(int *)*puVar2 + 0x50))();
      fVar6 = (float)*(int *)(in_ECX + 0xac);
    }
    if (fVar6 < (float)*(int *)(in_ECX + 0xa8)) {
      FUN_0045c990();
      local_8 = 10;
      FUN_0057f430();
      FUN_00684c50();
      local_8 = 0xffffffff;
      piVar3 = (int *)(local_1c + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar3);
        }
      }
      FUN_00472db0();
      (**(code **)(*(int *)*puVar2 + 0x50))();
    }
    FUN_0045c990();
    local_8 = 0xb;
    FUN_0057f430();
    FUN_00684c50();
    local_8 = 0xffffffff;
    piVar3 = (int *)(local_1c + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    FUN_00510480();
    FUN_00472db0();
    (**(code **)(*(int *)*puVar2 + 0x50))();
  }
  ExceptionList = local_10;
  return;
}

