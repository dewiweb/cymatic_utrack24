// rea decompile_all
// name: FUN_00558b10
// address: 0x558b10
// body: available
// range: 0x558b10-0x558de1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00558b10(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  BOOL BVar5;
  int *piVar6;
  uint uVar7;
  int in_ECX;
  int iVar8;
  void *pvVar9;
  int iVar10;
  undefined8 uVar11;
  void *local_70;
  void *local_6c;
  void *local_68;
  undefined8 local_64;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 *local_48;
  undefined8 local_44;
  int local_3c;
  undefined1 local_38 [28];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071160c;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((*(int *)(in_ECX + 0x38) == 0) && (*(int *)(in_ECX + 0x3c) == 0)) {
    puVar4 = (undefined4 *)FUN_00458890(local_14);
    BVar5 = GetFileAttributesExW((LPCWSTR)*puVar4,GetFileExInfoStandard,local_38);
    uVar7 = local_18;
    iVar8 = local_1c;
    if (BVar5 == 0) {
      local_64 = 0;
      local_64._4_4_ = 0;
      local_64._0_4_ = 0;
      uVar7 = (uint)local_64;
      iVar8 = local_64._4_4_;
    }
    *(int *)(in_ECX + 0x3c) = iVar8;
    *(uint *)(in_ECX + 0x38) = uVar7;
    local_4c = 0;
    if (0 < *(int *)(in_ECX + 0x30)) {
      do {
        FUN_0040a090(&local_3c);
        local_8 = 0;
        FUN_0045c990(&DAT_0073e8cc);
        local_8 = CONCAT31(local_8._1_3_,1);
        piVar6 = (int *)FUN_006360d0(&local_58);
        iVar8 = local_54;
        if (*piVar6 == local_54) {
          pvVar9 = (void *)0x0;
        }
        else {
          pvVar9 = (void *)FUN_0045c1e0(*piVar6,local_54);
        }
        piVar6 = (int *)(local_58 + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar10 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar10 == 0) {
            FID_conflict__free(piVar6);
          }
        }
        piVar6 = (int *)(iVar8 + -8);
        local_8 = local_8 & 0xffffff00;
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar8 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar8 == 0) {
            FID_conflict__free(piVar6);
          }
        }
        if (pvVar9 == (void *)0x0) {
          local_8._0_1_ = 2;
          local_70 = pvVar9;
          local_6c = pvVar9;
          local_68 = pvVar9;
          FUN_0055ef00(&local_70);
          local_8 = CONCAT31(local_8._1_3_,3);
          if (local_48 != (undefined4 *)0x0) {
            uVar11 = FUN_00560170();
            puVar1 = (uint *)(in_ECX + 0x38);
            uVar7 = *puVar1;
            *puVar1 = *puVar1 + (uint)uVar11;
            *(int *)(in_ECX + 0x3c) =
                 *(int *)(in_ECX + 0x3c) + (int)((ulonglong)uVar11 >> 0x20) +
                 (uint)CARRY4(uVar7,(uint)uVar11);
            if (local_48 != (undefined4 *)0x0) {
              LOCK();
              piVar6 = local_48 + 1;
              iVar8 = *piVar6;
              *piVar6 = *piVar6 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)*local_48)(1);
              }
            }
          }
          FUN_0040f7f0();
          FID_conflict__free(local_70);
        }
        else {
          FUN_0045c990(&DAT_0073e8b8);
          local_8 = CONCAT31(local_8._1_3_,4);
          piVar6 = (int *)FUN_006360d0(&local_50);
          iVar8 = local_5c;
          if (*piVar6 == local_5c) {
            iVar10 = 0;
          }
          else {
            iVar10 = FUN_0045c1e0(*piVar6,local_5c);
          }
          piVar6 = (int *)(local_50 + -8);
          if (piVar6 != &DAT_00bfe124) {
            LOCK();
            iVar2 = *piVar6;
            *piVar6 = *piVar6 + -1;
            UNLOCK();
            if (iVar2 == 0) {
              FID_conflict__free(piVar6);
            }
          }
          piVar6 = (int *)(iVar8 + -8);
          local_8 = local_8 & 0xffffff00;
          if (piVar6 != &DAT_00bfe124) {
            LOCK();
            iVar8 = *piVar6;
            *piVar6 = *piVar6 + -1;
            UNLOCK();
            if (iVar8 == 0) {
              FID_conflict__free(piVar6);
            }
          }
          if (iVar10 == 0) {
            puVar4 = (undefined4 *)FUN_00458890();
            BVar5 = GetFileAttributesExW((LPCWSTR)*puVar4,GetFileExInfoStandard,local_38);
            uVar7 = local_18;
            iVar8 = local_1c;
            if (BVar5 == 0) {
              local_44 = 0;
              local_44._4_4_ = 0;
              local_44._0_4_ = 0;
              uVar7 = (uint)local_44;
              iVar8 = local_44._4_4_;
            }
            puVar1 = (uint *)(in_ECX + 0x38);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 + uVar7;
            *(int *)(in_ECX + 0x3c) = *(int *)(in_ECX + 0x3c) + iVar8 + (uint)CARRY4(uVar3,uVar7);
          }
        }
        local_8 = 0xffffffff;
        piVar6 = (int *)(local_3c + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar8 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar8 == 0) {
            FID_conflict__free(piVar6);
          }
        }
        local_4c = local_4c + 1;
      } while (local_4c < *(int *)(in_ECX + 0x30));
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc,*(undefined4 *)(in_ECX + 0x3c));
  return;
}

