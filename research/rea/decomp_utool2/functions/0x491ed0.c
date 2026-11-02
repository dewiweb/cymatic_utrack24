// rea decompile_all
// name: FUN_00491ed0
// address: 0x491ed0
// body: available
// range: 0x491ed0-0x492959 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00492110) */
/* WARNING: Removing unreachable block (ram,0x0049211d) */
/* WARNING: Removing unreachable block (ram,0x004921c5) */
/* WARNING: Removing unreachable block (ram,0x004921d2) */
/* WARNING: Removing unreachable block (ram,0x004920bd) */
/* WARNING: Removing unreachable block (ram,0x004920ca) */

void FUN_00491ed0(int *param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int *_Memory;
  float fVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  undefined1 local_9c [8];
  undefined1 local_94 [8];
  undefined1 local_8c [8];
  undefined1 local_84 [8];
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  char *local_6c;
  float local_68;
  float local_64;
  float local_60;
  int local_5c;
  undefined1 local_55;
  undefined8 local_54;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined8 local_3c;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  char *pcVar8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007021f8;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0045c2c0();
  dVar10 = 0.0;
  iVar7 = 0;
  fVar11 = 100005.0;
  local_3c = (double)(ulonglong)(uint)local_3c;
  local_64 = 0.0;
  local_60 = 0.0;
  local_24 = 0.0;
  local_20 = 0.0;
  local_44 = 0.0;
  local_40 = 0.0;
  local_1c = 0.0;
  local_18 = 0.0;
  local_2c = 0.0;
  local_28 = 0.0;
  local_4c = 0.0;
  local_48 = 0.0;
  local_5c = 0;
  bVar1 = true;
  if (*local_14 != '\0') {
    fVar12 = 0.0;
    do {
      fVar11 = 100005.0;
      cVar2 = FUN_00426f70(uVar4);
      cVar3 = 'M';
      iVar5 = 0;
      do {
        if (cVar3 == cVar2) {
          if (-1 < iVar5) {
            iVar7 = FUN_00443260();
            bVar1 = iVar7 - 0x61U < 0x1a;
            local_5c = iVar7;
          }
          break;
        }
        cVar3 = (&DAT_00c1cfed)[iVar5];
        iVar5 = iVar5 + 1;
      } while (cVar3 != '\0');
      fVar9 = fVar12;
      switch(iVar7) {
      case 0x41:
      case 0x61:
        cVar3 = FUN_004929c0();
        if (cVar3 == '\0') {
          if (*local_14 != '\0') {
            FUN_0044eb90();
          }
        }
        else {
          local_54 = (double)CONCAT44(&DAT_00bfe12c,(undefined4)local_54);
          local_8 = 2;
          cVar3 = FUN_00492c70();
          if (cVar3 == '\0') {
LAB_00492804:
            pcVar8 = local_54._4_4_;
          }
          else {
            FUN_0045c380();
            local_68 = (float)dVar10 * 0.017453292;
            dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),local_68);
            cVar3 = FUN_00492c70();
            if (cVar3 == '\0') goto LAB_00492804;
            iVar7 = FID_conflict__atoi((char *)((ulonglong)local_54 >> 0x20));
            local_55 = iVar7 != 0;
            cVar3 = FUN_00492c70();
            if (cVar3 == '\0') goto LAB_00492804;
            pcVar8 = local_54._4_4_;
            FID_conflict__atoi(local_54._4_4_);
            cVar3 = FUN_00492b40();
            if (cVar3 != '\0') {
              if (bVar1) {
                local_2c = local_2c + local_3c._4_4_;
                local_28 = local_28 + local_20;
              }
              if ((local_3c._4_4_ != local_2c) || (local_20 != local_28)) {
                local_54 = (double)local_18;
                dVar10 = (double)local_3c._4_4_;
                local_3c = (double)local_1c;
                FUN_00492ee0(&local_3c,&local_54,local_84,local_9c,local_8c,local_94,dVar10,
                             (double)local_20,(double)local_2c,(double)local_28,(double)local_68);
                FUN_0067b920();
                FUN_00682d90();
              }
              local_44 = local_24;
              local_24 = local_2c;
              dVar10 = (double)(ulonglong)(uint)local_2c;
              local_20 = local_28;
              local_3c = (double)CONCAT44(local_2c,(uint)local_3c);
              fVar9 = local_28;
              local_40 = fVar12;
            }
          }
          _Memory = (int *)(pcVar8 + -8);
          local_8 = 0xffffffff;
          iVar7 = local_5c;
          if (_Memory != &DAT_00bfe124) {
            LOCK();
            iVar5 = *_Memory;
            *_Memory = *_Memory + -1;
            UNLOCK();
            if (iVar5 == 0) {
              FID_conflict__free(_Memory);
              iVar7 = local_5c;
            }
          }
        }
        break;
      default:
        goto switchD_00491fdf_caseD_42;
      case 0x43:
      case 99:
        cVar3 = FUN_004929c0();
        if (cVar3 == '\0') {
          if (*local_14 != '\0') {
            FUN_0044eb90();
          }
        }
        else {
          cVar3 = FUN_004929c0();
          if (cVar3 == '\0') {
            if (*local_14 != '\0') {
              FUN_0044eb90();
            }
          }
          else {
            cVar3 = FUN_004929c0();
            if (cVar3 != '\0') {
              if (bVar1) {
                local_1c = local_1c + local_3c._4_4_;
                local_2c = local_2c + local_3c._4_4_;
                local_4c = local_4c + local_3c._4_4_;
                local_18 = local_18 + local_20;
                local_28 = local_28 + local_20;
                local_48 = local_48 + local_20;
              }
              FUN_0067c020();
              local_44 = local_2c;
              local_40 = local_28;
              local_24 = local_4c;
              local_20 = local_48;
              fVar9 = local_48;
              goto LAB_004928bc;
            }
            if (*local_14 != '\0') {
              FUN_0044eb90();
            }
          }
        }
        break;
      case 0x48:
      case 0x68:
        local_8 = 0;
        cVar3 = FUN_00492c70();
        if (cVar3 != '\0') {
          FUN_00492b80();
          local_1c = SUB84(dVar10,0);
          local_8 = 0xffffffff;
          if (bVar1) {
            local_1c = local_1c + local_3c._4_4_;
          }
          local_54 = (double)CONCAT44(local_1c,(undefined4)local_54);
          FUN_00682d90();
          local_44 = local_3c._4_4_;
          local_24 = (float)local_54._4_4_;
          goto LAB_004928bc;
        }
        local_1c = 0.0;
LAB_004920a8:
        local_8 = 0xffffffff;
        FUN_0044eb90();
        break;
      case 0x4c:
      case 0x4d:
      case 0x6c:
      case 0x6d:
        cVar3 = FUN_004929c0();
        if (cVar3 != '\0') {
          if (bVar1) {
            local_1c = local_1c + local_3c._4_4_;
            local_18 = local_18 + local_20;
          }
          if ((iVar7 == 0x4d) || (iVar7 == 0x6d)) {
            local_64 = local_1c;
            local_60 = local_18;
            FUN_00682e50();
            iVar7 = 0x6c;
            local_5c = 0x6c;
          }
          else {
            FUN_00682d90();
          }
          local_44 = local_24;
          local_24 = local_1c;
          local_20 = local_18;
          fVar9 = local_18;
          local_40 = fVar12;
          goto LAB_004928bc;
        }
        if (*local_14 != '\0') {
          FUN_0044eb90();
        }
        break;
      case 0x51:
      case 0x71:
        cVar3 = FUN_004929c0();
        if (cVar3 == '\0') {
          if (*local_14 != '\0') {
            FUN_0044eb90();
          }
        }
        else {
          cVar3 = FUN_004929c0();
          if (cVar3 != '\0') {
            if (bVar1) {
              local_1c = local_1c + local_3c._4_4_;
              local_18 = local_18 + local_20;
              local_2c = local_2c + local_3c._4_4_;
              local_28 = local_28 + local_20;
            }
            FUN_0067c1c0();
            local_44 = local_1c;
            local_40 = local_18;
            local_24 = local_2c;
            local_20 = local_28;
            fVar9 = local_28;
            goto LAB_004928bc;
          }
          if (*local_14 != '\0') {
            FUN_0044eb90();
          }
        }
        break;
      case 0x53:
      case 0x73:
        cVar3 = FUN_004929c0();
        if (cVar3 == '\0') {
          if (*local_14 != '\0') {
            FUN_0044eb90();
          }
        }
        else {
          cVar3 = FUN_004929c0();
          if (cVar3 != '\0') {
            if (bVar1) {
              local_1c = local_1c + local_3c._4_4_;
              local_18 = local_18 + local_20;
              local_4c = local_4c + local_3c._4_4_;
              local_48 = local_48 + local_20;
            }
            local_74 = (local_3c._4_4_ - local_44) + local_3c._4_4_;
            local_70 = (local_20 - local_40) + local_20;
            local_2c = local_74;
            local_28 = local_70;
            FUN_0067c020();
            local_44 = local_1c;
            local_40 = local_18;
            local_24 = local_4c;
            local_20 = local_48;
            fVar9 = local_48;
            goto LAB_004928bc;
          }
          if (*local_14 != '\0') {
            FUN_0044eb90();
          }
        }
        break;
      case 0x54:
      case 0x74:
        cVar3 = FUN_004929c0();
        if (cVar3 != '\0') {
          if (bVar1) {
            local_1c = local_1c + local_3c._4_4_;
            local_18 = local_18 + local_20;
          }
          fVar11 = (local_3c._4_4_ - local_44) + local_3c._4_4_;
          fVar12 = (local_20 - local_40) + local_20;
          local_7c = fVar11;
          local_78 = fVar12;
          local_2c = fVar11;
          local_28 = fVar12;
          FUN_0067c1c0();
          local_24 = local_1c;
          local_20 = local_18;
          iVar7 = local_5c;
          fVar9 = local_18;
          local_44 = fVar11;
          local_40 = fVar12;
          goto LAB_004928bc;
        }
        if (*local_14 != '\0') {
          FUN_0044eb90();
        }
        break;
      case 0x56:
      case 0x76:
        local_8 = 1;
        cVar3 = FUN_00492c70();
        if (cVar3 == '\0') {
          local_18 = 0.0;
          goto LAB_004920a8;
        }
        FUN_00492b80();
        local_18 = SUB84(dVar10,0);
        local_8 = 0xffffffff;
        if (bVar1) {
          local_18 = local_18 + local_20;
        }
        local_54 = (double)CONCAT44(local_18,(undefined4)local_54);
        FUN_00682d90();
        local_40 = local_20;
        dVar10 = (double)ZEXT48(local_54._4_4_);
        local_20 = (float)local_54._4_4_;
        fVar9 = (float)local_54._4_4_;
        break;
      case 0x5a:
      case 0x7a:
        iVar7 = param_1[2];
        if ((iVar7 != 0) && (*(float *)(*param_1 + -4 + iVar7 * 4) != fVar11)) {
          if (param_1[1] < iVar7 + 1) {
            FUN_00409cf0();
          }
          iVar7 = param_1[2];
          param_1[2] = iVar7 + 1;
          *(undefined4 *)(*param_1 + iVar7 * 4) = 0x47c35280;
        }
        fVar9 = local_60;
        local_44 = local_64;
        local_24 = local_64;
        local_40 = local_60;
        local_20 = local_60;
        FUN_0045c2c0();
        local_14 = local_6c;
        local_5c = 0x4d;
        iVar7 = 0x4d;
LAB_004928bc:
        dVar10 = (double)(ulonglong)(uint)local_24;
        local_3c = (double)CONCAT44(local_24,(uint)local_3c);
      }
      fVar11 = 100005.0;
      fVar12 = fVar9;
    } while (*local_14 != '\0');
  }
switchD_00491fdf_caseD_42:
  pfVar6 = (float *)FUN_0067bf60();
  if ((((*pfVar6 == local_64) && (pfVar6[1] == local_60)) && (iVar7 = param_1[2], iVar7 != 0)) &&
     (*(float *)(*param_1 + -4 + iVar7 * 4) != fVar11)) {
    if (param_1[1] < iVar7 + 1) {
      FUN_00409cf0();
    }
    iVar7 = param_1[2];
    param_1[2] = iVar7 + 1;
    *(undefined4 *)(*param_1 + iVar7 * 4) = 0x47c35280;
  }
  ExceptionList = local_10;
  return;
}

