// rea decompile_all
// name: FUN_005a6640
// address: 0x5a6640
// body: available
// range: 0x5a6640-0x5a6955 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a6640(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_ECX;
  int *piVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  int local_58;
  int local_54;
  undefined4 *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  void *local_40 [2];
  uint local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int *local_24 [2];
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071772b;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_1 == in_ECX + 0x286c) {
    local_34 = in_ECX + 0x2160;
    local_28 = in_ECX;
    FUN_0052d8f0(local_40);
    local_8 = 0;
    uVar2 = 0;
    uVar7 = 0xffffffff;
    if (0 < (int)local_38) {
      bVar9 = local_38 != 0;
      do {
        if (bVar9) {
          iVar8 = *(int *)((int)local_40[0] + uVar2 * 4);
        }
        else {
          iVar8 = 0;
        }
        uVar7 = uVar2;
        if (iVar8 == *(int *)(in_ECX + 0x2be0)) break;
        uVar2 = uVar2 + 1;
        bVar9 = uVar2 < local_38;
        uVar7 = 0xffffffff;
      } while ((int)uVar2 < (int)local_38);
    }
    *(undefined4 *)(in_ECX + 0x2be0) = 0;
    local_2c = 0;
    if (local_38 == 0xffffffff || (int)(local_38 + 1) < 0) {
LAB_005a68b8:
      FID_conflict__free(local_40[0]);
    }
    else {
      local_44 = in_ECX + 0x2a14;
      do {
        local_30 = (int)(uVar7 + 1 + local_2c) % (int)local_38;
        FUN_0040ec10(&local_50);
        uVar3 = FUN_005a1240(&local_58);
        local_8._0_1_ = 2;
        local_4c = FUN_005a1140(&local_54);
        local_8._0_1_ = 4;
        puVar4 = (undefined4 *)FUN_0063bf80(local_24);
        uVar1 = (**(code **)(*(int *)*puVar4 + 0x14))(puVar4 + 2);
        local_48 = CONCAT31(local_48._1_3_,uVar1);
        (**(code **)(*local_24[0] + 0x54))(local_1c);
        puVar4 = local_50;
        local_8 = CONCAT31(local_8._1_3_,3);
        iVar8 = 0;
        if (*(int *)(in_ECX + 0x1d94) == 1) {
          iVar8 = 1;
        }
        else if (*(int *)(in_ECX + 0x1ec8) == 1) {
          iVar8 = 2;
        }
        bVar9 = false;
        iVar5 = FUN_0054ef10(local_4c,uVar3,local_48);
        if ((iVar5 != 0) && (iVar8 != 1)) {
          bVar9 = true;
        }
        piVar6 = (int *)(local_54 + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar8 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar8 == 0) {
            FID_conflict__free(piVar6);
          }
        }
        piVar6 = (int *)(local_58 + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar8 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar8 == 0) {
            FID_conflict__free(piVar6);
          }
        }
        if (bVar9) {
          if (local_30 < local_38) {
            uVar3 = *(undefined4 *)((int)local_40[0] + local_30 * 4);
          }
          else {
            uVar3 = 0;
          }
          *(undefined4 *)(local_28 + 0x2be0) = uVar3;
          uVar3 = FUN_004144b0(&local_28);
          local_8 = CONCAT31(local_8._1_3_,5);
          FUN_0052db40(uVar3);
          piVar6 = (int *)(local_28 + -8);
          if (piVar6 != &DAT_00bfe124) {
            LOCK();
            iVar8 = *piVar6;
            *piVar6 = *piVar6 + -1;
            UNLOCK();
            if (iVar8 == 0) {
              FID_conflict__free(piVar6);
            }
          }
          if (puVar4 != (undefined4 *)0x0) {
            LOCK();
            piVar6 = puVar4 + 1;
            iVar8 = *piVar6;
            *piVar6 = *piVar6 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)*puVar4)(1);
            }
          }
          goto LAB_005a68b8;
        }
        local_8 = local_8 & 0xffffff00;
        if (puVar4 != (undefined4 *)0x0) {
          LOCK();
          piVar6 = puVar4 + 1;
          iVar8 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)*puVar4)(1);
          }
        }
        local_2c = local_2c + 1;
      } while (local_2c < (int)(local_38 + 1));
      FID_conflict__free(local_40[0]);
    }
  }
  else if (param_1 == in_ECX + 0x294c) {
    local_8 = 6;
    puVar4 = (undefined4 *)FUN_0063bf80(local_24);
    uVar1 = (**(code **)(*(int *)*puVar4 + 0x14))(puVar4 + 2);
    (**(code **)(*local_24[0] + 0x54))(local_1c);
    local_8 = 0xffffffff;
    *(undefined1 *)(in_ECX + 0x224c) = uVar1;
    if (*(int *)(in_ECX + 0x2244) != 0) {
      FUN_00530240();
    }
    FUN_005a5980();
  }
  else if (param_1 == in_ECX + 0x2a2c) {
    FUN_005a5f10(local_14);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

