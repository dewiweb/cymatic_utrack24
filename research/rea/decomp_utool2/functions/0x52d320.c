// rea decompile_all
// name: FUN_0052d320
// address: 0x52d320
// body: available
// range: 0x52d320-0x52d7df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052d320(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  int in_ECX;
  bool bVar7;
  undefined4 uVar8;
  undefined4 *local_48;
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined4 *local_34;
  int local_30;
  int local_2c;
  undefined4 *local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  undefined1 local_18 [7];
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_0070c844;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    operator_new(0x70);
    puVar4 = (undefined4 *)FUN_00530550();
    puVar2 = *(undefined4 **)(in_ECX + 0xe4);
    if ((puVar2 != puVar4) &&
       (*(undefined4 **)(in_ECX + 0xe4) = puVar4, puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)();
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    local_1c = CONCAT31(local_1c._1_3_,(char)(*(uint *)(in_ECX + 0xd8) >> 2)) & 0xffffff01;
    local_20 = CONCAT31(local_20._1_3_,(char)(*(uint *)(in_ECX + 0xd8) >> 3)) & 0xffffff01;
    local_24 = 0;
    if (0 < (int)param_2[0x16]) {
      do {
        FUN_00411090(&local_28);
        puVar2 = local_28;
        local_8._0_1_ = 1;
        switch(local_28[2]) {
        case 1:
          FUN_004144b0();
          local_8 = CONCAT31(local_8._1_3_,2);
          puVar4 = (undefined4 *)FUN_00636a10();
          local_34 = (undefined4 *)FUN_00448730(*puVar4);
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
          local_8._0_1_ = 1;
          piVar5 = (int *)(local_30 + -8);
          if (piVar5 != &DAT_00bfe124) {
            LOCK();
            iVar1 = *piVar5;
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (iVar1 == 0) {
              FID_conflict__free(piVar5);
            }
          }
          iVar1 = DAT_00c8a8e8;
          if (local_34 == (undefined4 *)0x0) {
            if ((*(byte *)(in_ECX + 0xd4) & 0xc) != 0) {
              local_11 = *(int *)(in_ECX + 0xdc) == 5;
              if (*(int *)(in_ECX + 0xdc) != 5) {
                uVar6 = 0;
                piVar5 = (int *)(DAT_00c8a8e8 + -8);
                if (piVar5 != &DAT_00bfe124) {
                  LOCK();
                  *piVar5 = *piVar5 + 1;
                  UNLOCK();
                }
                puVar4 = (undefined4 *)FUN_006377c0(iVar1);
                uVar8 = 0x52d4ca;
                FUN_004144b0(local_3c);
                local_8._0_1_ = 4;
                FUN_00634090(local_38,DAT_00c8a8e8,uVar8,1);
                local_8._0_1_ = 5;
                FUN_00633de0(local_18,*puVar4,uVar6);
                FUN_00637c10();
                FUN_0040ea50();
                local_8._0_1_ = 1;
                FUN_00637c10();
                cVar3 = FUN_00633e80();
                if (cVar3 == '\0') {
                  cVar3 = FUN_00633e80();
                  if (cVar3 == '\0') {
                    cVar3 = FUN_00633e80();
                    if (cVar3 != '\0') goto LAB_0052d56f;
                    cVar3 = FUN_00634f60();
                    if (cVar3 == '\0') goto LAB_0052d591;
                  }
                  local_11 = *(int *)(in_ECX + 0xdc) == 3;
                }
                else if ((*(int *)(in_ECX + 0xdc) == 1) || (*(int *)(in_ECX + 0xdc) == 2)) {
LAB_0052d56f:
                  local_11 = '\x01';
                }
                else {
                  local_11 = '\0';
                }
LAB_0052d591:
                FUN_00637c10();
              }
              if (local_11 != '\0') {
                operator_new(0x70);
                local_8._0_1_ = 6;
                piVar5 = puVar2 + 1;
                LOCK();
                *piVar5 = *piVar5 + 1;
                UNLOCK();
                uVar6 = FUN_00530b80(puVar2,local_20);
                local_8._0_1_ = 1;
                FUN_006e0040(uVar6);
                LOCK();
                *piVar5 = *piVar5 + 1;
                UNLOCK();
                FUN_0052d320(uVar6);
              }
            }
          }
          else {
            operator_new(0x70);
            local_8._0_1_ = 7;
            piVar5 = puVar2 + 1;
            LOCK();
            *piVar5 = *piVar5 + 1;
            UNLOCK();
            puVar4 = (undefined4 *)FUN_00530b80(puVar2,local_20);
            local_8._0_1_ = 1;
            LOCK();
            *piVar5 = *piVar5 + 1;
            UNLOCK();
            local_34 = puVar4;
            FUN_0052d320(puVar4);
            if (puVar4[5] == 0) {
              (**(code **)*puVar4)();
            }
            else {
              FUN_006e0040(puVar4);
            }
          }
          break;
        case 2:
          if ((*(byte *)(in_ECX + 0xd4) & 1) == 0) break;
          if (*(int *)(in_ECX + 0xdc) == 5) goto LAB_0052d6f7;
          piVar5 = (int *)FUN_0040ebb0();
          local_34 = *(undefined4 **)(*piVar5 + 0x40);
          if (local_48 != (undefined4 *)0x0) {
            LOCK();
            piVar5 = local_48 + 1;
            iVar1 = *piVar5;
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (iVar1 == 1) {
              (**(code **)*local_48)();
            }
          }
          switch(local_34) {
          case (undefined4 *)0x1:
          case (undefined4 *)0x2:
            if (*(int *)(in_ECX + 0xdc) != 1) {
              bVar7 = *(int *)(in_ECX + 0xdc) == 2;
LAB_0052d6f1:
              if (!bVar7) break;
            }
            goto LAB_0052d6f7;
          case (undefined4 *)0x3:
            if (*(int *)(in_ECX + 0xdc) != 3) {
              bVar7 = *(int *)(in_ECX + 0xdc) == 4;
              goto LAB_0052d6f1;
            }
LAB_0052d6f7:
            operator_new(0x70);
            local_8 = CONCAT31(local_8._1_3_,8);
            LOCK();
            puVar2[1] = puVar2[1] + 1;
            UNLOCK();
            uVar6 = FUN_00531000(puVar2,local_20);
LAB_0052d781:
            local_8._0_1_ = 1;
            FUN_006e0040(uVar6);
            break;
          case (undefined4 *)0x4:
            if (*(int *)(in_ECX + 0xdc) == 4) goto LAB_0052d6f7;
          }
          break;
        case 3:
          if ((*(byte *)(in_ECX + 0xd4) & 2) == 0) break;
          uVar6 = 0x52d730;
          operator_new(0x70);
          local_8 = CONCAT31(local_8._1_3_,9);
          LOCK();
          puVar2[1] = puVar2[1] + 1;
          UNLOCK();
          uVar6 = FUN_005319e0(puVar2,uVar6);
          goto LAB_0052d781;
        case 4:
          if ((*(byte *)(in_ECX + 0xd4) & 0xc) != 0) {
            operator_new(0x70);
            local_8 = CONCAT31(local_8._1_3_,10);
            LOCK();
            puVar2[1] = puVar2[1] + 1;
            UNLOCK();
            uVar6 = FUN_00531610(puVar2,local_20);
            goto LAB_0052d781;
          }
        }
        local_8 = (uint)local_8._1_3_ << 8;
        LOCK();
        piVar5 = puVar2 + 1;
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          (**(code **)*puVar2)();
        }
        local_24 = local_24 + 1;
      } while (local_24 < (int)param_2[0x16]);
    }
    if (param_2 != (undefined4 *)0x0) {
      LOCK();
      piVar5 = param_2 + 1;
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)*param_2)();
      }
    }
  }
  ExceptionList = local_10;
  return;
}

