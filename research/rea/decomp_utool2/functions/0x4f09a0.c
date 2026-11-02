// rea decompile_all
// name: FUN_004f09a0
// address: 0x4f09a0
// body: available
// range: 0x4f09a0-0x4f0f8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f09a0(int *param_1)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int in_ECX;
  int *piVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  char *pcVar13;
  char *pcVar14;
  float10 fVar15;
  float fVar16;
  undefined1 **local_f8;
  undefined1 *puStack_f4;
  int *piStack_f0;
  undefined4 *puStack_ec;
  TypeDescriptor *pTStack_e8;
  undefined1 *local_6c;
  undefined1 *local_68;
  undefined4 *local_60;
  byte *local_50;
  float local_4c;
  undefined1 *local_48;
  undefined4 local_44;
  undefined4 *local_40;
  byte *local_3c;
  char local_1b [6];
  undefined1 uStack_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00705c64;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pTStack_e8 = (TypeDescriptor *)0x64;
  puStack_ec = (undefined4 *)0x2;
  piStack_f0 = param_1;
  local_8 = 1;
  puStack_f4 = (undefined1 *)0x4f09ff;
  FUN_00673a00();
  local_8 = 0;
  if ((int *)*param_1 == (int *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)(**(code **)(*(int *)*param_1 + 4))();
  }
  local_8 = 2;
  pTStack_e8 = (TypeDescriptor *)0x4f0a48;
  FUN_006842b0();
  FUN_00684a80();
  iVar12 = *param_1;
  if (iVar12 == 0) {
    puStack_f4 = (undefined1 *)0x0;
    local_f8 = (undefined1 **)0x0;
  }
  else {
    puStack_f4 = *(undefined1 **)(iVar12 + 0x10);
    local_f8 = *(undefined1 ***)(iVar12 + 0xc);
  }
  pTStack_e8 = (TypeDescriptor *)&DAT_00c7ef90;
  puStack_ec = &DAT_00c7ef94;
  piStack_f0 = (int *)0x2;
  FUN_006e4430(puStack_f4);
  iVar12 = 4;
  if (*(int *)(in_ECX + 0x18) < 4) {
    iVar12 = *(int *)(in_ECX + 0x18);
  }
  local_4c = 20.0 - ((float)(iVar12 + -1) + (float)(iVar12 + -1));
  if (0 < iVar12) {
    do {
      pTStack_e8 = (TypeDescriptor *)0x4f0aea;
      FUN_00561df0();
      local_4c = local_4c + 4.0;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  local_4c = local_4c - 4.0;
  local_48 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,3);
  if (*(int *)(in_ECX + 4) != 0) {
    for (iVar12 = *(int *)(*(int *)(in_ECX + 4) + 0xc); iVar12 != 0; iVar12 = *(int *)(iVar12 + 0xc)
        ) {
      pTStack_e8 = &juce::Component::RTTI_Type_Descriptor;
      puStack_ec = (undefined4 *)0x0;
      puStack_f4 = (undefined1 *)0x4f0b46;
      piStack_f0 = (int *)iVar12;
      piStack_f0 = (int *)FUN_006f6dd6();
      if (piStack_f0 != (int *)0x0) goto LAB_004f0b56;
    }
  }
  piStack_f0 = (int *)0x0;
LAB_004f0b56:
  pTStack_e8 = &juce::DragAndDropContainer::RTTI_Type_Descriptor;
  puStack_ec = (undefined4 *)0x0;
  puStack_f4 = (undefined1 *)0x4f0b6a;
  iVar12 = FUN_006f6dd6();
  if (*(char *)(iVar12 + 8) == '\0') {
    if ((*(char *)(in_ECX + 10) == '\0') &&
       ((*(char *)(in_ECX + 0xb) != '\0' || (*(char *)(in_ECX + 9) == '\0')))) {
      FUN_0045c990();
    }
    else {
      FUN_0045c990();
      local_68 = local_6c;
    }
    piVar7 = (int *)(local_48 + -8);
    local_48 = local_68;
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar12 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar12 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    FUN_00684c50();
    pTStack_e8 = (TypeDescriptor *)0x0;
    local_44 = 0x24;
    puStack_ec = (undefined4 *)0x4f0c58;
    FUN_00472d90();
    local_f8 = &puStack_f4;
    FUN_0040e4d0();
    local_f8 = &local_48;
    FUN_006830c0();
  }
  uVar11 = *(uint *)(in_ECX + 0x18);
  pcVar13 = local_1b + 2;
  local_1b[2] = 0;
  if ((int)uVar11 < 0) {
    uVar11 = -uVar11;
    do {
      pcVar14 = pcVar13;
      pcVar13 = pcVar14 + -1;
      uVar9 = uVar11 / 10;
      *pcVar13 = (char)uVar11 + (char)uVar9 * -10 + '0';
      uVar11 = uVar9;
    } while (uVar9 != 0);
    pcVar13 = pcVar14 + -2;
    *pcVar13 = '-';
  }
  else {
    do {
      pcVar13 = pcVar13 + -1;
      uVar9 = uVar11 / 10;
      *pcVar13 = (char)uVar11 + (char)uVar9 * -10 + '0';
      uVar11 = uVar9;
    } while (uVar9 != 0);
  }
  pcVar14 = local_1b + -(int)pcVar13 + 2;
  puVar6 = (undefined4 *)FUN_004bfe22();
  *puVar6 = 0;
  puVar6[1] = (uint)(&uStack_15 + -(int)pcVar13) & 0xfffffffc;
  local_50 = (byte *)(puVar6 + 2);
  local_3c = local_50;
  while ((0 < (int)pcVar14 && (iVar12 = FUN_00443260(), iVar12 != 0))) {
    FUN_0044ecc0();
    pcVar14 = pcVar14 + -1;
  }
  *local_3c = 0;
  local_8._0_1_ = 4;
  piVar7 = (int *)FUN_00683fc0();
  local_8._0_1_ = 5;
  if (*(int *)(*piVar7 + 8) == 0) {
    pTStack_e8 = (TypeDescriptor *)0x4f0d5c;
    FUN_004681b0();
    pTStack_e8 = (TypeDescriptor *)0x4f0d63;
    puVar6 = (undefined4 *)FUN_004682f0();
    uVar4 = *(undefined4 *)(*piVar7 + 8);
    *(undefined4 *)(*piVar7 + 8) = *puVar6;
    *puVar6 = uVar4;
    if (local_60 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = local_60 + 1;
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)*local_60)();
      }
    }
  }
  fVar15 = (float10)(**(code **)(**(int **)(*piVar7 + 8) + 0x14))();
  iVar12 = *piVar7;
  local_3c = (byte *)(float)fVar15;
  fVar16 = (float)local_3c;
  if (*(float *)(iVar12 + 0x1c) != (float)(undefined *)0x0) {
    iVar10 = 0;
    pbVar8 = local_50;
LAB_004f0dc0:
    do {
      bVar3 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      if ((char)bVar3 < '\0') {
        if ((*pbVar8 & 0xc0) == 0x80) {
          do {
            pbVar2 = pbVar8 + 1;
            pbVar8 = pbVar8 + 1;
          } while ((*pbVar2 & 0xc0) == 0x80);
          iVar10 = iVar10 + 1;
          goto LAB_004f0dc0;
        }
      }
      else if (bVar3 == 0) goto LAB_004f0de4;
      iVar10 = iVar10 + 1;
    } while( true );
  }
LAB_004f0dfb:
  fVar16 = *(float *)(iVar12 + 0x14) * fVar16 * *(float *)(iVar12 + 0x18);
  FUN_004363b0();
  local_3c = (byte *)((float)(int)fVar16 + 8.0);
  local_8 = CONCAT31(local_8._1_3_,4);
  if (local_40 != (undefined4 *)0x0) {
    LOCK();
    piVar7 = local_40 + 1;
    iVar12 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar12 == 1) {
      pTStack_e8 = (TypeDescriptor *)0x4f0e49;
      (**(code **)*local_40)();
    }
  }
  pTStack_e8 = (TypeDescriptor *)0x4f0e5b;
  FUN_00684c50();
  puStack_f4 = (undefined1 *)0x41800000;
  local_40 = (undefined4 *)((local_4c + 10.0 + 30.0) - 10.0);
  local_f8 = (undefined1 **)0x4f0eb9;
  FUN_00472db0();
  puStack_f4 = (undefined1 *)0x4f0ecc;
  FUN_00684310();
  pTStack_e8 = (TypeDescriptor *)0x4f0ede;
  FUN_00684c50();
  pTStack_e8 = (TypeDescriptor *)(int)(float)local_3c;
  puStack_ec = (undefined4 *)(int)(float)local_40;
  piStack_f0 = (int *)0x4f0efc;
  FUN_00472d90();
  pTStack_e8 = (TypeDescriptor *)0x24;
  FUN_0040e4d0(&local_f8);
  FUN_006830c0(&local_50);
  pbVar8 = local_50 + -8;
  if (pbVar8 != (byte *)&DAT_00bfe124) {
    LOCK();
    iVar12 = *(int *)pbVar8;
    *(int *)pbVar8 = *(int *)pbVar8 + -1;
    UNLOCK();
    if (iVar12 == 0) {
      pTStack_e8 = (TypeDescriptor *)0x4f0f3f;
      FID_conflict__free(pbVar8);
    }
  }
  piVar7 = (int *)(local_48 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar12 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar12 == 0) {
      pTStack_e8 = (TypeDescriptor *)0x4f0f5f;
      FID_conflict__free(piVar7);
    }
  }
  if (puVar5 != (undefined4 *)0x0) {
    pTStack_e8 = (TypeDescriptor *)0x4f0f6f;
    (**(code **)*puVar5)();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
LAB_004f0de4:
  fVar16 = (float)iVar10 * *(float *)(iVar12 + 0x1c) + (float)local_3c;
  goto LAB_004f0dfb;
}

