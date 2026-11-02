// rea decompile_all
// name: FUN_00541b50
// address: 0x541b50
// body: available
// range: 0x541b50-0x541ce4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00541b50(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int in_ECX;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e822;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar4 = (int *)(in_ECX + 0x20);
  piVar2 = (int *)(*param_1 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  LOCK();
  iVar3 = *piVar4;
  *piVar4 = *param_1;
  UNLOCK();
  piVar2 = (int *)(iVar3 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  if (*(undefined **)(in_ECX + 0x70) != PTR_DAT_00c7ed54) {
    iVar3 = FUN_0045c1e0(*(undefined4 *)(in_ECX + 0x70));
    if (iVar3 != 0) {
      FUN_0045c990();
      local_8 = 0;
      piVar4 = (int *)(*piVar4 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        *piVar4 = *piVar4 + 1;
        UNLOCK();
      }
      FUN_00637730();
      local_8._0_1_ = 1;
      FUN_00636040();
      local_8 = CONCAT31(local_8._1_3_,2);
      puVar5 = (undefined4 *)FUN_00635a10(&local_14);
      uVar1 = *(undefined4 *)(in_ECX + 0x70);
      *(undefined4 *)(in_ECX + 0x70) = *puVar5;
      *puVar5 = uVar1;
      piVar4 = (int *)(local_14 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      piVar4 = (int *)(local_18 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      piVar4 = (int *)(local_1c + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      param_1 = param_1 + -2;
      if (param_1 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *param_1;
        *param_1 = *param_1 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(param_1);
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}

