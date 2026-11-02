// rea decompile_all
// name: FUN_0058d090
// address: 0x58d090
// body: available
// range: 0x58d090-0x58d388 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058d090(void)

{
  int *piVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  int in_ECX;
  int iVar4;
  void *local_2c;
  undefined4 local_28;
  int local_24;
  int local_1c;
  int local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00713ebe;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)(*(int *)(in_ECX + 0x18) + -8);
  if (piVar1 != &DAT_00bfe124) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_005bd0c0();
  iVar4 = *(int *)(*(int *)(in_ECX + 0xdc) + 0x30);
  if (iVar4 == 2) {
    if (*(char *)(in_ECX + 0xe0) == '\0') {
      local_2c = (void *)0x0;
      local_28 = 0;
      local_24 = 0;
      local_8 = 3;
      FUN_0045c990();
      local_8._0_1_ = 4;
      FUN_0058e5c0(&local_1c);
      local_8 = CONCAT31(local_8._1_3_,5);
      FUN_00635ea0(&local_2c,2,0);
      piVar1 = (int *)(local_1c + -8);
      if (piVar1 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar1);
        }
      }
      local_8 = CONCAT31(local_8._1_3_,3);
      piVar1 = (int *)(local_14 + -8);
      if (piVar1 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar1);
        }
      }
      iVar4 = 0;
      if (0 < local_24) {
        do {
          FUN_0040f6b0(&stack0xffffffc0,iVar4);
          FUN_00589de0();
          iVar4 = iVar4 + 1;
        } while (iVar4 < local_24);
      }
      FUN_0040f7f0();
      FID_conflict__free(local_2c);
      ExceptionList = local_10;
      return;
    }
    if (**(char **)(in_ECX + 0x14) != '\0') {
      puVar2 = (undefined4 *)FUN_00458890();
      DVar3 = GetFileAttributesW((LPCWSTR)*puVar2);
      if ((DVar3 & 0x10) == 0) {
        piVar1 = (int *)(*(int *)(in_ECX + 0x14) + -8);
        if (piVar1 != &DAT_00bfe124) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        FUN_00589de0();
      }
    }
    FUN_00410af0();
    local_8 = 0;
    if (*local_14 != '\0') {
      puVar2 = (undefined4 *)FUN_00458890();
      DVar3 = GetFileAttributesW((LPCWSTR)*puVar2);
      if ((DVar3 & 0x10) == 0) {
        puVar2 = (undefined4 *)FUN_00636a10();
        local_8._0_1_ = 1;
        FUN_0058e5c0(&local_18);
        local_8 = CONCAT31(local_8._1_3_,2);
        FUN_00635a10(&stack0xffffffc0,*puVar2);
        FUN_00589de0();
        piVar1 = (int *)(local_18 + -8);
        if (piVar1 != &DAT_00bfe124) {
          LOCK();
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 0) {
            FID_conflict__free(piVar1);
          }
        }
        piVar1 = (int *)(local_1c + -8);
        if (piVar1 != &DAT_00bfe124) {
          LOCK();
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 0) {
            FID_conflict__free(piVar1);
          }
        }
      }
    }
    piVar1 = (int *)(local_14 + -8);
    if (piVar1 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar1);
        ExceptionList = local_10;
        return;
      }
    }
  }
  else if (((iVar4 == 1) && (*(int *)(in_ECX + 0xe4) < 2)) && (**(char **)(in_ECX + 0x14) != '\0'))
  {
    puVar2 = (undefined4 *)FUN_00458890();
    DVar3 = GetFileAttributesW((LPCWSTR)*puVar2);
    if ((DVar3 & 0x10) == 0) {
      piVar1 = (int *)(*(int *)(in_ECX + 0x14) + -8);
      if (piVar1 != &DAT_00bfe124) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      FUN_00589de0();
    }
  }
  ExceptionList = local_10;
  return;
}

