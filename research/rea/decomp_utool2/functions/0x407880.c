// rea decompile_all
// name: FUN_00407880
// address: 0x407880
// body: available
// range: 0x407880-0x407fc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00407880(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,double param_6,undefined4 param_7,undefined4 param_8,
                 undefined8 param_9)

{
  undefined4 *puVar1;
  undefined **ppuVar2;
  code *pcVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *in_ECX;
  float10 fVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  double local_48;
  int local_3c [3];
  undefined8 local_30;
  undefined4 local_24;
  int local_20;
  int local_1c;
  code *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006fc05a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar8 = in_ECX + 1;
  local_8 = 0;
  *in_ECX = r8b::CDSPResampler<r8b::CDSPFracInterpolator<24,673>_>::vftable;
  _eh_vector_constructor_iterator_(piVar8,4,8,FUN_00407fd0,FUN_00407680);
  in_ECX[10] = 0;
  uVar13 = 2;
  local_8._0_1_ = 2;
  _eh_vector_constructor_iterator_(in_ECX + 0xb,4,2,FUN_00407fd0,FUN_004032d0);
  in_ECX[0xd] = 0;
  local_8._0_1_ = 4;
  uVar4 = (undefined1)local_8;
  local_8._0_1_ = 4;
  dVar10 = (double)CONCAT44(param_5,param_4);
  if (dVar10 == param_6) {
    in_ECX[9] = 0;
  }
  else {
    local_48 = 0.0;
    local_1c = 1;
    local_18 = (code *)param_1;
    if (param_6 + param_6 <= dVar10) {
      local_24 = 1;
      local_20 = 0;
      in_ECX[9] = 0;
      iVar5 = 1;
      local_8._0_1_ = uVar4;
      if (param_6 * 4.0 <= dVar10) {
        do {
          local_1c = iVar5 * 2;
          dVar10 = (double)local_1c * param_6 * 4.0;
          if ((double)CONCAT44(param_5,param_4) < dVar10) {
            local_30 = 0x4041000000000000;
          }
          else {
            local_30 = 0x4046800000000000;
          }
          local_3c[1] = FUN_004c554b();
          local_8._0_1_ = 7;
          if (local_3c[1] == 0) {
            uVar6 = 0;
          }
          else {
            uVar12 = 2;
            uVar11 = 1;
            uVar6 = FUN_004066c0(param_9,0x3ff0000000000000);
            uVar6 = FUN_00406900(uVar6,uVar11,uVar12,uVar13,local_48);
          }
          local_8._0_1_ = 4;
          iVar5 = in_ECX[9];
          puVar1 = (undefined4 *)in_ECX[iVar5 + 1];
          in_ECX[iVar5 + 1] = 0;
          if (puVar1 != (undefined4 *)0x0) {
            (**(code **)*puVar1)();
          }
          in_ECX[iVar5 + 1] = uVar6;
          piVar8 = (int *)in_ECX[in_ECX[9] + 1];
          if ((undefined **)*piVar8 == r8b::CDSPBlockConvolver::vftable) {
            local_18 = (code *)((piVar8[5] * (int)local_18 + -1 + piVar8[0x12] + piVar8[6]) /
                               piVar8[6]);
          }
          else {
            local_18 = (code *)(*(code *)((undefined **)*piVar8)[4])();
          }
          ppuVar2 = *(undefined ***)in_ECX[in_ECX[9] + 1];
          pcVar3 = (code *)ppuVar2[2];
          local_30 = CONCAT44(pcVar3,(undefined4)local_30);
          if (ppuVar2 == r8b::CDSPBlockConvolver::vftable) {
            local_48 = *(double *)((int *)in_ECX[in_ECX[9] + 1] + 0xe);
          }
          else {
            fVar9 = (float10)(*pcVar3)();
            local_48 = (double)fVar9;
          }
          in_ECX[9] = in_ECX[9] + 1;
          iVar5 = local_1c;
        } while (dVar10 <= (double)CONCAT44(param_5,param_4));
      }
      uVar6 = 1;
      if (((double)local_1c * param_6) / (double)CONCAT44(param_5,param_4) == 0.5) {
        uVar6 = 2;
      }
      local_30 = CONCAT44(uVar6,(undefined4)local_30);
      local_3c[1] = FUN_004c554b();
      local_8._0_1_ = 8;
      if (local_3c[1] == 0) {
        uVar13 = 0;
      }
      else {
        uVar12 = 1;
        uVar11 = FUN_004066c0(param_9,0x3ff0000000000000);
        uVar13 = FUN_00406900(uVar11,uVar12,uVar6,uVar13,local_48);
      }
      local_8 = CONCAT31(local_8._1_3_,4);
      iVar5 = in_ECX[9];
      puVar1 = (undefined4 *)in_ECX[iVar5 + 1];
      in_ECX[iVar5 + 1] = 0;
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)();
      }
      in_ECX[iVar5 + 1] = uVar13;
      piVar8 = (int *)in_ECX[in_ECX[9] + 1];
      if ((undefined **)*piVar8 == r8b::CDSPBlockConvolver::vftable) {
        param_8 = (piVar8[5] * (int)local_18 + -1 + piVar8[0x12] + piVar8[6]) / piVar8[6];
      }
      else {
        param_8 = (*(code *)((undefined **)*piVar8)[4])();
      }
      if (*(undefined ***)in_ECX[in_ECX[9] + 1] != r8b::CDSPBlockConvolver::vftable) {
        (*(code *)(*(undefined ***)in_ECX[in_ECX[9] + 1])[2])();
      }
      in_ECX[9] = in_ECX[9] + 1;
      if (1 < local_30._4_4_) {
        ExceptionList = local_10;
        return;
      }
    }
    else {
      local_24 = 2;
      iVar5 = FUN_004c554b();
      local_30 = CONCAT44(iVar5,(undefined4)local_30);
      local_8._0_1_ = 5;
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        uVar14 = 0;
        uVar12 = 1;
        uVar11 = 2;
        uVar6 = FUN_004066c0(param_9,0x4000000000000000);
        iVar5 = FUN_00406900(uVar6,uVar11,uVar12,uVar13,uVar14);
      }
      local_8 = CONCAT31(local_8._1_3_,4);
      puVar1 = (undefined4 *)*piVar8;
      *piVar8 = 0;
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)();
      }
      *piVar8 = iVar5;
      in_ECX[9] = 1;
      piVar7 = (int *)*piVar8;
      if ((undefined **)*piVar7 == r8b::CDSPBlockConvolver::vftable) {
        param_8 = (int)(piVar7[5] * param_1 + -1 + piVar7[0x12] + piVar7[6]) / piVar7[6];
      }
      else {
        param_8 = (*(code *)((undefined **)*piVar7)[4])();
      }
      ppuVar2 = *(undefined ***)*piVar8;
      local_18 = (code *)ppuVar2[2];
      local_3c[0] = param_8;
      local_20 = param_8;
      if (ppuVar2 == r8b::CDSPBlockConvolver::vftable) {
        local_48 = *(double *)((int *)*piVar8 + 0xe);
      }
      else {
        fVar9 = (float10)(*local_18)();
        local_48 = (double)fVar9;
      }
      local_18 = (code *)0x1;
      dVar10 = (double)CONCAT44(param_5,param_4) * 2.0;
      while (dVar10 <= param_6) {
        if (dVar10 == param_6) {
          if (0 < (int)local_18) {
            in_ECX[9] = local_18;
            param_1 = 1;
            local_3c[1] = 0;
            if (1 < (int)local_18) {
              piVar8 = in_ECX + 2;
              do {
                iVar5 = FUN_004c554b();
                local_8._0_1_ = 6;
                if (iVar5 == 0) {
                  piVar7 = (int *)0x0;
                }
                else {
                  uVar12 = 1;
                  uVar11 = 2;
                  uVar6 = FUN_004066c0(param_9,0x4000000000000000);
                  piVar7 = (int *)FUN_00406900(uVar6,uVar11,uVar12,uVar13,local_48);
                }
                local_8 = CONCAT31(local_8._1_3_,4);
                puVar1 = (undefined4 *)*piVar8;
                *piVar8 = 0;
                if (puVar1 != (undefined4 *)0x0) {
                  (**(code **)*puVar1)();
                }
                *piVar8 = (int)piVar7;
                if ((undefined **)*piVar7 == r8b::CDSPBlockConvolver::vftable) {
                  param_8 = (piVar7[5] * param_8 + -1 + piVar7[0x12] + piVar7[6]) / piVar7[6];
                }
                else {
                  param_8 = (*(code *)((undefined **)*piVar7)[4])();
                }
                piVar7 = (int *)*piVar8;
                local_3c[param_1 & 1] = param_8;
                ppuVar2 = (undefined **)*piVar7;
                if (ppuVar2 == r8b::CDSPBlockConvolver::vftable) {
                  local_48 = *(double *)(piVar7 + 0xe);
                }
                else {
                  fVar9 = (float10)(*(code *)ppuVar2[2])();
                  local_48 = (double)fVar9;
                }
                param_1 = param_1 + 1;
                piVar8 = piVar8 + 1;
              } while ((int)param_1 < (int)local_18);
              local_20 = local_3c[0];
            }
            iVar5 = local_3c[1];
            FID_conflict__free((void *)in_ECX[0xb]);
            uVar13 = FUN_004c554b();
            in_ECX[0xb] = uVar13;
            if (iVar5 < 1) {
              ExceptionList = local_10;
              return;
            }
            FID_conflict__free((void *)in_ECX[0xc]);
            uVar13 = FUN_004c554b();
            in_ECX[0xc] = uVar13;
            ExceptionList = local_10;
            return;
          }
          break;
        }
        local_18 = (code *)((int)local_18 + 1);
        dVar10 = (double)(1 << ((byte)local_18 & 0x1f)) * (double)CONCAT44(param_5,param_4);
      }
      FID_conflict__free((void *)in_ECX[0xb]);
      uVar13 = FUN_004c554b();
      in_ECX[0xb] = uVar13;
    }
    iVar5 = FUN_004c554b();
    if (iVar5 == 0) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = (int *)FUN_004083b0();
    }
    puVar1 = (undefined4 *)in_ECX[10];
    in_ECX[10] = 0;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)();
    }
    in_ECX[10] = piVar8;
    if ((undefined **)*piVar8 == r8b::CDSPFracInterpolator<24,673>::vftable) {
      fVar9 = (float10)FUN_004e4f50(((double)param_8 * *(double *)(piVar8 + 0x404)) /
                                    *(double *)(piVar8 + 0x402));
      iVar5 = (int)fVar9 + 1;
    }
    else {
      iVar5 = (*(code *)((undefined **)*piVar8)[4])();
    }
    if (local_20 < iVar5) {
      if ((int)param_1 < iVar5) {
        FID_conflict__free((void *)in_ECX[0xd]);
        uVar13 = FUN_004c554b();
        in_ECX[0xd] = uVar13;
        in_ECX[0xe] = uVar13;
      }
      else {
        in_ECX[0xe] = 0;
      }
    }
    else {
      in_ECX[0xe] = in_ECX[0xb];
    }
  }
  ExceptionList = local_10;
  return;
}

