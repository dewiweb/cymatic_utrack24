// rea decompile_all
// name: FUN_005ef0a0
// address: 0x5ef0a0
// body: available
// range: 0x5ef0a0-0x5ef52d inclusive
// range: 0x5ef530-0x5ef7e4 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ef0a0(undefined4 param_1,uint *param_2,uint param_3,int *param_4,undefined4 *param_5,
                 int param_6,int param_7,uint *param_8,uint *param_9)

{
  double dVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *in_ECX;
  double *pdVar10;
  undefined4 in_EDX;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  double dVar14;
  uint local_1dc;
  uint local_1d4;
  uint local_1c4;
  uint local_1c0;
  uint local_1b8;
  uint local_1b0;
  uint *local_1ac;
  undefined1 local_1a8 [256];
  float local_a8 [34];
  float local_20 [5];
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_1ac = param_2;
  uVar3 = -(uint)(0x10 < *(uint *)(*in_ECX + 0x1c)) & 0x10;
  uVar4 = uVar3 + 0xf;
  local_1b8 = 0;
  if ((*(int *)(in_ECX[1] + 0x1c58) == 0) || (*param_2 < 4)) {
    puVar2 = (undefined4 *)*param_5;
    uVar11 = *param_2;
    puVar2[1] = param_4;
    *puVar2 = 1;
    uVar11 = puVar2[0x48] + 8 + uVar11 * param_3;
  }
  else {
    uVar11 = 0xffffffff;
  }
  uVar5 = 0;
  if (3 < *param_2) {
    uVar5 = (**(code **)(in_ECX[1] + 0x1c2c))(param_4 + 4,*param_2 - 4,local_20);
    if ((*(int *)(in_ECX[1] + 0x1c50) == 0) && (local_20[1] == 0.0)) {
      uVar6 = 1;
      if (1 < *local_1ac) {
        do {
          if (*param_4 != param_4[uVar6]) goto LAB_005ef218;
          uVar6 = uVar6 + 1;
        } while (uVar6 < *local_1ac);
      }
      puVar2 = (undefined4 *)param_5[1];
      puVar2[1] = *param_4;
      *puVar2 = 0;
      uVar3 = puVar2[0x48] + 8 + param_3;
      if (uVar3 < uVar11) {
        uVar5 = 1;
        uVar11 = uVar3;
      }
      else {
        uVar5 = 0;
      }
    }
    else {
LAB_005ef218:
      local_1c0 = uVar11;
      if ((*(int *)(in_ECX[1] + 0x1c54) == 0) ||
         ((*(int *)(*in_ECX + 0x22c) == 0 && (uVar11 == 0xffffffff)))) {
        uVar6 = uVar5;
        if (*(int *)(*in_ECX + 0x238) != 0) {
          uVar6 = 4;
        }
        local_1b0 = uVar6;
        uVar13 = 0;
        if (*(int *)(*in_ECX + 0x238) == 0) {
          uVar13 = uVar5;
        }
        if (*local_1ac <= uVar6) {
          uVar6 = *local_1ac - 1;
          local_1b0 = uVar6;
        }
        local_1b0 = uVar6;
        if (uVar13 <= uVar6) {
          dVar1 = (double)(&DAT_00c24bb0)[-((int)param_3 >> 0x1f)];
          do {
            if (local_20[uVar13] < (float)((double)(int)param_3 + dVar1)) {
              if (local_20[uVar13] <= 0.0) {
                iVar7 = 0;
              }
              else {
                iVar7 = FUN_006f55c1();
              }
              uVar11 = iVar7 + 1;
              uVar8 = (uint)(local_1b8 == 0);
              uVar5 = uVar3 + 0xe;
              if (uVar11 < uVar4) {
                uVar5 = uVar11;
              }
              uVar5 = FUN_005eef20(*(undefined4 *)(param_7 + uVar8 * 4),
                                   *(undefined4 *)(in_ECX[1] + 0x1ac0),
                                   *(undefined4 *)(in_ECX[1] + 0x1ac4),*local_1ac,param_3,uVar13,
                                   uVar5,uVar4,in_EDX,param_1,*(undefined4 *)(*in_ECX + 0x23c),
                                   uVar11,param_5[uVar8],*(undefined4 *)(param_6 + uVar8 * 4));
              uVar6 = local_1b0;
              uVar11 = local_1c0;
              if (uVar5 < local_1c0) {
                uVar11 = uVar5;
                local_1c0 = uVar5;
                local_1b8 = uVar8;
              }
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 <= uVar6);
        }
      }
      uVar6 = *(uint *)(*in_ECX + 0x22c);
      uVar5 = local_1b8;
      if (uVar6 != 0) {
        if (*local_1ac <= uVar6) {
          uVar6 = *local_1ac - 1;
        }
        if ((uVar6 != 0) &&
           (local_1dc = 0, puVar12 = local_1ac, local_1c4 = uVar6, *(int *)(*in_ECX + 0x28) != 0)) {
          do {
            FUN_005fbff0(*(undefined4 *)(in_ECX[1] + 0xd4),*puVar12);
            (**(code **)(in_ECX[1] + 0x1c34))
                      (*(undefined4 *)(in_ECX[1] + 0xd4),*puVar12,uVar6 + 1,local_a8);
            if (local_a8[0] != 0.0) {
              FUN_005fba10(in_ECX[1] + 0x1dc4,local_1a8);
              iVar7 = *in_ECX;
              if (*(int *)(iVar7 + 0x238) == 0) {
                if (*(int *)(iVar7 + 0x234) == 0) {
                  iVar7 = *(int *)(iVar7 + 0x230);
                }
                else {
                  iVar7 = 5;
                }
                local_1d4 = FUN_005f86a0(*puVar12,iVar7 + param_3);
                local_1c4 = local_1d4;
              }
              else {
                local_1d4 = 1;
              }
              local_1b0 = local_1c4;
              if (*local_1ac <= local_1c4) {
                local_1c4 = *local_1ac - 1;
                local_1b0 = local_1c4;
              }
              puVar12 = local_1ac;
              uVar6 = local_1c4;
              local_1b0 = local_1c4;
              if (local_1d4 <= local_1c4) {
                pdVar10 = (double *)(&local_1b0 + local_1d4 * 2);
                dVar1 = (double)(&DAT_00c24bb0)[-((int)param_3 >> 0x1f)];
                iVar7 = local_1d4 << 7;
                do {
                  dVar14 = *pdVar10;
                  if (dVar14 <= 0.0) {
                    if (0.0 <= dVar14) goto LAB_005ef599;
                    dVar14 = 1e+32;
                  }
                  else {
                    dVar14 = (0.2402265069591007 /
                             ((double)(int)(*local_1ac - local_1d4) +
                             (double)(&DAT_00c24bb0)[-((int)(*local_1ac - local_1d4) >> 0x1f)])) *
                             dVar14;
                    FUN_006f8470();
                    dVar14 = (dVar14 * 0.5) / 0.6931471805599453;
                    if (dVar14 < 0.0) {
LAB_005ef599:
                      dVar14 = 0.0;
                    }
                  }
                  if (dVar14 < (double)(int)param_3 + dVar1) {
                    if (dVar14 <= 0.0) {
                      iVar9 = 0;
                    }
                    else {
                      iVar9 = FUN_006f55c1();
                    }
                    uVar11 = uVar3 + 0xe;
                    if (iVar9 + 1U < uVar4) {
                      uVar11 = iVar9 + 1U;
                    }
                    uVar6 = local_1b0;
                    if (*(int *)(*in_ECX + 0x234) == 0) {
                      uVar5 = *(uint *)(*in_ECX + 0x230);
                      uVar13 = uVar5;
                    }
                    else {
                      uVar5 = 5;
                      if (param_3 < 0x11) {
                        iVar9 = 0x1f;
                        if (local_1d4 != 0) {
                          for (; local_1d4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
                          }
                        }
                        uVar13 = (0x20 - iVar9) - param_3;
                        if (0xf < uVar13) {
                          uVar13 = 0xf;
                        }
                        if (uVar13 < 5) {
                          uVar13 = 5;
                        }
                      }
                      else {
                        uVar13 = 0xf;
                      }
                    }
                    for (; local_1b0 = uVar6, uVar5 <= uVar13; uVar5 = uVar5 + 1) {
                      iVar9 = in_ECX[1];
                      uVar8 = (uint)(local_1b8 == 0);
                      uVar6 = FUN_005eece0(*(undefined4 *)(param_7 + uVar8 * 4),
                                           *(undefined4 *)(iVar9 + 0x1ac0),
                                           *(undefined4 *)(iVar9 + 0x1ac4),iVar7 + 0x1d44 + iVar9,
                                           *local_1ac,param_3,local_1d4,uVar5,uVar11,uVar4,in_EDX,
                                           param_1,*(undefined4 *)(*in_ECX + 0x23c),iVar9,
                                           param_5[uVar8],*(undefined4 *)(param_6 + uVar8 * 4));
                      if ((uVar6 != 0) && (uVar6 < local_1c0)) {
                        local_1c0 = uVar6;
                        local_1b8 = uVar8;
                      }
                      uVar6 = local_1b0;
                    }
                  }
                  local_1d4 = local_1d4 + 1;
                  pdVar10 = pdVar10 + 1;
                  iVar7 = iVar7 + 0x80;
                  puVar12 = local_1ac;
                } while (local_1d4 <= uVar6);
              }
            }
            local_1dc = local_1dc + 1;
            uVar5 = local_1b8;
            uVar11 = local_1c0;
          } while (local_1dc < *(uint *)(*in_ECX + 0x28));
        }
      }
    }
  }
  if (uVar11 == 0xffffffff) {
    uVar3 = *local_1ac;
    puVar2 = (undefined4 *)param_5[uVar5];
    puVar2[1] = param_4;
    *puVar2 = 1;
    uVar11 = puVar2[0x48] + 8 + uVar3 * param_3;
  }
  *param_8 = uVar5;
  *param_9 = uVar11;
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

