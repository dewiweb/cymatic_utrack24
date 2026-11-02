// rea decompile_all
// name: FUN_00589c10
// address: 0x589c10
// body: available
// range: 0x589c10-0x589dd9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00589c10(void)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  DWORD DVar7;
  int in_ECX;
  int *piVar8;
  code *pcVar9;
  int iVar10;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071399e;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar10 = 0;
  pcVar9 = GetFileAttributesW_exref;
  if (0 < *(int *)(in_ECX + 8)) {
    do {
      puVar4 = (undefined4 *)FUN_0040f6b0(&local_18,iVar10);
      local_8 = 0;
      if (*(char *)*puVar4 == '\0') {
LAB_00589c80:
        bVar2 = false;
      }
      else {
        puVar4 = (undefined4 *)FUN_00458890(uVar3);
        uVar5 = (*pcVar9)(*puVar4);
        if ((uVar5 & 0x10) != 0) goto LAB_00589c80;
        bVar2 = true;
      }
      piVar8 = (int *)(local_18 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      if (bVar2) {
        FUN_0040f6b0(&local_1c,iVar10);
        local_8 = 1;
        FUN_00635980();
        piVar8 = (int *)(local_1c + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar8);
          }
        }
      }
      uVar6 = FUN_0040f6b0(&local_20,iVar10);
      local_8 = 2;
      FUN_00589a80(&local_14,uVar6);
      local_8._0_1_ = 4;
      piVar8 = (int *)(local_20 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      pcVar9 = GetFileAttributesW_exref;
      if (*local_14 != '\0') {
        puVar4 = (undefined4 *)FUN_00458890();
        pcVar9 = GetFileAttributesW_exref;
        DVar7 = GetFileAttributesW((LPCWSTR)*puVar4);
        if ((DVar7 & 0x10) == 0) {
          uVar6 = FUN_0040f6b0(&local_24,iVar10);
          local_8 = CONCAT31(local_8._1_3_,5);
          FUN_006331e0(uVar6);
          piVar8 = (int *)(local_24 + -8);
          if (piVar8 != &DAT_00bfe124) {
            LOCK();
            iVar1 = *piVar8;
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (iVar1 == 0) {
              FID_conflict__free(piVar8);
            }
          }
        }
      }
      local_8 = 0xffffffff;
      piVar8 = (int *)(local_14 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(in_ECX + 8));
  }
  ExceptionList = local_10;
  return;
}

