// rea decompile_all
// name: FUN_00671f60
// address: 0x671f60
// body: available
// range: 0x671f60-0x6725ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00671f60(int *param_1,int *param_2,int param_3)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  void **ppvVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int *in_ECX;
  undefined1 uVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 *local_84 [2];
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  undefined4 *local_6c;
  int local_68 [2];
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined4 *local_50;
  undefined1 *local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined1 local_3c [8];
  double local_34;
  int local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar3 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072028e;
  local_10 = ExceptionList;
  piVar6 = (int *)*param_2;
  piVar2 = (int *)*param_1;
  ppvVar4 = &local_10;
  local_14 = in_ECX;
  if (piVar6 == piVar2) {
    if ((piVar2 != (int *)0x0) &&
       (ExceptionList = &local_10,
       iVar5 = (**(code **)(*piVar2 + 0x14))(DAT_00c76070 ^ (uint)&stack0xfffffffc),
       ppvVar4 = ExceptionList, 1 < iVar5)) {
      piVar6 = (int *)(**(code **)(*(int *)*piVar3 + 8))(&param_1);
      iVar5 = *piVar3;
      *piVar3 = *piVar6;
      *piVar6 = iVar5;
      ppvVar4 = ExceptionList;
      if (param_1 != (int *)0x0) {
        LOCK();
        piVar6 = param_1 + 1;
        iVar5 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        ppvVar4 = ExceptionList;
        if (iVar5 == 1) {
          (**(code **)*param_1)(1);
          ppvVar4 = ExceptionList;
        }
      }
    }
  }
  else {
    if (piVar6 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = piVar6[3];
    }
    if (piVar2 == (int *)0x0) {
      iVar11 = 0;
    }
    else {
      iVar11 = piVar2[3];
    }
    if (iVar5 != iVar11) {
      return;
    }
    if (piVar6 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = piVar6[4];
    }
    if (piVar2 == (int *)0x0) {
      iVar11 = 0;
    }
    else {
      iVar11 = piVar2[4];
    }
    if (iVar5 != iVar11) {
      return;
    }
    if (piVar6 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = piVar6[2];
    }
    if (piVar2 == (int *)0x0) {
      iVar11 = 0;
    }
    else {
      iVar11 = piVar2[2];
    }
    if (iVar5 != iVar11) {
      return;
    }
  }
  ExceptionList = ppvVar4;
  uVar7 = FUN_00673860(local_3c);
  FUN_0044db90(&local_4c,uVar7);
  if ((0 < local_44) && (0 < local_40)) {
    param_1 = (int *)(local_4c + local_44);
    local_74 = local_44;
    param_3 = local_48;
    local_70 = local_40;
    local_6c = (undefined4 *)0x0;
    local_1c = local_48 + local_40;
    local_8 = 0;
    (**(code **)(*(int *)*piVar3 + 0x10))(local_84,local_4c,local_48,1);
    local_18 = local_84[0];
    piVar6 = (int *)*param_2;
    if (piVar6 == (int *)0x0) {
      local_58 = 0;
      local_54 = 0;
    }
    else {
      local_58 = piVar6[3];
      local_54 = piVar6[4];
    }
    local_50 = (undefined4 *)0x0;
    local_8 = 2;
    (**(code **)(*piVar6 + 0x10))(local_68,0,0,0);
    if (local_78 == 4) {
      while (local_48 < local_1c) {
        local_18 = local_18 + local_7c;
        local_28 = local_84[0];
        for (local_20 = local_4c; (int)local_20 < (int)param_1; local_20 = local_20 + 1) {
          iVar5 = in_ECX[1];
          param_2 = (int *)0x0;
          fVar14 = 0.0;
          fVar15 = 0.0;
          fVar16 = 0.0;
          fVar17 = 0.0;
          if (0 < iVar5) {
            local_2c = iVar5 >> 1;
            local_24 = (undefined1 *)((local_48 - local_2c) * local_60);
            do {
              iVar11 = (local_48 - local_2c) + (int)param_2;
              in_ECX = local_14;
              if (local_54 <= iVar11) break;
              if (-1 < iVar11) {
                iVar11 = (int)local_20 - local_2c;
                pbVar10 = local_24 + local_68[0] + local_5c * iVar11;
                iVar13 = 0;
                do {
                  if (local_58 <= iVar11) break;
                  if (-1 < iVar11) {
                    fVar1 = *(float *)(*local_14 + (iVar5 * (int)param_2 + iVar13) * 4);
                    fVar14 = fVar14 + (float)*pbVar10 * fVar1;
                    fVar15 = fVar15 + (float)pbVar10[1] * fVar1;
                    fVar16 = fVar16 + (float)pbVar10[2] * fVar1;
                    fVar17 = fVar17 + (float)pbVar10[3] * fVar1;
                  }
                  iVar13 = iVar13 + 1;
                  pbVar10 = pbVar10 + 4;
                  iVar11 = iVar11 + 1;
                } while (iVar13 < iVar5);
              }
              local_24 = local_24 + local_60;
              param_2 = (int *)((int)param_2 + 1);
            } while ((int)param_2 < iVar5);
          }
          local_34._0_4_ = SUB84((double)fVar14 + 6755399441055744.0,0);
          uVar9 = 0xff;
          if (local_34._0_4_ < 0xff) {
            uVar9 = SUB81((double)fVar14 + 6755399441055744.0,0);
          }
          *local_28 = uVar9;
          local_34._0_4_ = SUB84((double)fVar15 + 6755399441055744.0,0);
          uVar9 = 0xff;
          if (local_34._0_4_ < 0xff) {
            uVar9 = SUB81((double)fVar15 + 6755399441055744.0,0);
          }
          local_28[1] = uVar9;
          local_34._0_4_ = SUB84((double)fVar16 + 6755399441055744.0,0);
          uVar9 = 0xff;
          if (local_34._0_4_ < 0xff) {
            uVar9 = SUB81((double)fVar16 + 6755399441055744.0,0);
          }
          local_28[2] = uVar9;
          local_34 = (double)fVar17 + 6755399441055744.0;
          uVar9 = 0xff;
          if (local_34._0_4_ < 0xff) {
            uVar9 = SUB81(local_34,0);
          }
          local_28[3] = uVar9;
          local_28 = local_28 + 4;
          local_48 = param_3;
        }
        param_3 = local_48 + 1;
        local_84[0] = local_18;
        local_48 = param_3;
      }
    }
    else if (local_78 == 3) {
      while (local_48 < local_1c) {
        local_18 = local_84[0] + local_7c;
        local_24 = local_84[0];
        for (local_20 = local_4c; (int)local_20 < (int)param_1; local_20 = local_20 + 1) {
          iVar5 = in_ECX[1];
          param_2 = (int *)0x0;
          fVar14 = 0.0;
          fVar15 = 0.0;
          fVar16 = 0.0;
          if (0 < iVar5) {
            local_2c = param_3 - (iVar5 >> 1);
            local_28 = (undefined1 *)(local_2c * local_60);
            do {
              in_ECX = local_14;
              if (local_54 <= local_2c + (int)param_2) break;
              if (-1 < local_2c + (int)param_2) {
                iVar11 = (int)local_20 - (iVar5 >> 1);
                pbVar10 = local_28 + local_68[0] + local_5c * iVar11;
                iVar13 = 0;
                do {
                  if (local_58 <= iVar11) break;
                  if (-1 < iVar11) {
                    fVar17 = *(float *)(*local_14 + (iVar5 * (int)param_2 + iVar13) * 4);
                    fVar14 = fVar14 + (float)*pbVar10 * fVar17;
                    fVar15 = fVar15 + (float)pbVar10[1] * fVar17;
                    fVar16 = fVar16 + (float)pbVar10[2] * fVar17;
                  }
                  iVar13 = iVar13 + 1;
                  pbVar10 = pbVar10 + 3;
                  iVar11 = iVar11 + 1;
                } while (iVar13 < iVar5);
              }
              local_28 = local_28 + local_60;
              param_2 = (int *)((int)param_2 + 1);
            } while ((int)param_2 < iVar5);
          }
          local_34._0_1_ = SUB81((double)fVar14 + 6755399441055744.0,0);
          *local_24 = local_34._0_1_;
          local_34._0_1_ = SUB81((double)fVar15 + 6755399441055744.0,0);
          local_24[1] = local_34._0_1_;
          local_34 = (double)fVar16 + 6755399441055744.0;
          local_24[2] = local_34._0_1_;
          local_24 = local_24 + 3;
          local_48 = param_3;
        }
        param_3 = local_48 + 1;
        local_84[0] = local_18;
        local_48 = param_3;
      }
    }
    else if (local_78 == 1) {
      while (local_48 < local_1c) {
        local_24 = local_4c;
        local_18 = local_84[0] + local_7c;
        if ((int)local_4c < (int)param_1) {
          local_20 = local_84[0] + -(int)local_4c;
          do {
            iVar5 = in_ECX[1];
            param_2 = (int *)0x0;
            fVar14 = 0.0;
            if (0 < iVar5) {
              iVar11 = iVar5 >> 1;
              local_2c = local_48 - iVar11;
              local_28 = (undefined1 *)(local_2c * local_60);
              do {
                local_48 = param_3;
                in_ECX = local_14;
                if (local_54 <= local_2c + (int)param_2) break;
                if (-1 < local_2c + (int)param_2) {
                  iVar12 = (int)local_24 - iVar11;
                  pbVar10 = local_28 + local_68[0] + local_5c * iVar12;
                  iVar13 = 0;
                  do {
                    if (local_58 <= iVar12) break;
                    if (iVar12 < 0) {
                      iVar8 = 3;
                    }
                    else {
                      iVar8 = 1;
                      fVar14 = fVar14 + (float)*pbVar10 *
                                        *(float *)(*local_14 + (iVar5 * (int)param_2 + iVar13) * 4);
                    }
                    pbVar10 = pbVar10 + iVar8;
                    iVar13 = iVar13 + 1;
                    iVar5 = local_14[1];
                    iVar12 = iVar12 + 1;
                  } while (iVar13 < iVar5);
                }
                local_28 = local_28 + local_60;
                param_2 = (int *)((int)param_2 + 1);
              } while ((int)param_2 < iVar5);
            }
            local_34 = (double)fVar14 + 6755399441055744.0;
            local_20[(int)local_24] = local_34._0_1_;
            local_24 = local_24 + 1;
          } while ((int)local_24 < (int)param_1);
        }
        param_3 = local_48 + 1;
        local_84[0] = local_18;
        local_48 = param_3;
      }
    }
    if (local_50 != (undefined4 *)0x0) {
      (**(code **)*local_50)(1);
    }
    if (local_6c != (undefined4 *)0x0) {
      (**(code **)*local_6c)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

