// rea decompile_all
// name: FUN_006b9d70
// address: 0x6b9d70
// body: available
// range: 0x6b9d70-0x6ba208 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b9d70(int *param_1)

{
  char *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  DWORD DVar7;
  uint uVar8;
  byte bVar9;
  int *in_ECX;
  int *piVar10;
  int *piVar11;
  void *local_48;
  undefined4 local_44;
  undefined4 local_40;
  void *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int *local_2c;
  int local_28;
  int *local_24;
  int *local_20;
  char *local_1c;
  char *local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00724638;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = (char *)0x0;
  piVar10 = in_ECX + 0x2a;
  local_11 = '\0';
  local_24 = piVar10;
  if ((*piVar10 != *param_1) && (local_20 = in_ECX, iVar4 = FUN_0045c1e0(*piVar10), iVar4 != 0)) {
    local_11 = '\x01';
    (**(code **)(*(int *)in_ECX[0x31] + 0x10))();
    pcVar1 = (char *)*param_1;
    piVar11 = (int *)(pcVar1 + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      *piVar11 = *piVar11 + 1;
      UNLOCK();
    }
    local_8 = 0;
    local_18 = pcVar1;
    if (*pcVar1 == '\0') {
      piVar11 = (int *)(DAT_00c8a8e8 + -8);
      if (piVar11 != &DAT_00bfe124) {
        LOCK();
        *piVar11 = *piVar11 + 1;
        UNLOCK();
      }
      LOCK();
      local_18 = DAT_00c8a8e8;
      UNLOCK();
      piVar11 = (int *)(pcVar1 + -8);
      if (piVar11 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar11);
        }
      }
    }
    local_48 = (void *)0x0;
    local_44 = 0;
    local_40 = 0;
    local_3c = (void *)0x0;
    local_38 = 0;
    local_34 = 0;
    local_8 = CONCAT31(local_8._1_3_,2);
    if (*(code **)(*in_ECX + 0xb4) == FUN_006b8360) {
      FUN_006b8380();
    }
    else {
      (**(code **)(*in_ECX + 0xb4))(&local_48);
    }
    iVar4 = FUN_0062c730(local_18,1);
    if (iVar4 < 0) {
      local_2c = in_ECX + 0x33;
      iVar4 = FUN_0069b520();
      do {
        iVar4 = iVar4 + -1;
        if (iVar4 < 0) {
          FUN_0069b520();
          FUN_006e8760(&local_18);
          piVar10 = local_24;
          break;
        }
        puVar5 = (undefined4 *)FUN_0069b4e0(&local_28);
        if (((char *)*puVar5 == local_18) || (iVar6 = FUN_0045c1e0(*puVar5), iVar6 == 0)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        piVar10 = (int *)(local_28 + -8);
        if (piVar10 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            FID_conflict__free(piVar10);
          }
        }
        piVar10 = local_24;
      } while (!bVar2);
    }
    FUN_0040f7f0();
    FID_conflict__free(local_3c);
    FUN_0040f7f0();
    FID_conflict__free(local_48);
    local_8 = 0xffffffff;
    piVar11 = (int *)(local_18 + -8);
    in_ECX = local_20;
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar11);
        in_ECX = local_20;
      }
    }
  }
  piVar11 = (int *)(*param_1 + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    *piVar11 = *piVar11 + 1;
    UNLOCK();
  }
  LOCK();
  iVar4 = *piVar10;
  *piVar10 = *param_1;
  UNLOCK();
  piVar11 = (int *)(iVar4 + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar11);
    }
  }
  FUN_006bb850(piVar10,1);
  iVar4 = FUN_006f6dd6(in_ECX[0x31],0,&juce::DirectoryContentsDisplayComponent::RTTI_Type_Descriptor
                       ,&juce::FileTreeComponent::RTTI_Type_Descriptor);
  if (iVar4 != 0) {
    FUN_006b4e30();
  }
  pcVar1 = (char *)*piVar10;
  piVar11 = (int *)(pcVar1 + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    *piVar11 = *piVar11 + 1;
    UNLOCK();
  }
  local_8 = 3;
  local_1c = pcVar1;
  if (*pcVar1 == '\0') {
    piVar11 = (int *)(DAT_00c8a8e8 + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      *piVar11 = *piVar11 + 1;
      UNLOCK();
    }
    LOCK();
    local_1c = DAT_00c8a8e8;
    UNLOCK();
    piVar11 = (int *)(pcVar1 + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar11);
      }
    }
  }
  FUN_006e81e0(&local_1c);
  FUN_00636040();
  local_8 = CONCAT31(local_8._1_3_,4);
  local_18 = (char *)0x1;
  puVar5 = (undefined4 *)FUN_00458890();
  DVar7 = GetFileAttributesW((LPCWSTR)*puVar5);
  if (((DVar7 & 0x10) != 0) && (DVar7 != 0xffffffff)) {
    piVar11 = (int *)FUN_00636040();
    local_8 = 5;
    local_18 = (char *)0x3;
    if ((*piVar11 != *piVar10) && (iVar4 = FUN_0045c1e0(*piVar11), iVar4 != 0)) {
      bVar9 = 1;
      goto LAB_006ba0f2;
    }
  }
  bVar9 = 0;
LAB_006ba0f2:
  iVar4 = in_ECX[0xf3];
  uVar8 = CONCAT11(*(byte *)(iVar4 + 0x69),*(byte *)(iVar4 + 0x69) >> 4) & 0xffffff01;
  if ((byte)uVar8 == bVar9) {
    iVar6 = *(int *)(iVar4 + 0xc);
    *(byte *)(iVar4 + 0x69) = (bVar9 ^ 1) << 4 | (byte)(uVar8 >> 8) & 0xef;
    if ((iVar6 == 0) ||
       (((*(byte *)(iVar6 + 0x69) & 0x10) == 0 &&
        ((*(int *)(iVar6 + 0xc) == 0 || (cVar3 = FUN_006e6320(), cVar3 != '\0')))))) {
      FUN_006cc240();
    }
  }
  if ((((uint)local_18 & 2) != 0) && (piVar10 = param_1 + -2, piVar10 != &DAT_00bfe124)) {
    LOCK();
    iVar4 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar10);
    }
  }
  local_8 = 3;
  piVar10 = local_2c + -2;
  if (piVar10 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar10);
    }
  }
  if (local_11 != '\0') {
    param_1 = (int *)FUN_0040de70();
    if (param_1 != (int *)0x0) {
      LOCK();
      param_1[1] = param_1[1] + 1;
      UNLOCK();
    }
    local_8 = CONCAT31(local_8._1_3_,6);
    FUN_004b0b00(&param_1,&LAB_00426f10);
    if (param_1 != (int *)0x0) {
      LOCK();
      piVar10 = param_1 + 1;
      iVar4 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)*param_1)();
      }
    }
  }
  piVar10 = (int *)(local_1c + -8);
  if (piVar10 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar10);
    }
  }
  ExceptionList = local_10;
  return;
}

