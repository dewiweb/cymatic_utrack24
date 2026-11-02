// rea decompile_all
// name: FUN_00556600
// address: 0x556600
// body: available
// range: 0x556600-0x5568f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00556600(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *in_ECX;
  int iVar7;
  undefined4 in_EDX;
  uint uVar8;
  uint uVar9;
  void **ppvStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int local_3c;
  undefined1 local_20 [4];
  void *local_1c;
  undefined4 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_007112ae;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  _local_3c = 1.86738394762401e-312;
  local_14 = in_ECX;
  local_1c = operator_new(0x58);
  local_8 = 1;
  _local_3c = (double)CONCAT44(0x556659,local_3c);
  iVar2 = FUN_005569f0();
  *in_ECX = iVar2;
  if (iVar2 != 0) {
    LOCK();
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    UNLOCK();
  }
  local_8 = 0;
  iVar2 = *in_ECX;
  local_18 = 1;
  piVar3 = (int *)(*param_1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  LOCK();
  iVar1 = *(int *)(iVar2 + 0xc);
  *(int *)(iVar2 + 0xc) = *param_1;
  UNLOCK();
  piVar3 = (int *)(iVar1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      _local_3c = (double)CONCAT44(piVar3,0x5566aa);
      FID_conflict__free(piVar3);
    }
  }
  _local_3c = 1.7715303630924525e-306;
  FUN_0045c990();
  iVar2 = *(int *)(*in_ECX + 0x10);
  *(void **)(*in_ECX + 0x10) = local_1c;
  piVar3 = (int *)(iVar2 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      _local_3c = (double)CONCAT44(piVar3,0x5566ea);
      FID_conflict__free(piVar3);
    }
  }
  _local_3c = 1.7715357954016976e-306;
  FUN_0045c990();
  iVar2 = *(int *)(*in_ECX + 0x14);
  *(void **)(*in_ECX + 0x14) = local_1c;
  piVar3 = (int *)(iVar2 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      _local_3c = (double)CONCAT44(piVar3,0x55672a);
      FID_conflict__free(piVar3);
    }
  }
  _local_3c = (double)CONCAT44(&local_1c,0x55673b);
  puVar4 = (undefined4 *)FUN_0054b020();
  uVar5 = *(undefined4 *)(*in_ECX + 0x18);
  *(undefined4 *)(*in_ECX + 0x18) = *puVar4;
  *puVar4 = uVar5;
  piVar3 = (int *)((int)local_1c + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      _local_3c = (double)CONCAT44(piVar3,0x556768);
      FID_conflict__free(piVar3);
    }
  }
  iVar2 = *in_ECX;
  _local_3c = (double)CONCAT44(local_20,0x556778);
  puVar4 = (undefined4 *)FUN_00413390();
  *(undefined4 *)(iVar2 + 0x20) = *puVar4;
  *(undefined4 *)(iVar2 + 0x24) = puVar4[1];
  *(undefined4 *)(*in_ECX + 0x44) = *(undefined4 *)(param_2 + 0x10);
  uVar8 = 0;
  *(undefined4 *)(*in_ECX + 0x40) = in_EDX;
  iVar2 = *(int *)(param_2 + 0x20);
  if (0 < iVar2) {
    do {
      if ((((int)uVar8 < 0) || (iVar2 <= (int)uVar8)) || (*(uint *)(param_2 + 0x20) <= uVar8)) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = *(undefined4 **)(*(int *)(param_2 + 0x18) + uVar8 * 4);
      }
      iVar2 = puVar4[2];
      if (iVar2 == 0) {
        _local_3c = 0.0;
      }
      else {
        _local_3c = *(double *)(iVar2 + 0x68);
        if ((_local_3c <= 0.0) ||
           (_local_3c < *(double *)(iVar2 + 0x38) || _local_3c == *(double *)(iVar2 + 0x38))) {
          _local_3c = *(double *)(iVar2 + 0x38);
        }
      }
      ppvStack_4c = &local_1c;
      uStack_40 = puVar4[1];
      uStack_44 = *puVar4;
      uStack_48 = uVar8;
      FUN_0040f6b0();
      local_8 = 2;
      ppvStack_4c = (void **)0x55680b;
      FUN_00627bf0();
      FUN_00414bf0(&ppvStack_4c);
      piVar3 = local_14;
      uVar5 = FUN_00558420();
      iVar2 = *piVar3;
      iVar1 = *(int *)(iVar2 + 0x30);
      iVar7 = iVar1 + 1;
      if ((int)*(uint *)(iVar2 + 0x2c) < iVar7) {
        if (iVar7 < 0) {
          iVar7 = iVar1 + 2;
        }
        uVar9 = iVar1 + 9 + (iVar7 >> 1) & 0xfffffff8;
        if (*(uint *)(iVar2 + 0x2c) != uVar9) {
          if ((int)uVar9 < 1) {
            _local_3c = (double)CONCAT44(*(void **)(iVar2 + 0x28),0x556881);
            FID_conflict__free(*(void **)(iVar2 + 0x28));
            *(undefined4 *)(iVar2 + 0x28) = 0;
          }
          else if (*(int *)(iVar2 + 0x28) == 0) {
            _local_3c = (double)CONCAT44(uVar9 * 4,0x556863);
            uVar6 = FUN_004c554b();
            *(undefined4 *)(iVar2 + 0x28) = uVar6;
          }
          else {
            _local_3c = (double)CONCAT44(uVar9 * 4,*(int *)(iVar2 + 0x28));
            uStack_40 = 0x556871;
            uVar6 = FUN_004c553b();
            *(undefined4 *)(iVar2 + 0x28) = uVar6;
          }
          *(uint *)(iVar2 + 0x2c) = uVar9;
        }
      }
      iVar1 = *(int *)(iVar2 + 0x30);
      *(int *)(iVar2 + 0x30) = iVar1 + 1;
      local_8 = local_8 & 0xffffff00;
      *(undefined4 *)(*(int *)(iVar2 + 0x28) + iVar1 * 4) = uVar5;
      piVar3 = (int *)((int)local_1c + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          _local_3c = (double)CONCAT44(piVar3,0x5568c8);
          FID_conflict__free(piVar3);
        }
      }
      iVar2 = *(int *)(param_2 + 0x20);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < iVar2);
  }
  _local_3c = (double)CONCAT44(0x5568e4,local_3c);
  FUN_005558e0();
  ExceptionList = local_10;
  return local_14;
}

