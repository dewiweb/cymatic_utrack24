// rea decompile_all
// name: FUN_00610a70
// address: 0x610a70
// body: available
// range: 0x610a70-0x611072 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00610a70(undefined **param_1,void **param_2)

{
  char *pcVar1;
  void *pvVar2;
  char cVar3;
  undefined *puVar4;
  void **ppvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  HANDLE pvVar8;
  undefined4 *puVar9;
  int iVar10;
  void *pvVar11;
  int *piVar12;
  int in_ECX;
  undefined **ppuVar13;
  LPCWSTR lpFileName;
  char *pcVar14;
  void **ppvVar15;
  undefined8 uVar16;
  int local_64;
  void *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  void *local_4c;
  undefined4 local_48;
  undefined **local_44;
  char *local_40;
  HANDLE local_3c;
  undefined8 local_34;
  char *local_2c;
  int local_20;
  char *local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071c866;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = in_ECX;
  FUN_0045c990(&DAT_00c129a8,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  ppvVar5 = param_2;
  local_5c = (void *)0x0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = (void *)0x0;
  local_48 = 0;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x2c) < 1) {
    puVar9 = (undefined4 *)FUN_00611440();
    local_8 = CONCAT31(local_8._1_3_,6);
    uVar6 = *puVar9;
    uVar7 = FUN_0045d1e0(uVar6);
    FUN_0062ca80(uVar6,uVar7);
    if (*(int *)(in_ECX + 8) != 0) {
      FUN_0062ca80(*(undefined4 *)(in_ECX + 4),*(int *)(in_ECX + 8));
    }
    local_8 = local_8 & 0xffffff00;
    ppvVar15 = param_2 + -2;
    if (ppvVar15 != (void **)&DAT_00bfe124) {
      LOCK();
      pvVar2 = *ppvVar15;
      *ppvVar15 = (void *)((int)*ppvVar15 + -1);
      UNLOCK();
      if (pvVar2 == (void *)0x0) {
        FID_conflict__free(ppvVar15);
      }
    }
    iVar10 = FUN_0045d240(*param_1,"Content-Type");
    if (iVar10 < 0) {
      FUN_00621830("Content-Type: application/x-www-form-urlencoded\r\n");
    }
    FUN_00621830("Content-length: ");
    FUN_0045d120();
    FUN_00621830(&DAT_00c01e04);
  }
  else {
    FUN_0062f700();
    uVar16 = FUN_006246b0();
    FUN_0062de00(uVar16);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00621830("Content-Type: multipart/form-data; boundary=");
    FUN_00636ec0(&param_2);
    FUN_00621830(&DAT_00c01ea4);
    FUN_0062ca80(&DAT_00c01eac,2);
    ppvVar15 = param_2;
    uVar6 = FUN_0045d1e0(param_2);
    FUN_0062ca80(ppvVar15,uVar6);
    local_14 = 0;
    if (0 < *(int *)(in_ECX + 0x14)) {
      do {
        if (local_14 < *(uint *)(in_ECX + 0x20)) {
          param_1 = (undefined **)(*(int *)(in_ECX + 0x18) + local_14 * 4);
        }
        else {
          param_1 = &PTR_DAT_00c7ed68;
        }
        if (local_14 < *(uint *)(in_ECX + 0x14)) {
          ppuVar13 = (undefined **)(*(int *)(in_ECX + 0xc) + local_14 * 4);
        }
        else {
          ppuVar13 = &PTR_DAT_00c7ed68;
        }
        FUN_0062ca80("\r\nContent-Disposition: form-data; name=\"",0x28);
        puVar4 = *ppuVar13;
        uVar6 = FUN_0045d1e0(puVar4);
        FUN_0062ca80(puVar4,uVar6);
        FUN_0062ca80("\"\r\n\r\n",5);
        puVar4 = *param_1;
        uVar6 = FUN_0045d1e0(puVar4);
        FUN_0062ca80(puVar4,uVar6);
        FUN_0062ca80(&DAT_00c01ee8,4);
        uVar6 = FUN_0045d1e0(ppvVar15);
        FUN_0062ca80(ppvVar15,uVar6);
        local_14 = local_14 + 1;
      } while ((int)local_14 < *(int *)(in_ECX + 0x14));
    }
    local_14 = 0;
    if (0 < *(int *)(local_18 + 0x2c)) {
      do {
        iVar10 = *(int *)(*(int *)(local_18 + 0x24) + local_14 * 4);
        FUN_0062ca80("\r\nContent-Disposition: form-data; name=\"",0x28);
        uVar6 = *(undefined4 *)(iVar10 + 8);
        uVar7 = FUN_0045d1e0(uVar6);
        FUN_0062ca80(uVar6,uVar7);
        FUN_0062ca80("\"; filename=\"",0xd);
        uVar6 = *(undefined4 *)(iVar10 + 0xc);
        uVar7 = FUN_0045d1e0(uVar6);
        FUN_0062ca80(uVar6,uVar7);
        FUN_0062ca80(&DAT_00c01ef0,3);
        if (**(char **)(iVar10 + 0x10) != '\0') {
          FUN_0062ca80("Content-Type: ",0xe);
          uVar6 = *(undefined4 *)(iVar10 + 0x10);
          uVar7 = FUN_0045d1e0(uVar6);
          FUN_0062ca80(uVar6,uVar7);
          FUN_0062ca80(&DAT_00c01f6c,2);
        }
        FUN_0062ca80("Content-Transfer-Encoding: binary\r\n\r\n",0x25);
        puVar9 = *(undefined4 **)(iVar10 + 0x18);
        if (puVar9 == (undefined4 *)0x0) {
          local_40 = *(char **)(iVar10 + 0x14);
          piVar12 = (int *)(local_40 + -8);
          local_44 = juce::FileInputStream::vftable;
          if (piVar12 != &DAT_00bfe124) {
            LOCK();
            *piVar12 = *piVar12 + 1;
            UNLOCK();
          }
          local_3c = (HANDLE)0x0;
          local_34 = 0;
          FUN_0044eef0();
          pcVar14 = local_40;
          local_8 = CONCAT31(local_8._1_3_,4);
          if (*local_40 == '\0') {
            lpFileName = L"";
          }
          else {
            FUN_0045d6b0(local_40);
            pcVar1 = pcVar14 + 1;
            do {
              cVar3 = *pcVar14;
              pcVar14 = pcVar14 + 1;
            } while (cVar3 != '\0');
            FUN_00455850(local_40);
            local_40 = local_1c;
            lpFileName = (LPCWSTR)(local_1c + ((uint)(pcVar14 + (4 - (int)pcVar1)) & 0xfffffffc));
            FUN_0045e410(local_1c);
          }
          pvVar8 = CreateFileW(lpFileName,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000080,
                               (HANDLE)0x0);
          if (pvVar8 == (HANDLE)0xffffffff) {
            puVar9 = (undefined4 *)FUN_00612a20();
            pcVar14 = (char *)*puVar9;
            *puVar9 = local_2c;
            piVar12 = (int *)(local_20 + -8);
            pvVar8 = local_3c;
            local_2c = pcVar14;
            if (piVar12 != &DAT_00bfe124) {
              LOCK();
              iVar10 = *piVar12;
              *piVar12 = *piVar12 + -1;
              UNLOCK();
              if (iVar10 == 0) {
                FID_conflict__free(piVar12);
                pvVar8 = local_3c;
              }
            }
          }
          local_3c = pvVar8;
          local_8._0_1_ = 5;
          if (*local_2c == '\0') {
            FUN_0061ff80();
          }
          local_8 = CONCAT31(local_8._1_3_,1);
          local_44 = juce::FileInputStream::vftable;
          CloseHandle(local_3c);
          piVar12 = (int *)(local_2c + -8);
          if (piVar12 != &DAT_00bfe124) {
            LOCK();
            iVar10 = *piVar12;
            *piVar12 = *piVar12 + -1;
            UNLOCK();
            if (iVar10 == 0) {
              FID_conflict__free(piVar12);
            }
          }
          piVar12 = (int *)(local_40 + -8);
          if (piVar12 != &DAT_00bfe124) {
            LOCK();
            iVar10 = *piVar12;
            *piVar12 = *piVar12 + -1;
            UNLOCK();
            if (iVar10 == 0) {
              FID_conflict__free(piVar12);
            }
          }
        }
        else if (puVar9[1] != 0) {
          FUN_0062ca80(*puVar9,puVar9[1]);
        }
        FUN_0062ca80(&DAT_00c01f70,4);
        uVar6 = FUN_0045d1e0(ppvVar15);
        FUN_0062ca80(ppvVar15,uVar6);
        local_14 = local_14 + 1;
      } while ((int)local_14 < *(int *)(local_18 + 0x2c));
    }
    FUN_0062ca80(&DAT_00c01dfc,4);
    ppvVar15 = ppvVar15 + -2;
    if (ppvVar15 != (void **)&DAT_00bfe124) {
      LOCK();
      pvVar2 = *ppvVar15;
      *ppvVar15 = (void *)((int)*ppvVar15 + -1);
      UNLOCK();
      if (pvVar2 == (void *)0x0) {
        FID_conflict__free(ppvVar15);
      }
    }
  }
  pvVar2 = local_4c;
  if (((ppvVar5 != &local_5c) && (ppvVar5 != (void **)0x0)) && (ppvVar5[1] != local_4c)) {
    if (local_4c == (void *)0x0) {
      FID_conflict__free(*ppvVar5);
      *ppvVar5 = (void *)0x0;
      ppvVar5[1] = (void *)0x0;
    }
    else {
      if (*ppvVar5 == (void *)0x0) {
        FID_conflict__free((void *)0x0);
        pvVar11 = (void *)FUN_004c554b(pvVar2);
      }
      else {
        pvVar11 = (void *)FUN_004c553b(*ppvVar5,local_4c);
      }
      *ppvVar5 = pvVar11;
      ppvVar5[1] = pvVar2;
    }
  }
  FID_conflict__free(local_5c);
  piVar12 = (int *)(local_64 + -8);
  if (piVar12 != &DAT_00bfe124) {
    LOCK();
    iVar10 = *piVar12;
    *piVar12 = *piVar12 + -1;
    UNLOCK();
    if (iVar10 == 0) {
      FID_conflict__free(piVar12);
    }
  }
  ExceptionList = local_10;
  return;
}

