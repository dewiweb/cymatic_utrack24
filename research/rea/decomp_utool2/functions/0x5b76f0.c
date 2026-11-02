// rea decompile_all
// name: FUN_005b76f0
// address: 0x5b76f0
// body: available
// range: 0x5b76f0-0x5b79d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b76f0(void)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  int local_60;
  void *local_5c;
  undefined4 local_58;
  int local_54;
  undefined1 *local_50;
  int local_4c;
  undefined1 *local_48;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007197b8;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(char *)(in_ECX + 0xc0) != '\0') {
    puVar3 = (undefined4 *)FUN_006360d0();
    iVar4 = FUN_00448730(*puVar3);
    piVar5 = (int *)(local_48 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    if (iVar4 == 0) {
      FUN_006369b0();
      local_8 = 0;
      FUN_00636040();
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_00635a10(&local_50);
      piVar5 = (int *)(local_48 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      local_8 = CONCAT31(local_8._1_3_,4);
      piVar5 = (int *)(local_60 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      FUN_00634890();
      piVar5 = (int *)(local_4c + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      FUN_0062d860();
      local_8 = CONCAT31(local_8._1_3_,5);
      puVar3 = (undefined4 *)FUN_0062d760(&local_4c,&local_50);
      piVar5 = (int *)(local_4c + -8);
      cVar2 = *(char *)*puVar3;
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      if (cVar2 == '\0') {
        local_5c = (void *)0x0;
        local_58 = 0;
        local_54 = 0;
        local_8._0_1_ = 6;
        FUN_0045c990();
        local_8 = CONCAT31(local_8._1_3_,7);
        FUN_00635ea0(&local_5c,2,0);
        piVar5 = (int *)(local_48 + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar4 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar4 == 0) {
            FID_conflict__free(piVar5);
          }
        }
        if (0 < local_54) {
          local_48 = &DAT_00bfe12c;
          FUN_0040f6b0(&local_4c);
          local_8 = CONCAT31(local_8._1_3_,9);
          FUN_00634440();
          FUN_0040ea50();
          FUN_00637c10();
        }
        FUN_0040f7f0();
        FID_conflict__free(local_5c);
      }
      FUN_0062d7f0();
    }
    else {
      local_48 = &DAT_00bfe12c;
      local_8 = 10;
      FUN_00634440();
      local_50 = local_48;
    }
    local_8 = 0xffffffff;
    piVar5 = (int *)(local_50 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    if (DAT_00c8a658 == 0) {
      operator_new(0x28);
      DAT_00c8a658 = FUN_0063dab0();
      FUN_0063c010();
    }
    FUN_0063d870();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

