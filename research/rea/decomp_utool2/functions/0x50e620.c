// rea decompile_all
// name: FUN_0050e620
// address: 0x50e620
// body: available
// range: 0x50e620-0x50e7c8 inclusive
// range: 0x50e7d0-0x50ed9e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050e620(void)

{
  LPCRITICAL_SECTION p_Var1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  DWORD DVar5;
  int *piVar6;
  int iVar7;
  int in_ECX;
  int *piVar8;
  uint uVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  void *local_e8 [2];
  int local_e0;
  int local_dc;
  char *local_d8;
  uint local_d4;
  int local_d0;
  void *local_c0;
  int local_bc;
  int local_b8;
  void *local_b4;
  int local_b0;
  int local_ac;
  undefined4 local_a8;
  int local_a4;
  uint local_a0;
  uint local_9c;
  LPCRITICAL_SECTION local_98;
  int local_94;
  int local_90;
  double local_8c;
  void *local_80;
  void *local_5c;
  undefined1 local_3c;
  undefined1 local_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007088b0;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar9 = 0;
  local_9c = 0;
  iVar3 = FUN_006e85c0(local_14);
  if ((iVar3 != 0) && (cVar2 = FUN_00582300(), cVar2 != '\0')) {
    iVar3 = FUN_0057fe20();
    local_98 = *(LPCRITICAL_SECTION *)(iVar3 + 0x98);
    if (local_98 != (LPCRITICAL_SECTION)0x0) {
      FUN_005ced70();
      local_8 = 0;
      iVar3 = FUN_0057fe20();
      FUN_0040da30(iVar3 + 0x38);
      iVar3 = FUN_006e85c0();
      if (iVar3 == 1) {
        *(undefined1 *)(in_ECX + 0x924) = 1;
      }
      else if (iVar3 - 2U < 2) {
        (*(code *)local_98->DebugInfo->CriticalSection)(local_e8);
        iVar3 = 0;
        local_8 = CONCAT31(local_8._1_3_,1);
        if (0 < local_e0) {
          do {
            FUN_006352c0(iVar3);
            iVar3 = iVar3 + 1;
          } while (iVar3 < local_e0);
        }
        uVar12 = 0;
        local_3c = 0;
        uVar11 = CONCAT44(&local_94,&local_b0);
        FUN_0057fe20(&local_b0,&local_94,0);
        FUN_005cf320(uVar11,uVar12);
        piVar8 = (int *)(local_b0 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar3 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        *(undefined1 *)(in_ECX + 0x924) = 0;
        local_8 = local_8 & 0xffffff00;
        FUN_0040f7f0();
        FID_conflict__free(local_e8[0]);
      }
      iVar3 = *(int *)(in_ECX + 0xb0);
      if (*(int *)(iVar3 + 0x10) == 0) {
        if (*(int *)(iVar3 + 8) == 0) {
          local_a4 = *(int *)(*(int *)(iVar3 + 0xc) + 100);
        }
        else {
          local_a4 = *(int *)(*(int *)(iVar3 + 8) + 0x5c);
        }
      }
      else {
        local_a4 = *(int *)(*(int *)(iVar3 + 0x10) + 0x4bc);
      }
      local_a0 = 0;
      if (0 < local_a4) {
        do {
          FUN_00513680();
          local_8._0_1_ = 2;
          local_bc = local_dc;
          if (*(int *)(in_ECX + 0xa4) < local_dc + 1) {
            local_8 = (uint)local_8._1_3_ << 8;
            piVar8 = (int *)(local_d0 + -8);
            if (piVar8 != &DAT_00bfe124) {
              LOCK();
              iVar3 = *piVar8;
              *piVar8 = *piVar8 + -1;
              UNLOCK();
              if (iVar3 == 0) {
                FID_conflict__free(piVar8);
              }
            }
            piVar8 = (int *)(local_d8 + -8);
            if (piVar8 != &DAT_00bfe124) {
LAB_0050ec6f:
              LOCK();
              iVar3 = *piVar8;
              *piVar8 = *piVar8 + -1;
              UNLOCK();
              if (iVar3 == 0) {
                FID_conflict__free(piVar8);
              }
            }
          }
          else {
            if (*local_d8 != '\0') {
              puVar4 = (undefined4 *)FUN_00458890();
              DVar5 = GetFileAttributesW((LPCWSTR)*puVar4);
              if ((DVar5 & 0x10) == 0) {
                piVar6 = operator_new(0x18);
                *piVar6 = (int)&DAT_00bfe12c;
                piVar6[1] = 0;
                piVar6[2] = 0;
                piVar6[3] = 0;
                piVar6[4] = 0;
                *(undefined1 *)(piVar6 + 5) = 0;
                piVar8 = (int *)(local_d8 + -8);
                if (piVar8 != &DAT_00bfe124) {
                  LOCK();
                  *piVar8 = *piVar8 + 1;
                  UNLOCK();
                }
                LOCK();
                local_c0 = (void *)*piVar6;
                *piVar6 = (int)local_d8;
                UNLOCK();
                piVar8 = (int *)((int)local_c0 + -8);
                local_98 = (LPCRITICAL_SECTION)piVar6;
                if (piVar8 != &DAT_00bfe124) {
                  LOCK();
                  iVar3 = *piVar8;
                  *piVar8 = *piVar8 + -1;
                  UNLOCK();
                  if (iVar3 == 0) {
                    FID_conflict__free(piVar8);
                  }
                }
                iVar3 = FUN_006035d0(&local_d8);
                piVar6[1] = iVar3;
                local_98 = operator_new(0x20);
                iVar3 = piVar6[1];
                *(undefined ***)local_98 = juce::AudioFormatReaderSource::vftable;
                *(int *)((int)local_98 + 4) = iVar3;
                *(undefined1 *)((int)local_98 + 8) = 1;
                *(undefined4 *)((int)local_98 + 0x10) = 0;
                *(undefined4 *)((int)local_98 + 0x14) = 0;
                *(undefined1 *)((int)local_98 + 0x18) = 0;
                piVar6[2] = (int)local_98;
                local_c0 = operator_new(0x78);
                iVar3 = FUN_005cec70();
                piVar6[3] = iVar3;
                *(bool *)(piVar6 + 5) = *(double *)(piVar6[1] + 8) != local_8c;
                local_b4 = operator_new(0x80);
                local_8 = CONCAT31(local_8._1_3_,3);
                if (*(int *)(in_ECX + 0x117c) < 0) {
                  iVar3 = FUN_006104a0();
                  *(undefined1 *)(iVar3 + -1) = 0x2d;
                  iVar3 = iVar3 + -1;
                }
                else {
                  iVar3 = FUN_006104a0();
                }
                FUN_004557e0(&local_15 + -iVar3);
                local_8 = CONCAT31(local_8._1_3_,4);
                local_9c = uVar9 | 1;
                uVar12 = FUN_00637690(&local_ac);
                local_98 = (LPCRITICAL_SECTION)FUN_00635310(uVar12);
                piVar8 = (int *)(local_b8 + -8);
                if (piVar8 != &DAT_00bfe124) {
                  LOCK();
                  iVar3 = *piVar8;
                  *piVar8 = *piVar8 + -1;
                  UNLOCK();
                  if (iVar3 == 0) {
                    FID_conflict__free(piVar8);
                  }
                }
                local_8._0_1_ = 2;
                local_8._1_3_ = 0;
                local_9c = uVar9 & 0xfffffffc;
                piVar8 = (int *)(local_ac + -8);
                if (piVar8 != &DAT_00bfe124) {
                  LOCK();
                  iVar3 = *piVar8;
                  *piVar8 = *piVar8 + -1;
                  UNLOCK();
                  if (iVar3 == 0) {
                    FID_conflict__free(piVar8);
                  }
                }
                iVar3 = *(int *)(in_ECX + 0x117c);
                iVar7 = iVar3 + 1;
                if (*(int *)(in_ECX + 0x1178) < iVar7) {
                  if (iVar7 < 0) {
                    iVar7 = iVar3 + 2;
                  }
                  FUN_00409cf0((iVar7 >> 1) + iVar3 + 9 & 0xfffffff8);
                }
                iVar3 = *(int *)(in_ECX + 0x117c);
                *(int *)(in_ECX + 0x117c) = iVar3 + 1;
                *(LPCRITICAL_SECTION *)(*(int *)(in_ECX + 0x1174) + iVar3 * 4) = local_98;
                if ((char)piVar6[5] == '\0') {
                  uVar11 = 0;
                }
                else {
                  uVar11 = *(undefined8 *)(piVar6[1] + 8);
                }
                FUN_005cea90(piVar6[2],0x8000,local_98,uVar11,*(undefined4 *)(piVar6[1] + 0x20));
                uVar9 = -(uint)(in_ECX != 0) & in_ECX + 0x94U;
                if (uVar9 != 0) {
                  FUN_004097d0(uVar9);
                }
                iVar3 = *(int *)(in_ECX + 0x1170);
                iVar7 = iVar3 + 1;
                if (*(int *)(in_ECX + 0x116c) < iVar7) {
                  if (iVar7 < 0) {
                    iVar7 = iVar3 + 2;
                  }
                  FUN_00409cf0((iVar7 >> 1) + iVar3 + 9 & 0xfffffff8);
                }
                p_Var1 = local_98;
                iVar3 = *(int *)(in_ECX + 0x1170);
                *(int *)(in_ECX + 0x1170) = iVar3 + 1;
                *(int **)(*(int *)(in_ECX + 0x1168) + iVar3 * 4) = piVar6;
                local_98 = (LPCRITICAL_SECTION)((int)local_98 + 0x10);
                EnterCriticalSection(local_98);
                if (*(int *)((int)p_Var1 + 8) == 0) {
                  *(undefined4 *)((int)p_Var1 + 0x30) = 3;
                  FUN_00630990();
                }
                else {
                  FUN_0062de30(3);
                }
                LeaveCriticalSection(local_98);
                uVar9 = local_9c;
                if ((-1 < (int)local_d4) && (local_d4 < *(uint *)(piVar6[1] + 0x20))) {
                  FUN_004e7c60(local_bc,piVar6,local_d4);
                  local_a8 = CONCAT31(local_a8._1_3_,(char)piVar6[5]);
                  if (local_a0 < *(uint *)(in_ECX + 0x140)) {
                    iVar3 = *(int *)(*(int *)(in_ECX + 0x138) + local_a0 * 4);
                  }
                  else {
                    iVar3 = 0;
                  }
                  *(char *)(iVar3 + 0x7cc) = (char)piVar6[5];
                  (**(code **)(*(int *)(iVar3 + 0x6e4) + 0x28))(local_a8);
                  uVar9 = local_9c;
                }
              }
            }
            local_8 = (uint)local_8._1_3_ << 8;
            piVar8 = (int *)(local_d0 + -8);
            if (piVar8 != &DAT_00bfe124) {
              LOCK();
              iVar3 = *piVar8;
              *piVar8 = *piVar8 + -1;
              UNLOCK();
              if (iVar3 == 0) {
                FID_conflict__free(piVar8);
              }
            }
            piVar8 = (int *)(local_d8 + -8);
            if (piVar8 != &DAT_00bfe124) goto LAB_0050ec6f;
          }
          local_a0 = local_a0 + 1;
        } while ((int)local_a0 < local_a4);
      }
      uVar9 = 0;
      if (0 < *(int *)(in_ECX + 0x140)) {
        bVar10 = *(int *)(in_ECX + 0x140) != 0;
        do {
          if (bVar10) {
            iVar3 = *(int *)(*(int *)(in_ECX + 0x138) + uVar9 * 4);
          }
          else {
            iVar3 = 0;
          }
          iVar7 = FUN_006e85c0();
          local_a8 = CONCAT31(local_a8._1_3_,iVar7 == 1);
          (**(code **)(*(int *)(iVar3 + 0x5e8) + 0x28))(local_a8);
          uVar9 = uVar9 + 1;
          bVar10 = uVar9 < *(uint *)(in_ECX + 0x140);
        } while ((int)uVar9 < (int)*(uint *)(in_ECX + 0x140));
      }
      *(uint *)(in_ECX + 0x920) = -(uint)(in_ECX != 0) & in_ECX + 0x78U;
      FUN_005ce740(in_ECX + 0x830);
      uVar12 = FUN_006e85c0();
      *(undefined4 *)(in_ECX + 0x1180) = uVar12;
      FID_conflict__free(local_5c);
      FID_conflict__free(local_80);
      piVar8 = (int *)(local_90 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      piVar8 = (int *)(local_94 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar8);
        }
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

