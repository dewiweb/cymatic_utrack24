// rea decompile_all
// name: FUN_006bbfe0
// address: 0x6bbfe0
// body: available
// range: 0x6bbfe0-0x6bc3c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006bbfe0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 **ppuVar2;
  char cVar3;
  int *piVar4;
  undefined **ppuVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int in_ECX;
  int *piVar9;
  undefined1 auStack_70 [4];
  undefined4 uStack_6c;
  undefined4 **ppuStack_68;
  undefined4 *local_34;
  void *local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 **local_24;
  undefined4 *local_20;
  int local_1c;
  undefined4 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007249de;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_34 = (undefined4 *)*param_1;
  if (local_34 != (undefined4 *)0x0) {
    LOCK();
    local_34[1] = local_34[1] + 1;
    UNLOCK();
  }
  local_30 = (void *)0x0;
  local_2c = 0;
  local_28 = 0;
  local_8 = 0;
  local_14 = in_ECX;
  piVar4 = (int *)FUN_006c5860();
  piVar9 = (int *)(*piVar4 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    *piVar9 = *piVar9 + 1;
    UNLOCK();
  }
  LOCK();
  iVar6 = *(int *)(in_ECX + 8);
  *(int *)(in_ECX + 8) = *piVar4;
  UNLOCK();
  piVar4 = (int *)(iVar6 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = local_20 + -2;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  FUN_006bc880();
  local_8._0_1_ = 1;
  FUN_006bc610();
  local_8._0_1_ = 2;
  FUN_006bc490();
  local_8._0_1_ = 3;
  FUN_006bcd50();
  if (local_34 != (undefined4 *)0x0) {
    piVar9 = (int *)local_34[3];
    piVar4 = piVar9 + local_34[5] * 6;
    for (; piVar9 != piVar4; piVar9 = piVar9 + 6) {
      if (*piVar9 == DAT_00c8aa70) {
        ppuVar5 = (undefined **)(piVar9 + 2);
        if (ppuVar5 != (undefined **)0x0) goto LAB_006bc11e;
        break;
      }
    }
  }
  ppuVar5 = &PTR_PTR_00c7ed58;
LAB_006bc11e:
  iVar6 = (**(code **)(*(int *)*ppuVar5 + 4))();
  ppuStack_68 = (undefined4 **)0x6bc137;
  FUN_006bce70();
  local_8._0_1_ = 4;
  ppuStack_68 = (undefined4 **)0x6bc147;
  FUN_006bcb00();
  ppuVar2 = local_24;
  local_8 = CONCAT31(local_8._1_3_,5);
  if (*(int *)(in_ECX + 0xb8) == local_1c) {
LAB_006bc17b:
    if (*(undefined4 **)(local_14 + 0xb0) != local_20) {
      ppuStack_68 = (undefined4 **)0x6bc18e;
      cVar3 = FUN_00468d30();
      if (cVar3 == '\0') goto LAB_006bc1e6;
    }
    if ((*(int *)(local_14 + 0xc0) == iVar6) && (*(undefined4 ***)(local_14 + 0xbc) == ppuVar2)) {
      ppuStack_68 = (undefined4 **)0x6bc1b1;
      cVar3 = FUN_0069e2c0();
      if (cVar3 != '\0') {
        ppuStack_68 = (undefined4 **)0x6bc1c6;
        cVar3 = FUN_0069ef00();
        if (cVar3 != '\0') {
          ppuStack_68 = (undefined4 **)0x6bc1db;
          cVar3 = FUN_0069ef00();
          if (cVar3 != '\0') goto LAB_006bc2fa;
        }
      }
    }
  }
  else {
    ppuStack_68 = *(undefined4 ***)(local_14 + 0xb8);
    uStack_6c = 0x6bc174;
    iVar7 = FUN_00448730();
    if (iVar7 == 0) goto LAB_006bc17b;
  }
LAB_006bc1e6:
  local_24 = (undefined4 **)(local_14 + 0x78);
  ppuStack_68 = (undefined4 **)0x6bc1f7;
  cVar3 = FUN_0069e2c0();
  if (cVar3 == '\0') {
    ppuStack_68 = (undefined4 **)0x6bc207;
    FUN_004918d0();
    FUN_006bd3a0();
  }
  local_24 = (undefined4 **)(local_14 + 0x90);
  ppuStack_68 = (undefined4 **)0x6bc225;
  cVar3 = FUN_0069ef00();
  if (cVar3 == '\0') {
    if (*local_24 != local_18) {
      if (local_18 != (undefined4 *)0x0) {
        local_18[1] = local_18[1] + 1;
      }
      puVar1 = *local_24;
      *local_24 = local_18;
      if (puVar1 != (undefined4 *)0x0) {
        piVar4 = puVar1 + 1;
        *piVar4 = *piVar4 + -1;
        if (*piVar4 == 0) {
          ppuStack_68 = (undefined4 **)0x6bc24e;
          (**(code **)*puVar1)();
        }
      }
    }
    FUN_006bd3a0();
  }
  local_24 = (undefined4 **)(local_14 + 0x94);
  ppuStack_68 = (undefined4 **)0x6bc26c;
  cVar3 = FUN_0069ef00();
  if (cVar3 == '\0') {
    if (*local_24 != param_1) {
      if (param_1 != (int *)0x0) {
        param_1[1] = param_1[1] + 1;
      }
      puVar1 = *local_24;
      *local_24 = param_1;
      if (puVar1 != (undefined4 *)0x0) {
        piVar4 = puVar1 + 1;
        *piVar4 = *piVar4 + -1;
        if (*piVar4 == 0) {
          ppuStack_68 = (undefined4 **)0x6bc295;
          (**(code **)*puVar1)();
        }
      }
    }
    FUN_006bd3a0();
  }
  if (*(undefined4 ***)(local_14 + 0xbc) != ppuVar2) {
    *(undefined4 ***)(local_14 + 0xbc) = ppuVar2;
    FUN_006e6400(auStack_70);
    FUN_006ce9f0(1);
  }
  ppuStack_68 = &local_20;
  uStack_6c = 0x6bc2d5;
  FUN_006bd5c0();
  *(int *)(local_14 + 0xc0) = iVar6;
  FUN_006e6400(auStack_70);
  FUN_006ce9f0(1);
  ppuStack_68 = (undefined4 **)0x6bc2fa;
  FUN_006bd730();
LAB_006bc2fa:
  if (local_20 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = local_20 + 1;
    iVar6 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      ppuStack_68 = (undefined4 **)0x6bc313;
      (**(code **)*local_20)();
    }
  }
  piVar4 = (int *)(local_1c + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      ppuStack_68 = (undefined4 **)0x6bc333;
      FID_conflict__free(piVar4);
    }
  }
  if (param_1 != (int *)0x0) {
    piVar4 = param_1 + 1;
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      ppuStack_68 = (undefined4 **)0x6bc349;
      (**(code **)*param_1)();
    }
  }
  if (local_18 != (undefined4 *)0x0) {
    piVar4 = local_18 + 1;
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      ppuStack_68 = (undefined4 **)0x6bc35c;
      (**(code **)*local_18)();
    }
  }
  FUN_0069e440();
  puVar1 = local_34;
  if ((0 < local_28) && (local_34 != (undefined4 *)0x0)) {
    local_24 = &local_34;
    ppuStack_68 = (undefined4 **)0x6bc383;
    uVar8 = FUN_00447770();
    if (uVar8 < (uint)puVar1[0xb]) {
      ppuStack_68 = (undefined4 **)0x6bc391;
      FUN_00410320();
    }
  }
  ppuStack_68 = (undefined4 **)0x6bc399;
  FID_conflict__free(local_30);
  if (local_34 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = local_34 + 1;
    iVar6 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      ppuStack_68 = (undefined4 **)0x6bc3b1;
      (**(code **)*local_34)();
    }
  }
  ExceptionList = local_10;
  return;
}

