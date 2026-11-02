// rea decompile_all
// name: FUN_00537110
// address: 0x537110
// body: available
// range: 0x537110-0x5375c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00537110(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int in_ECX;
  int *piVar8;
  undefined1 auStack_98 [8];
  undefined4 uStack_90;
  int *piStack_8c;
  int iStack_88;
  int local_6c;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_24 [3];
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070d7f0;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar3 = *(uint *)(in_ECX + 0x7c);
  iVar6 = *(int *)(*(int *)(in_ECX + 0x78) + 0x7c);
  uVar1 = *(uint *)(iVar6 + 0x5c);
  if ((((int)uVar3 < (int)uVar1) && (uVar3 < uVar1)) &&
     (iVar6 = *(int *)(*(int *)(iVar6 + 0x54) + uVar3 * 4), iVar6 != 0)) {
    local_6c = *(int *)(in_ECX + 0x18);
    cVar4 = FUN_0053f150();
    if (cVar4 == '\0') {
      iStack_88 = 0x537195;
      FUN_0045c990();
      local_8 = 0;
      local_24[2] = *(undefined4 *)(in_ECX + 0x18);
      local_18 = *(undefined4 *)(in_ECX + 0x1c);
      piStack_8c = local_24;
      iStack_88 = 1;
      local_24[0] = 0;
      local_24[1] = 0;
      uStack_90 = 0x5371c7;
      local_6c = FUN_0057f1c0();
      piVar8 = (int *)(local_58 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          iStack_88 = 0x5371ec;
          FID_conflict__free(piVar8);
        }
      }
      iStack_88 = 0x5371fa;
      FUN_005406d0();
      local_8 = 1;
      iStack_88 = 0x53720f;
      FUN_00637690();
      local_8 = CONCAT31(local_8._1_3_,2);
      iStack_88 = 0x53721c;
      (**(code **)(*(int *)(in_ECX + 0x70) + 8))();
      piVar8 = (int *)(local_58 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          iStack_88 = 0x53723c;
          FID_conflict__free(piVar8);
        }
      }
      local_8 = 0xffffffff;
      piVar8 = (int *)(local_5c + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          iStack_88 = 0x53726e;
          FID_conflict__free(piVar8);
        }
      }
    }
    else {
      cVar4 = FUN_0053e410();
      if (cVar4 != '\0') {
        iStack_88 = 0x537292;
        FUN_0045c990();
        local_8 = 3;
        local_24[2] = *(undefined4 *)(in_ECX + 0x18);
        local_18 = *(undefined4 *)(in_ECX + 0x1c);
        piStack_8c = local_24;
        iStack_88 = 0;
        local_24[0] = 0;
        local_24[1] = 0;
        uStack_90 = 0x5372c4;
        local_6c = FUN_0057f1c0();
        local_8 = 0xffffffff;
        piVar8 = (int *)(local_58 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            iStack_88 = 0x5372f1;
            FID_conflict__free(piVar8);
          }
        }
      }
      iStack_88 = 0x537309;
      (**(code **)(*(int *)(in_ECX + 0x70) + 8))();
    }
    iStack_88 = 0x53731b;
    FUN_00684c50();
    local_5c = *(int *)(iVar6 + 8);
    local_58 = 0x1e;
    if (local_5c + 1 < 0) {
      iVar6 = FUN_006104a0();
      *(undefined1 *)(iVar6 + -1) = 0x2d;
    }
    else {
      FUN_006104a0();
    }
    iStack_88 = 0x537357;
    FUN_004557e0();
    local_8._0_1_ = 4;
    local_8._1_3_ = 0;
    iVar6 = *(int *)(*(int *)(in_ECX + 0x78) + 0x7c);
    iVar5 = FUN_005bd4e0();
    if ((1 < *(int *)(iVar6 + 0x24)) && (iVar5 != 0)) {
      iVar6 = local_5c / iVar5;
      if (local_5c % iVar5 + 1 < 0) {
        iVar5 = FUN_006104a0();
        *(undefined1 *)(iVar5 + -1) = 0x2d;
      }
      else {
        FUN_006104a0();
      }
      iStack_88 = 0x5373bb;
      FUN_004557e0();
      piStack_8c = &local_5c;
      local_8 = CONCAT31(local_8._1_3_,5);
      uStack_90 = 0x5373d1;
      piVar8 = (int *)FUN_00633d10();
      iVar5 = *piVar8;
      *piVar8 = local_60;
      piVar8 = (int *)(local_5c + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          iStack_88 = 0x5373fb;
          FID_conflict__free(piVar8);
        }
      }
      local_8._0_1_ = 4;
      piVar8 = (int *)(local_58 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          iStack_88 = 0x537422;
          FID_conflict__free(piVar8);
        }
      }
      if (iVar6 == 0) {
        iStack_88 = 0x53743a;
        FUN_00621830();
      }
      else {
        iStack_88 = 0x537445;
        iStack_88 = FUN_00637c90();
        local_8._0_1_ = 6;
        piStack_8c = (int *)0x537457;
        FUN_00637690();
        iStack_88 = 0x537464;
        FUN_006377c0();
        local_8._0_1_ = 7;
        iStack_88 = 0x537471;
        FUN_00636ec0();
        FUN_00637c10();
        local_8._0_1_ = 4;
        FUN_00637c10();
      }
      local_58 = 0x37;
      local_60 = iVar5;
    }
    local_5c = *(int *)(in_ECX + 0x1c);
    piVar8 = (int *)(local_60 + -8);
    if (piVar8 != &DAT_00bfe124) {
      LOCK();
      *piVar8 = *piVar8 + 1;
      UNLOCK();
    }
    iStack_88 = 0x5374b7;
    uVar7 = FUN_006377c0();
    local_8 = CONCAT31(local_8._1_3_,8);
    iStack_88 = local_58;
    piStack_8c = (int *)0x0;
    uStack_90 = 0x5374cf;
    FUN_00472d90();
    iStack_88 = 0x22;
    FUN_0040e4d0(auStack_98);
    FUN_006830c0(uVar7);
    piVar8 = (int *)(local_64 + -8);
    if (piVar8 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        iStack_88 = 0x53750f;
        FID_conflict__free(piVar8);
      }
    }
    iStack_88 = 0x53751e;
    uVar7 = FUN_00411300();
    local_8 = CONCAT31(local_8._1_3_,9);
    iStack_88 = (local_6c - local_58) + -4;
    piStack_8c = (int *)0x0;
    uStack_90 = 0x537540;
    FUN_00472d90();
    iStack_88 = 0x21;
    FUN_0040e4d0(auStack_98);
    FUN_006830c0(uVar7);
    piVar8 = (int *)(local_64 + -8);
    if (piVar8 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        iStack_88 = 0x537580;
        FID_conflict__free(piVar8);
      }
    }
    piVar8 = (int *)(local_60 + -8);
    if (piVar8 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        iStack_88 = 0x5375a0;
        FID_conflict__free(piVar8);
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

