// rea decompile_all
// name: FUN_00677730
// address: 0x677730
// body: available
// range: 0x677730-0x677c8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00677730(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  float *in_ECX;
  ushort uVar4;
  char cVar6;
  uint uVar5;
  uint uVar7;
  float10 fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  void *local_b4;
  uint local_b0;
  float local_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined1 local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  int local_80;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  undefined1 uStack_68;
  void *local_30;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (0.0 < *in_ECX) {
    local_b4 = (void *)0x0;
    local_b0 = 0;
    local_ac = 0.0;
    local_98 = 1;
    local_a8 = 0.0;
    fStack_a4 = 0.0;
    fStack_a0 = 0.0;
    fStack_9c = 0.0;
    FUN_00679e40(param_2,param_5);
    local_80 = 1;
    local_94 = 0.0;
    local_88 = 0.0;
    fVar12 = *(float *)(param_3 + (int)(0 % (longlong)param_4) * 4);
    uVar4 = 0x101;
    local_90 = 0.0;
    local_8c = 0.0;
    fVar9 = 0.0;
    while (0.0 < fVar12) {
      uVar5 = (uint)uVar4;
      local_84 = fVar12 + fVar9;
      if (local_88 < local_84) {
        do {
          cVar1 = FUN_00679520();
          cVar6 = (char)(uVar5 >> 8);
          if (cVar1 == '\0') {
            if ((cVar6 != '\0') && ((char)uVar5 == '\0')) {
              FUN_00682d90();
            }
            local_20 = 0x3f800000;
            uStack_1c = 0;
            uStack_18 = 0;
            uStack_14 = 0;
            local_10 = 0x3f800000;
            local_c = 0;
            FUN_00677cd0(param_1,&local_b4,&local_20,param_6);
            goto LAB_00677c6a;
          }
          if ((cVar6 == '\0') || ((char)uVar5 != '\0')) {
            fVar12 = local_74;
            if (local_ac == 0.0) {
              fStack_a4 = local_78;
              local_a8 = local_78;
              fStack_a0 = local_74;
            }
            else {
              fVar9 = local_78;
              if (local_a8 <= local_78) {
                fVar9 = local_a8;
              }
              fVar10 = local_78;
              if (local_78 <= fStack_a4) {
                fVar10 = fStack_a4;
              }
              fVar11 = local_74;
              if (fStack_a0 <= local_74) {
                fVar11 = fStack_a0;
              }
              local_a8 = fVar9;
              fStack_a4 = fVar10;
              fStack_a0 = fVar11;
              if (local_74 <= fStack_9c) {
                fVar12 = fStack_9c;
              }
            }
            iVar2 = (int)local_ac + 3;
            fStack_9c = fVar12;
            if ((int)local_b0 < iVar2) {
              if (iVar2 < 0) {
                iVar2 = (int)local_ac + 4;
              }
              uVar7 = (int)local_ac + 0xb + (iVar2 >> 1) & 0xfffffff8;
              if (local_b0 != uVar7) {
                if ((int)uVar7 < 1) {
                  FID_conflict__free(local_b4);
                  local_b4 = (void *)0x0;
                  local_b0 = uVar7;
                }
                else if (local_b4 == (void *)0x0) {
                  local_b4 = (void *)FUN_004c554b();
                  local_b0 = uVar7;
                }
                else {
                  local_b4 = (void *)FUN_004c553b(local_b4,uVar7 * 4);
                  local_b0 = uVar7;
                }
              }
            }
            *(undefined4 *)((int)local_b4 + (int)local_ac * 4) = 0x47c35100;
            *(float *)((int)local_b4 + ((int)local_ac + 1) * 4) = local_78;
            *(float *)((int)local_b4 + ((int)local_ac + 2) * 4) = local_74;
            fVar12 = fStack_9c;
          }
          else {
            if (local_ac == 0.0) {
              fStack_a4 = local_ac;
              local_a8 = local_ac;
              fStack_9c = local_ac;
              fStack_a0 = local_ac;
              if (((int)local_b0 < 3) && (local_b0 != 8)) {
                if (local_b4 == (void *)0x0) {
                  local_b4 = (void *)FUN_004c554b();
                }
                else {
                  local_b4 = (void *)FUN_004c553b(local_b4,0x20);
                }
                local_b0 = 8;
              }
              *(undefined4 *)((int)local_b4 + (int)local_ac * 4) = 0x47c35100;
              iVar2 = (int)local_ac + 2;
              *(undefined4 *)((int)local_b4 + ((int)local_ac + 1) * 4) = 0;
              local_ac = (float)((int)local_ac + 3);
              *(undefined4 *)((int)local_b4 + iVar2 * 4) = 0;
            }
            iVar2 = (int)local_ac + 3;
            if ((int)local_b0 < iVar2) {
              if (iVar2 < 0) {
                iVar2 = (int)local_ac + 4;
              }
              uVar7 = (int)local_ac + 0xb + (iVar2 >> 1) & 0xfffffff8;
              if (local_b0 != uVar7) {
                if ((int)uVar7 < 1) {
                  FID_conflict__free(local_b4);
                  local_b4 = (void *)0x0;
                  local_b0 = uVar7;
                }
                else if (local_b4 == (void *)0x0) {
                  local_b4 = (void *)FUN_004c554b();
                  local_b0 = uVar7;
                }
                else {
                  local_b4 = (void *)FUN_004c553b(local_b4,uVar7 * 4);
                  local_b0 = uVar7;
                }
              }
            }
            *(undefined4 *)((int)local_b4 + (int)local_ac * 4) = 0x47c35080;
            *(float *)((int)local_b4 + ((int)local_ac + 1) * 4) = local_78;
            *(float *)((int)local_b4 + ((int)local_ac + 2) * 4) = local_74;
            fVar12 = local_78;
            if (local_a8 <= local_78) {
              fVar12 = local_a8;
            }
            fVar9 = local_78;
            if (local_78 <= fStack_a4) {
              fVar9 = fStack_a4;
            }
            fVar10 = local_74;
            if (fStack_a0 <= local_74) {
              fVar10 = fStack_a0;
            }
            local_a8 = fVar12;
            fStack_a4 = fVar9;
            fStack_a0 = fVar10;
            fVar12 = local_74;
            if (local_74 <= fStack_9c) {
              fVar12 = fStack_9c;
            }
          }
          fStack_9c = fVar12;
          local_ac = (float)((int)local_ac + 3);
          local_90 = local_70 - local_78;
          local_8c = local_6c - local_74;
          fVar8 = (float10)FUN_004c5561(local_90,local_8c);
          uVar5 = CONCAT31((int3)(uVar5 >> 8),uStack_68);
          uVar4 = (ushort)uVar5;
          local_94 = (float)fVar8;
          local_88 = local_88 + local_94;
        } while (local_88 < local_84);
      }
      if ((char)(uVar4 >> 8) == '\0') {
        FUN_00682e50();
      }
      else {
        FUN_00682d90();
      }
      bVar3 = (byte)local_80;
      iVar2 = local_80 % param_4;
      local_80 = local_80 + 1;
      uVar4 = CONCAT11(~bVar3,(char)uVar4) & 0x1ff;
      fVar9 = local_84;
      fVar12 = *(float *)(param_3 + iVar2 * 4);
    }
LAB_00677c6a:
    FID_conflict__free(local_30);
    FID_conflict__free(local_b4);
  }
  return;
}

