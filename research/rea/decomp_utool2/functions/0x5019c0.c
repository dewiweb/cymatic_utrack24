// rea decompile_all
// name: FUN_005019c0
// address: 0x5019c0
// body: available
// range: 0x5019c0-0x501d36 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005019c0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  DWORD DVar7;
  int *piVar8;
  int in_ECX;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_6c [4];
  undefined4 uStack_68;
  void **local_64;
  void *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 *local_40;
  undefined4 *local_38;
  undefined4 *local_30;
  undefined4 *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  char *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007074cb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  local_1c = in_ECX;
  FUN_00502fd0();
  uVar9 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    bVar10 = *(int *)(param_1 + 0x30) != 0;
    do {
      if ((bVar10) && (iVar3 = *(int *)(*(int *)(param_1 + 0x28) + uVar9 * 4), iVar3 != 0)) {
        local_64 = (void **)0x501a29;
        FUN_0040a090();
        local_8 = 0;
        if (*local_18 != '\0') {
          puVar6 = (undefined4 *)FUN_00458890();
          local_64 = (void **)0x501a4f;
          DVar7 = GetFileAttributesW((LPCWSTR)*puVar6);
          if ((DVar7 & 0x10) == 0) {
            local_4c = (void *)0x0;
            local_48 = 0;
            local_44 = 0;
            local_8._0_1_ = 1;
            local_64 = (void **)0x501a81;
            FUN_0045c990();
            local_8 = CONCAT31(local_8._1_3_,2);
            local_64 = (void **)0x501a94;
            piVar8 = (int *)FUN_006360d0();
            iVar2 = local_24;
            if (*piVar8 == local_24) {
              local_20 = 0;
            }
            else {
              local_64 = (void **)*piVar8;
              uStack_68 = 0x501ab7;
              local_20 = FUN_0045c1e0();
            }
            piVar8 = (int *)(local_28 + -8);
            if (piVar8 != &DAT_00bfe124) {
              LOCK();
              iVar1 = *piVar8;
              *piVar8 = *piVar8 + -1;
              UNLOCK();
              if (iVar1 == 0) {
                local_64 = (void **)0x501ade;
                FID_conflict__free(piVar8);
              }
            }
            piVar8 = (int *)(iVar2 + -8);
            local_8._0_1_ = 1;
            if (piVar8 != &DAT_00bfe124) {
              LOCK();
              iVar2 = *piVar8;
              *piVar8 = *piVar8 + -1;
              UNLOCK();
              if (iVar2 == 0) {
                local_64 = (void **)0x501b03;
                FID_conflict__free(piVar8);
              }
            }
            local_64 = (void **)0x501b0d;
            puVar6 = operator_new(0x18);
            if (local_20 == 0) {
              local_8 = CONCAT31(local_8._1_3_,3);
              local_20 = *(int *)(iVar3 + 0xc);
              uVar4 = *(undefined4 *)(iVar3 + 8);
              piVar8 = (int *)(local_18 + -8);
              if (piVar8 != &DAT_00bfe124) {
                LOCK();
                *piVar8 = *piVar8 + 1;
                UNLOCK();
              }
              local_64 = (void **)0x501b46;
              local_38 = puVar6;
              piVar8 = (int *)FUN_00548e50();
              iVar2 = local_1c;
              local_14 = local_14 | 1;
              iVar3 = *piVar8;
              *puVar6 = 0;
              puVar6[1] = 0;
              puVar6[2] = iVar3;
              if (iVar3 != 0) {
                LOCK();
                *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
                UNLOCK();
              }
              puVar6[3] = uVar4;
              piVar8 = (int *)(local_1c + 0x36c);
              puVar6[4] = local_20;
              *(undefined2 *)(puVar6 + 5) = 0;
              if (*(int *)(local_1c + 0x370) < *(int *)(local_1c + 0x374) + 1) {
                local_64 = (void **)0x501ba3;
                FUN_00409cf0();
              }
              iVar3 = *(int *)(iVar2 + 0x374);
              local_14 = local_14 & 0xfffffffe;
              *(int *)(iVar2 + 0x374) = iVar3 + 1;
              *(undefined4 **)(*piVar8 + iVar3 * 4) = puVar6;
              puVar6 = local_2c;
            }
            else {
              local_64 = &local_4c;
              local_8 = CONCAT31(local_8._1_3_,4);
              uStack_68 = 0x501bd3;
              local_40 = puVar6;
              piVar8 = (int *)FUN_0055ef00();
              iVar2 = local_1c;
              uVar4 = *(undefined4 *)(iVar3 + 0xc);
              uVar5 = *(undefined4 *)(iVar3 + 8);
              local_14 = local_14 | 2;
              iVar3 = *piVar8;
              *puVar6 = 0;
              puVar6[1] = iVar3;
              if (iVar3 != 0) {
                LOCK();
                *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
                UNLOCK();
              }
              puVar6[2] = 0;
              piVar8 = (int *)(local_1c + 0x36c);
              puVar6[4] = uVar4;
              puVar6[3] = uVar5;
              *(undefined2 *)(puVar6 + 5) = 0;
              if (*(int *)(local_1c + 0x370) < *(int *)(local_1c + 0x374) + 1) {
                local_64 = (void **)0x501c33;
                FUN_00409cf0();
              }
              iVar3 = *(int *)(iVar2 + 0x374);
              local_14 = local_14 & 0xfffffffd;
              *(int *)(iVar2 + 0x374) = iVar3 + 1;
              *(undefined4 **)(*piVar8 + iVar3 * 4) = puVar6;
              puVar6 = local_30;
            }
            if (puVar6 != (undefined4 *)0x0) {
              LOCK();
              piVar8 = puVar6 + 1;
              iVar3 = *piVar8;
              *piVar8 = *piVar8 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                local_64 = (void **)0x501c62;
                (**(code **)*puVar6)();
              }
            }
            FUN_0040f7f0();
            local_64 = (void **)0x501c72;
            FID_conflict__free(local_4c);
          }
        }
        local_8 = 0xffffffff;
        piVar8 = (int *)(local_18 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar3 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            local_64 = (void **)0x501ca0;
            FID_conflict__free(piVar8);
          }
        }
      }
      uVar9 = uVar9 + 1;
      bVar10 = uVar9 < *(uint *)(param_1 + 0x30);
      in_ECX = local_1c;
    } while ((int)uVar9 < (int)*(uint *)(param_1 + 0x30));
  }
  if ((*(int *)(in_ECX + 500) == 0) && (*(int *)(in_ECX + 500) != *(int *)(in_ECX + 0x7c))) {
    *(int *)(in_ECX + 500) = *(int *)(in_ECX + 0x7c);
    FUN_006e6400(auStack_6c);
    FUN_006ce9f0(1);
    FUN_006e7e60();
  }
  FUN_006e7e60();
  FUN_006e6400(auStack_6c);
  FUN_006ce9f0(1);
  (**(code **)(**(int **)(in_ECX + 0x234) + 4))();
  ExceptionList = local_10;
  return;
}

