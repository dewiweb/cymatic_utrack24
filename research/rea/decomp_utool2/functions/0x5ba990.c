// rea decompile_all
// name: FUN_005ba990
// address: 0x5ba990
// body: available
// range: 0x5ba990-0x5bac4d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ba990(int param_1,float param_2,undefined4 param_3,float param_4,float param_5)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  int *piVar5;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  fVar1 = param_2;
  puStack_c = &LAB_00719c93;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  iVar4 = *(int *)((int)param_2 + 8);
  if (0 < iVar4) {
    do {
      param_2 = ((float)local_18 * param_5) / (float)iVar4 + param_4;
      iVar4 = local_18;
      uVar2 = FUN_00411300(&local_20);
      local_8._0_1_ = 1;
      uVar3 = extraout_ECX;
      FUN_00637690(uVar2);
      FUN_006377c0(uVar3);
      uVar3 = FUN_00637730(iVar4);
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_005ba670(uVar3);
      piVar5 = (int *)(local_1c + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      local_8 = local_8 & 0xffffff00;
      piVar5 = (int *)(local_20 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      iVar4 = FUN_0054ac90(&param_1);
      if (iVar4 == 1) {
        uVar3 = FUN_00411300(&local_38);
        local_8._0_1_ = 3;
        uVar3 = FUN_00637690(uVar3);
        local_8 = CONCAT31(local_8._1_3_,4);
        FUN_005ba670(uVar3);
        piVar5 = (int *)(local_34 + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar4 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar4 == 0) {
            FID_conflict__free(piVar5);
          }
        }
        local_8 = local_8 & 0xffffff00;
        iVar4 = local_38;
LAB_005babe8:
        piVar5 = (int *)(iVar4 + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar4 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar4 == 0) {
            FID_conflict__free(piVar5);
          }
        }
      }
      else {
        if (iVar4 == 2) {
          uVar3 = FUN_00411300(&local_30);
          local_8._0_1_ = 5;
          uVar3 = FUN_00637690(uVar3);
          local_8 = CONCAT31(local_8._1_3_,6);
          FUN_005ba670(uVar3);
          piVar5 = (int *)(local_2c + -8);
          if (piVar5 != &DAT_00bfe124) {
            LOCK();
            iVar4 = *piVar5;
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (iVar4 == 0) {
              FID_conflict__free(piVar5);
            }
          }
          local_8 = local_8 & 0xffffff00;
          iVar4 = local_30;
          goto LAB_005babe8;
        }
        if (iVar4 == 3) {
          uVar3 = FUN_00411300(&local_28);
          local_8._0_1_ = 7;
          uVar3 = FUN_00637690(uVar3);
          local_8 = CONCAT31(local_8._1_3_,8);
          FUN_005ba670(uVar3);
          piVar5 = (int *)(local_24 + -8);
          if (piVar5 != &DAT_00bfe124) {
            LOCK();
            iVar4 = *piVar5;
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (iVar4 == 0) {
              FID_conflict__free(piVar5);
            }
          }
          local_8 = local_8 & 0xffffff00;
          iVar4 = local_28;
          goto LAB_005babe8;
        }
      }
      iVar4 = *(int *)((int)fVar1 + 8);
      local_18 = local_18 + 1;
    } while (local_18 < iVar4);
  }
  piVar5 = (int *)(param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  ExceptionList = local_10;
  return;
}

