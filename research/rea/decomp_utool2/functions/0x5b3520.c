// rea decompile_all
// name: FUN_005b3520
// address: 0x5b3520
// body: available
// range: 0x5b3520-0x5b388b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b3520(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  int *in_ECX;
  uint uVar5;
  undefined4 extraout_ECX;
  int *in_EDX;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 uVar9;
  int local_6c;
  int local_68;
  int local_64 [2];
  undefined4 local_5c;
  int local_58;
  int local_54;
  uint local_50;
  int *local_4c;
  int *local_44;
  int local_40;
  int local_3c;
  char acStack_1b [7];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007190d2;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = *in_EDX;
  *in_ECX = iVar1;
  piVar2 = (int *)(iVar1 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  local_5c = 1;
  if (*(char *)*in_EDX != '\0') {
    local_4c = in_ECX;
    local_44 = in_ECX;
    puVar3 = (undefined4 *)FUN_00458890(local_14);
    DVar4 = GetFileAttributesW((LPCWSTR)*puVar3);
    if ((DVar4 & 0x10) == 0) {
      FUN_006360d0(&local_58);
      local_8 = 1;
      FUN_006369b0(&local_40);
      local_8._0_1_ = 2;
      local_50 = 1;
      piVar2 = (int *)(local_40 + -8);
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      FUN_006377c0(local_40);
      local_8._0_1_ = 3;
      while( true ) {
        piVar2 = (int *)(local_3c + -8);
        if (piVar2 != &DAT_00bfe124) {
          LOCK();
          *piVar2 = *piVar2 + 1;
          UNLOCK();
        }
        puVar3 = (undefined4 *)FUN_00637730(local_3c);
        local_8._0_1_ = 4;
        FUN_00636040(&local_68);
        local_8 = CONCAT31(local_8._1_3_,5);
        piVar2 = (int *)FUN_00635a10(local_64,*puVar3);
        iVar1 = *in_ECX;
        *in_ECX = *piVar2;
        *piVar2 = iVar1;
        piVar2 = (int *)(local_64[0] + -8);
        if (piVar2 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar2);
          }
        }
        piVar2 = (int *)(local_68 + -8);
        if (piVar2 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar2);
          }
        }
        local_8._0_1_ = 3;
        piVar2 = (int *)(local_6c + -8);
        if (piVar2 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar2);
          }
        }
        if (*(char *)*in_ECX == '\0') break;
        puVar3 = (undefined4 *)FUN_00458890();
        DVar4 = GetFileAttributesW((LPCWSTR)*puVar3);
        if ((DVar4 & 0x10) != 0) break;
        pcVar7 = acStack_1b + 2;
        local_50 = local_50 + 1;
        acStack_1b[2] = 0;
        uVar5 = local_50;
        if ((int)local_50 < 0) {
          uVar5 = -local_50;
          do {
            pcVar8 = pcVar7;
            pcVar7 = pcVar8 + -1;
            uVar6 = uVar5 / 10;
            *pcVar7 = (char)uVar5 + (char)uVar6 * -10 + '0';
            uVar5 = uVar6;
          } while (uVar6 != 0);
          pcVar7 = pcVar8 + -2;
          *pcVar7 = '-';
        }
        else {
          do {
            pcVar7 = pcVar7 + -1;
            uVar6 = uVar5 / 10;
            *pcVar7 = (char)uVar5 + (char)uVar6 * -10 + '0';
            uVar5 = uVar6;
          } while (uVar6 != 0);
        }
        pcVar7 = acStack_1b + (2 - (int)pcVar7);
        FUN_004557e0(pcVar7);
        local_8 = CONCAT31(local_8._1_3_,6);
        piVar2 = (int *)(local_40 + -8);
        if (piVar2 != &DAT_00bfe124) {
          LOCK();
          *piVar2 = *piVar2 + 1;
          UNLOCK();
        }
        uVar9 = extraout_ECX;
        FUN_006377c0(local_40);
        FUN_00637730(uVar9);
        piVar2 = (int *)FUN_006377c0(pcVar7);
        iVar1 = *piVar2;
        *piVar2 = local_3c;
        piVar2 = local_44 + -2;
        local_3c = iVar1;
        if (piVar2 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar2);
          }
        }
        in_ECX = local_4c;
        local_8._0_1_ = 3;
        piVar2 = (int *)(local_54 + -8);
        if (piVar2 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar2);
          }
        }
      }
      piVar2 = (int *)(local_3c + -8);
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar2);
        }
      }
      piVar2 = (int *)(local_40 + -8);
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar2);
        }
      }
      piVar2 = (int *)(local_58 + -8);
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar2);
        }
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

