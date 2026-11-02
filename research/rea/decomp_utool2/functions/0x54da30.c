// rea decompile_all
// name: FUN_0054da30
// address: 0x54da30
// body: available
// range: 0x54da30-0x54de6d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0054da30(int *param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int *piVar4;
  undefined4 *puVar5;
  DWORD DVar6;
  int in_ECX;
  int *local_48;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c [3];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00710149;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = (int)&DAT_00bfe12c;
  local_8 = 0;
  local_1c[1] = 1;
  if (*(int *)(in_ECX + 8) == 2) {
    local_48 = (int *)0x54dc3e;
    local_1c[2] = in_ECX;
    FUN_0040eb20();
    local_8 = 5;
    local_48 = (int *)0x54dc52;
    FUN_0040eb20();
    local_8._0_1_ = 6;
    local_48 = local_1c;
    FUN_00635a10();
    local_8._0_1_ = 7;
    local_48 = &local_20;
    FUN_00635a10();
    local_8 = CONCAT31(local_8._1_3_,8);
    local_48 = &local_24;
    piVar4 = (int *)FUN_00635a10();
    iVar1 = *param_1;
    *param_1 = *piVar4;
    *piVar4 = iVar1;
    piVar4 = (int *)(local_24 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        local_48 = (int *)0x54dcca;
        FID_conflict__free(piVar4);
      }
    }
    piVar4 = (int *)(local_20 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        local_48 = (int *)0x54dced;
        FID_conflict__free(piVar4);
      }
    }
    piVar4 = (int *)(local_1c[0] + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        local_48 = (int *)0x54dd10;
        FID_conflict__free(piVar4);
      }
    }
    piVar4 = (int *)(local_28 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        local_48 = (int *)0x54dd33;
        FID_conflict__free(piVar4);
      }
    }
    local_8 = local_8 & 0xffffff00;
    piVar4 = (int *)(local_2c + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        local_48 = (int *)0x54dd57;
        FID_conflict__free(piVar4);
      }
    }
    switch(*(undefined4 *)(*(int *)(local_1c[2] + 0x30) + 0x2c)) {
    case 2:
    case 3:
    case 4:
      if (param_3 == 2) {
        local_48 = (int *)0x54dd85;
        FUN_00637c90();
        local_8 = 9;
        FUN_00636a10(&local_48);
        FUN_006377c0();
        local_48 = (int *)0x54ddb0;
        FUN_00637730();
        local_8._0_1_ = 10;
        local_48 = &param_2;
        piVar4 = (int *)FUN_00632f30();
        iVar1 = *param_1;
        *param_1 = *piVar4;
        *piVar4 = iVar1;
        FUN_0040ea50();
        FUN_00637c10();
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_00637c10();
      }
    }
    iVar1 = param_3;
    piVar4 = (int *)(*param_1 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    local_48 = (int *)0x54de08;
    cVar3 = FUN_005b5020();
    if (cVar3 != '\0') {
      puVar5 = (undefined4 *)FUN_00458890();
      local_48 = (int *)0x54de21;
      DVar6 = GetFileAttributesW((LPCWSTR)*puVar5);
      if ((((DVar6 & 0x10) != 0) && (DVar6 != 0xffffffff)) && (iVar1 != 1)) {
        local_48 = (int *)0x54de40;
        FUN_0045c990();
        iVar1 = *param_5;
        *param_5 = param_2;
        param_2 = iVar1;
        FUN_00637c10();
      }
    }
  }
  else if (*(int *)(in_ECX + 8) == 3) {
    local_48 = (int *)0x54da99;
    FUN_0040eb20();
    local_8 = 1;
    local_48 = &local_20;
    FUN_00635a10();
    local_8._0_1_ = 2;
    local_48 = local_1c;
    FUN_00635a10();
    local_8 = CONCAT31(local_8._1_3_,3);
    local_48 = &param_3;
    piVar4 = (int *)FUN_00635a10();
    iVar1 = *param_1;
    *param_1 = *piVar4;
    *piVar4 = iVar1;
    piVar4 = (int *)(param_3 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        local_48 = (int *)0x54db16;
        FID_conflict__free(piVar4);
      }
    }
    piVar4 = (int *)(local_1c[0] + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        local_48 = (int *)0x54db39;
        FID_conflict__free(piVar4);
      }
    }
    piVar4 = (int *)(local_20 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        local_48 = (int *)0x54db5c;
        FID_conflict__free(piVar4);
      }
    }
    local_8 = local_8 & 0xffffff00;
    piVar4 = (int *)(local_24 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        local_48 = (int *)0x54db83;
        FID_conflict__free(piVar4);
      }
    }
    local_48 = (int *)0x54db95;
    puVar5 = (undefined4 *)FUN_00636a10();
    local_8 = 4;
    local_48 = (int *)*puVar5;
    FUN_00635a10(&stack0xffffffbc);
    local_48 = (int *)0x54dbb3;
    uVar2 = FUN_005b5020();
    local_8 = local_8 & 0xffffff00;
    piVar4 = (int *)(param_4 + -8);
    param_2 = CONCAT13(uVar2,(undefined3)param_2);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        local_48 = (int *)0x54dbdd;
        FID_conflict__free(piVar4);
      }
    }
    if (param_2._3_1_ != '\0') {
      local_48 = (int *)0x54dbfb;
      FUN_0045c990();
      piVar4 = (int *)(*param_5 + -8);
      *param_5 = param_2;
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          local_48 = (int *)0x54dc2a;
          FID_conflict__free(piVar4);
        }
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}

