// rea decompile_all
// name: FUN_004f4290
// address: 0x4f4290
// body: available
// range: 0x4f4290-0x4f466c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f4290(undefined4 *param_1)

{
  undefined **ppuVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *extraout_ECX;
  int *extraout_ECX_00;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  bool bVar10;
  int *piVar11;
  int *piVar12;
  int local_8c;
  int local_88;
  int *local_84;
  undefined4 *local_80;
  uint local_7c;
  int local_78;
  uint local_74;
  undefined4 *local_70;
  uint local_6c;
  undefined4 *local_68;
  int *local_64;
  int local_60;
  int *local_5c;
  int *local_58;
  uint local_54;
  int local_50;
  int *local_4c;
  undefined **local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_1b [2];
  int local_19;
  undefined1 uStack_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00705fa1;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_80 = param_1;
  local_58 = (int *)0x0;
  local_54 = 0;
  local_50 = 0;
  piVar12 = (int *)0x8;
  local_8 = 0;
  piVar11 = (int *)0x4f42f7;
  local_14 = uVar2;
  FUN_00409cf0(8);
  iVar4 = DAT_00c8a6c0;
  iVar7 = local_50 + 1;
  local_4c = local_58;
  if (local_58 + local_50 != (int *)0x0) {
    local_58[local_50] = DAT_00c8a6c0;
    piVar3 = (int *)(iVar4 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
  }
  local_7c = 0;
  local_60 = iVar7;
  local_50 = iVar7;
  if (0 < *(int *)(local_78 + 0x804)) {
    bVar10 = *(int *)(local_78 + 0x804) != 0;
    local_6c = local_54;
    iVar4 = local_78;
    do {
      if (bVar10) {
        local_64 = *(int **)(*(int *)(iVar4 + 0x7fc) + local_7c * 4);
      }
      else {
        local_64 = (int *)0x0;
      }
      local_74 = 0;
      if (0 < local_64[5]) {
        bVar10 = local_64[5] != 0;
        do {
          if (bVar10) {
            uVar8 = *(uint *)(local_64[3] + local_74 * 4);
          }
          else {
            uVar8 = 0;
          }
          local_19._0_1_ = 0;
          local_5c = (int *)(local_1b + 2);
          if ((int)uVar8 < 0) {
            uVar8 = -uVar8;
            do {
              piVar12 = local_5c;
              local_5c = (int *)((int)piVar12 + -1);
              uVar6 = uVar8 / 10;
              *(char *)local_5c = (char)uVar8 + (char)uVar6 * -10 + '0';
              uVar8 = uVar6;
            } while (uVar6 != 0);
            local_5c = (int *)((int)piVar12 + -2);
            *(undefined1 *)local_5c = 0x2d;
          }
          else {
            do {
              local_5c = (int *)((int)local_5c + -1);
              uVar6 = uVar8 / 10;
              *(char *)local_5c = (char)uVar8 + (char)uVar6 * -10 + '0';
              uVar8 = uVar6;
            } while (uVar6 != 0);
          }
          iVar7 = -(int)local_5c;
          puVar9 = local_1b + iVar7 + 2;
          local_70 = (undefined4 *)FUN_004bfe22(((uint)(&uStack_15 + iVar7) & 0xfffffffc) + 0xb);
          *local_70 = 0;
          local_70[1] = (uint)(&uStack_15 + iVar7) & 0xfffffffc;
          local_70 = local_70 + 2;
          local_68 = local_70;
          local_84 = local_5c;
          piVar12 = local_5c;
          while ((0 < (int)puVar9 && (iVar7 = FUN_00443260(), piVar12 = extraout_ECX, iVar7 != 0)))
          {
            FUN_0044ecc0(iVar7);
            puVar9 = puVar9 + -1;
            piVar12 = extraout_ECX_00;
          }
          *(undefined1 *)local_68 = 0;
          local_8 = CONCAT31(local_8._1_3_,1);
          iVar7 = *local_64;
          piVar11 = (int *)(iVar7 + -8);
          if (piVar11 != &DAT_00bfe124) {
            LOCK();
            *piVar11 = *piVar11 + 1;
            UNLOCK();
          }
          FUN_006377c0(iVar7);
          piVar11 = (int *)0x4f447e;
          piVar3 = (int *)FUN_00637730(piVar12);
          iVar7 = local_60 + 1;
          if ((int)local_6c < iVar7) {
            iVar4 = iVar7;
            if (iVar7 < 0) {
              iVar4 = local_60 + 2;
            }
            uVar8 = local_60 + 9 + (iVar4 >> 1) & 0xfffffff8;
            if (local_6c != uVar8) {
              if ((int)uVar8 < 1) {
                piVar11 = (int *)0x4f44d4;
                FID_conflict__free(local_4c);
                local_58 = (int *)0x0;
                piVar12 = local_4c;
                local_6c = uVar8;
                local_54 = uVar8;
                local_4c = local_58;
              }
              else {
                piVar12 = (int *)(uVar8 * 4);
                if (local_4c == (int *)0x0) {
                  piVar11 = (int *)0x4f44bc;
                  local_58 = (int *)FUN_004c554b();
                  local_6c = uVar8;
                  local_54 = uVar8;
                  local_4c = local_58;
                }
                else {
                  local_58 = (int *)FUN_004c553b(local_4c,piVar12);
                  piVar11 = local_4c;
                  local_6c = uVar8;
                  local_54 = uVar8;
                  local_4c = local_58;
                }
              }
            }
          }
          if (local_4c + local_60 != (int *)0x0) {
            local_4c[local_60] = *piVar3;
            *piVar3 = (int)&DAT_00bfe12c;
          }
          piVar3 = (int *)(local_88 + -8);
          local_60 = iVar7;
          local_50 = iVar7;
          if (piVar3 != &DAT_00bfe124) {
            LOCK();
            iVar4 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar4 == 0) {
              piVar11 = (int *)0x4f4539;
              FID_conflict__free(piVar3);
              piVar12 = piVar3;
            }
          }
          local_8 = local_8 & 0xffffff00;
          piVar3 = local_70 + -2;
          if (piVar3 != &DAT_00bfe124) {
            LOCK();
            iVar4 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar4 == 0) {
              piVar11 = (int *)0x4f456c;
              FID_conflict__free(piVar3);
              piVar12 = piVar3;
            }
          }
          local_74 = local_74 + 1;
          bVar10 = local_74 < (uint)local_64[5];
          iVar4 = local_78;
        } while ((int)local_74 < local_64[5]);
      }
      local_7c = local_7c + 1;
      bVar10 = local_7c < *(uint *)(iVar4 + 0x804);
    } while ((int)local_7c < (int)*(uint *)(iVar4 + 0x804));
  }
  piVar3 = local_4c;
  if (iVar7 < 2) {
    *local_80 = &PTR_vftable_00c7ed38;
    FUN_0040f7f0(uVar2);
    FID_conflict__free(piVar3);
  }
  else {
    puVar5 = (undefined4 *)FUN_00636260(&local_8c,&DAT_00739254,piVar11,piVar12);
    local_48 = &PTR_vftable_00c7ed4c;
    local_40 = *puVar5;
    *puVar5 = &DAT_00bfe12c;
    piVar12 = (int *)(local_8c + -8);
    if (piVar12 != &DAT_00bfe124) {
      LOCK();
      iVar7 = *piVar12;
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (iVar7 == 0) {
        FID_conflict__free(piVar12);
      }
    }
    ppuVar1 = local_48;
    local_48 = &PTR_vftable_00c7ed38;
    *local_80 = ppuVar1;
    local_80[2] = local_40;
    local_80[3] = local_3c;
    (**(code **)(PTR_vftable_00c7ed38 + 0x54))(&local_40);
    FUN_0040f7f0();
    FID_conflict__free(local_58);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

