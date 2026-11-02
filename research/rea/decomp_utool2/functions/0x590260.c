// rea decompile_all
// name: FUN_00590260
// address: 0x590260
// body: available
// range: 0x590260-0x59054d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00590260(undefined4 param_1,undefined4 param_2,char param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  BOOL BVar7;
  void *lpBuffer;
  int *piVar8;
  bool bVar9;
  uint local_70;
  DWORD local_68;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  DWORD local_44;
  uint local_40;
  char local_39;
  undefined1 local_38 [28];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071442d;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar4;
  FUN_00636040(&local_54);
  local_8 = 0;
  FUN_00634890(&local_58);
  piVar8 = (int *)(local_58 - 8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  local_8 = 0xffffffff;
  piVar8 = (int *)(local_54 - 8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  puVar5 = (undefined4 *)FUN_006358c0(uVar4);
  local_8 = 1;
  operator_new(0x30);
  local_8 = CONCAT31(local_8._1_3_,2);
  piVar8 = (int *)FUN_0062aec0(param_2,0x8000);
  if (*(char *)piVar8[4] != '\0') {
    puVar6 = (undefined4 *)*piVar8;
    piVar8 = (int *)0x0;
    (*(code *)*puVar6)(1);
  }
  local_8._0_1_ = 3;
  puVar6 = (undefined4 *)FUN_00458890();
  BVar7 = GetFileAttributesExW((LPCWSTR)*puVar6,GetFileExInfoStandard,local_38);
  if (BVar7 == 0) {
    local_50 = 0;
    local_70 = 0;
    local_18 = local_70;
  }
  else {
    local_50 = local_1c;
  }
  local_48 = local_18;
  lpBuffer = (void *)FUN_004c554b(0x800000);
  local_8 = CONCAT31(local_8._1_3_,4);
  if ((local_50 != 0) || (local_48 != 0)) {
    local_5c = 0;
    local_58 = 0;
    do {
      if (*(char *)(local_4c + 0x58) != '\0') {
LAB_00590548:
        local_39 = 0;
        goto LAB_00590506;
      }
      local_68 = 0x800000;
      if ((local_50 - local_5c == (uint)(local_48 < local_58)) && (local_48 - local_58 < 0x800000))
      {
        local_68 = local_48 - local_58;
      }
      local_54 = 0;
      if ((HANDLE)puVar5[2] == (HANDLE)0x0) {
        uVar4 = 0;
      }
      else {
        local_44 = 0;
        BVar7 = ReadFile((HANDLE)puVar5[2],lpBuffer,local_68,&local_44,(LPOVERLAPPED)0x0);
        uVar4 = local_44;
        if (BVar7 == 0) {
          puVar6 = (undefined4 *)FUN_00612a20();
          uVar3 = puVar5[6];
          puVar5[6] = *puVar6;
          *puVar6 = uVar3;
          LOCK();
          iVar2 = iRamfffffff8 + -1;
          UNLOCK();
          bVar9 = iRamfffffff8 == 0;
          uVar4 = local_44;
          iRamfffffff8 = iVar2;
          if (bVar9) {
            FID_conflict__free((void *)0xfffffff8);
            uVar4 = local_44;
          }
        }
      }
      local_40 = uVar4;
      puVar1 = puVar5 + 4;
      uVar4 = *puVar1;
      *puVar1 = *puVar1 + local_40;
      puVar5[5] = puVar5[5] + (uint)CARRY4(uVar4,local_40);
      if (param_3 == '\0') {
        (**(code **)(**(int **)(local_4c + 0x28) + 0x18))(local_40,(int)local_40 >> 0x1f);
      }
      local_44 = (int)local_40 >> 0x1f;
      if ((local_40 != local_68) || (local_44 != local_54)) goto LAB_00590548;
      local_39 = (**(code **)(*piVar8 + 0x10))(lpBuffer,local_40);
      if (param_3 == '\0') {
        (**(code **)(**(int **)(local_4c + 0x28) + 0x10))();
      }
      else {
        (**(code **)(**(int **)(local_4c + 0x28) + 0x14))(local_40,local_44);
      }
      if (local_39 == '\0') goto LAB_00590548;
      bVar9 = CARRY4(local_58,local_40);
      local_58 = local_58 + local_40;
      local_5c = local_5c + local_44 + (uint)bVar9;
    } while ((local_5c < local_50) || ((local_5c <= local_50 && (local_58 < local_48))));
  }
  local_39 = 1;
LAB_00590506:
  FID_conflict__free(lpBuffer);
  if (piVar8 != (int *)0x0) {
    (**(code **)*piVar8)(1);
  }
  if (puVar5 != (undefined4 *)0x0) {
    (**(code **)*puVar5)(1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

