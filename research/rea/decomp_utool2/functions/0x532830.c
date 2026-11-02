// rea decompile_all
// name: FUN_00532830
// address: 0x532830
// body: available
// range: 0x532830-0x532d61 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00532bbe) */
/* WARNING: Removing unreachable block (ram,0x00532b5d) */
/* WARNING: Removing unreachable block (ram,0x00532a1a) */
/* WARNING: Removing unreachable block (ram,0x00532b84) */
/* WARNING: Removing unreachable block (ram,0x00532c38) */
/* WARNING: Removing unreachable block (ram,0x00532c40) */
/* WARNING: Removing unreachable block (ram,0x00532c4e) */
/* WARNING: Removing unreachable block (ram,0x00532c5b) */
/* WARNING: Removing unreachable block (ram,0x00532c64) */
/* WARNING: Removing unreachable block (ram,0x00532c69) */
/* WARNING: Heritage AFTER dead removal. Example location: r0x00c7ed68 : 0x00532bcb */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_00532830(undefined *param_1)

{
  int *_Memory;
  char cVar1;
  int iVar2;
  undefined **ppuVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  uint uVar7;
  int extraout_ECX;
  void *_Memory_00;
  bool bVar8;
  undefined4 uStack_5c;
  undefined *local_58;
  uint local_2c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_0070d0c4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar7 = 0;
  if (0 < *(int *)(in_ECX + 0x290)) {
    bVar8 = *(int *)(in_ECX + 0x290) != 0;
    do {
      if (bVar8) {
        iVar2 = *(int *)(*(int *)(in_ECX + 0x288) + uVar7 * 4);
      }
      else {
        iVar2 = 0;
      }
      uVar7 = uVar7 + 1;
      *(undefined1 *)(iVar2 + 0x39) = 0;
      bVar8 = uVar7 < *(uint *)(in_ECX + 0x290);
    } while ((int)uVar7 < (int)*(uint *)(in_ECX + 0x290));
  }
  local_8 = 0;
  local_58 = (undefined *)0x5328b9;
  iVar2 = FUN_00532ef0();
  if (iVar2 == 1) {
    local_14 = 1;
    if (1 < *(int *)(in_ECX + 700)) {
      do {
        local_8._0_1_ = 1;
        if (local_14 < *(uint *)(in_ECX + 700)) {
          ppuVar3 = (undefined **)(*(int *)(in_ECX + 0x2b4) + local_14 * 4);
        }
        else {
          ppuVar3 = &PTR_DAT_00c7ed68;
        }
        local_58 = *ppuVar3;
        uStack_5c = 0x532b53;
        FUN_00635720();
        FUN_00627bf0();
        local_8 = CONCAT31(local_8._1_3_,2);
        _Memory = (int *)(param_1 + -8);
        if (_Memory != &DAT_00bfe124) {
          LOCK();
          *_Memory = *_Memory + 1;
          UNLOCK();
        }
        cVar1 = FUN_005b5020();
        if (cVar1 != '\0') {
          FID_conflict__atoi(PTR_DAT_00c7ed68);
          local_58 = &stack0xffffffac;
          uStack_5c = 0x532be0;
          FUN_00636a10();
          local_58 = param_1;
          if (_Memory != &DAT_00bfe124) {
            LOCK();
            *_Memory = *_Memory + 1;
            UNLOCK();
          }
          uStack_5c = 0x532c0d;
          FUN_0053e700();
        }
        if (_Memory != &DAT_00bfe124) {
          LOCK();
          iVar2 = *_Memory;
          *_Memory = *_Memory + -1;
          UNLOCK();
          if (iVar2 == 0) {
            FID_conflict__free(_Memory);
          }
        }
        local_8 = local_8 & 0xffffff00;
        FID_conflict__free((void *)0x0);
        local_14 = local_14 + 1;
      } while ((int)local_14 < *(int *)(in_ECX + 700));
    }
  }
  else if (iVar2 == 2) {
    _Memory_00 = (void *)0x0;
    iVar2 = 0;
    local_2c = 0;
    local_8 = CONCAT31(local_8._1_3_,3);
    local_14 = 1;
    if (1 < *(int *)(in_ECX + 700)) {
      bVar8 = 1 < *(uint *)(in_ECX + 700);
      iVar6 = iVar2;
      do {
        if (bVar8) {
          ppuVar3 = (undefined **)(*(int *)(in_ECX + 0x2b4) + local_14 * 4);
        }
        else {
          ppuVar3 = &PTR_DAT_00c7ed68;
        }
        FID_conflict__atoi(*ppuVar3);
        local_58 = (undefined *)0x532919;
        pvVar4 = operator_new(0x40);
        local_58 = (undefined *)0x53292d;
        FUN_0053e920();
        *(undefined2 *)(extraout_ECX + 0x38) = 0;
        FUN_00531bb0();
        iVar2 = iVar6 + 1;
        if ((int)local_2c < iVar2) {
          iVar5 = iVar2;
          if (iVar2 < 0) {
            iVar5 = iVar6 + 2;
          }
          uVar7 = (iVar5 >> 1) + 8 + iVar2 & 0xfffffff8;
          if (local_2c != uVar7) {
            local_2c = uVar7;
            if ((int)uVar7 < 1) {
              FID_conflict__free(_Memory_00);
              _Memory_00 = (void *)0x0;
            }
            else if (_Memory_00 == (void *)0x0) {
              _Memory_00 = (void *)FUN_004c554b();
            }
            else {
              local_58 = (undefined *)0x53299b;
              _Memory_00 = (void *)FUN_004c553b();
            }
          }
        }
        *(void **)((int)_Memory_00 + iVar6 * 4) = pvVar4;
        FUN_00531ae0();
        local_14 = local_14 + 1;
        bVar8 = local_14 < *(uint *)(in_ECX + 700);
        iVar6 = iVar2;
      } while ((int)local_14 < (int)*(uint *)(in_ECX + 700));
    }
    local_18 = 0;
    if (0 < iVar2) {
      do {
        FUN_00531bb0();
        local_18 = local_18 + 1;
      } while (local_18 < iVar2);
    }
    uVar7 = 0;
    if (0 < *(int *)(in_ECX + 0x290)) {
      bVar8 = *(int *)(in_ECX + 0x290) != 0;
      do {
        if (bVar8) {
          iVar6 = *(int *)(*(int *)(in_ECX + 0x288) + uVar7 * 4);
        }
        else {
          iVar6 = 0;
        }
        *(uint *)(iVar6 + 8) = uVar7;
        uVar7 = uVar7 + 1;
        bVar8 = uVar7 < *(uint *)(in_ECX + 0x290);
      } while ((int)uVar7 < (int)*(uint *)(in_ECX + 0x290));
    }
    while (0 < iVar2) {
      iVar6 = iVar2 * 4;
      iVar2 = iVar2 + -1;
      if (*(int *)((int)_Memory_00 + iVar6 + -4) != 0) {
        FUN_0053e890();
        local_58 = (undefined *)0x532abd;
        FUN_004bfe14();
      }
    }
    if (local_2c != 0) {
      FID_conflict__free(_Memory_00);
      _Memory_00 = (void *)0x0;
    }
    local_8 = local_8 & 0xffffff00;
    FID_conflict__free(_Memory_00);
  }
  FUN_00532710();
  FUN_004ae6c0();
  FUN_004f8300();
  FUN_00531cb0();
  if ((*(int *)(in_ECX + -0x38) == 0) && (*(int *)(in_ECX + -0x38) != *(int *)(in_ECX + -0x1b0))) {
    *(int *)(in_ECX + -0x38) = *(int *)(in_ECX + -0x1b0);
    FUN_006e6400(&uStack_5c);
    FUN_006ce9f0(1);
    FUN_006e7e60();
  }
  FUN_006e7e60();
  FUN_006e6400(&uStack_5c);
  FUN_006ce9f0(1);
  local_58 = (undefined *)0x0;
  uStack_5c = 0xffffffff;
  FUN_00699dd0();
  (**(code **)(**(int **)(in_ECX + 8) + 8))();
  FID_conflict__free((void *)0x0);
  ExceptionList = local_10;
  return;
}

