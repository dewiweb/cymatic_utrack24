// rea decompile_all
// name: FUN_006b95d0
// address: 0x6b95d0
// body: available
// range: 0x6b95d0-0x6b98b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b95d0(void)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  int *piVar8;
  void *_Memory;
  int iVar9;
  uint uVar10;
  void *local_34;
  uint local_30;
  int local_2c;
  int local_28;
  undefined4 *local_24;
  int local_20;
  int local_1c;
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_007244e4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  _Memory = (void *)0x0;
  iVar9 = 0;
  local_34 = (void *)0x0;
  local_30 = 0;
  local_2c = 0;
  local_8 = 0;
  local_11 = '\x01';
  local_1c = 0;
  iVar3 = (**(code **)(**(int **)(in_ECX + 0x54) + 4))(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  if (0 < iVar3) {
    iVar3 = 0;
    do {
      piVar8 = &local_18;
      (**(code **)(**(int **)(in_ECX + 0x54) + 8))(piVar8,iVar3);
      local_8 = CONCAT31(local_8._1_3_,1);
      cVar2 = FUN_006ba220(&local_18);
      if (cVar2 != '\0') {
        if (local_11 != '\0') {
          FUN_0040f7f0();
          if (*(int *)(in_ECX + 0x40) != 0) {
            FID_conflict__free(*(void **)(in_ECX + 0x3c));
            *(undefined4 *)(in_ECX + 0x3c) = 0;
            *(undefined4 *)(in_ECX + 0x40) = 0;
          }
          *(undefined4 *)(in_ECX + 0x44) = 0;
          local_11 = '\0';
        }
        iVar9 = *(int *)(in_ECX + 0x44);
        iVar7 = iVar9 + 1;
        if ((int)*(uint *)(in_ECX + 0x40) < iVar7) {
          if (iVar7 < 0) {
            iVar7 = iVar9 + 2;
          }
          uVar10 = iVar9 + 9 + (iVar7 >> 1) & 0xfffffff8;
          if (*(uint *)(in_ECX + 0x40) != uVar10) {
            if ((int)uVar10 < 1) {
              FID_conflict__free(*(void **)(in_ECX + 0x3c));
              *(undefined4 *)(in_ECX + 0x3c) = 0;
            }
            else if (*(int *)(in_ECX + 0x3c) == 0) {
              uVar4 = FUN_004c554b();
              *(undefined4 *)(in_ECX + 0x3c) = uVar4;
            }
            else {
              uVar4 = FUN_004c553b(*(int *)(in_ECX + 0x3c),uVar10 * 4);
              *(undefined4 *)(in_ECX + 0x3c) = uVar4;
            }
            *(uint *)(in_ECX + 0x40) = uVar10;
          }
        }
        iVar9 = *(int *)(in_ECX + 0x44);
        *(int *)(in_ECX + 0x44) = iVar9 + 1;
        piVar5 = (int *)(*(int *)(in_ECX + 0x3c) + iVar9 * 4);
        if (piVar5 != (int *)0x0) {
          *piVar5 = local_18;
          piVar5 = (int *)(local_18 + -8);
          if (piVar5 != &DAT_00bfe124) {
            LOCK();
            *piVar5 = *piVar5 + 1;
            UNLOCK();
          }
        }
        local_24 = (undefined4 *)FUN_0062dea0(&local_28,in_ECX + 0x38);
        local_20 = local_2c + 1;
        if ((int)local_30 < local_20) {
          iVar9 = local_20;
          if (local_20 < 0) {
            iVar9 = local_2c + 2;
          }
          uVar10 = local_2c + 9 + (iVar9 >> 1) & 0xfffffff8;
          if (local_30 != uVar10) {
            local_30 = uVar10;
            if ((int)uVar10 < 1) {
              FID_conflict__free(_Memory);
              _Memory = (void *)0x0;
              local_34 = _Memory;
            }
            else if (_Memory == (void *)0x0) {
              _Memory = (void *)FUN_004c554b();
              local_34 = _Memory;
            }
            else {
              _Memory = (void *)FUN_004c553b(_Memory,uVar10 * 4);
              local_34 = _Memory;
            }
          }
        }
        iVar9 = local_20;
        puVar1 = (undefined4 *)((int)_Memory + local_2c * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *local_24;
          *local_24 = &DAT_00bfe12c;
        }
        piVar5 = (int *)(local_28 + -8);
        local_2c = iVar9;
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar7 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar7 == 0) {
            FID_conflict__free(piVar5);
          }
        }
      }
      local_8 = local_8 & 0xffffff00;
      piVar5 = (int *)(local_18 + -8);
      iVar7 = iVar3;
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar5);
          iVar7 = iVar3;
        }
      }
      local_1c = local_1c + 1;
      iVar6 = (**(code **)(**(int **)(in_ECX + 0x54) + 4))();
      iVar3 = local_1c;
    } while (local_1c < iVar6);
    if (0 < iVar9) {
      uVar4 = FUN_00636260(&local_28,&DAT_00c054d8,piVar8,iVar7);
      local_8._0_1_ = 2;
      FUN_006e55f0(uVar4,0);
      local_8 = (uint)local_8._1_3_ << 8;
      piVar8 = (int *)(local_28 + -8);
      _Memory = local_34;
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar9 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar9 == 0) {
          FID_conflict__free(piVar8);
        }
      }
    }
  }
  FUN_006b98c0();
  iVar9 = 0;
  if (0 < local_2c) {
    do {
      piVar8 = (int *)(*(int *)((int)_Memory + iVar9 * 4) + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < local_2c);
  }
  FID_conflict__free(_Memory);
  ExceptionList = local_10;
  return;
}

