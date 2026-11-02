// rea decompile_all
// name: FUN_005a0990
// address: 0x5a0990
// body: available
// range: 0x5a0990-0x5a0d14 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a0990(undefined4 param_1,int *param_2,undefined4 *param_3,int *param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  DWORD DVar6;
  int *piVar7;
  undefined4 *puVar8;
  BOOL BVar9;
  void *lpBuffer;
  int in_ECX;
  bool bVar10;
  uint local_84;
  DWORD local_68;
  uint local_5c;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  DWORD local_40;
  char local_39;
  undefined1 local_38 [28];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007161fd;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(char *)*param_2 != '\0') {
    puVar5 = (undefined4 *)FUN_00458890(local_14);
    DVar6 = GetFileAttributesW((LPCWSTR)*puVar5);
    if ((DVar6 & 0x10) == 0) {
      *param_3 = 3;
      piVar7 = (int *)(*param_2 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        *piVar7 = *piVar7 + 1;
        UNLOCK();
      }
      LOCK();
      iVar2 = *param_4;
      *param_4 = *param_2;
      UNLOCK();
      piVar7 = (int *)(iVar2 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      goto LAB_005a0cc3;
    }
  }
  FUN_00636040(&local_54);
  local_8 = 0;
  FUN_00634890(&local_48);
  piVar7 = (int *)(local_48 - 8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  local_8 = 0xffffffff;
  piVar7 = (int *)(local_54 - 8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  puVar5 = (undefined4 *)FUN_006358c0();
  local_8 = 1;
  operator_new(0x30);
  local_8 = CONCAT31(local_8._1_3_,2);
  piVar7 = (int *)FUN_0062aec0(param_2,0x8000);
  if (*(char *)piVar7[4] != '\0') {
    puVar8 = (undefined4 *)*piVar7;
    piVar7 = (int *)0x0;
    (*(code *)*puVar8)(1);
  }
  local_8._0_1_ = 3;
  puVar8 = (undefined4 *)FUN_00458890();
  BVar9 = GetFileAttributesExW((LPCWSTR)*puVar8,GetFileExInfoStandard,local_38);
  if (BVar9 == 0) {
    local_50 = 0;
    local_84 = 0;
    local_18 = local_84;
  }
  else {
    local_50 = local_1c;
  }
  local_44 = local_18;
  lpBuffer = (void *)FUN_004c554b(0x100000);
  local_8 = CONCAT31(local_8._1_3_,4);
  if ((local_50 != 0) || (local_44 != 0)) {
    local_5c = 0;
    local_48 = 0;
    do {
      if (*(char *)(in_ECX + 0x30) != '\0') {
LAB_005a0d0f:
        local_39 = '\0';
        goto LAB_005a0c9f;
      }
      local_68 = 0x100000;
      if ((local_50 - local_5c == (uint)(local_44 < local_48)) && (local_44 - local_48 < 0x100000))
      {
        local_68 = local_44 - local_48;
      }
      if ((HANDLE)puVar5[2] == (HANDLE)0x0) {
        local_40 = 0;
      }
      else {
        local_40 = 0;
        BVar9 = ReadFile((HANDLE)puVar5[2],lpBuffer,local_68,&local_40,(LPOVERLAPPED)0x0);
        if (BVar9 == 0) {
          puVar8 = (undefined4 *)FUN_00612a20();
          uVar4 = puVar5[6];
          puVar5[6] = *puVar8;
          *puVar8 = uVar4;
          LOCK();
          iVar2 = iRamfffffff8 + -1;
          UNLOCK();
          bVar10 = iRamfffffff8 == 0;
          iRamfffffff8 = iVar2;
          if (bVar10) {
            FID_conflict__free((void *)0xfffffff8);
          }
        }
      }
      puVar1 = puVar5 + 4;
      uVar3 = *puVar1;
      *puVar1 = *puVar1 + local_40;
      puVar5[5] = puVar5[5] + (uint)CARRY4(uVar3,local_40);
      DVar6 = (int)local_40 >> 0x1f;
      local_54 = local_40;
      local_4c = local_40;
      uVar3 = local_40;
      local_40 = DVar6;
      (**(code **)(**(int **)(in_ECX + 0x18) + 0x14))(uVar3,DVar6);
      if ((local_4c != local_68) || (local_40 != 0)) {
        *param_3 = 4;
        FUN_00635e10(param_1);
        goto LAB_005a0d0f;
      }
      local_39 = (**(code **)(*piVar7 + 0x10))(lpBuffer,local_54);
      (**(code **)(**(int **)(in_ECX + 0x18) + 0x10))(local_4c,local_40);
      if (local_39 == '\0') {
        *param_3 = 5;
        FUN_00635e10(param_2);
        local_39 = '\0';
        goto LAB_005a0c9f;
      }
      bVar10 = CARRY4(local_48,local_4c);
      local_48 = local_48 + local_4c;
      local_5c = local_5c + local_40 + (uint)bVar10;
    } while ((local_5c < local_50) || ((local_5c <= local_50 && (local_48 < local_44))));
  }
  local_39 = '\x01';
LAB_005a0c9f:
  FID_conflict__free(lpBuffer);
  if (piVar7 != (int *)0x0) {
    (**(code **)*piVar7)(1);
  }
  if (puVar5 != (undefined4 *)0x0) {
    (**(code **)*puVar5)(1);
  }
LAB_005a0cc3:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

