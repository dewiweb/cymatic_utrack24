// rea decompile_all
// name: FUN_005bd270
// address: 0x5bd270
// body: available
// range: 0x5bd270-0x5bd4a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005bd270(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071a0c7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_0045c990();
  if (param_1 == local_14) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0045c1e0(param_1);
  }
  piVar3 = (int *)(local_14 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  if (iVar2 == 0) {
    uVar4 = 2;
  }
  else {
    FUN_0045c990();
    if (param_1 == local_14) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_0045c1e0(param_1);
    }
    piVar3 = (int *)(local_14 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    else {
      FUN_0045c990();
      if (param_1 == local_14) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_0045c1e0(param_1);
      }
      piVar3 = (int *)(local_14 + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar3);
        }
      }
      if (iVar2 == 0) {
        uVar4 = 4;
      }
      else {
        FUN_0045c990();
        if (param_1 == local_14) {
          iVar2 = 0;
        }
        else {
          iVar2 = FUN_0045c1e0(param_1);
        }
        piVar3 = (int *)(local_14 + -8);
        if (piVar3 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar3);
          }
        }
        if (iVar2 == 0) {
          uVar4 = 3;
        }
        else {
          FUN_0045c990();
          if (param_1 == local_14) {
            iVar2 = 0;
          }
          else {
            iVar2 = FUN_0045c1e0(param_1);
          }
          FUN_00637c10();
          if (iVar2 == 0) {
            uVar4 = 5;
          }
          else {
            uVar4 = 0;
          }
        }
      }
    }
  }
  piVar3 = (int *)(param_1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  ExceptionList = local_10;
  return uVar4;
}

