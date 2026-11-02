// rea decompile_all
// name: FUN_00457f87
// address: 0x457f87
// body: available
// range: 0x457f87-0x4587ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00457f87(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  float *extraout_ECX;
  float *extraout_ECX_00;
  float *extraout_ECX_01;
  float *extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  int extraout_EDX;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  undefined1 *puVar7;
  float fVar8;
  undefined4 uVar9;
  float *pfStack_88;
  float *pfStack_84;
  float local_80;
  uint uStack_7c;
  uint uVar10;
  float local_6c;
  float *pfStack_68;
  float *local_64;
  undefined8 uStack_60;
  float afStack_50 [15];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005dc3f9;
  local_14 = ExceptionList;
  uStack_7c = DAT_00955fd4 ^ (uint)&stack0xffffff88;
  ExceptionList = &local_14;
  local_64 = (float *)(*(int *)(*(int *)(in_ECX + 0x88) + 0x7c) + 0x1e0);
  local_80 = 6.382498e-39;
  cVar1 = FUN_0045f6ee();
  if (cVar1 == '\0') {
    local_80 = 6.385109e-39;
    cVar1 = FUN_0045f724();
    if (cVar1 == '\0') {
      ExceptionList = local_14;
      return;
    }
    if (*(int *)(extraout_EDX + 0x6154) == 0) {
      ExceptionList = local_14;
      return;
    }
    pfStack_84 = &local_6c;
    local_80 = (float)*(int *)(in_ECX + 0x1c) * 0.6;
    uStack_60 = (double)CONCAT44(local_80,(undefined4)uStack_60);
    pfStack_88 = (float *)0x45874b;
    FUN_0044bfc5();
    pfStack_88 = (float *)0x458756;
    local_80 = (float)FUN_0049f81a();
    local_c = 0;
    pfStack_84 = (float *)0x458763;
    FUN_0047ceaa();
    puStack_10 = (undefined1 *)0xffffffff;
    pfStack_84 = (float *)0x458771;
    FUN_004c4d7a();
    local_80 = 1.4013e-45;
    uStack_60 = (double)CONCAT44(&pfStack_84,(undefined4)uStack_60);
    pfStack_84 = (float *)0x24;
    pfStack_88 = *(float **)(in_ECX + 0x1c);
    uVar9 = *(undefined4 *)(in_ECX + 0x18);
    iVar2 = 0;
    uVar3 = 0;
    iVar4 = in_ECX + 0xf4;
    goto LAB_00458790;
  }
  local_80 = 6.382517e-39;
  iVar2 = FUN_0044bfc5();
  local_80 = (float)(iVar2 + 0x88);
  uStack_60 = (double)CONCAT44(&local_80,(undefined4)uStack_60);
  pfStack_84 = (float *)0x457ff0;
  FUN_004d076d();
  pfStack_84 = (float *)0x457ffa;
  FUN_0047cda7();
  local_80 = (float)(in_ECX + 0x8c);
  pfStack_84 = (float *)0x458008;
  FUN_0047d180();
  pfStack_84 = extraout_ECX;
  if (*(int *)(in_ECX + 0x3f8) != 1) {
    pfStack_84 = (float *)0x45801e;
    iVar2 = FUN_0044bfc5();
    pfStack_84 = (float *)(iVar2 + 0x8c);
  }
  uStack_60 = (double)CONCAT44(uStack_60._4_4_,&pfStack_84);
  pfStack_88 = (float *)0x458032;
  FUN_004d076d();
  pfStack_88 = (float *)0x458039;
  FUN_0047cda7();
  if (*(int *)(in_ECX + 0x410) == 0) {
    pfVar5 = *(float **)(in_ECX + 0xb0);
LAB_0045806d:
    pfStack_84 = (float *)(float)(int)pfVar5;
    pfStack_88 = (float *)0x458075;
    pfStack_84 = (float *)FUN_0045914c();
    pfStack_88 = (float *)0x45807e;
    FUN_0047d180();
    pfStack_88 = extraout_ECX_00;
  }
  else {
    local_6c = *(float *)(in_ECX + 0xc0);
    pfVar5 = *(float **)(in_ECX + 0xb0);
    local_64 = pfVar5;
    if ((int)pfVar5 < (int)local_6c) goto LAB_0045806d;
    pfStack_84 = (float *)(float)(int)local_6c;
    pfStack_88 = (float *)0x45808f;
    pfStack_84 = (float *)FUN_0045914c();
    pfStack_88 = (float *)0x458098;
    FUN_0047d180();
    pfStack_88 = (float *)(in_ECX + 0xb0);
    pfVar5 = (float *)*pfStack_88;
    if ((int)*(float *)(in_ECX + 0xc4) < (int)pfVar5) {
      pfVar5 = *(float **)(in_ECX + 0xc4);
      pfStack_88 = (float *)(float)(int)*pfStack_88;
      pfStack_68 = pfVar5;
      FUN_0045910f((float)(int)pfVar5);
      pfStack_88 = (float *)FUN_0045914c();
      FUN_0047d180();
      pfStack_88 = extraout_ECX_01;
    }
    for (iVar2 = *(int *)(in_ECX + 0xc0); iVar2 <= (int)pfVar5; iVar2 = iVar2 + 2) {
      pfStack_88 = (float *)(*(float *)(in_ECX + 0x98) + *(float *)(in_ECX + 0x90));
      pfStack_68 = pfStack_88;
      FUN_0047d80e(param_1,iVar2,*(undefined4 *)(in_ECX + 0x90));
      pfStack_88 = extraout_ECX_02;
    }
  }
  local_64 = (float *)&pfStack_88;
  FUN_004d076d();
  FUN_0047cda7();
  if (*(int *)(in_ECX + 0xd4) != 0) {
    pfStack_68 = *(float **)(in_ECX + 0x90);
    fVar8 = (float)pfStack_68 * 0.8;
    pfStack_88 = (float *)0x45817a;
    FUN_0045ef8e();
    uVar10 = 0;
    if (0 < *(int *)((int)local_6c + 0x60)) {
      uStack_60 = (double)(fVar8 * 0.5);
      do {
        if (uVar10 < *(uint *)((int)local_6c + 0x60)) {
          pfStack_68 = *(float **)(*(int *)((int)local_6c + 0x58) + uVar10 * 4);
        }
        else {
          pfStack_68 = (float *)0x0;
        }
        pfStack_88 = (float *)0x4581ce;
        iVar2 = FUN_005b3fb0();
        pfStack_88 = (float *)(*(float *)(in_ECX + 0x90) - fVar8);
        pfVar5 = afStack_50;
        puVar7 = (undefined1 *)((float)iVar2 - (float)uStack_60);
        pfStack_68 = pfStack_88;
        local_64 = (float *)puVar7;
        FUN_0047745f(fVar8,pfVar5,puVar7);
        pfStack_88 = (float *)FUN_0047713c(pfVar5,puVar7);
        iVar2 = FUN_0044bfc5(extraout_ECX_03);
        FUN_0047d2ae(iVar2 + 0xfc);
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < *(int *)((int)local_6c + 0x60));
    }
    pfStack_88 = (float *)0x45825e;
    FUN_0045efa9();
  }
  pfStack_88 = (float *)0x458269;
  local_6c = (float)FUN_005b3fb0();
  cVar1 = FUN_004c32c9();
  if (cVar1 != '\0') {
    pfStack_88 = (float *)0x458282;
    local_6c = (float)FUN_005b3fb0();
  }
  pfStack_88 = (float *)0x45828b;
  iVar2 = FUN_0044bfc5();
  pfStack_88 = (float *)(iVar2 + 0x94);
  local_64 = (float *)&pfStack_88;
  FUN_004d076d();
  FUN_0047cda7();
  if (((*(int *)(in_ECX + 0x3f8) < 2) || (3 < *(int *)(in_ECX + 0x3f8))) &&
     (*(int *)(in_ECX + 0x410) != 3)) {
    pfStack_88 = (float *)(float)((int)local_6c * 2);
    local_64 = (float *)(*(int *)(in_ECX + 0xb0) - (int)local_6c);
    pfStack_68 = pfStack_88;
    FUN_0047d49c((float)(int)local_64,
                 (*(float *)(in_ECX + 0x98) * 0.5 + *(float *)(in_ECX + 0x90)) -
                 (float)(int)local_6c,pfStack_88);
  }
  if (*(int *)(in_ECX + 0x410) == 0) {
    if (*(int *)(in_ECX + 0x3f8) != 1) {
      pfStack_88 = (float *)0x45855d;
      FUN_0044bfc5();
    }
    local_64 = (float *)&pfStack_88;
    FUN_004d076d();
    FUN_0047cda7();
    pfStack_88 = (float *)(*(float *)(in_ECX + 0xa8) + *(float *)(in_ECX + 0xa8));
    local_64 = (float *)((float)*(int *)(in_ECX + 0xb0) - *(float *)(in_ECX + 0xa8));
    pfStack_68 = pfStack_88;
    FUN_0047d49c(local_64,(*(float *)(in_ECX + 0x98) * 0.5 + *(float *)(in_ECX + 0x90)) -
                          *(float *)(in_ECX + 0xa8),pfStack_88);
  }
  else {
    pfStack_88 = (float *)0x45833c;
    iVar2 = FUN_0044bfc5();
    pfStack_88 = (float *)(iVar2 + 0x90);
    local_64 = (float *)&pfStack_88;
    FUN_004d076d();
    FUN_0047cda7();
    pfStack_88 = (float *)(*(float *)(in_ECX + 0xa8) + *(float *)(in_ECX + 0xa8));
    local_64 = (float *)((float)*(int *)(in_ECX + 0xb0) - *(float *)(in_ECX + 0xa8));
    pfStack_68 = pfStack_88;
    FUN_0047d49c(local_64,(*(float *)(in_ECX + 0x98) * 0.5 + *(float *)(in_ECX + 0x90)) -
                          *(float *)(in_ECX + 0xa8),pfStack_88);
    if ((-1 < *(int *)(in_ECX + 0xc0)) &&
       ((*(char *)(in_ECX + 0x3fc) != '\0' || (*(int *)(in_ECX + 0x410) != 1)))) {
      pfStack_88 = (float *)(*(float *)(in_ECX + 0x98) + *(float *)(in_ECX + 0x90));
      pfVar5 = afStack_50;
      pfStack_68 = *(float **)(in_ECX + 0x90);
      fVar8 = (float)*(int *)(in_ECX + 0xc0);
      local_64 = (float *)((float)pfStack_68 * 0.9);
      FUN_0047745f(local_64,pfVar5,fVar8);
      FUN_0047713c(pfVar5,fVar8);
      if (*(int *)(in_ECX + 0x3f8) != 2) {
        pfStack_88 = (float *)0x45844c;
        FUN_0044bfc5();
      }
      local_64 = (float *)&pfStack_88;
      FUN_004d076d();
      FUN_0047cda7();
      pfStack_88 = afStack_50;
      iVar2 = FUN_0044bfc5(extraout_ECX_04);
      FUN_0047d2ae(iVar2 + 0x17c);
    }
    pfStack_68 = *(float **)(in_ECX + 0xc4);
    if ((-1 < (int)pfStack_68) &&
       ((*(char *)(in_ECX + 0x3fc) != '\0' || (*(int *)(in_ECX + 0x410) != 2)))) {
      pfStack_88 = (float *)(*(float *)(in_ECX + 0x98) + *(float *)(in_ECX + 0x90));
      pfVar5 = afStack_50;
      local_6c = *(float *)(in_ECX + 0x90);
      fVar8 = (float)(int)pfStack_68;
      local_64 = (float *)(local_6c * 0.9);
      FUN_0047745f(local_64,pfVar5,fVar8);
      FUN_0047713c(pfVar5,fVar8);
      if (*(int *)(in_ECX + 0x3f8) != 3) {
        pfStack_88 = (float *)0x45850d;
        FUN_0044bfc5();
      }
      local_64 = (float *)&pfStack_88;
      FUN_004d076d();
      FUN_0047cda7();
      pfStack_88 = afStack_50;
      iVar2 = FUN_0044bfc5(extraout_ECX_05);
      FUN_0047d2ae(iVar2 + 0x19c);
    }
  }
  pfVar6 = (float *)(in_ECX + 0x8c);
  local_64 = (float *)&pfStack_88;
  FUN_004d076d();
  FUN_0047cda7();
  local_64 = (float *)(*(float *)(in_ECX + 0x98) + *(float *)(in_ECX + 0x90));
  pfStack_88 = (float *)0x458617;
  local_6c = (float)FUN_005b3fb0();
  pfStack_88 = (float *)(in_ECX + 0xd8);
  FUN_0047ceaa();
  pfVar5 = local_64;
  local_80 = 1.4013e-45;
  pfStack_84 = (float *)0x11;
  uStack_60 = (double)CONCAT44(*pfVar6,SUB84(uStack_60,0));
  pfStack_88 = local_64;
  uVar9 = *(undefined4 *)(in_ECX + 0xdc);
  iVar2 = *(int *)(in_ECX + 0x1c) - (int)local_64;
  uVar3 = FUN_005b3fb0(iVar2,uVar9);
  FUN_0047d02d(param_1,in_ECX + 0xe0,uVar3,iVar2,uVar9);
  local_80 = 1.4013e-45;
  pfStack_84 = (float *)0x12;
  uVar9 = *(undefined4 *)(in_ECX + 0xdc);
  uStack_60 = (double)CONCAT44(*(float *)(in_ECX + 0x94) + *pfVar6,uVar9);
  pfStack_88 = pfVar5;
  iVar2 = *(int *)(in_ECX + 0x1c) - (int)pfVar5;
  uVar3 = FUN_005b3fb0(iVar2,uVar9);
  FUN_0047d02d(param_1,in_ECX + 0xe4,uVar3,iVar2,uVar9);
  if (*(int *)(*(int *)(in_ECX + 0x88) + 0x6154) == 0) {
    ExceptionList = local_14;
    return;
  }
  local_80 = (float)(in_ECX + 0xec);
  pfStack_84 = (float *)0x4586cd;
  FUN_0047ceaa();
  local_80 = 1.4013e-45;
  pfStack_84 = (float *)0x24;
  iVar2 = *(int *)(in_ECX + 0x1c) - (int)local_64;
  uStack_60 = (double)CONCAT44(*pfVar6,SUB84(uStack_60,0));
  pfStack_88 = local_64;
  uVar9 = *(undefined4 *)(in_ECX + 0xe8);
  uVar3 = FUN_005b3fb0(iVar2,uVar9);
  iVar4 = in_ECX + 0xf0;
LAB_00458790:
  FUN_0047d02d(param_1,iVar4,uVar3,iVar2,uVar9);
  ExceptionList = local_14;
  return;
}

