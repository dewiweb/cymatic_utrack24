// rea decompile_all
// name: FUN_0051fc40
// address: 0x51fc40
// body: available
// range: 0x51fc40-0x520281 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051fc40(undefined4 *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined1 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int in_ECX;
  undefined4 **_Memory;
  float fVar7;
  undefined1 *puStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  TypeDescriptor *pTStack_80;
  TypeDescriptor *pTStack_7c;
  int local_5c;
  undefined4 local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  int local_48;
  int local_44;
  undefined4 *local_40;
  undefined4 **local_38;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070a6b3;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_54 = param_1;
  local_40 = (undefined4 *)0x0;
  FUN_0057f440();
  local_8 = 0;
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  (**(code **)(*(int *)*param_1 + 0x68))();
  local_8 = 0xffffffff;
  if (local_38 != (undefined4 **)0x0) {
    LOCK();
    piVar5 = (int *)(local_38 + 1);
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (*(code *)**local_38)();
    }
  }
  local_48 = *(int *)(in_ECX + 0x274) + -0x46 + *(int *)(in_ECX + 0x26c);
  FUN_00684c50();
  pTStack_7c = (TypeDescriptor *)0x51fd00;
  puVar3 = (undefined1 *)FUN_00540660();
  local_8 = 1;
  pTStack_7c = *(TypeDescriptor **)(in_ECX + 0x270);
  pTStack_80 = (TypeDescriptor *)0x51fd22;
  FUN_00472d90();
  puStack_8c = (undefined1 *)&uStack_88;
  FUN_0040e4d0();
  puStack_8c = puVar3;
  FUN_006830c0();
  local_8 = 0xffffffff;
  piVar5 = (int *)(local_38 + -2);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_58 = 0x50;
  cVar2 = FUN_00540610();
  if (cVar2 == '\0') {
    local_4c = (undefined4 *)PTR_DAT_00c7ed68;
    piVar5 = (int *)(PTR_DAT_00c7ed68 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
    }
    local_8 = 3;
    local_50 = (undefined4 *)0x2;
  }
  else {
    FUN_0045c990();
    local_8 = 2;
    local_50 = (undefined4 *)0x1;
  }
  puVar1 = local_4c;
  local_38 = &local_4c;
  local_40 = local_50;
  FUN_005be060();
  FUN_00637730();
  local_8 = 4;
  if (((uint)local_50 & 2) != 0) {
    local_50 = (undefined4 *)((uint)local_50 & 0xfffffffd);
    piVar5 = puVar1 + -2;
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar5);
      }
    }
  }
  local_8._0_1_ = 6;
  if ((((uint)local_50 & 1) != 0) && (piVar5 = local_4c + -2, piVar5 != &DAT_00bfe124)) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  FUN_005bdf30();
  local_8 = CONCAT31(local_8._1_3_,7);
  iVar4 = *(int *)(*(int *)(in_ECX + 0x284) + 0xc);
  if (*(int *)(iVar4 + 0x30) == 2) {
    local_38 = (undefined4 **)&stack0xffffff88;
    if (*(int *)(iVar4 + 0x5c) < 0) {
      pTStack_7c = (TypeDescriptor *)0x51fea9;
      iVar4 = FUN_006104a0();
      *(undefined1 *)(iVar4 + -1) = 0x2d;
      iVar4 = iVar4 + -1;
    }
    else {
      pTStack_7c = (TypeDescriptor *)0x51fe9e;
      local_38 = (undefined4 **)&stack0xffffff88;
      iVar4 = FUN_006104a0();
    }
    pTStack_7c = (TypeDescriptor *)((int)&local_18 + (3 - iVar4));
    pTStack_80 = (TypeDescriptor *)0x51febe;
    FUN_004557e0();
    pTStack_7c = (TypeDescriptor *)0x51fecd;
    FUN_006377c0();
    piVar5 = (int *)FUN_00637730();
    iVar4 = *piVar5;
    *piVar5 = local_44;
    piVar5 = local_40 + -2;
    local_44 = iVar4;
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar5);
      }
    }
  }
  iVar4 = *(int *)(*(int *)(in_ECX + 0x284) + 0xc);
  if (*(int *)(iVar4 + 0x24) < 2) {
    iVar4 = 0x50;
  }
  else {
    if (*(int *)(iVar4 + 0x24) < 0) {
      iVar4 = FUN_006104a0();
      *(undefined1 *)(iVar4 + -1) = 0x2d;
    }
    else {
      FUN_006104a0();
    }
    FUN_004557e0();
    local_8 = CONCAT31(local_8._1_3_,8);
    piVar5 = (int *)(local_44 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
    }
    pTStack_7c = (TypeDescriptor *)0x51ff71;
    FUN_006377c0();
    piVar5 = (int *)FUN_00637730();
    iVar4 = *piVar5;
    *piVar5 = local_44;
    piVar5 = local_40 + -2;
    local_44 = iVar4;
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    _Memory = local_38 + -2;
    if (_Memory != (undefined4 **)&DAT_00bfe124) {
      LOCK();
      puVar1 = *_Memory;
      *_Memory = (undefined4 *)((int)*_Memory + -1);
      UNLOCK();
      if (puVar1 == (undefined4 *)0x0) {
        FID_conflict__free(_Memory);
      }
    }
    iVar4 = 100;
    local_58 = 100;
  }
  local_48 = local_48 - iVar4;
  FUN_0057f440();
  local_8._0_1_ = 9;
  local_38 = (undefined4 **)FUN_00683640();
  puVar1 = local_54;
  local_8 = CONCAT31(local_8._1_3_,10);
  if (*(char *)(local_54 + 2) != '\0') {
    *(undefined1 *)(local_54 + 2) = 0;
    (**(code **)(*(int *)*local_54 + 0x34))();
  }
  (**(code **)(*(int *)*puVar1 + 0x68))();
  if (local_40 != (undefined4 *)0x0) {
    LOCK();
    piVar5 = local_40 + 1;
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      pTStack_7c = (TypeDescriptor *)0x520046;
      (**(code **)*local_40)();
    }
  }
  local_8 = CONCAT31(local_8._1_3_,7);
  if (local_4c != (undefined4 *)0x0) {
    LOCK();
    piVar5 = local_4c + 1;
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      pTStack_7c = (TypeDescriptor *)0x520066;
      (**(code **)*local_4c)();
    }
  }
  pTStack_7c = (TypeDescriptor *)local_58;
  pTStack_80 = *(TypeDescriptor **)(in_ECX + 0x270);
  uStack_84 = 0x520086;
  FUN_00472d90();
  pTStack_7c = (TypeDescriptor *)0x24;
  FUN_0040e4d0(&puStack_8c);
  FUN_006830c0(&local_5c);
  pTStack_7c = (TypeDescriptor *)local_58;
  pTStack_80 = (TypeDescriptor *)(*(int *)(in_ECX + 0x278) / 2);
  uStack_84 = 0x5200cc;
  FUN_00472d90();
  pTStack_7c = (TypeDescriptor *)0x24;
  FUN_0040e4d0(&puStack_8c);
  FUN_006830c0(&local_44);
  local_54 = (undefined4 *)(*(int *)(in_ECX + 0x278) + -6);
  local_48 = local_48 - (int)local_54;
  pTStack_7c = *(TypeDescriptor **)(*(int *)(*(int *)(in_ECX + 0x284) + 0xc) + 100);
  pTStack_80 = (TypeDescriptor *)0x52011c;
  iVar4 = FUN_00448730();
  if (iVar4 != 0) {
    pTStack_7c = (TypeDescriptor *)(float)(int)local_54;
    pTStack_80 = (TypeDescriptor *)0x52015f;
    FUN_00561df0();
  }
  if (*(int *)(*(int *)(in_ECX + 0xa0) + 0x9c) == 0) {
    uStack_88 = 0;
  }
  else {
    pTStack_7c = (TypeDescriptor *)0x520182;
    uStack_88 = FUN_0068f6f0();
  }
  pTStack_7c = &ProjectExplorerBaseItem::RTTI_Type_Descriptor;
  pTStack_80 = &juce::TreeViewItem::RTTI_Type_Descriptor;
  uStack_84 = 0;
  puStack_8c = (undefined1 *)0x520196;
  iVar6 = FUN_006f6dd6();
  iVar4 = *(int *)(iVar6 + 8);
  if (iVar4 != 0) {
    if (*(int *)(iVar4 + 0x14) < 1) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(iVar4 + 0xc) + -4 + *(int *)(iVar4 + 0x14) * 4);
    }
    if (iVar4 != iVar6) {
      pTStack_7c = (TypeDescriptor *)&stack0xffffff88;
      pTStack_80 = (TypeDescriptor *)0x5201cc;
      FUN_006842b0();
      pTStack_7c = (TypeDescriptor *)0x5201d3;
      FUN_00684c50();
      fVar7 = (float)*(int *)(in_ECX + 0x26c);
      if (fVar7 < (float)*(int *)(in_ECX + 0x274)) {
        local_1c = (float)*(int *)(in_ECX + 0x274) - fVar7;
        local_18 = 0x3f800000;
        local_20 = (float)(*(int *)(in_ECX + 0x278) + -1);
        pTStack_7c = (TypeDescriptor *)0x520221;
        local_24 = fVar7;
        (**(code **)(*(int *)*puVar1 + 0x50))();
      }
    }
  }
  piVar5 = (int *)(local_44 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      pTStack_7c = (TypeDescriptor *)0x520241;
      FID_conflict__free(piVar5);
    }
  }
  piVar5 = (int *)(local_5c + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      pTStack_7c = (TypeDescriptor *)0x520261;
      FID_conflict__free(piVar5);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

