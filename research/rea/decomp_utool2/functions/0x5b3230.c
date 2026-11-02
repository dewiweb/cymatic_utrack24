// rea decompile_all
// name: FUN_005b3230
// address: 0x5b3230
// body: available
// range: 0x5b3230-0x5b351f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b3230(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  int *in_ECX;
  uint uVar6;
  int *in_EDX;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  int local_68;
  int local_64;
  int local_60;
  int local_50;
  int local_4c;
  int local_44;
  char acStack_1b [7];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00719064;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar2 = *in_EDX;
  *in_ECX = iVar2;
  piVar4 = (int *)(iVar2 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  piVar4 = (int *)(*in_EDX + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  cVar3 = FUN_005b5020();
  if (cVar3 != '\0') {
    FUN_00636a10();
    local_8 = 1;
    uVar8 = 1;
    piVar4 = (int *)(local_4c + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    FUN_006377c0();
    local_8._0_1_ = 2;
    while( true ) {
      FUN_00636040();
      local_8 = CONCAT31(local_8._1_3_,3);
      piVar5 = (int *)FUN_00635a10();
      iVar2 = *in_ECX;
      *in_ECX = *piVar5;
      *piVar5 = iVar2;
      piVar5 = (int *)(local_60 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      local_8._0_1_ = 2;
      piVar5 = (int *)(local_64 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      piVar5 = (int *)(*in_ECX + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        UNLOCK();
      }
      cVar3 = FUN_005b5020();
      if (cVar3 == '\0') break;
      uVar8 = uVar8 + 1;
      acStack_1b[2] = 0;
      if ((int)uVar8 < 0) {
        uVar6 = -uVar8;
        pcVar9 = acStack_1b + 2;
        do {
          pcVar10 = pcVar9;
          pcVar9 = pcVar10 + -1;
          uVar7 = uVar6 / 10;
          *pcVar9 = (char)uVar6 + (char)uVar7 * -10 + '0';
          uVar6 = uVar7;
        } while (uVar7 != 0);
        pcVar10[-2] = '-';
      }
      else {
        pcVar9 = acStack_1b + 2;
        uVar6 = uVar8;
        do {
          pcVar9 = pcVar9 + -1;
          uVar7 = uVar6 / 10;
          *pcVar9 = (char)uVar6 + (char)uVar7 * -10 + '0';
          uVar6 = uVar7;
        } while (uVar7 != 0);
      }
      FUN_004557e0();
      local_8 = CONCAT31(local_8._1_3_,4);
      piVar5 = (int *)(local_4c + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        UNLOCK();
      }
      FUN_006377c0(local_4c);
      FUN_00637730();
      piVar5 = (int *)FUN_006377c0();
      iVar2 = *piVar5;
      *piVar5 = local_44;
      piVar5 = (int *)(local_68 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      local_8._0_1_ = 2;
      piVar5 = (int *)(local_50 + -8);
      local_44 = iVar2;
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar5);
        }
      }
    }
    piVar5 = (int *)(local_44 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar4);
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

