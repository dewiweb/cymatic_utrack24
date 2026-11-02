// rea decompile_all
// name: FUN_0048d930
// address: 0x48d930
// body: available
// range: 0x48d930-0x48dd12 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048d930(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *_Memory;
  char cVar3;
  int in_ECX;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  float10 fVar8;
  undefined4 local_70;
  int local_6c;
  undefined4 *local_68;
  float local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float local_54;
  undefined4 local_50;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined1 local_2c [4];
  int *local_28;
  int *local_24;
  uint local_20;
  int local_1c;
  undefined **local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00701c70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = (undefined **)0x0;
  local_1c = in_ECX;
  fVar8 = (float10)(**(code **)(*(int *)*param_1 + 0x10))();
  *(float *)(in_ECX + 0x18) = (float)fVar8;
  FUN_006e6400();
  FUN_004b0b50();
  piVar6 = (int *)(in_ECX + 4);
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_00673860(local_2c);
    cVar3 = FUN_004af950();
    if (cVar3 == '\0') goto LAB_0048da3c;
  }
  local_18 = juce::NativeImageType::vftable;
  local_8 = 0;
  iVar5 = 1;
  if (1 < local_40) {
    iVar5 = local_40;
  }
  iVar7 = 1;
  if (1 < local_44) {
    iVar7 = local_44;
  }
  FUN_00673a00(&local_14,2 - (uint)((*(byte *)(*(int *)(in_ECX + 0x14) + 0x68) & 4) != 0),iVar7,
               iVar5);
  local_8 = 0xffffffff;
  puVar1 = (undefined4 *)*piVar6;
  *piVar6 = (int)local_14;
  local_14 = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = puVar1 + 1;
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)*puVar1)();
    }
  }
  *(undefined4 *)(in_ECX + 0x10) = 0;
LAB_0048da3c:
  cVar3 = FUN_004af470();
  if (cVar3 == '\0') {
    if ((int *)*piVar6 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)(**(code **)(*(int *)*piVar6 + 4))();
    }
    local_20 = local_20 & 0xffffff00;
    local_8 = 1;
    local_64 = *(float *)(in_ECX + 0x18);
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    local_50 = 0;
    local_54 = local_64;
    local_28 = piVar6;
    local_24 = piVar6;
    (**(code **)(*piVar6 + 0xc))();
    iVar5 = *(int *)(in_ECX + 0x10);
    iVar2 = *(int *)(in_ECX + 8);
    for (iVar7 = *(int *)(in_ECX + 8); iVar7 != iVar5 * 0x10 + iVar2; iVar7 = iVar7 + 0x10) {
      (**(code **)(*piVar6 + 0x1c))();
      in_ECX = local_1c;
    }
    if ((*(byte *)(*(int *)(in_ECX + 0x14) + 0x68) & 4) == 0) {
      local_6c = 0;
      local_68 = (undefined4 *)0x0;
      local_64 = 1.0;
      uStack_60 = 0;
      uStack_5c = 0;
      uStack_58 = 0;
      local_54 = 1.0;
      local_50 = 0;
      local_8._1_3_ = (undefined3)((uint)local_8 >> 8);
      local_8._0_1_ = 2;
      local_70 = DAT_00c8a948;
      (**(code **)(*piVar6 + 0x44))();
      local_8 = CONCAT31(local_8._1_3_,1);
      if (local_68 != (undefined4 *)0x0) {
        LOCK();
        piVar4 = local_68 + 1;
        iVar5 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)*local_68)(1);
        }
      }
      iVar5 = local_6c;
      if (local_6c != 0) {
        FID_conflict__free(*(void **)(local_6c + 0x14));
        FUN_004bfe14(iVar5,0x20);
      }
      (**(code **)(*piVar6 + 0x54))(&local_3c,1);
      local_70 = DAT_00c7ef90;
      local_6c = 0;
      local_68 = (undefined4 *)0x0;
      local_64 = 1.0;
      uStack_60 = 0;
      uStack_5c = 0;
      uStack_58 = 0;
      local_54 = 1.0;
      local_50 = 0;
      local_8._0_1_ = 3;
      (**(code **)(*piVar6 + 0x44))(&local_70);
      local_8 = CONCAT31(local_8._1_3_,1);
      if (local_68 != (undefined4 *)0x0) {
        LOCK();
        piVar6 = local_68 + 1;
        iVar5 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)*local_68)();
        }
      }
      iVar5 = local_6c;
      if (local_6c != 0) {
        FID_conflict__free(*(void **)(local_6c + 0x14));
        FUN_004bfe14(iVar5,0x20);
      }
    }
    FUN_006ce360(&local_28);
    local_8 = 0xffffffff;
    if (local_24 != (int *)0x0) {
      (**(code **)*local_24)();
    }
    piVar6 = (int *)(in_ECX + 4);
  }
  iVar5 = 0;
  local_28 = (int *)0x0;
  local_24 = (int *)0x0;
  local_20 = 0;
  if ((0 < local_34) && (0 < local_30)) {
    FUN_0040ede0();
    iVar5 = local_20 + 1;
    piVar4 = local_28 + local_20 * 4;
    if (piVar4 != (int *)0x0) {
      *piVar4 = local_3c;
      piVar4[1] = local_38;
      piVar4[2] = local_34;
      piVar4[3] = local_30;
    }
  }
  _Memory = *(void **)(in_ECX + 8);
  *(int **)(in_ECX + 8) = local_28;
  *(int **)(in_ECX + 0xc) = local_24;
  *(int *)(in_ECX + 0x10) = iVar5;
  FID_conflict__free(_Memory);
  FUN_006842b0(&stack0xffffff7c);
  FUN_00684c50();
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_64 = (float)local_34 / (float)local_44;
  local_54 = (float)local_30 / (float)local_40;
  if ((*piVar6 != 0) && (cVar3 = (**(code **)(*(int *)*param_1 + 0x30))(), cVar3 == '\0')) {
    (**(code **)(*(int *)*param_1 + 0x60))(piVar6);
  }
  ExceptionList = local_10;
  return;
}

