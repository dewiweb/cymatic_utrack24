// rea decompile_all
// name: FUN_0054a2f0
// address: 0x54a2f0
// body: available
// range: 0x54a2f0-0x54a628 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_0054a2f0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int in_ECX;
  int *piVar5;
  int iVar6;
  undefined4 in_EDX;
  int iVar7;
  uint uVar8;
  bool bVar9;
  undefined1 local_28 [4];
  undefined4 *local_24;
  undefined4 local_20;
  int local_1c;
  uint local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_0070fa24;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_20 = in_EDX;
  local_24 = operator_new(0x30);
  local_8._0_1_ = 1;
  piVar5 = (int *)(param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  puVar2 = (undefined4 *)FUN_0054aa30(*(undefined4 *)(in_ECX + 0x44),param_1);
  local_8 = (uint)local_8._1_3_ << 8;
  puVar3 = (undefined4 *)FUN_0040eb40(local_28);
  *puVar2 = *puVar3;
  puVar2[1] = puVar3[1];
  puVar3 = (undefined4 *)FUN_0040eb90(&local_18);
  uVar4 = puVar2[2];
  puVar2[2] = *puVar3;
  *puVar3 = uVar4;
  piVar5 = (int *)(local_18 - 8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  FUN_0045c990(".playlistprj");
  local_8._0_1_ = 2;
  iVar7 = puVar2[2];
  piVar5 = (int *)(iVar7 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  puVar3 = (undefined4 *)FUN_00637730(iVar7);
  local_8 = CONCAT31(local_8._1_3_,3);
  puVar3 = (undefined4 *)FUN_00635a10(&local_18,*puVar3);
  uVar4 = puVar2[10];
  puVar2[10] = *puVar3;
  *puVar3 = uVar4;
  piVar5 = (int *)(local_18 - 8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  piVar5 = (int *)(local_1c + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_8 = local_8 & 0xffffff00;
  piVar5 = (int *)(local_14 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  puVar3 = (undefined4 *)FUN_005b4ba0();
  uVar4 = puVar2[10];
  puVar2[10] = *puVar3;
  *puVar3 = uVar4;
  piVar5 = (int *)(local_1c + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  *(undefined1 *)(puVar2 + 3) = 0;
  puVar2[5] = 0;
  *(undefined1 *)(puVar2 + 9) = 0;
  local_18 = 0;
  if (0 < *(int *)(in_ECX + 0x30)) {
    bVar9 = *(int *)(in_ECX + 0x30) != 0;
    do {
      if (bVar9) {
        iVar7 = *(int *)(*(int *)(in_ECX + 0x28) + local_18 * 4);
      }
      else {
        iVar7 = 0;
      }
      FUN_005572a0(&local_1c,local_20);
      local_8._0_1_ = 4;
      FUN_00627bf0();
      local_8._0_1_ = 6;
      piVar5 = (int *)(local_1c + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      uVar4 = *(undefined4 *)(iVar7 + 0xc);
      uVar1 = *(undefined4 *)(iVar7 + 8);
      local_24 = operator_new(0x10);
      local_8 = CONCAT31(local_8._1_3_,7);
      *local_24 = uVar1;
      local_24[1] = uVar4;
      uVar4 = FUN_0053d3e0();
      puVar3 = local_24;
      local_24[2] = uVar4;
      *(undefined1 *)(local_24 + 3) = 0;
      iVar7 = puVar2[8];
      iVar6 = iVar7 + 1;
      if ((int)puVar2[7] < iVar6) {
        if (iVar6 < 0) {
          iVar6 = iVar7 + 2;
        }
        uVar8 = iVar7 + 9 + (iVar6 >> 1) & 0xfffffff8;
        if (puVar2[7] != uVar8) {
          if ((int)uVar8 < 1) {
            FID_conflict__free((void *)puVar2[6]);
            puVar2[6] = 0;
          }
          else if (puVar2[6] == 0) {
            uVar4 = FUN_004c554b();
            puVar2[6] = uVar4;
          }
          else {
            uVar4 = FUN_004c553b(puVar2[6],uVar8 * 4);
            puVar2[6] = uVar4;
          }
          puVar2[7] = uVar8;
        }
      }
      iVar7 = puVar2[8];
      puVar2[8] = iVar7 + 1;
      local_8 = local_8 & 0xffffff00;
      *(undefined4 **)(puVar2[6] + iVar7 * 4) = puVar3;
      piVar5 = (int *)(local_14 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      local_18 = local_18 + 1;
      bVar9 = local_18 < *(uint *)(in_ECX + 0x30);
    } while ((int)local_18 < (int)*(uint *)(in_ECX + 0x30));
  }
  piVar5 = (int *)(param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  ExceptionList = local_10;
  return puVar2;
}

