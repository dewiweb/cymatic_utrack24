// rea decompile_all
// name: FUN_00506f00
// address: 0x506f00
// body: available
// range: 0x506f00-0x5070c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00506f00(int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int in_ECX;
  undefined4 extraout_ECX;
  int *piVar5;
  undefined4 uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00707ec3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_1 == in_ECX + 0xf0) {
    FUN_006e1bb0(in_ECX + 0xc,in_ECX + 0x10,in_ECX + 0x14,1,0);
    local_8 = 0;
    if (*(char *)(in_ECX + 0x18) == '\0') {
      uVar6 = 5;
    }
    else {
      uVar6 = 9;
    }
    cVar2 = FUN_006b7db0(uVar6,extraout_ECX);
    if (cVar2 != '\0') {
      piVar3 = (int *)FUN_006e19a0(&param_1);
      local_8 = CONCAT31(local_8._1_3_,1);
      piVar4 = (int *)(in_ECX + 0x10);
      piVar5 = (int *)(*piVar3 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        UNLOCK();
      }
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar3;
      UNLOCK();
      piVar3 = (int *)(iVar1 + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar3);
        }
      }
      FUN_006e4900(piVar4,0);
      (**(code **)(**(int **)(in_ECX + 0x1c) + 4))(in_ECX + -0x70);
      piVar4 = (int *)(param_1 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar4);
        }
      }
    }
    FUN_006e1b20();
    ExceptionList = local_10;
    return;
  }
  if (param_1 == in_ECX + 0x224) {
    piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x1c) + 8))
                              (&param_1,DAT_00c76070 ^ (uint)&stack0xfffffffc);
    local_8 = 2;
    piVar4 = (int *)(in_ECX + 0x10);
    piVar5 = (int *)(*piVar3 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
    }
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar3;
    UNLOCK();
    piVar3 = (int *)(iVar1 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    FUN_006e4900(piVar4,0);
    (**(code **)(**(int **)(in_ECX + 0x1c) + 4))(in_ECX + -0x70);
    piVar4 = (int *)(param_1 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

