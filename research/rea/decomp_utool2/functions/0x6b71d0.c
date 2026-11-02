// rea decompile_all
// name: FUN_006b71d0
// address: 0x6b71d0
// body: available
// range: 0x6b71d0-0x6b74fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b71d0(void)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int in_ECX;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00724148;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = (undefined1 *)0x0;
  local_20 = *(int *)(*(int *)(*(int *)(in_ECX + 0xe8) + 0x70) + 0xa8);
  piVar2 = (int *)(local_20 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  local_8 = 0;
  puVar3 = (undefined4 *)FUN_00458890();
  DVar4 = GetFileAttributesW((LPCWSTR)*puVar3);
  if (((DVar4 & 0x10) != 0) && (DVar4 != 0xffffffff)) {
    local_2c = operator_new(0x160);
    local_8._0_1_ = 1;
    uVar5 = FUN_00637250();
    local_8 = CONCAT31(local_8._1_3_,2);
    local_14 = (undefined1 *)0x1;
    uVar6 = FUN_00637250();
    local_8 = 3;
    local_14 = (undefined1 *)0x3;
    piVar2 = (int *)FUN_006e6f80(uVar6,uVar5,0);
    piVar7 = (int *)(local_24 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    local_8 = 0;
    piVar7 = (int *)(local_28 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    FUN_0045c990();
    local_2c = &DAT_00bfe12c;
    local_14 = &DAT_00bfe12c;
    local_8 = CONCAT31(local_8._1_3_,8);
    FUN_006d2650(&local_18,&local_14,&local_2c);
    piVar7 = (int *)(local_14 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    local_8 = local_8 & 0xffffff00;
    piVar7 = (int *)(local_18 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    uVar5 = FUN_00637250();
    local_8._0_1_ = 9;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_44 = 0xd;
    local_40 = 0;
    local_3c = 0;
    FUN_006e6ce0(uVar5,1,&local_44);
    local_8._0_1_ = 0;
    piVar7 = (int *)(local_2c + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    uVar5 = FUN_00637250();
    local_8._0_1_ = 10;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0x1b;
    local_34 = 0;
    local_30 = 0;
    FUN_006e6ce0(uVar5,0,&local_38);
    local_8 = (uint)local_8._1_3_ << 8;
    piVar7 = (int *)(local_2c + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    local_2c = &stack0xffffffa8;
    if (piVar2 == (int *)0x0) {
      iVar8 = 0;
      local_2c = &stack0xffffffa8;
    }
    else {
      iVar8 = FUN_0040de70(piVar2);
    }
    if (iVar8 != 0) {
      LOCK();
      *(int *)(iVar8 + 4) = *(int *)(iVar8 + 4) + 1;
      UNLOCK();
    }
    local_2c = (undefined1 *)FUN_004b18f0();
    cVar1 = FUN_006d1aa0();
    if (cVar1 == '\0') {
      FUN_0048c530();
      FUN_006ca6c0(piVar2);
      FUN_006ca640(piVar2);
      (**(code **)(*piVar2 + 0x28))();
      FUN_006cc500(2);
    }
  }
  piVar2 = (int *)(local_20 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar8 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  ExceptionList = local_10;
  return;
}

