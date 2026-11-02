// rea decompile_all
// name: FUN_0060f3d0
// address: 0x60f3d0
// body: available
// range: 0x60f3d0-0x60f75b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060f3d0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  int *piVar4;
  uint uVar5;
  bool bVar6;
  undefined4 uStack_64;
  int iStack_60;
  undefined **local_5c;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined1 local_30;
  void *local_2c;
  uint local_24;
  void *local_20;
  int local_1c;
  uint local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071c774;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = 0;
  if (in_ECX[0x25] != 0) {
    local_5c = (undefined **)0x60f41c;
    local_5c = (undefined **)FUN_00409fe0();
    local_8 = 0;
    iStack_60 = 0x60f430;
    FUN_006e81e0();
    local_8 = 0xffffffff;
    piVar4 = (int *)(local_1c + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        local_5c = (undefined **)0x60f452;
        FID_conflict__free(piVar4);
      }
    }
  }
  if (in_ECX[0x27] == 0) {
LAB_0060f4a0:
    local_11 = '\x01';
  }
  else {
    local_5c = (undefined **)0x60f46d;
    piVar4 = (int *)FUN_00409fe0();
    local_18 = 1;
    if (in_ECX[0x28] != *piVar4) {
      local_5c = (undefined **)in_ECX[0x28];
      iStack_60 = 0x60f493;
      iVar2 = FUN_00448730();
      if (iVar2 != 0) goto LAB_0060f4a0;
    }
    local_11 = '\0';
  }
  if (((local_18 & 1) != 0) && (piVar4 = (int *)(local_1c + -8), piVar4 != &DAT_00bfe124)) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      local_5c = (undefined **)0x60f4ca;
      FID_conflict__free(piVar4);
    }
  }
  if (local_11 != '\0') {
    local_5c = (undefined **)0x60f4e6;
    piVar4 = (int *)FUN_00409fe0();
    iVar2 = in_ECX[0x28];
    in_ECX[0x28] = *piVar4;
    *piVar4 = iVar2;
    piVar4 = (int *)(local_1c + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        local_5c = (undefined **)0x60f516;
        FID_conflict__free(piVar4);
      }
    }
    puVar1 = (undefined4 *)in_ECX[0x27];
    if (puVar1 != (undefined4 *)0x0) {
      in_ECX[0x27] = 0;
      local_5c = (undefined **)0x60f533;
      (**(code **)*puVar1)();
    }
    if (in_ECX[0x25] == 0) {
      uVar5 = 0;
    }
    else {
      iVar2 = FUN_006e85c0();
      uVar5 = iVar2 - 1;
    }
    piVar4 = (int *)FUN_005cef80();
    if ((uVar5 < (uint)piVar4[2]) && (iVar2 = *(int *)(*piVar4 + uVar5 * 4), iVar2 != 0)) {
      local_44 = in_ECX[0x24];
      local_40 = in_ECX[0x2c];
      local_3c = in_ECX[0x2d];
      local_38 = in_ECX[0x2a];
      local_34 = in_ECX[0x2b];
      local_30 = (undefined1)in_ECX[0x2e];
      local_5c = (undefined **)0x60f5aa;
      local_20 = operator_new(0xdc);
      local_8 = 1;
      local_5c = (undefined **)&local_44;
      uStack_64 = 0x60f5cb;
      iStack_60 = iVar2;
      piVar3 = (int *)FUN_004494f0();
      local_8 = 0xffffffff;
      piVar4 = (int *)in_ECX[0x27];
      if ((piVar4 != piVar3) && (in_ECX[0x27] = (int)piVar3, piVar4 != (int *)0x0)) {
        local_5c = (undefined **)0x60f5ee;
        (**(code **)*piVar4)();
      }
      if (piVar3 != (int *)0x0) {
        local_5c = (undefined **)0x60f5fb;
        (**(code **)(*piVar3 + 0x28))();
        iStack_60 = 0x60f605;
        local_5c = (undefined **)piVar3;
        FUN_006e5050();
      }
      FUN_0044a330();
    }
  }
  if (in_ECX[0x2f] != 0) {
    FUN_00449480();
    FUN_006e7e60();
    FUN_006e6400(&uStack_64);
    FUN_006ce9f0(1);
  }
  if (in_ECX[0x30] != 0) {
    local_5c = (undefined **)0x60f655;
    FUN_006e86d0();
    FUN_005c8000();
    local_8 = 2;
    local_5c = (undefined **)FUN_0060fc30();
    local_8._0_1_ = 3;
    iStack_60 = 0x60f67e;
    FUN_006e8760();
    local_8 = CONCAT31(local_8._1_3_,2);
    piVar4 = (int *)(local_1c + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        local_5c = (undefined **)0x60f69f;
        FID_conflict__free(piVar4);
      }
    }
    uVar5 = 0;
    *(bool *)(in_ECX[0x30] + 0xa9) = 0 < *(int *)(in_ECX[0x30] + 0x90);
    if (0 < (int)local_24) {
      bVar6 = local_24 != 0;
      do {
        if (bVar6) {
          local_5c = (undefined **)((int)local_2c + uVar5 * 4);
        }
        else {
          local_5c = &PTR_DAT_00c7ed68;
        }
        uVar5 = uVar5 + 1;
        iStack_60 = 0x60f6e5;
        FUN_006e8760();
        bVar6 = uVar5 < local_24;
      } while ((int)uVar5 < (int)local_24);
    }
    local_5c = (undefined **)0xffffffff;
    if (*(int *)(in_ECX[0x24] + 0x1bc) != 0) {
      iStack_60 = *(undefined4 *)(in_ECX[0x24] + 0x1b8);
      local_5c = (undefined **)0x0;
      uStack_64 = 0x60f715;
      iVar2 = FUN_0062c730();
      local_5c = (undefined **)(iVar2 + 1);
    }
    iStack_60 = 0x60f726;
    FUN_006e83a0();
    local_8 = 0xffffffff;
    FUN_0040f7f0();
    local_5c = (undefined **)0x60f73d;
    FID_conflict__free(local_2c);
  }
  (**(code **)(*in_ECX + 0x84))();
  ExceptionList = local_10;
  return;
}

