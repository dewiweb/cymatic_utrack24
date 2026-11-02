// rea decompile_all
// name: FUN_005b4ba0
// address: 0x5b4ba0
// body: available
// range: 0x5b4ba0-0x5b4f93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b4ba0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *in_ECX;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *in_EDX;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  int *piStack_e4;
  int local_74;
  int local_70;
  int *local_6c;
  int *local_64;
  int *local_60;
  undefined4 local_5c;
  int *local_58;
  int local_54;
  int local_50;
  uint local_4c;
  int *local_48;
  int local_44;
  int local_40;
  int *local_3c;
  char acStack_1b [2];
  int local_19;
  undefined1 uStack_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00719305;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar5 = *in_EDX;
  *in_ECX = iVar5;
  piVar1 = (int *)(iVar5 + -8);
  if (piVar1 != &DAT_00bfe124) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  local_5c = 1;
  if (*(char *)*in_EDX != '\0') {
    local_6c = in_ECX;
    local_58 = in_ECX;
    puVar2 = (undefined4 *)FUN_00458890();
    piStack_e4 = (int *)0x5b4c27;
    DVar3 = GetFileAttributesW((LPCWSTR)*puVar2);
    if ((DVar3 & 0x10) == 0) {
      piStack_e4 = (int *)0x5b4c3a;
      FUN_006360d0();
      local_8 = 1;
      piStack_e4 = (int *)0x5b4c4c;
      FUN_006369b0();
      uVar8 = 1;
      local_8 = CONCAT31(local_8._1_3_,2);
      local_4c = 1;
      while( true ) {
        local_19._0_1_ = 0;
        local_3c = (int *)(acStack_1b + 2);
        if ((int)uVar8 < 0) {
          uVar8 = -uVar8;
          do {
            piVar1 = local_3c;
            local_3c = (int *)((int)piVar1 + -1);
            uVar7 = uVar8 / 10;
            *(char *)local_3c = (char)uVar8 + (char)uVar7 * -10 + '0';
            uVar8 = uVar7;
          } while (uVar7 != 0);
          local_3c = (int *)((int)piVar1 + -2);
          *(char *)local_3c = '-';
        }
        else {
          do {
            local_3c = (int *)((int)local_3c + -1);
            uVar7 = uVar8 / 10;
            *(char *)local_3c = (char)uVar8 + (char)uVar7 * -10 + '0';
            uVar8 = uVar7;
          } while (uVar7 != 0);
        }
        iVar5 = -(int)local_3c;
        pcVar9 = acStack_1b + iVar5 + 2;
        piStack_e4 = (int *)0x5b4cd5;
        piVar4 = (int *)FUN_004bfe22();
        piVar4[1] = (uint)(&uStack_15 + iVar5) & 0xfffffffc;
        local_64 = piVar4 + 2;
        *piVar4 = 0;
        local_48 = local_64;
        local_60 = local_3c;
        piVar1 = local_3c;
        while ((0 < (int)pcVar9 && (iVar5 = FUN_00443260(), piVar1 = extraout_ECX, iVar5 != 0))) {
          piStack_e4 = (int *)0x5b4d15;
          FUN_0044ecc0();
          pcVar9 = pcVar9 + -1;
          piVar1 = extraout_ECX_00;
        }
        *(undefined1 *)local_48 = 0;
        local_8._0_1_ = 3;
        uVar8 = local_4c + 1;
        local_3c = (int *)&piStack_e4;
        local_54 = local_44;
        piVar6 = (int *)(local_44 + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          *piVar6 = *piVar6 + 1;
          UNLOCK();
        }
        piStack_e4 = piVar1;
        local_4c = uVar8;
        FUN_006377c0(local_44);
        FUN_00637730();
        piStack_e4 = (int *)0x5b4d77;
        FUN_006377c0();
        local_8._0_1_ = 5;
        if (piVar4 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            piStack_e4 = (int *)0x5b4da6;
            FID_conflict__free(piVar4);
          }
        }
        piVar1 = (int *)(local_40 + -8);
        if (piVar1 != &DAT_00bfe124) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        piStack_e4 = (int *)0x5b4dd8;
        FUN_00637730();
        local_8._0_1_ = 6;
        piStack_e4 = (int *)0x5b4dea;
        FUN_00636040();
        local_8 = CONCAT31(local_8._1_3_,7);
        piStack_e4 = &local_70;
        piVar1 = (int *)FUN_00635a10();
        piVar4 = local_6c;
        iVar5 = *local_6c;
        *local_6c = *piVar1;
        *piVar1 = iVar5;
        piVar1 = (int *)(local_70 + -8);
        if (piVar1 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            piStack_e4 = (int *)0x5b4e4b;
            FID_conflict__free(piVar1);
          }
        }
        piVar1 = (int *)(local_74 + -8);
        if (piVar1 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            piStack_e4 = (int *)0x5b4e7a;
            FID_conflict__free(piVar1);
          }
        }
        local_8._0_1_ = 5;
        piVar1 = local_58 + -2;
        if (piVar1 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            piStack_e4 = (int *)0x5b4ead;
            FID_conflict__free(piVar1);
          }
        }
        if (*(char *)*piVar4 == '\0') break;
        puVar2 = (undefined4 *)FUN_00458890();
        piStack_e4 = (int *)0x5b4ecc;
        DVar3 = GetFileAttributesW((LPCWSTR)*puVar2);
        if ((DVar3 & 0x10) != 0) break;
        local_8 = CONCAT31(local_8._1_3_,2);
        piVar1 = (int *)(local_40 + -8);
        if (piVar1 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            piStack_e4 = (int *)0x5b4f08;
            FID_conflict__free(piVar1);
          }
        }
      }
      piVar1 = (int *)(local_40 + -8);
      if (piVar1 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          piStack_e4 = (int *)0x5b4f30;
          FID_conflict__free(piVar1);
        }
      }
      piVar1 = (int *)(local_44 + -8);
      if (piVar1 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          piStack_e4 = (int *)0x5b4f53;
          FID_conflict__free(piVar1);
        }
      }
      piVar1 = (int *)(local_50 + -8);
      if (piVar1 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          piStack_e4 = (int *)0x5b4f73;
          FID_conflict__free(piVar1);
        }
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

