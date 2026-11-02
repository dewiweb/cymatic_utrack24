// rea decompile_all
// name: FUN_0069f360
// address: 0x69f360
// body: available
// range: 0x69f360-0x69f6f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0069f360(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 **ppuVar4;
  undefined4 *puVar5;
  int iVar6;
  int *in_ECX;
  undefined4 extraout_ECX;
  int *piVar7;
  int *piVar8;
  undefined4 *_Memory;
  uint uVar9;
  undefined4 *local_4c;
  void *local_48;
  int local_40;
  undefined4 *local_3c;
  uint local_38;
  undefined4 **local_34;
  undefined4 **local_2c;
  int local_28;
  undefined4 *local_24;
  int local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  piVar7 = param_1;
  puStack_c = &LAB_007229c6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*in_ECX == 0) {
    local_20 = 0;
  }
  else {
    local_20 = *(int *)(*in_ECX + 0x20);
  }
  _Memory = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  local_3c = (undefined4 *)0x0;
  local_38 = 0;
  local_34 = (undefined4 **)0x0;
  local_8 = 0;
  local_1c = 0;
  puVar5 = local_14;
  if (0 < local_20) {
    do {
      FUN_0063a9b0(&local_4c,local_1c);
      local_8._0_1_ = 1;
      if (local_4c != (undefined4 *)0x0) {
        piVar8 = (int *)local_4c[3];
        piVar3 = piVar8 + local_4c[5] * 6;
        for (; (piVar8 != piVar3 && (*piVar8 != DAT_00c8a980)); piVar8 = piVar8 + 6) {
        }
      }
      FUN_00635650(&param_1);
      local_8._0_1_ = 2;
      if (local_4c != (undefined4 *)0x0) {
        piVar8 = (int *)local_4c[3];
        piVar3 = piVar8 + local_4c[5] * 6;
        for (; (piVar8 != piVar3 && (*piVar8 != DAT_00c8a9c4)); piVar8 = piVar8 + 6) {
        }
      }
      uVar2 = FUN_00635650(&local_28);
      local_8._0_1_ = 3;
      FUN_006254f0();
      local_18 = &DAT_00bfe12c;
      local_8 = CONCAT31(local_8._1_3_,5);
      piVar3 = (int *)FUN_006252d0(uVar2,&local_18);
      puVar5 = (undefined4 *)*piVar3;
      *piVar3 = (int)local_14;
      local_14 = puVar5;
      if (local_24 != (undefined4 *)0x0) {
        piVar3 = local_24 + 1;
        *piVar3 = *piVar3 + -1;
        if (*piVar3 == 0) {
          (**(code **)*local_24)(1);
        }
      }
      piVar3 = (int *)(local_18 + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar3);
        }
      }
      local_8 = CONCAT31(local_8._1_3_,6);
      FUN_0069fb60(&param_1,&local_14);
      if (puVar5 != (undefined4 *)0x0) {
        piVar3 = puVar5 + 1;
        *piVar3 = *piVar3 + -1;
        if (*piVar3 == 0) {
          (**(code **)*puVar5)(1);
        }
      }
      piVar3 = (int *)(local_28 + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar3);
        }
      }
      local_2c = (undefined4 **)((int)local_34 + 1);
      if ((int)local_38 < (int)local_2c) {
        ppuVar4 = local_2c;
        if ((int)local_2c < 0) {
          ppuVar4 = (undefined4 **)((int)local_34 + 2);
        }
        uVar9 = (int)local_34 + ((int)ppuVar4 >> 1) + 9 & 0xfffffff8;
        if (local_38 != uVar9) {
          if ((int)uVar9 < 1) {
            FID_conflict__free(_Memory);
            _Memory = (undefined4 *)0x0;
            local_3c = _Memory;
            local_38 = uVar9;
          }
          else if (_Memory == (undefined4 *)0x0) {
            _Memory = (undefined4 *)FUN_004c554b();
            local_3c = _Memory;
            local_38 = uVar9;
          }
          else {
            _Memory = (undefined4 *)FUN_004c553b(_Memory,uVar9 * 4);
            local_3c = _Memory;
            local_38 = uVar9;
          }
        }
      }
      if (_Memory + (int)local_34 != (undefined4 *)0x0) {
        _Memory[(int)local_34] = param_1;
        piVar3 = param_1 + -2;
        if (piVar3 != &DAT_00bfe124) {
          LOCK();
          *piVar3 = *piVar3 + 1;
          UNLOCK();
        }
      }
      piVar3 = param_1 + -2;
      local_34 = local_2c;
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar3);
        }
      }
      puVar5 = local_4c;
      local_8 = local_8 & 0xffffff00;
      if ((0 < local_40) && (local_4c != (undefined4 *)0x0)) {
        local_2c = &local_4c;
        uVar9 = FUN_00447770(&local_2c);
        if (uVar9 < (uint)puVar5[0xb]) {
          FUN_00410320(uVar9);
        }
      }
      FID_conflict__free(local_48);
      if (local_4c != (undefined4 *)0x0) {
        LOCK();
        piVar3 = local_4c + 1;
        iVar6 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)*local_4c)(1);
        }
      }
      local_1c = local_1c + 1;
      puVar5 = _Memory;
    } while (local_1c < local_20);
  }
  local_14 = puVar5;
  uVar9 = piVar7[2];
  ppuVar4 = local_34;
  puVar5 = local_14;
  do {
    do {
      uVar9 = uVar9 - 1;
      local_34 = ppuVar4;
      if ((int)uVar9 < 0) {
        iVar6 = 0;
        if (0 < (int)ppuVar4) {
          do {
            piVar7 = (int *)(puVar5[iVar6] + -8);
            if (piVar7 != &DAT_00bfe124) {
              LOCK();
              iVar1 = *piVar7;
              *piVar7 = *piVar7 + -1;
              UNLOCK();
              if (iVar1 == 0) {
                FID_conflict__free(piVar7);
              }
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)ppuVar4);
        }
        FID_conflict__free(puVar5);
        ExceptionList = local_10;
        return;
      }
      if (uVar9 < (uint)piVar7[2]) {
        puVar5 = *(undefined4 **)(*piVar7 + uVar9 * 4);
      }
      else {
        puVar5 = (undefined4 *)0x0;
      }
      iVar6 = FUN_0062c730(*puVar5,0,0);
      ppuVar4 = local_34;
      puVar5 = local_3c;
    } while ((-1 < iVar6) || ((uint)piVar7[2] <= uVar9));
    FUN_004aebc0(uVar9,extraout_ECX);
    iVar6 = piVar7[5];
    while (ppuVar4 = local_34, puVar5 = local_3c, 0 < iVar6) {
      iVar6 = iVar6 + -1;
      if ((piVar7[5] <= iVar6) && (iVar6 = piVar7[5] + -1, iVar6 < 0)) break;
      FUN_00410536(piVar7);
    }
  } while( true );
}

