// rea decompile_all
// name: FUN_004f7a90
// address: 0x4f7a90
// body: available
// range: 0x4f7a90-0x4f81a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f7a90(undefined4 *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  int *in_ECX;
  int *piVar4;
  int iVar5;
  int iVar6;
  float in_XMM0_Da;
  float fVar7;
  float **ppfVar8;
  float *pfStack_90;
  int *local_8c;
  void **local_88;
  float local_48 [3];
  float local_3c;
  void *local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  int local_20;
  float local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007064d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (((*(byte *)((int)in_ECX + 0x69) & 0x10) == 0) &&
     ((in_ECX[3] == 0 || (cVar2 = FUN_006e6320(), cVar2 != '\0')))) {
    if (in_ECX[0x21] == 0) {
      local_20 = in_ECX[0x22];
LAB_004f7ae0:
      iVar5 = in_ECX[0x23];
    }
    else {
      local_20 = in_ECX[0x24];
      if (in_ECX[0x21] != 1) goto LAB_004f7ae0;
      iVar5 = in_ECX[0x25];
    }
    if (*(char *)((int)in_ECX + 0x115) != '\0') {
      iVar5 = in_ECX[0x27];
    }
  }
  else {
    local_20 = in_ECX[0x28];
    iVar5 = in_ECX[0x29];
  }
  local_28 = iVar5;
  if ((undefined **)*in_ECX == PushButton::vftable) {
    local_11 = '\0';
  }
  else {
    local_88 = (void **)0x4f7b3f;
    local_11 = (*(code *)((undefined **)*in_ECX)[0x2e])();
  }
  cVar2 = FUN_006e2bd0();
  if ((cVar2 != '\0') && (local_11 == '\0')) {
    local_20 = in_ECX[0x24];
    iVar5 = in_ECX[0x26];
    local_28 = iVar5;
  }
  cVar2 = (char)((uint)iVar5 >> 0x18);
  switch(in_ECX[0x4c]) {
  case 1:
  case 5:
    local_88 = (void **)0x4f7b94;
    FUN_006842b0();
    break;
  case 2:
  case 4:
    local_88 = (void **)0x4f7ba7;
    FUN_006842b0();
    break;
  case 3:
  }
  for (piVar4 = DAT_00c8a678; piVar4 != in_ECX; piVar4 = (int *)piVar4[3]) {
    if (piVar4 == (int *)0x0) goto LAB_004f7bfd;
  }
  if (local_28._3_1_ == '\0') {
    local_88 = (void **)0x4f7bee;
    puVar3 = (undefined4 *)FUN_006842b0();
  }
  else {
    local_88 = (void **)0x4f7bfb;
    puVar3 = (undefined4 *)FUN_00684210();
  }
  cVar2 = (char)((uint)*puVar3 >> 0x18);
LAB_004f7bfd:
  if (cVar2 != '\0') {
    local_88 = (void **)0x4f7c1a;
    FUN_00684c50();
    ppfVar8 = &pfStack_90;
    FUN_006e6400(local_48);
    FUN_0040e4d0(ppfVar8);
    FUN_00684310();
  }
  local_88 = (void **)0x4f7c50;
  FUN_00684c50();
  local_20 = 0;
  if (in_ECX[0x3d] == 0) {
    cVar2 = FUN_00682580();
    if (cVar2 != '\0') goto LAB_004f7f29;
    iVar5 = in_ECX[7];
    iVar1 = in_ECX[6];
    local_20 = iVar1;
    if (iVar5 < iVar1) {
      local_20 = iVar5;
    }
    local_20 = local_20 + -4;
    if (*(char *)in_ECX[0x40] == '\0') {
      iVar5 = iVar1 - local_20;
    }
    iVar5 = iVar5 / 2;
    local_48[1] = 0.0;
    local_48[2] = (float)local_20;
    local_48[0] = (float)iVar5 + 0.0;
    local_18 = local_48[0];
    if ((float)in_ECX[0x32] == 0.0) {
      in_XMM0_Da = (float)((in_ECX[7] - local_20) / 2) + 0.0;
      local_3c = in_XMM0_Da;
      cVar2 = (**(code **)(*(int *)*param_1 + 0x30))();
      if ((cVar2 == '\0') && (cVar2 = FUN_00682580(), cVar2 == '\0')) {
        local_88 = (void **)(in_ECX + 0x2a);
        local_8c = (int *)0x4f7da1;
        (**(code **)(*(int *)*param_1 + 0x5c))();
      }
    }
    else {
      local_34 = 0;
      local_30 = 0;
      local_88 = &local_38;
      local_8c = in_ECX + 0x2a;
      in_XMM0_Da = (float)((in_ECX[7] - local_20) / 2) + 0.0;
      pfStack_90 = (float *)0x4f7de4;
      local_3c = in_XMM0_Da;
      local_38 = (void *)in_ECX[0x32];
      FUN_00682be0();
    }
    cVar2 = FUN_00682580();
    if (cVar2 == '\0') {
      local_88 = (void **)0x4f7e0a;
      FUN_00684c50();
      local_48[2] = (float)local_20;
      local_48[1] = 0.0;
      in_XMM0_Da = (float)((in_ECX[7] - local_20) / 2) + (float)(undefined *)0x0;
      local_48[0] = local_18;
      local_3c = in_XMM0_Da;
      cVar2 = (**(code **)(*(int *)*param_1 + 0x30))();
      if ((cVar2 == '\0') && (cVar2 = FUN_00682580(), cVar2 == '\0')) {
        local_88 = (void **)(in_ECX + 0x33);
        local_8c = (int *)0x4f7e88;
        (**(code **)(*(int *)*param_1 + 0x5c))();
      }
      local_88 = (void **)0x4f7e97;
      FUN_00684c50();
      if ((float)in_ECX[0x3c] != 0.0) {
        local_48[0] = local_18;
        local_48[1] = 0.0;
        local_88 = &local_38;
        local_34 = 0;
        local_8c = in_ECX + 0x33;
        local_30 = 0;
        in_XMM0_Da = (float)((in_ECX[7] - local_20) / 2) + 0.0;
        local_48[2] = (float)local_20;
        pfStack_90 = (float *)0x4f7f1a;
        local_3c = in_XMM0_Da;
        local_38 = (void *)in_ECX[0x3c];
        FUN_00682be0();
      }
    }
  }
  else {
    iVar5 = in_ECX[7];
    iVar1 = in_ECX[6];
    local_20 = iVar1;
    if (iVar5 < iVar1) {
      local_20 = iVar5;
    }
    if (*(char *)in_ECX[0x40] == '\0') {
      iVar5 = iVar1 - local_20;
    }
    iVar5 = iVar5 / 2;
    local_88 = (void **)(float)local_20;
    local_8c = (int *)0x4f7cc3;
    FUN_00561df0();
  }
  local_20 = iVar5 + iVar5 / 2 + local_20;
LAB_004f7f29:
  if (*(char *)in_ECX[0x40] != '\0') {
    local_88 = (void **)0x4f7f49;
    FUN_0045c990();
    local_8 = 0;
    local_88 = (void **)0x4f7f62;
    FUN_006831f0();
    local_28 = (int)in_XMM0_Da;
    local_8 = 0xffffffff;
    piVar4 = (int *)((int)local_18 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        local_88 = (void **)0x4f7f92;
        FID_conflict__free(piVar4);
      }
    }
    local_88 = (void **)0x4f7fa6;
    FUN_0045c990();
    local_8 = 1;
    local_88 = (void **)0x4f7fbf;
    FUN_006831f0();
    iVar5 = (int)in_XMM0_Da;
    piVar4 = (int *)((int)local_18 + -8);
    local_2c = iVar5;
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        local_88 = (void **)0x4f7fe3;
        FID_conflict__free(piVar4);
      }
    }
    iVar1 = local_20;
    iVar5 = local_28 + iVar5;
    if ((char)in_ECX[0x45] == '\0') {
      iVar5 = 0;
    }
    local_38 = (void *)0x0;
    local_34 = 0;
    local_30 = 0;
    iVar6 = (in_ECX[6] - iVar5) - local_20;
    local_88 = (void **)0xc8;
    local_8c = (int *)0x4f8017;
    FUN_00419e50();
    local_34 = 200;
    fVar7 = (float)iVar6;
    local_8 = 2;
    local_8c = (int *)0x4f8048;
    local_88 = (void **)fVar7;
    FUN_006823f0();
    pfStack_90 = (float *)(in_ECX + 0x40);
    local_8c = (int *)fVar7;
    FUN_00682950(in_ECX + 0x3e);
    local_88 = (void **)local_30;
    pfStack_90 = local_48;
    local_8c = (int *)0x0;
    FUN_00682660();
    iVar5 = (int)local_48[2];
    if (iVar6 < (int)local_48[2]) {
      iVar5 = iVar6;
    }
    local_2c = local_2c + iVar5;
    local_88 = (void **)param_1;
    local_8c = (int *)0x4f80c6;
    FUN_00682710();
    if ((char)in_ECX[0x45] != '\0') {
      local_8 = CONCAT31(local_8._1_3_,3);
      iVar5 = in_ECX[7];
      FUN_006823f0();
      local_8c = (int *)(float)(iVar5 / 2);
      local_88 = (void **)(float)(local_28 / 2 + local_2c + iVar1);
      pfStack_90 = (float *)0x4f8169;
      FUN_006824f0();
      local_88 = (void **)0x4f8175;
      FUN_006839e0();
      local_88 = (void **)0x4f817d;
      FID_conflict__free((void *)0x0);
    }
    FUN_00471b00();
    local_88 = (void **)0x4f8190;
    FID_conflict__free(local_38);
  }
  ExceptionList = local_10;
  return;
}

