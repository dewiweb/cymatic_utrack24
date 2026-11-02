// rea decompile_all
// name: FUN_0053f320
// address: 0x53f320
// body: available
// range: 0x53f320-0x53f5b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined3 FUN_0053f320(void)

{
  int iVar1;
  undefined3 uVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  int in_ECX;
  int *piVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  undefined4 *local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e52c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar2 = 0;
  uVar6 = 0;
  local_1c = 0;
  if (0 < *(int *)(in_ECX + 0x5c)) {
    bVar7 = *(int *)(in_ECX + 0x5c) != 0;
    do {
      if ((bVar7) && (*(int *)(*(int *)(in_ECX + 0x54) + uVar6 * 4) != 0)) {
        uVar8 = FUN_00411300(&local_20);
        local_1c = (uint)((ulonglong)uVar8 >> 0x20) | 1;
        if (*(char *)*(undefined4 *)uVar8 == '\0') goto LAB_0053f397;
        bVar7 = true;
      }
      else {
LAB_0053f397:
        bVar7 = false;
      }
      if ((local_1c & 1) != 0) {
        local_1c = local_1c & 0xfffffffe;
        piVar5 = (int *)(local_20 + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar5);
          }
        }
      }
      if (bVar7) {
        puVar3 = (undefined4 *)FUN_005406d0(&local_24);
        local_8 = 0;
        if (*(char *)*puVar3 == '\0') {
LAB_0053f413:
          bVar7 = false;
        }
        else {
          puVar3 = (undefined4 *)FUN_00458890();
          DVar4 = GetFileAttributesW((LPCWSTR)*puVar3);
          if ((DVar4 & 0x10) != 0) goto LAB_0053f413;
          bVar7 = true;
        }
        local_8 = 0xffffffff;
        piVar5 = (int *)(local_24 + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar5);
          }
        }
        if (!bVar7) {
          FUN_005406d0(&local_2c);
          local_8 = 1;
          puVar3 = (undefined4 *)FUN_00636a10(&local_28);
          local_8 = CONCAT31(local_8._1_3_,2);
          FUN_00635a10(&local_14,*puVar3);
          piVar5 = (int *)(local_28 + -8);
          if (piVar5 != &DAT_00bfe124) {
            LOCK();
            iVar1 = *piVar5;
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (iVar1 == 0) {
              FID_conflict__free(piVar5);
            }
          }
          local_8._0_1_ = 5;
          piVar5 = (int *)(local_2c + -8);
          if (piVar5 != &DAT_00bfe124) {
            LOCK();
            iVar1 = *piVar5;
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (iVar1 == 0) {
              FID_conflict__free(piVar5);
            }
          }
          if (*local_14 != '\0') {
            puVar3 = (undefined4 *)FUN_00458890();
            DVar4 = GetFileAttributesW((LPCWSTR)*puVar3);
            if ((DVar4 & 0x10) == 0) {
              piVar5 = (int *)(local_14 + -8);
              if (piVar5 != &DAT_00bfe124) {
                LOCK();
                *piVar5 = *piVar5 + 1;
                UNLOCK();
              }
              FUN_00548e50(local_14);
              local_8 = CONCAT31(local_8._1_3_,6);
              if (local_18 != (undefined4 *)0x0) {
                LOCK();
                local_18[1] = local_18[1] + 1;
                UNLOCK();
              }
              FUN_0053aef0(local_18);
              uVar2 = 1;
              if (local_18 != (undefined4 *)0x0) {
                LOCK();
                piVar5 = local_18 + 1;
                iVar1 = *piVar5;
                *piVar5 = *piVar5 + -1;
                UNLOCK();
                if (iVar1 == 1) {
                  (**(code **)*local_18)(1);
                }
              }
            }
          }
          local_8 = 0xffffffff;
          piVar5 = (int *)(local_14 + -8);
          if (piVar5 != &DAT_00bfe124) {
            LOCK();
            iVar1 = *piVar5;
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (iVar1 == 0) {
              FID_conflict__free(piVar5);
            }
          }
        }
      }
      uVar6 = uVar6 + 1;
      bVar7 = uVar6 < *(uint *)(in_ECX + 0x5c);
    } while ((int)uVar6 < (int)*(uint *)(in_ECX + 0x5c));
  }
  ExceptionList = local_10;
  return uVar2;
}

