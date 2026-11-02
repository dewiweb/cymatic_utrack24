// rea decompile_all
// name: FUN_0053fdb0
// address: 0x53fdb0
// body: available
// range: 0x53fdb0-0x5403b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0053fdb0(undefined4 param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  DWORD DVar5;
  int iVar6;
  void *_Memory;
  undefined4 uVar7;
  int in_ECX;
  int *piVar8;
  bool bVar9;
  int iVar10;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  int local_60;
  uint local_5c;
  int local_58;
  undefined8 local_54;
  int local_4c;
  undefined4 *local_48;
  undefined8 local_44;
  undefined4 *local_3c;
  uint local_38;
  undefined8 local_34;
  void *local_2c;
  int local_28;
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_0070e5fb;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar9 = false;
  local_5c = 0;
  local_64 = param_1;
  local_2c = (void *)0x0;
  local_28 = 0;
  local_8 = 0;
  local_48 = *(undefined4 **)(in_ECX + 0x28);
  local_54 = *(double *)(in_ECX + 0x68);
  local_4c = *(int *)(in_ECX + 0x2c);
  if ((local_54 <= 0.0) ||
     (local_54 < *(double *)(in_ECX + 0x38) || local_54 == *(double *)(in_ECX + 0x38))) {
    local_54 = *(double *)(in_ECX + 0x38);
  }
  local_58 = in_ECX;
  local_14 = uVar3;
  puVar4 = (undefined4 *)FUN_00410af0(&local_3c);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (*(char *)*puVar4 == '\0') {
LAB_0053fe75:
    local_34 = 0;
    local_44 = 0;
  }
  else {
    puVar4 = (undefined4 *)FUN_00458890(uVar3);
    DVar5 = GetFileAttributesW((LPCWSTR)*puVar4);
    if (DVar5 == 0xffffffff) goto LAB_0053fe75;
    puVar4 = (undefined4 *)FUN_00410af0(&local_38);
    bVar9 = true;
    local_44 = FUN_0045d060(*puVar4);
  }
  if ((bVar9) && (piVar8 = (int *)(local_38 - 8), piVar8 != &DAT_00bfe124)) {
    LOCK();
    iVar6 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  uVar3 = 0;
  piVar8 = local_3c + -2;
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  puVar4 = (undefined4 *)FUN_00410af0(&local_38);
  local_8._0_1_ = 2;
  if (*(char *)*puVar4 != '\0') {
    puVar4 = (undefined4 *)FUN_00458890();
    DVar5 = GetFileAttributesW((LPCWSTR)*puVar4);
    if (DVar5 != 0xffffffff) {
      FUN_00410af0(&local_3c);
      local_8 = CONCAT31(local_8._1_3_,3);
      uVar3 = 6;
      local_5c = uVar3;
      puVar4 = (undefined4 *)FUN_00636970(&local_6c);
      local_34._0_4_ = *puVar4;
      local_34._4_4_ = puVar4[1];
      goto LAB_0053ff37;
    }
  }
  local_34._4_4_ = 0;
  local_34._0_4_ = 0;
LAB_0053ff37:
  if ((uVar3 & 4) != 0) {
    uVar3 = uVar3 & 0xfffffffb;
  }
  local_8 = 2;
  if (((uVar3 & 2) != 0) && (piVar8 = local_3c + -2, piVar8 != &DAT_00bfe124)) {
    LOCK();
    iVar6 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  local_8 = local_8 & 0xffffff00;
  piVar8 = (int *)(local_38 - 8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  uVar7 = *(undefined4 *)(in_ECX + 0x24);
  FID_conflict__free((void *)0x0);
  puVar4 = (undefined4 *)FUN_004c554b(4);
  *puVar4 = local_48;
  if (puVar4 == (undefined4 *)0x0) {
    FID_conflict__free((void *)0x0);
    iVar6 = FUN_004c554b(8);
  }
  else if (puVar4 == (undefined4 *)0x0) {
    iVar6 = FUN_004c554b();
  }
  else {
    iVar6 = FUN_004c553b(puVar4,8);
  }
  *(int *)(iVar6 + 4) = local_4c;
  if (iVar6 == 0) {
    FID_conflict__free((void *)0x0);
    iVar6 = FUN_004c554b(0x10);
  }
  else if (iVar6 == 0) {
    iVar6 = FUN_004c554b();
  }
  else {
    iVar6 = FUN_004c553b(iVar6,0x10);
  }
  *(double *)(iVar6 + 8) = local_54;
  if (iVar6 == 0) {
    FID_conflict__free((void *)0x0);
    iVar6 = FUN_004c554b(0x18);
  }
  else if (iVar6 == 0) {
    iVar6 = FUN_004c554b();
  }
  else {
    iVar6 = FUN_004c553b(iVar6,0x18);
  }
  *(undefined8 *)(iVar6 + 0x10) = local_44;
  if (iVar6 == 0) {
    FID_conflict__free((void *)0x0);
    iVar6 = FUN_004c554b(0x20);
  }
  else if (iVar6 == 0) {
    iVar6 = FUN_004c554b();
  }
  else {
    iVar6 = FUN_004c553b(iVar6,0x20);
  }
  *(undefined8 *)(iVar6 + 0x18) = local_34;
  if (iVar6 == 0) {
    FID_conflict__free((void *)0x0);
    _Memory = (void *)FUN_004c554b(0x24);
  }
  else if (iVar6 == 0) {
    _Memory = (void *)FUN_004c554b();
  }
  else {
    _Memory = (void *)FUN_004c553b(iVar6,0x24);
  }
  iVar6 = 0x24;
  local_38 = 0;
  local_28 = 0x24;
  *(undefined4 *)((int)_Memory + 0x20) = uVar7;
  local_2c = _Memory;
  if (0 < *(int *)(local_58 + 0x5c)) {
    if (*(int *)(local_58 + 0x5c) < 1) goto LAB_0054010d;
    do {
      if (local_38 < *(uint *)(local_58 + 0x5c)) {
        iVar10 = *(int *)(*(int *)(local_58 + 0x54) + local_38 * 4);
      }
      else {
LAB_0054010d:
        iVar10 = 0;
      }
      local_44._4_4_ = *(undefined4 *)(iVar10 + 8);
      FUN_0053f050(&local_48);
      puVar4 = (undefined4 *)FUN_00410ea0(&local_4c);
      uVar2 = FUN_0045d060(*puVar4);
      piVar8 = (int *)(local_4c + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      if (local_48 != (undefined4 *)0x0) {
        LOCK();
        piVar8 = local_48 + 1;
        iVar1 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          (**(code **)*local_48)(1);
        }
      }
      FUN_0053f050(&local_3c);
      local_8._0_1_ = 4;
      puVar4 = (undefined4 *)FUN_0040ea80(local_1c);
      local_6c = *puVar4;
      uStack_68 = puVar4[1];
      local_8 = (uint)local_8._1_3_ << 8;
      if (local_3c != (undefined4 *)0x0) {
        LOCK();
        piVar8 = local_3c + 1;
        iVar1 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          (**(code **)*local_3c)(1);
        }
      }
      local_54 = (double)CONCAT44(*(undefined4 *)(iVar10 + 0x24),(undefined4)local_54);
      uVar7 = FUN_0053b140();
      iVar10 = iVar6 + 4;
      local_34 = CONCAT44(uVar7,(undefined4)local_34);
      local_60 = iVar6;
      if (iVar6 != iVar10) {
        if (iVar10 == 0) {
          FID_conflict__free(_Memory);
          _Memory = (void *)0x0;
          iVar6 = 0;
          local_2c = _Memory;
          local_28 = 0;
        }
        else if (_Memory == (void *)0x0) {
          FID_conflict__free((void *)0x0);
          _Memory = (void *)FUN_004c554b(iVar10);
          iVar6 = iVar10;
          local_2c = _Memory;
          local_28 = iVar10;
        }
        else {
          _Memory = (void *)FUN_004c553b(_Memory,iVar10);
          iVar6 = iVar10;
          local_2c = _Memory;
          local_28 = iVar10;
        }
      }
      iVar10 = iVar6 + 8;
      *(int *)((int)_Memory + local_60) = local_44._4_4_;
      local_44._4_4_ = iVar6;
      if (iVar6 != iVar10) {
        if (iVar10 == 0) {
          FID_conflict__free(_Memory);
          _Memory = (void *)0x0;
          iVar6 = 0;
          local_2c = _Memory;
          local_28 = 0;
        }
        else if (_Memory == (void *)0x0) {
          FID_conflict__free((void *)0x0);
          _Memory = (void *)FUN_004c554b(iVar10);
          iVar6 = iVar10;
          local_2c = _Memory;
          local_28 = iVar10;
        }
        else {
          _Memory = (void *)FUN_004c553b(_Memory,iVar10);
          iVar6 = iVar10;
          local_2c = _Memory;
          local_28 = iVar10;
        }
      }
      iVar10 = iVar6 + 8;
      *(undefined8 *)((int)_Memory + local_44._4_4_) = uVar2;
      local_44._4_4_ = iVar6;
      if (iVar6 != iVar10) {
        if (iVar10 == 0) {
          FID_conflict__free(_Memory);
          _Memory = (void *)0x0;
          iVar6 = 0;
          local_2c = _Memory;
          local_28 = 0;
        }
        else if (_Memory == (void *)0x0) {
          FID_conflict__free((void *)0x0);
          _Memory = (void *)FUN_004c554b(iVar10);
          iVar6 = iVar10;
          local_2c = _Memory;
          local_28 = iVar10;
        }
        else {
          _Memory = (void *)FUN_004c553b(_Memory,iVar10);
          iVar6 = iVar10;
          local_2c = _Memory;
          local_28 = iVar10;
        }
      }
      iVar10 = iVar6 + 4;
      *(ulonglong *)((int)_Memory + local_44._4_4_) = CONCAT44(uStack_68,local_6c);
      local_44._4_4_ = iVar6;
      if (iVar6 != iVar10) {
        if (iVar10 == 0) {
          FID_conflict__free(_Memory);
          _Memory = (void *)0x0;
          iVar6 = 0;
          local_2c = _Memory;
          local_28 = 0;
        }
        else if (_Memory == (void *)0x0) {
          FID_conflict__free((void *)0x0);
          _Memory = (void *)FUN_004c554b(iVar10);
          iVar6 = iVar10;
          local_2c = _Memory;
          local_28 = iVar10;
        }
        else {
          _Memory = (void *)FUN_004c553b(_Memory,iVar10);
          iVar6 = iVar10;
          local_2c = _Memory;
          local_28 = iVar10;
        }
      }
      iVar10 = iVar6 + 4;
      uVar7 = local_54._4_4_;
      local_54 = (double)CONCAT44(iVar6,(undefined4)local_54);
      *(undefined4 *)((int)_Memory + local_44._4_4_) = uVar7;
      if (iVar6 != iVar10) {
        if (iVar10 == 0) {
          FID_conflict__free(_Memory);
          _Memory = (void *)0x0;
          iVar6 = 0;
          local_2c = _Memory;
          local_28 = 0;
        }
        else {
          iVar6 = iVar10;
          if (_Memory == (void *)0x0) {
            FID_conflict__free((void *)0x0);
            _Memory = (void *)FUN_004c554b(iVar10);
            local_2c = _Memory;
            local_28 = iVar10;
          }
          else {
            _Memory = (void *)FUN_004c553b(_Memory,iVar10);
            local_2c = _Memory;
            local_28 = iVar10;
          }
        }
      }
      *(undefined4 *)((int)_Memory + local_54._4_4_) = local_34._4_4_;
      local_38 = local_38 + 1;
    } while ((int)local_38 < *(int *)(local_58 + 0x5c));
  }
  FUN_00637fa0(_Memory,iVar6);
  FUN_00638020(local_64);
  FID_conflict__free(_Memory);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

