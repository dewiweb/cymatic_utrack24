// rea decompile_all
// name: FUN_0055df50
// address: 0x55df50
// body: available
// range: 0x55df50-0x55e3fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0055df50(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *in_ECX;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_34;
  int iStack_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  int *local_1c;
  int local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00711b83;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  local_8 = 0;
  local_24 = 1;
  local_1c = in_ECX;
  operator_new(0xa0);
  iVar2 = FUN_0055de80();
  if (*in_ECX != iVar2) {
    if (iVar2 != 0) {
      LOCK();
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
      UNLOCK();
    }
    puVar3 = (undefined4 *)*in_ECX;
    *in_ECX = iVar2;
    if (puVar3 != (undefined4 *)0x0) {
      LOCK();
      piVar6 = puVar3 + 1;
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*puVar3)();
      }
    }
  }
  FUN_00636a10(&stack0xffffffb8);
  FUN_006377c0();
  local_8 = 1;
  puVar3 = (undefined4 *)FUN_00635a10(&local_20);
  uVar5 = *(undefined4 *)(*in_ECX + 8);
  *(undefined4 *)(*in_ECX + 8) = *puVar3;
  *puVar3 = uVar5;
  piVar6 = (int *)(local_20 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  local_8 = local_8 & 0xffffff00;
  piVar6 = (int *)(local_18 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  iVar2 = *in_ECX;
  puVar3 = (undefined4 *)FUN_00636970();
  *(undefined4 *)(iVar2 + 0x20) = *puVar3;
  *(undefined4 *)(iVar2 + 0x24) = puVar3[1];
  FUN_0045c990();
  iVar2 = *(int *)(*in_ECX + 0xc);
  *(int *)(*in_ECX + 0xc) = local_20;
  piVar6 = (int *)(iVar2 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  FUN_0045c990();
  iVar2 = *(int *)(*in_ECX + 0x10);
  *(int *)(*in_ECX + 0x10) = local_20;
  piVar6 = (int *)(iVar2 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  puVar3 = (undefined4 *)FUN_00636a10();
  uVar5 = *(undefined4 *)(*in_ECX + 0x14);
  *(undefined4 *)(*in_ECX + 0x14) = *puVar3;
  *puVar3 = uVar5;
  piVar6 = (int *)(local_20 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  *(undefined4 *)(*in_ECX + 0x2c) = 0;
  *(undefined4 *)(*in_ECX + 0x40) = 2;
  iVar2 = *in_ECX;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  *(undefined4 *)(iVar2 + 0x34) = 0;
  *(undefined4 *)(*in_ECX + 0x38) = 0;
  *(undefined4 *)(*in_ECX + 0x3c) = 0;
  FUN_0045c990();
  iVar2 = *(int *)(*in_ECX + 0x18);
  *(int *)(*in_ECX + 0x18) = local_20;
  piVar6 = (int *)(iVar2 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  iVar2 = *(int *)(*in_ECX + 0x98);
  *(undefined1 **)(*in_ECX + 0x98) = &DAT_00bfe12c;
  piVar6 = (int *)(iVar2 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  local_20 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar2 = local_20;
      FUN_0040f6b0(&stack0xffffffb8,local_20);
      FUN_00548e50();
      local_8 = 2;
      iVar4 = FUN_0055d970();
      *(int *)(iVar4 + 4) = iVar2;
      FUN_0040f6b0(&local_2c);
      local_8 = CONCAT31(local_8._1_3_,3);
      puVar3 = (undefined4 *)FUN_006369b0();
      uVar5 = *(undefined4 *)(iVar4 + 8);
      *(undefined4 *)(iVar4 + 8) = *puVar3;
      *puVar3 = uVar5;
      piVar6 = (int *)(local_28 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      piVar6 = (int *)(local_2c + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      *(undefined4 *)(iVar4 + 0xc) = 0;
      *(undefined1 *)(iVar4 + 0x10) = 0;
      *(undefined4 *)(iVar4 + 0x14) = 0;
      if (*(int *)(*in_ECX + 0x38) == 0) {
        *(undefined4 *)(*in_ECX + 0x38) = local_14[6];
      }
      if (*(int *)(*in_ECX + 0x3c) == 0) {
        *(undefined4 *)(*in_ECX + 0x3c) = local_14[8];
      }
      uVar9 = 0;
      if (0 < (int)local_14[0xc]) {
        do {
          iVar2 = *in_ECX;
          if (uVar9 < (uint)local_14[0xc]) {
            local_34 = *(uint *)(local_14[10] + uVar9 * 8);
            iStack_30 = *(int *)(local_14[10] + 4 + uVar9 * 8);
          }
          else {
            iStack_30 = 0;
            local_34 = 0;
          }
          uVar8 = *(uint *)(iVar2 + 0x30);
          local_18 = uVar8 + local_34;
          iVar4 = *(int *)(iVar2 + 0x34);
          iVar1 = *(int *)(iVar2 + 0x70);
          iVar7 = iVar1 + 1;
          if ((int)*(uint *)(iVar2 + 0x6c) < iVar7) {
            if (iVar7 < 0) {
              iVar7 = iVar1 + 2;
            }
            uVar10 = iVar1 + 9 + (iVar7 >> 1) & 0xfffffff8;
            if (*(uint *)(iVar2 + 0x6c) != uVar10) {
              if ((int)uVar10 < 1) {
                FID_conflict__free(*(void **)(iVar2 + 0x68));
                *(undefined4 *)(iVar2 + 0x68) = 0;
              }
              else if (*(int *)(iVar2 + 0x68) == 0) {
                uVar5 = FUN_004c554b();
                *(undefined4 *)(iVar2 + 0x68) = uVar5;
              }
              else {
                uVar5 = FUN_004c553b(*(int *)(iVar2 + 0x68));
                *(undefined4 *)(iVar2 + 0x68) = uVar5;
              }
              *(uint *)(iVar2 + 0x6c) = uVar10;
            }
          }
          iVar1 = *(int *)(iVar2 + 0x70);
          *(int *)(iVar2 + 0x70) = iVar1 + 1;
          piVar6 = (int *)(*(int *)(iVar2 + 0x68) + iVar1 * 8);
          if (piVar6 != (int *)0x0) {
            *piVar6 = local_18;
            piVar6[1] = iVar4 + iStack_30 + (uint)CARRY4(uVar8,local_34);
          }
          uVar9 = uVar9 + 1;
          in_ECX = local_1c;
        } while ((int)uVar9 < (int)local_14[0xc]);
      }
      uVar9 = local_14[5];
      uVar8 = local_14[4];
      iVar2 = *in_ECX;
      uVar10 = *(uint *)(iVar2 + 0x34);
      if ((uVar9 < uVar10) || ((uVar9 <= uVar10 && (uVar8 <= *(uint *)(iVar2 + 0x30))))) {
        uVar8 = *(uint *)(iVar2 + 0x30);
        uVar9 = uVar10;
      }
      *(uint *)(iVar2 + 0x30) = uVar8;
      *(uint *)(iVar2 + 0x34) = uVar9;
      local_8 = local_8 & 0xffffff00;
      if (local_14 != (undefined4 *)0x0) {
        LOCK();
        piVar6 = local_14 + 1;
        iVar2 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_14)();
        }
      }
      local_20 = local_20 + 1;
    } while (local_20 < *(int *)(param_1 + 8));
  }
  *(undefined1 *)(*in_ECX + 0x28) = 1;
  ExceptionList = local_10;
  return in_ECX;
}

