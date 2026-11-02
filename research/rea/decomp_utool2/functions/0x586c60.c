// rea decompile_all
// name: FUN_00586c60
// address: 0x586c60
// body: available
// range: 0x586c60-0x586fee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00586c60(undefined4 *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int local_5c;
  int local_58;
  void *local_54;
  void *local_4c;
  int local_44;
  void *local_40;
  int local_38;
  void *local_34;
  int local_2c;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  uint local_c;
  char local_5;
  
  local_c = 0;
  local_24 = in_ECX;
  local_18 = FUN_006311d0();
  local_10 = 0;
  if (0 < *(int *)(in_ECX + 0x28)) {
    local_14 = in_ECX + 0x20;
    uVar5 = 0;
    do {
      puVar2 = (undefined4 *)FUN_0041a2b0(&local_5c);
      local_5 = *(char *)*puVar2;
      while (0 < local_2c) {
        local_2c = local_2c + -1;
        puVar2 = *(undefined4 **)((int)local_34 + local_2c * 4);
        if (puVar2 != (undefined4 *)0x0) {
          LOCK();
          piVar4 = puVar2 + 1;
          iVar6 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)*puVar2)();
          }
        }
      }
      FID_conflict__free(local_34);
      iVar6 = 0;
      if (0 < local_38) {
        do {
          piVar4 = (int *)(*(int *)((int)local_40 + iVar6 * 4) + -8);
          if (piVar4 != &DAT_00bfe124) {
            LOCK();
            iVar3 = *piVar4;
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (iVar3 == 0) {
              FID_conflict__free(piVar4);
            }
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < local_38);
      }
      FID_conflict__free(local_40);
      iVar6 = 0;
      if (0 < local_44) {
        do {
          piVar4 = (int *)(*(int *)((int)local_4c + iVar6 * 4) + -8);
          if (piVar4 != &DAT_00bfe124) {
            LOCK();
            iVar3 = *piVar4;
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (iVar3 == 0) {
              FID_conflict__free(piVar4);
            }
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < local_44);
      }
      FID_conflict__free(local_4c);
      FID_conflict__free(local_54);
      piVar4 = (int *)(local_58 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      piVar4 = (int *)(local_5c + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      if (local_5 == '\0') {
LAB_00586f9f:
        FUN_0041a2b0(&local_5c);
        FUN_006310b0();
        FUN_00636570();
        piVar4 = (int *)(local_5c + -8);
        if (piVar4 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            FID_conflict__free(piVar4);
          }
        }
        return param_1;
      }
      FUN_0045c990();
      piVar4 = (int *)FUN_0041a2b0(&local_5c);
      iVar6 = local_1c;
      local_c = uVar5 | 6;
      if (((*piVar4 == local_1c) || (iVar3 = FUN_0045c1e0(*piVar4), iVar3 == 0)) &&
         ((local_18 & 0x200) != 0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      local_c = local_c & 0xfffffffb;
      FUN_00636570();
      piVar4 = (int *)(local_5c + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      local_c = local_c & 0xfffffffd;
      piVar4 = (int *)(iVar6 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      if (bVar1) goto LAB_00586f9f;
      FUN_0045c990();
      piVar4 = (int *)FUN_0041a2b0(&local_5c);
      iVar6 = local_20;
      local_c = local_c | 0x18;
      if (((*piVar4 == local_20) || (iVar3 = FUN_0045c1e0(*piVar4), iVar3 == 0)) &&
         ((local_18 & 0x100) != 0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      local_c = local_c & 0xffffffef;
      FUN_00636570();
      piVar4 = (int *)(local_5c + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      local_c = local_c & 0xfffffff7;
      piVar4 = (int *)(iVar6 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      if (bVar1) goto LAB_00586f9f;
      local_10 = local_10 + 1;
      uVar5 = local_c;
    } while (local_10 < *(int *)(local_24 + 0x28));
  }
  *param_1 = &DAT_00bfe12c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}

