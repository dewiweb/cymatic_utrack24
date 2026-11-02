// rea decompile_all
// name: FUN_00560170
// address: 0x560170
// body: available
// range: 0x560170-0x56040d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00560170(void)

{
  uint uVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  BOOL BVar4;
  uint uVar5;
  int in_ECX;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  int local_50;
  int local_4c;
  undefined4 *local_48;
  char *local_44;
  undefined8 local_40;
  undefined1 local_38 [28];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00711d5e;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_40 = 0;
  local_4c = in_ECX;
  local_14 = uVar1;
  if (**(char **)(in_ECX + 8) != '\0') {
    puVar2 = (undefined4 *)FUN_00458890(uVar1);
    DVar3 = GetFileAttributesW((LPCWSTR)*puVar2);
    if ((DVar3 & 0x10) == 0) {
      puVar2 = (undefined4 *)FUN_00458890();
      BVar4 = GetFileAttributesExW((LPCWSTR)*puVar2,GetFileExInfoStandard,local_38);
      uVar9 = local_18;
      iVar10 = local_1c;
      if (BVar4 != 0) goto LAB_005601fb;
      local_40 = 0;
    }
  }
  uVar9 = (uint)local_40;
  iVar10 = local_40._4_4_;
LAB_005601fb:
  switch(*(undefined4 *)(local_4c + 0x40)) {
  case 1:
  case 2:
    iVar8 = 0;
    if (0 < *(int *)(local_4c + 100)) {
      do {
        FUN_0055ed60(&local_50,iVar8);
        local_8 = 0;
        puVar2 = (undefined4 *)FUN_00458890();
        BVar4 = GetFileAttributesExW((LPCWSTR)*puVar2,GetFileExInfoStandard,local_38);
        uVar5 = local_18;
        iVar6 = local_1c;
        if (BVar4 == 0) {
          local_40 = 0;
          local_40._4_4_ = 0;
          local_40._0_4_ = 0;
          uVar5 = (uint)local_40;
          iVar6 = local_40._4_4_;
        }
        bVar11 = CARRY4(uVar9,uVar5);
        uVar9 = uVar9 + uVar5;
        local_8 = 0xffffffff;
        iVar10 = iVar10 + iVar6 + (uint)bVar11;
        piVar7 = (int *)(local_50 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(local_4c + 100));
    }
    break;
  case 3:
  case 4:
    iVar8 = 0;
    if (0 < *(int *)(local_4c + 0x58)) {
      do {
        FUN_004110e0(&local_48,iVar8);
        local_8 = 1;
        FUN_00410ea0(&local_50);
        local_8 = CONCAT31(local_8._1_3_,2);
        puVar2 = (undefined4 *)FUN_00458890();
        BVar4 = GetFileAttributesExW((LPCWSTR)*puVar2,GetFileExInfoStandard,local_38);
        uVar5 = local_18;
        iVar6 = local_1c;
        if (BVar4 == 0) {
          local_40 = 0;
          local_40._4_4_ = 0;
          local_40._0_4_ = 0;
          uVar5 = (uint)local_40;
          iVar6 = local_40._4_4_;
        }
        bVar11 = CARRY4(uVar9,uVar5);
        uVar9 = uVar9 + uVar5;
        iVar10 = iVar10 + iVar6 + (uint)bVar11;
        piVar7 = (int *)(local_50 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        local_8 = 0xffffffff;
        if (local_48 != (undefined4 *)0x0) {
          LOCK();
          piVar7 = local_48 + 1;
          iVar6 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)*local_48)(1);
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(local_4c + 0x58));
    }
  }
  FUN_00560080(&local_44);
  local_8 = 3;
  if (*local_44 != '\0') {
    puVar2 = (undefined4 *)FUN_00458890(uVar1);
    DVar3 = GetFileAttributesW((LPCWSTR)*puVar2);
    if ((DVar3 & 0x10) == 0) {
      puVar2 = (undefined4 *)FUN_00458890();
      BVar4 = GetFileAttributesExW((LPCWSTR)*puVar2,GetFileExInfoStandard,local_38);
      if (BVar4 == 0) {
        local_40 = 0;
        local_40._4_4_ = 0;
        local_40._0_4_ = 0;
        local_18 = (uint)local_40;
        local_1c = local_40._4_4_;
      }
      iVar10 = iVar10 + local_1c + (uint)CARRY4(uVar9,local_18);
    }
  }
  piVar7 = (int *)(local_44 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar8 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc,iVar10);
  return;
}

