// rea decompile_all
// name: FUN_0053a020
// address: 0x53a020
// body: available
// range: 0x53a020-0x53a370 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0053a020(int *param_1,int *param_2,undefined4 *param_3,int *param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  DWORD DVar6;
  int *piVar7;
  void *_Memory;
  uint uVar8;
  bool bVar9;
  undefined8 uVar10;
  uint local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070de22;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(char *)*param_2 != '\0') {
    puVar5 = (undefined4 *)FUN_00458890(DAT_00c76070 ^ (uint)&stack0xfffffffc);
    DVar6 = GetFileAttributesW((LPCWSTR)*puVar5);
    if ((DVar6 & 0x10) == 0) {
      *param_3 = 3;
      piVar7 = (int *)(*param_2 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        *piVar7 = *piVar7 + 1;
        UNLOCK();
      }
      LOCK();
      iVar2 = *param_4;
      *param_4 = *param_2;
      UNLOCK();
      piVar7 = (int *)(iVar2 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      ExceptionList = local_10;
      return 0;
    }
  }
  FUN_00636040(&local_34);
  local_8 = 0;
  FUN_00634890(&local_38);
  piVar7 = (int *)(local_38 - 8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  local_8 = 0xffffffff;
  piVar7 = (int *)(local_34 - 8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  puVar5 = (undefined4 *)FUN_006358c0();
  local_8 = 1;
  if (puVar5 == (undefined4 *)0x0) {
    *param_3 = 8;
    piVar7 = (int *)(*param_1 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      *piVar7 = *piVar7 + 1;
      UNLOCK();
    }
    LOCK();
    iVar2 = *param_4;
    *param_4 = *param_1;
    UNLOCK();
    piVar7 = (int *)(iVar2 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    param_3._3_1_ = 0;
  }
  else {
    operator_new(0x30);
    local_8 = CONCAT31(local_8._1_3_,2);
    piVar7 = (int *)FUN_0062aec0(param_2,0x8000);
    if (*(char *)piVar7[4] != '\0') {
      puVar4 = (undefined4 *)*piVar7;
      piVar7 = (int *)0x0;
      (*(code *)*puVar4)(1);
    }
    local_8._0_1_ = 3;
    if (piVar7 == (int *)0x0) {
      *param_3 = 2;
      FUN_00635e10(param_2);
      param_3._3_1_ = 0;
    }
    else {
      uVar10 = FUN_00627570();
      local_2c = (uint)((ulonglong)uVar10 >> 0x20);
      local_18 = (uint)uVar10;
      _Memory = (void *)FUN_004c554b(0x100000);
      local_8._0_1_ = 4;
      if ((local_2c != 0) || (local_18 != 0)) {
        local_38 = 0;
        local_34 = 0;
        do {
          if (*(char *)(local_20 + 0x14) != '\0') {
LAB_0053a36a:
            param_3._3_1_ = 0;
            goto LAB_0053a309;
          }
          local_1c = 0x100000;
          uVar3 = local_1c;
          if ((local_2c - local_38 == (uint)(local_18 < local_34)) &&
             (uVar3 = local_18 - local_34, 0xfffff < local_18 - local_34)) {
            uVar3 = local_1c;
          }
          local_1c = uVar3;
          local_30 = 0;
          uVar8 = FUN_006126e0(_Memory,local_1c);
          puVar1 = puVar5 + 4;
          uVar3 = *puVar1;
          *puVar1 = *puVar1 + uVar8;
          puVar5[5] = puVar5[5] + (uint)CARRY4(uVar3,uVar8);
          local_28 = (int)uVar8 >> 0x1f;
          local_24 = uVar8;
          FUN_004edae0(uVar8,local_28);
          if ((local_24 != local_1c) || (local_28 != local_30)) {
            *param_3 = 4;
            FUN_00635e10(param_1);
            goto LAB_0053a36a;
          }
          local_11 = (**(code **)(*piVar7 + 0x10))(_Memory,uVar8);
          FUN_004edb20(local_24,local_28);
          if (local_11 == '\0') {
            *param_3 = 5;
            FUN_00635e10(param_2);
            param_3._3_1_ = 0;
            goto LAB_0053a309;
          }
          bVar9 = CARRY4(local_34,local_24);
          local_34 = local_34 + local_24;
          local_38 = local_38 + local_28 + (uint)bVar9;
        } while ((local_38 < local_2c) || ((local_38 <= local_2c && (local_34 < local_18))));
      }
      param_3._3_1_ = 1;
LAB_0053a309:
      FID_conflict__free(_Memory);
      (**(code **)*piVar7)(1);
    }
    (**(code **)*puVar5)(1);
  }
  ExceptionList = local_10;
  return param_3._3_1_;
}

