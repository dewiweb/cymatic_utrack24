// rea decompile_all
// name: FUN_0054a790
// address: 0x54a790
// body: available
// range: 0x54a790-0x54aa2e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054a790(undefined4 *param_1)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined **ppuVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *in_ECX;
  int iVar10;
  undefined4 uVar11;
  void **ppvVar12;
  undefined4 *puVar13;
  bool bVar14;
  undefined8 local_1c;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070fb18;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_1 == (undefined4 *)0x0) {
    local_14 = (void *)0x2;
    local_1c = 0;
    local_1c._0_4_ = 0;
    local_1c._4_4_ = 0;
    uVar9 = (undefined4)local_1c;
    uVar11 = local_1c._4_4_;
  }
  else {
    local_14 = (void *)0x1;
    uVar9 = *param_1;
    uVar11 = param_1[1];
  }
  *in_ECX = uVar9;
  in_ECX[1] = uVar11;
  if (((uint)local_14 & 2) != 0) {
    local_14 = (void *)((uint)local_14 & 0xfffffffd);
  }
  if (((uint)local_14 & 1) != 0) {
    local_14 = (void *)((uint)local_14 & 0xfffffffe);
  }
  ppuVar6 = (undefined **)(param_1 + 2);
  if (param_1 == (undefined4 *)0x0) {
    ppuVar6 = &PTR_DAT_00c7ed68;
  }
  puVar2 = *ppuVar6;
  in_ECX[2] = puVar2;
  piVar7 = (int *)(puVar2 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    *piVar7 = *piVar7 + 1;
    UNLOCK();
  }
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined1 *)(param_1 + 3);
  }
  *(undefined1 *)(in_ECX + 3) = uVar4;
  if (param_1 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = param_1[4];
  }
  in_ECX[4] = uVar9;
  if (param_1 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = param_1[5];
  }
  in_ECX[5] = uVar9;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  local_8 = 1;
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined1 *)(param_1 + 9);
  }
  *(undefined1 *)(in_ECX + 9) = uVar4;
  if (param_1 == (undefined4 *)0x0) {
    FUN_00627bf0(uVar5);
    ppvVar12 = (void **)((int)&local_1c + 4);
    bVar3 = false;
    bVar14 = true;
  }
  else {
    local_14 = (void *)param_1[10];
    piVar7 = (int *)((int)param_1[10] + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      *piVar7 = *piVar7 + 1;
      UNLOCK();
    }
    ppvVar12 = &local_14;
    bVar3 = true;
    bVar14 = false;
  }
  in_ECX[10] = *ppvVar12;
  *ppvVar12 = &DAT_00bfe12c;
  local_8 = 3;
  if (bVar14) {
    piVar7 = (int *)(local_1c._4_4_ + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar7);
      }
    }
  }
  local_8 = CONCAT31(local_8._1_3_,4);
  if ((bVar3) && (piVar7 = (int *)((int)local_14 + -8), piVar7 != &DAT_00bfe124)) {
    LOCK();
    iVar1 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  if (param_1 != (undefined4 *)0x0) {
    uVar5 = 0;
    local_1c = local_1c & 0xffffffff;
    if (0 < (int)param_1[8]) {
      bVar14 = param_1[8] != 0;
      do {
        if (bVar14) {
          puVar13 = *(undefined4 **)(param_1[6] + uVar5 * 4);
        }
        else {
          puVar13 = (undefined4 *)0x0;
        }
        puVar8 = operator_new(0x10);
        local_8._0_1_ = 5;
        *puVar8 = *puVar13;
        puVar8[1] = puVar13[1];
        uVar9 = puVar13[2];
        local_14 = operator_new(0x80);
        local_8._0_1_ = 6;
        uVar9 = FUN_0053e120(uVar9,0);
        local_8 = CONCAT31(local_8._1_3_,4);
        puVar8[2] = uVar9;
        iVar1 = in_ECX[8];
        iVar10 = iVar1 + 1;
        if ((int)in_ECX[7] < iVar10) {
          if (iVar10 < 0) {
            iVar10 = iVar1 + 2;
          }
          uVar5 = iVar1 + 9 + (iVar10 >> 1) & 0xfffffff8;
          if (in_ECX[7] != uVar5) {
            if ((int)uVar5 < 1) {
              FID_conflict__free((void *)in_ECX[6]);
              in_ECX[6] = 0;
            }
            else if (in_ECX[6] == 0) {
              uVar9 = FUN_004c554b();
              in_ECX[6] = uVar9;
            }
            else {
              uVar9 = FUN_004c553b(in_ECX[6],uVar5 * 4);
              in_ECX[6] = uVar9;
            }
            in_ECX[7] = uVar5;
          }
        }
        iVar1 = in_ECX[8];
        in_ECX[8] = iVar1 + 1;
        *(undefined4 **)(in_ECX[6] + iVar1 * 4) = puVar8;
        uVar5 = local_1c._4_4_ + 1;
        local_1c = CONCAT44(uVar5,(undefined4)local_1c);
        bVar14 = uVar5 < (uint)param_1[8];
      } while ((int)uVar5 < (int)param_1[8]);
    }
  }
  ExceptionList = local_10;
  return;
}

