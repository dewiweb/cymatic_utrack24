// rea decompile_all
// name: FUN_00589f10
// address: 0x589f10
// body: available
// range: 0x589f10-0x58a28a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00589f10(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 *puVar6;
  DWORD DVar7;
  DWORD DVar8;
  BOOL BVar9;
  int in_ECX;
  int *piVar10;
  char *pcVar11;
  code *pcVar12;
  uint local_6c;
  LPCRITICAL_SECTION p_Stack_68;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  char *local_4c;
  LPCRITICAL_SECTION local_48;
  char *local_44;
  char *local_40;
  char local_39;
  undefined1 local_38 [28];
  LPCRITICAL_SECTION local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &LAB_00713a28;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar5;
  if (*(char *)(in_ECX + 0x3c) == '\0') {
    pcVar12 = LeaveCriticalSection_exref;
    do {
      local_48 = (LPCRITICAL_SECTION)(in_ECX + 0x44);
      pcVar11 = "";
      local_8 = 0;
      local_40 = "";
      local_39 = '\0';
      EnterCriticalSection(local_48);
      local_8._0_1_ = 2;
      if (*(int *)(in_ECX + 0x7c) == 0) {
        (*pcVar12)(in_ECX + 0x44,uVar5);
        break;
      }
      puVar6 = (undefined4 *)FUN_0040f6b0(&local_58,0);
      local_44 = (char *)*puVar6;
      *puVar6 = &DAT_00bfe12c;
      piVar10 = (int *)(local_58 + -8);
      if (piVar10 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar10);
        }
      }
      if (*local_44 != '\0') {
        puVar6 = (undefined4 *)FUN_00458890();
        DVar7 = GetFileAttributesW((LPCWSTR)*puVar6);
        if ((DVar7 & 0x10) == 0) {
          FUN_00636040(&local_54);
          FUN_0041ad70(&local_4c,&local_54);
          pcVar4 = local_4c;
          local_8._0_1_ = 4;
          if (*local_4c != '\0') {
            puVar6 = (undefined4 *)FUN_00636a10(&local_60);
            local_8._0_1_ = 5;
            FUN_00627bf0();
            local_8._0_1_ = 6;
            puVar6 = (undefined4 *)FUN_00635a10(&local_5c,*puVar6);
            pcVar11 = (char *)*puVar6;
            *puVar6 = &DAT_00bfe12c;
            piVar10 = (int *)(local_5c + -8);
            local_40 = pcVar11;
            if (piVar10 != &DAT_00bfe124) {
              LOCK();
              iVar2 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar2 == 0) {
                FID_conflict__free(piVar10);
              }
            }
            piVar10 = (int *)(local_50 + -8);
            if (piVar10 != &DAT_00bfe124) {
              LOCK();
              iVar2 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar2 == 0) {
                FID_conflict__free(piVar10);
              }
            }
            piVar10 = (int *)(local_60 + -8);
            if (piVar10 != &DAT_00bfe124) {
              LOCK();
              iVar2 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar2 == 0) {
                FID_conflict__free(piVar10);
              }
            }
            local_39 = '\x01';
          }
          piVar10 = (int *)(pcVar4 + -8);
          if (piVar10 != &DAT_00bfe124) {
            LOCK();
            iVar2 = *piVar10;
            *piVar10 = *piVar10 + -1;
            UNLOCK();
            if (iVar2 == 0) {
              FID_conflict__free(piVar10);
            }
          }
          piVar10 = (int *)(local_54 + -8);
          if (piVar10 != &DAT_00bfe124) {
            LOCK();
            iVar2 = *piVar10;
            *piVar10 = *piVar10 + -1;
            UNLOCK();
            if (iVar2 == 0) {
              FID_conflict__free(piVar10);
            }
          }
        }
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x44));
      if (local_39 != '\0') {
        DVar7 = timeGetTime();
        if ((DAT_00c8a644 <= DVar7) || (DVar7 < DAT_00c8a644 - 1000)) {
          DAT_00c8a644 = DVar7;
        }
        if (*pcVar11 != '\0') {
          puVar6 = (undefined4 *)FUN_00458890();
          DVar8 = GetFileAttributesW((LPCWSTR)*puVar6);
          if ((DVar8 & 0x10) == 0) {
            FUN_00635980();
          }
        }
        FUN_00590260(&local_44,&local_40,1);
        puVar6 = (undefined4 *)FUN_00458890();
        BVar9 = GetFileAttributesExW((LPCWSTR)*puVar6,GetFileExInfoStandard,local_38);
        p_Stack_68 = local_1c;
        local_6c = local_18;
        if (BVar9 == 0) {
          p_Stack_68 = (LPCRITICAL_SECTION)0x0;
          local_6c = 0;
        }
        local_48 = p_Stack_68;
        DVar8 = timeGetTime();
        if ((DAT_00c8a644 <= DVar8) || (DVar8 < DAT_00c8a644 - 1000)) {
          DAT_00c8a644 = DVar8;
        }
        *(int *)(in_ECX + 0x80) = *(int *)(in_ECX + 0x80) + (DVar8 - DVar7);
        puVar1 = (uint *)(in_ECX + 0x88);
        uVar3 = *puVar1;
        *puVar1 = *puVar1 + local_6c;
        *(int *)(in_ECX + 0x8c) =
             (int)&local_48->DebugInfo + (uint)CARRY4(uVar3,local_6c) + *(int *)(in_ECX + 0x8c);
        pcVar11 = local_40;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x44));
      if (*(int *)(in_ECX + 0x7c) != 0) {
        FUN_004179e0(0);
      }
      pcVar12 = LeaveCriticalSection_exref;
      LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x44));
      piVar10 = (int *)(pcVar11 + -8);
      if (piVar10 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar10);
        }
      }
      local_8._0_1_ = 0xff;
      local_8._1_3_ = 0xffffff;
      piVar10 = (int *)(local_44 + -8);
      if (piVar10 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar10);
        }
      }
    } while (*(char *)(in_ECX + 0x3c) == '\0');
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

