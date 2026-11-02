// rea decompile_all
// name: FUN_005406f0
// address: 0x5406f0
// body: available
// range: 0x5406f0-0x541a6c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005406f0(char param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  int *piVar7;
  uint uVar8;
  bool bVar9;
  undefined4 **ppuVar10;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  undefined4 *local_7c;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_54;
  int local_50;
  undefined4 *local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &LAB_0070e7b7;
  local_10 = ExceptionList;
  local_18 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar1 = (int *)(in_ECX + 0x70);
  if (((undefined *)*piVar1 != PTR_DAT_00c7ed54) && (iVar3 = FUN_0045c1e0(*piVar1), iVar3 != 0)) {
    FUN_00636040(&stack0xffffff54);
    FUN_005bd0c0();
    puVar4 = (undefined4 *)FUN_00633420();
    *(undefined4 *)(in_ECX + 0x18) = *puVar4;
    *(undefined4 *)(in_ECX + 0x1c) = puVar4[1];
    if (*(int *)(in_ECX + 0x30) == 2) {
      local_4c = operator_new(0x10);
      local_8 = 0;
      puVar4 = local_4c + 3;
      *local_4c = 0;
      local_4c[1] = 0;
      local_4c[2] = 0;
      FUN_0061f730(puVar4);
      FUN_0061fa00(puVar4);
      local_8 = 1;
      FUN_0045c990();
      piVar7 = &local_50;
      local_8._0_1_ = 2;
      FUN_0061f730(piVar7);
      FUN_0061fa00(piVar7);
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_00634ca0(&local_50);
      piVar7 = (int *)(local_50 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      local_8._0_1_ = 1;
      piVar7 = (int *)(local_44 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      FUN_0045c990();
      local_8._0_1_ = 4;
      iVar3 = FUN_00634c10();
      iVar5 = FUN_0061a340();
      if (iVar5 != 0) {
        piVar7 = (int *)(iVar3 + 4);
        iVar3 = *(int *)(iVar3 + 4);
        while (iVar3 != 0) {
          piVar7 = (int *)*piVar7;
          iVar3 = *piVar7;
        }
        *piVar7 = iVar5;
      }
      local_8._0_1_ = 1;
      piVar7 = (int *)(local_44 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      FUN_00633ba0(*(undefined4 *)(in_ECX + 0x18));
      local_8._0_1_ = 5;
      local_48 = FUN_00634c10();
      iVar3 = FUN_0061a340();
      if (iVar3 != 0) {
        piVar7 = (int *)(local_48 + 4);
        iVar5 = *piVar7;
        while (iVar5 != 0) {
          piVar7 = (int *)*piVar7;
          iVar5 = *piVar7;
        }
        *piVar7 = iVar3;
      }
      local_8._0_1_ = 1;
      piVar7 = (int *)(local_54 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      local_48 = FUN_00634c10();
      iVar3 = FUN_0061a340();
      if (iVar3 != 0) {
        piVar7 = (int *)(local_48 + 4);
        iVar5 = *piVar7;
        while (iVar5 != 0) {
          piVar7 = (int *)*piVar7;
          iVar5 = *piVar7;
        }
        *piVar7 = iVar3;
      }
      FUN_005bde60();
      local_8._0_1_ = 6;
      local_48 = FUN_00634c10();
      iVar3 = FUN_0061a340();
      if (iVar3 != 0) {
        piVar7 = (int *)(local_48 + 4);
        iVar5 = *piVar7;
        while (iVar5 != 0) {
          piVar7 = (int *)*piVar7;
          iVar5 = *piVar7;
        }
        *piVar7 = iVar3;
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      piVar7 = (int *)(local_54 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      if (*(int *)(in_ECX + 0x24) < 0) {
        iVar3 = FUN_006104a0();
        *(undefined1 *)(iVar3 + -1) = 0x2d;
      }
      else {
        FUN_006104a0();
      }
      FUN_004557e0();
      local_8._0_1_ = 7;
      iVar3 = FUN_00634c10();
      iVar5 = FUN_0061a340();
      if (iVar5 != 0) {
        piVar7 = (int *)(iVar3 + 4);
        iVar3 = *(int *)(iVar3 + 4);
        while (iVar3 != 0) {
          piVar7 = (int *)*piVar7;
          iVar3 = *piVar7;
        }
        *piVar7 = iVar5;
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      piVar7 = (int *)(local_44 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      iVar3 = FUN_005bdc20();
      if (iVar3 < 0) {
        iVar3 = FUN_006104a0();
        *(undefined1 *)(iVar3 + -1) = 0x2d;
      }
      else {
        FUN_006104a0();
      }
      FUN_004557e0();
      local_8._0_1_ = 8;
      iVar3 = FUN_00634c10();
      iVar5 = FUN_0061a340();
      if (iVar5 != 0) {
        piVar7 = (int *)(iVar3 + 4);
        iVar3 = *(int *)(iVar3 + 4);
        while (iVar3 != 0) {
          piVar7 = (int *)*piVar7;
          iVar3 = *piVar7;
        }
        *piVar7 = iVar5;
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      piVar7 = (int *)(local_44 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      iVar3 = *(int *)(in_ECX + 0x2c);
      if (((iVar3 == 1) || (iVar3 == 2)) || (iVar3 == 3)) {
        FUN_006104a0();
      }
      else {
        iVar3 = FUN_006104a0();
        *(undefined1 *)(iVar3 + -1) = 0x2d;
      }
      FUN_004557e0();
      local_8._0_1_ = 9;
      iVar3 = FUN_00634c10();
      iVar5 = FUN_0061a340();
      if (iVar5 != 0) {
        piVar7 = (int *)(iVar3 + 4);
        iVar3 = *(int *)(iVar3 + 4);
        while (iVar3 != 0) {
          piVar7 = (int *)*piVar7;
          iVar3 = *piVar7;
        }
        *piVar7 = iVar5;
      }
      local_8._0_1_ = 1;
      piVar7 = (int *)(local_44 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      FUN_00637cf0();
      local_8._0_1_ = 10;
      local_48 = FUN_00634c10();
      iVar3 = FUN_0061a340();
      if (iVar3 != 0) {
        piVar7 = (int *)(local_48 + 4);
        iVar5 = *piVar7;
        while (iVar5 != 0) {
          piVar7 = (int *)*piVar7;
          iVar5 = *piVar7;
        }
        *piVar7 = iVar3;
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      piVar7 = (int *)(local_54 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      if (*(int *)(in_ECX + 0x5c) < 0) {
        iVar3 = FUN_006104a0();
        *(undefined1 *)(iVar3 + -1) = 0x2d;
      }
      else {
        FUN_006104a0();
      }
      FUN_004557e0();
      local_8._0_1_ = 0xb;
      iVar3 = FUN_00634c10();
      iVar5 = FUN_0061a340();
      if (iVar5 != 0) {
        piVar7 = (int *)(iVar3 + 4);
        iVar3 = *(int *)(iVar3 + 4);
        while (iVar3 != 0) {
          piVar7 = (int *)*piVar7;
          iVar3 = *piVar7;
        }
        *piVar7 = iVar5;
      }
      local_8._0_1_ = 1;
      piVar7 = (int *)(local_44 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      if (param_1 == '\0') {
        FUN_00634c10("ns0:midi_file");
        FUN_00634a50();
      }
      else {
        FUN_00627bf0();
        local_8._0_1_ = 0xc;
        FUN_005b23b0();
        local_8 = CONCAT31(local_8._1_3_,0xd);
        FUN_00634c10("ns0:midi_file");
        FUN_00634a50();
        piVar7 = (int *)(local_48 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar3 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        local_8._0_1_ = 1;
        piVar7 = (int *)(local_44 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar3 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            FID_conflict__free(piVar7);
          }
        }
      }
      FUN_00637cf0();
      local_8._0_1_ = 0xe;
      local_48 = FUN_00634c10();
      iVar3 = FUN_0061a340();
      if (iVar3 != 0) {
        piVar7 = (int *)(local_48 + 4);
        iVar5 = *piVar7;
        while (iVar5 != 0) {
          piVar7 = (int *)*piVar7;
          iVar5 = *piVar7;
        }
        *piVar7 = iVar3;
      }
      local_8._0_1_ = 1;
      piVar7 = (int *)(local_54 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      FUN_00634c10();
      uVar8 = 0;
      if (0 < *(int *)(in_ECX + 0x5c)) {
        bVar9 = *(int *)(in_ECX + 0x5c) != 0;
        do {
          if ((bVar9) && (*(int *)(*(int *)(in_ECX + 0x54) + uVar8 * 4) != 0)) {
            FUN_0053f050();
            if (local_7c != (undefined4 *)0x0) {
              LOCK();
              piVar7 = local_7c + 1;
              iVar3 = *piVar7;
              *piVar7 = *piVar7 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)*local_7c)();
              }
            }
            local_50 = FUN_00634c10();
            piVar7 = &local_44;
            FUN_0061f730(piVar7);
            FUN_0061fa00(piVar7);
            local_8._0_1_ = 0xf;
            FUN_00633770(&local_44);
            local_8 = CONCAT31(local_8._1_3_,1);
            piVar7 = (int *)(local_44 + -8);
            if (piVar7 != &DAT_00bfe124) {
              LOCK();
              iVar3 = *piVar7;
              *piVar7 = *piVar7 + -1;
              UNLOCK();
              if (iVar3 == 0) {
                FID_conflict__free(piVar7);
              }
            }
            if (uVar8 < *(uint *)(in_ECX + 0x5c)) {
              iVar3 = *(int *)(*(int *)(in_ECX + 0x54) + uVar8 * 4);
            }
            else {
              iVar3 = 0;
            }
            if (*(int *)(iVar3 + 8) < 0) {
              iVar3 = FUN_006104a0();
              *(undefined1 *)(iVar3 + -1) = 0x2d;
            }
            else {
              FUN_006104a0();
            }
            FUN_004557e0();
            local_8 = CONCAT31(local_8._1_3_,0x10);
            local_40 = FUN_00634c10();
            iVar3 = FUN_0061a340();
            if (iVar3 != 0) {
              piVar7 = (int *)(local_40 + 4);
              iVar5 = *piVar7;
              while (iVar5 != 0) {
                piVar7 = (int *)*piVar7;
                iVar5 = *piVar7;
              }
              *piVar7 = iVar3;
            }
            piVar7 = (int *)(local_70 + -8);
            if (piVar7 != &DAT_00bfe124) {
              LOCK();
              iVar3 = *piVar7;
              *piVar7 = *piVar7 + -1;
              UNLOCK();
              if (iVar3 == 0) {
                FID_conflict__free(piVar7);
              }
            }
            if (param_1 == '\0') {
              FUN_005406d0();
              local_8._0_1_ = 0x13;
              local_40 = FUN_00634c10();
              iVar5 = FUN_0061a340();
              iVar3 = local_8c;
              if (iVar5 != 0) {
                piVar7 = (int *)(local_40 + 4);
                iVar6 = *piVar7;
                while (iVar6 != 0) {
                  piVar7 = (int *)*piVar7;
                  iVar6 = *piVar7;
                }
                *piVar7 = iVar5;
              }
            }
            else {
              FUN_005406d0();
              local_8._0_1_ = 0x11;
              FUN_005b23b0();
              local_8 = CONCAT31(local_8._1_3_,0x12);
              local_40 = FUN_00634c10();
              iVar3 = FUN_0061a340();
              if (iVar3 != 0) {
                piVar7 = (int *)(local_40 + 4);
                iVar5 = *piVar7;
                while (iVar5 != 0) {
                  piVar7 = (int *)*piVar7;
                  iVar5 = *piVar7;
                }
                *piVar7 = iVar3;
              }
              piVar7 = (int *)(local_84 + -8);
              if (piVar7 != &DAT_00bfe124) {
                LOCK();
                iVar3 = *piVar7;
                *piVar7 = *piVar7 + -1;
                UNLOCK();
                if (iVar3 == 0) {
                  FID_conflict__free(piVar7);
                }
              }
              iVar3 = local_88;
            }
            local_8._0_1_ = 1;
            piVar7 = (int *)(iVar3 + -8);
            if (piVar7 != &DAT_00bfe124) {
              LOCK();
              iVar3 = *piVar7;
              *piVar7 = *piVar7 + -1;
              UNLOCK();
              if (iVar3 == 0) {
                FID_conflict__free(piVar7);
              }
            }
            puVar4 = (undefined4 *)FUN_00413680();
            FUN_00633ba0(*puVar4);
            local_8._0_1_ = 0x14;
            local_40 = FUN_00634c10();
            iVar3 = FUN_0061a340();
            if (iVar3 != 0) {
              piVar7 = (int *)(local_40 + 4);
              iVar5 = *piVar7;
              while (iVar5 != 0) {
                piVar7 = (int *)*piVar7;
                iVar5 = *piVar7;
              }
              *piVar7 = iVar3;
            }
            local_8 = CONCAT31(local_8._1_3_,1);
            piVar7 = (int *)(local_90 + -8);
            if (piVar7 != &DAT_00bfe124) {
              LOCK();
              iVar3 = *piVar7;
              *piVar7 = *piVar7 + -1;
              UNLOCK();
              if (iVar3 == 0) {
                FID_conflict__free(piVar7);
              }
            }
            iVar3 = FUN_0053b140();
            if (iVar3 < 0) {
              iVar3 = FUN_006104a0();
              *(undefined1 *)(iVar3 + -1) = 0x2d;
            }
            else {
              FUN_006104a0();
            }
            FUN_004557e0();
            local_8._0_1_ = 0x15;
            local_40 = FUN_00634c10();
            iVar3 = FUN_0061a340();
            if (iVar3 != 0) {
              piVar7 = (int *)(local_40 + 4);
              iVar5 = *piVar7;
              while (iVar5 != 0) {
                piVar7 = (int *)*piVar7;
                iVar5 = *piVar7;
              }
              *piVar7 = iVar3;
            }
            local_8 = CONCAT31(local_8._1_3_,1);
            piVar7 = (int *)(local_74 + -8);
            if (piVar7 != &DAT_00bfe124) {
              LOCK();
              iVar3 = *piVar7;
              *piVar7 = *piVar7 + -1;
              UNLOCK();
              if (iVar3 == 0) {
                FID_conflict__free(piVar7);
              }
            }
            if (uVar8 < *(uint *)(in_ECX + 0x5c)) {
              iVar3 = *(int *)(*(int *)(in_ECX + 0x54) + uVar8 * 4);
            }
            else {
              iVar3 = 0;
            }
            if (*(int *)(iVar3 + 0x24) < 0) {
              iVar3 = FUN_006104a0();
              *(undefined1 *)(iVar3 + -1) = 0x2d;
            }
            else {
              FUN_006104a0();
            }
            FUN_004557e0();
            local_8 = CONCAT31(local_8._1_3_,0x16);
            local_40 = FUN_00634c10();
            iVar3 = FUN_0061a340();
            if (iVar3 != 0) {
              piVar7 = (int *)(local_40 + 4);
              iVar5 = *piVar7;
              while (iVar5 != 0) {
                piVar7 = (int *)*piVar7;
                iVar5 = *piVar7;
              }
              *piVar7 = iVar3;
            }
            piVar7 = (int *)(local_54 + -8);
            if (piVar7 != &DAT_00bfe124) {
              LOCK();
              iVar3 = *piVar7;
              *piVar7 = *piVar7 + -1;
              UNLOCK();
              if (iVar3 == 0) {
                FID_conflict__free(piVar7);
              }
            }
            FUN_00411300();
            local_8._0_1_ = 0x17;
            local_40 = FUN_00634c10();
            iVar3 = FUN_0061a340();
            if (iVar3 != 0) {
              piVar7 = (int *)(local_40 + 4);
              iVar5 = *piVar7;
              while (iVar5 != 0) {
                piVar7 = (int *)*piVar7;
                iVar5 = *piVar7;
              }
              *piVar7 = iVar3;
            }
            local_8._0_1_ = 1;
            piVar7 = (int *)(local_6c + -8);
            if (piVar7 != &DAT_00bfe124) {
              LOCK();
              iVar3 = *piVar7;
              *piVar7 = *piVar7 + -1;
              UNLOCK();
              if (iVar3 == 0) {
                FID_conflict__free(piVar7);
              }
            }
            FUN_006353d0();
            local_8._0_1_ = 0x18;
            local_40 = FUN_00634c10();
            iVar3 = FUN_0061a340();
            if (iVar3 != 0) {
              piVar7 = (int *)(local_40 + 4);
              iVar5 = *piVar7;
              while (iVar5 != 0) {
                piVar7 = (int *)*piVar7;
                iVar5 = *piVar7;
              }
              *piVar7 = iVar3;
            }
            local_8._0_1_ = 1;
            piVar7 = (int *)(local_68 + -8);
            if (piVar7 != &DAT_00bfe124) {
              LOCK();
              iVar3 = *piVar7;
              *piVar7 = *piVar7 + -1;
              UNLOCK();
              if (iVar3 == 0) {
                FID_conflict__free(piVar7);
              }
            }
            FUN_006353d0();
            local_8._0_1_ = 0x19;
            local_40 = FUN_00634c10();
            iVar3 = FUN_0061a340();
            if (iVar3 != 0) {
              piVar7 = (int *)(local_40 + 4);
              iVar5 = *piVar7;
              while (iVar5 != 0) {
                piVar7 = (int *)*piVar7;
                iVar5 = *piVar7;
              }
              *piVar7 = iVar3;
            }
            local_8._0_1_ = 1;
            piVar7 = (int *)(local_3c + -8);
            if (piVar7 != &DAT_00bfe124) {
              LOCK();
              iVar3 = *piVar7;
              *piVar7 = *piVar7 + -1;
              UNLOCK();
              if (iVar3 == 0) {
                FID_conflict__free(piVar7);
              }
            }
            FUN_006104a0();
            FUN_004557e0();
            local_8._0_1_ = 0x1a;
            iVar3 = FUN_00634c10();
            iVar5 = FUN_0061a340();
            if (iVar5 != 0) {
              piVar7 = (int *)(iVar3 + 4);
              iVar3 = *(int *)(iVar3 + 4);
              while (iVar3 != 0) {
                piVar7 = (int *)*piVar7;
                iVar3 = *piVar7;
              }
              *piVar7 = iVar5;
            }
            local_8._0_1_ = 1;
            piVar7 = (int *)(local_48 + -8);
            if (piVar7 != &DAT_00bfe124) {
              LOCK();
              iVar3 = *piVar7;
              *piVar7 = *piVar7 + -1;
              UNLOCK();
              if (iVar3 == 0) {
                FID_conflict__free(piVar7);
              }
            }
          }
          uVar8 = uVar8 + 1;
          bVar9 = uVar8 < *(uint *)(in_ECX + 0x5c);
        } while ((int)uVar8 < (int)*(uint *)(in_ECX + 0x5c));
      }
      local_3c = FUN_00634c10();
      iVar3 = 0;
      if (0 < *(int *)(in_ECX + 0x48)) {
        do {
          FUN_00635260();
          local_8._0_1_ = 0x1b;
          iVar5 = FUN_00634c10();
          iVar6 = FUN_0061a340();
          if (iVar6 != 0) {
            piVar7 = (int *)(iVar5 + 4);
            iVar5 = *piVar7;
            while (iVar5 != 0) {
              piVar7 = (int *)*piVar7;
              iVar5 = *piVar7;
            }
            *piVar7 = iVar6;
          }
          local_8._0_1_ = 1;
          piVar7 = (int *)(local_6c + -8);
          if (piVar7 != &DAT_00bfe124) {
            LOCK();
            iVar5 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if (iVar5 == 0) {
              FID_conflict__free(piVar7);
            }
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(in_ECX + 0x48));
      }
      puVar4 = local_4c;
      cVar2 = FUN_00634df0(piVar1,PTR_DAT_00c7ed68,"utf-8");
      if (cVar2 == '\0') {
        FUN_00634ec0();
        FUN_004bfe14(puVar4);
      }
      else {
        FUN_00634ec0();
        FUN_004bfe14(puVar4);
      }
    }
    else if (*(int *)(in_ECX + 0x30) == 1) {
      operator_new(0x10);
      local_8 = 0x1c;
      FUN_00634f20();
      local_8 = 0x1d;
      FUN_0045c990();
      ppuVar10 = &local_4c;
      local_8._0_1_ = 0x1e;
      FUN_0061f730(ppuVar10);
      FUN_0061fa00(ppuVar10);
      local_8._0_1_ = 0x1f;
      FUN_00634ca0(&local_4c);
      FUN_00637000();
      local_8._0_1_ = 0x1d;
      FUN_00637c10();
      FUN_0045c990();
      local_8._0_1_ = 0x20;
      FUN_00634c10("ns0:version");
      FUN_00634a50();
      local_8._0_1_ = 0x1d;
      FUN_00637c10();
      FUN_00633ba0(*(undefined4 *)(in_ECX + 0x18));
      local_8._0_1_ = 0x21;
      FUN_00634c10("ns0:timestamp");
      FUN_00634a50();
      local_8._0_1_ = 0x1d;
      FUN_00637c10();
      FUN_00634c10("ns0:song_name");
      FUN_00634a50();
      FUN_005bde60();
      local_8._0_1_ = 0x22;
      FUN_00634c10("ns0:song_type");
      FUN_00634a50();
      local_8._0_1_ = 0x1d;
      FUN_00637c10();
      FUN_005bdc20();
      FUN_00637c90();
      local_8._0_1_ = 0x23;
      FUN_00634c10("ns0:sampling_rate");
      FUN_00634a50();
      local_8._0_1_ = 0x1d;
      FUN_00637c10();
      FUN_005bd4b0();
      FUN_00637c90();
      local_8._0_1_ = 0x24;
      FUN_00634c10("ns0:resolution");
      FUN_00634a50();
      local_8._0_1_ = 0x1d;
      FUN_00637c10();
      FUN_00637cf0();
      local_8._0_1_ = 0x25;
      FUN_00634c10("ns0:duration_seconds");
      FUN_00634a50();
      local_8._0_1_ = 0x1d;
      FUN_00637c10();
      FUN_006104a0();
      FUN_004557e0();
      local_8._0_1_ = 0x26;
      FUN_00634c10("ns0:track_count");
      FUN_00634a50();
      local_8._0_1_ = 0x1d;
      FUN_00637c10();
      FUN_00634c10();
      FUN_00634c10();
      ppuVar10 = &local_4c;
      FUN_0061f730(ppuVar10);
      FUN_0061fa00(ppuVar10);
      local_8._0_1_ = 0x27;
      FUN_00633770(&local_4c);
      local_8._0_1_ = 0x1d;
      FUN_00637000();
      if ((*(int *)(in_ECX + 0x5c) != 0) && (**(int **)(in_ECX + 0x54) != 0)) {
        FUN_0053f050();
        FUN_004030d0();
        FUN_006104a0();
        FUN_004557e0();
        local_8._0_1_ = 0x28;
        FUN_00634c10("ns0:channel");
        FUN_00634a50();
        FUN_00637c10();
        if (param_1 == '\0') {
          FUN_00415370(0);
          FUN_005406d0();
          local_8 = CONCAT31(local_8._1_3_,0x2b);
          FUN_00634c10("ns0:audiofile");
          FUN_00634a50();
        }
        else {
          FUN_00415370(0);
          FUN_005406d0();
          local_8._0_1_ = 0x29;
          FUN_005b23b0();
          local_8 = CONCAT31(local_8._1_3_,0x2a);
          FUN_00634c10("ns0:audiofile");
          FUN_00634a50();
          FUN_00637c10();
        }
        local_8._0_1_ = 0x1d;
        FUN_0040ea50();
        puVar4 = (undefined4 *)FUN_00413680();
        FUN_00633ba0(*puVar4);
        local_8._0_1_ = 0x2c;
        FUN_00634c10("ns0:validationtimestamp");
        FUN_00634a50();
        local_8._0_1_ = 0x1d;
        FUN_00637c10();
        FUN_0053b140();
        FUN_00637c90();
        local_8._0_1_ = 0x2d;
        FUN_00634c10("ns0:samplingrate");
        FUN_00634a50();
        local_8._0_1_ = 0x1d;
        FUN_00637c10();
        FUN_00637c90();
        local_8._0_1_ = 0x2e;
        FUN_00634c10("ns0:audiofiletrackindex");
        FUN_00634a50();
        local_8._0_1_ = 0x1d;
        FUN_00637c10();
        FUN_00634c10("ns0:trackname");
        FUN_00634a50();
        FUN_006353d0();
        local_8._0_1_ = 0x2f;
        FUN_00634c10("ns0:monitor_level");
        FUN_00634a50();
        local_8._0_1_ = 0x1d;
        FUN_00637c10();
      }
      cVar2 = FUN_00634df0(piVar1,PTR_DAT_00c7ed68,"utf-8");
      if (cVar2 == '\0') {
        FUN_00412cb0();
      }
      else {
        FUN_00412cb0();
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

