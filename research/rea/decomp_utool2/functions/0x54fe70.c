// rea decompile_all
// name: FUN_0054fe70
// address: 0x54fe70
// body: available
// range: 0x54fe70-0x55007c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054fe70(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int in_ECX;
  int *piVar4;
  undefined4 *local_20;
  int local_1c;
  int local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00710480;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = *(int *)(in_ECX + 8);
  if (iVar1 == 2) {
    local_8 = 0;
    FUN_00410ea0();
    local_8 = CONCAT31(local_8._1_3_,1);
    puVar3 = (undefined4 *)FUN_0055ef00();
    uVar2 = *(undefined4 *)(in_ECX + 0x30);
    *(undefined4 *)(in_ECX + 0x30) = *puVar3;
    *puVar3 = uVar2;
    if (local_20 != (undefined4 *)0x0) {
      LOCK();
      piVar4 = local_20 + 1;
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)*local_20)();
      }
    }
    local_8 = local_8 & 0xffffff00;
    piVar4 = (int *)(local_1c + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    FUN_0054f850();
    FUN_0040f7f0();
    FID_conflict__free((void *)0x0);
  }
  else {
    if (iVar1 == 3) {
      FUN_00410ea0(&stack0xffffffc4);
      puVar3 = (undefined4 *)FUN_00548e50();
      uVar2 = *(undefined4 *)(in_ECX + 0x34);
      *(undefined4 *)(in_ECX + 0x34) = *puVar3;
      *puVar3 = uVar2;
      if (local_20 != (undefined4 *)0x0) {
        LOCK();
        piVar4 = local_20 + 1;
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          (**(code **)*local_20)();
        }
      }
      FUN_00550080();
      ExceptionList = local_10;
      return;
    }
    if (iVar1 == 4) {
      FUN_00410ea0();
      local_8 = 2;
      FUN_00411070();
      local_8 = CONCAT31(local_8._1_3_,3);
      puVar3 = (undefined4 *)FUN_00556c30();
      uVar2 = *(undefined4 *)(in_ECX + 0x38);
      *(undefined4 *)(in_ECX + 0x38) = *puVar3;
      *puVar3 = uVar2;
      if (local_14 != (undefined4 *)0x0) {
        LOCK();
        piVar4 = local_14 + 1;
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          (**(code **)*local_14)();
        }
      }
      piVar4 = (int *)(local_18 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      local_8 = 0xffffffff;
      piVar4 = (int *)(local_1c + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      FUN_00550120();
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = local_10;
  return;
}

