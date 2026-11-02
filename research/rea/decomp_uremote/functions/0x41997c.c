// rea decompile_all
// name: FUN_0041997c
// address: 0x41997c
// body: available
// range: 0x41997c-0x41a5f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0041997c(int param_1,int param_2,uint *param_3)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  undefined4 uVar12;
  uint local_40;
  uint local_38;
  uint *local_34;
  byte *local_2c;
  int local_28;
  uint local_24;
  uint *local_20;
  uint local_1c;
  undefined4 *local_18;
  int local_14;
  uint *local_10;
  byte *local_c;
  uint local_8;
  
  iVar7 = param_1;
  uVar5 = (uint)&local_24 ^ (uint)&param_1 ^ (uint)&param_2;
  local_24 = ((int)((int)uVar5 >> 10 ^ uVar5) >> 10 ^ uVar5) & 0xffff;
  local_10 = (uint *)0x0;
  local_28 = 0;
  if (local_24 == 0) {
    local_24 = 0x7384;
  }
  *(int *)(param_1 + 0x470) = param_1 + 0x70;
  *(int *)(param_1 + 0x540) = param_1 + 0x474;
  puVar3 = *(undefined4 **)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x40) = 0;
  puVar11 = (uint *)(param_1 + 0x474);
  local_20 = puVar11;
  local_18 = puVar3;
  if ((*(int *)(param_1 + 0x5d0) != 0) && (*(int *)(param_1 + 0x5d4) != 0)) {
    _memset(*(void **)(param_1 + 0x5d0),0,*(int *)(param_1 + 0x5d4) << 2);
  }
  *(int *)(iVar7 + 0x478) = param_2;
  local_2c = (byte *)((int)param_3 + param_2);
  *(byte **)(iVar7 + 0x47c) = local_2c;
  local_c = *(byte **)(iVar7 + 0x478);
  *puVar11 = (uint)local_c;
  uVar5 = *(uint *)(iVar7 + 0x18);
  local_8 = *(uint *)(iVar7 + 0x1c);
  local_14 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    (*(code *)puVar3[1])(*puVar3);
  }
  param_3 = (uint *)((uint)param_3 & 0xffffff);
  local_40 = uVar5;
LAB_0041a566:
  do {
    if (local_2c <= local_c) {
      return local_14;
    }
    bVar2 = *local_c;
    puVar11 = *(uint **)(param_1 + 0x470);
    local_1c = 0;
    pbVar1 = local_c + 1;
    if (bVar2 == 0xff) {
      if (local_2c < local_c + 5) {
        return 0xa0;
      }
      local_1c = CONCAT31(CONCAT21(CONCAT11(*pbVar1,local_c[2]),local_c[3]),local_c[4]);
      if (local_1c + 32000 < 0xfa01) {
        if (param_3._3_1_ == '\0') {
          local_1c = local_1c << 0x10;
        }
      }
      else if (param_3._3_1_ == '\0') {
        param_3 = (uint *)CONCAT13(1,param_3._0_3_);
      }
      uVar6 = 0;
      local_c = local_c + 5;
    }
    else if (bVar2 < 0xc) {
      if (bVar2 == 0xb) {
        uVar6 = 0x18;
        local_c = pbVar1;
      }
      else {
        switch(bVar2) {
        case 1:
          uVar6 = 0x10;
          local_c = pbVar1;
          break;
        default:
switchD_00419a8f_caseD_2:
          bVar2 = *local_c;
          if (bVar2 < 0x20) {
            return 0xa0;
          }
          if (bVar2 < 0xf7) {
            local_1c = bVar2 - 0x8b;
            local_c = pbVar1;
          }
          else {
            pbVar1 = local_c + 2;
            if (local_2c < pbVar1) {
              return 0xa0;
            }
            bVar2 = *local_c;
            if (bVar2 < 0xfb) {
              local_1c = (uint)bVar2 * 0x100 + -0xf694 + (uint)local_c[1];
              local_c = pbVar1;
            }
            else {
              local_1c = ((uint)bVar2 * -0x100 + 0xfa94) - (uint)local_c[1];
              local_c = pbVar1;
            }
          }
          uVar6 = 0;
          if (param_3._3_1_ == '\0') {
            local_1c = local_1c << 0x10;
          }
          break;
        case 3:
          uVar6 = 0x12;
          local_c = pbVar1;
          break;
        case 4:
          uVar6 = 0xe;
          local_c = pbVar1;
          break;
        case 5:
          uVar6 = 9;
          local_c = pbVar1;
          break;
        case 6:
          uVar6 = 6;
          local_c = pbVar1;
          break;
        case 7:
          uVar6 = 0xd;
          local_c = pbVar1;
          break;
        case 8:
          uVar6 = 0xb;
          local_c = pbVar1;
          break;
        case 9:
          uVar6 = 5;
          local_c = pbVar1;
          break;
        case 10:
          uVar6 = 0x16;
          local_c = pbVar1;
        }
      }
    }
    else if (bVar2 < 0x16) {
      if (bVar2 == 0x15) {
        uVar6 = 10;
        local_c = pbVar1;
      }
      else if (bVar2 == 0xc) {
        if (local_2c < pbVar1) {
          return 0xa0;
        }
        bVar2 = *pbVar1;
        local_c = local_c + 2;
        if (bVar2 < 8) {
          if (bVar2 == 7) {
            uVar6 = 4;
          }
          else if (bVar2 == 0) {
            uVar6 = 0xf;
          }
          else if (bVar2 == 1) {
            uVar6 = 0x13;
          }
          else if (bVar2 == 2) {
            uVar6 = 0x11;
          }
          else {
            if (bVar2 != 6) {
              return 0xa0;
            }
            uVar6 = 3;
          }
        }
        else if (bVar2 == 0xc) {
          uVar6 = 0x14;
        }
        else if (bVar2 == 0x10) {
          uVar6 = 0x15;
        }
        else if (bVar2 == 0x11) {
          uVar6 = 0x17;
        }
        else {
          if (bVar2 != 0x21) {
            return 0xa0;
          }
          uVar6 = 0x19;
        }
      }
      else if (bVar2 == 0xd) {
        uVar6 = 2;
        local_c = pbVar1;
      }
      else if (bVar2 == 0xe) {
        uVar6 = 1;
        local_c = pbVar1;
      }
      else {
        if (bVar2 != 0xf) goto switchD_00419a8f_caseD_2;
        uVar6 = 0x1a;
        local_c = pbVar1;
      }
    }
    else if (bVar2 == 0x16) {
      uVar6 = 7;
      local_c = pbVar1;
    }
    else if (bVar2 == 0x1e) {
      uVar6 = 0xc;
      local_c = pbVar1;
    }
    else {
      if (bVar2 != 0x1f) goto switchD_00419a8f_caseD_2;
      uVar6 = 8;
      local_c = pbVar1;
    }
    if (((0 < local_28) && (uVar6 != 0)) && ((uVar6 < 0x16 || (0x18 < uVar6)))) {
      local_28 = 0;
    }
    if (param_3._3_1_ != '\0') {
      if (uVar6 != 0) {
        if (uVar6 != 0x14) {
          param_3 = (uint *)((uint)param_3 & 0xffffff);
        }
        goto LAB_00419c2f;
      }
LAB_00419c37:
      if (0x3ff < (int)((int)puVar11 + (-0x70 - param_1) & 0xfffffffcU)) {
        return 0xa0;
      }
      *puVar11 = local_1c;
LAB_0041a4c7:
      puVar11 = puVar11 + 1;
      goto switchD_0041a15b_caseD_f;
    }
LAB_00419c2f:
    if (uVar6 == 0) goto LAB_00419c37;
    if (uVar6 == 0x15) {
      if ((int)((int)puVar11 + (-0x70 - param_1) & 0xfffffffcU) < 8) {
        return 0xa1;
      }
      iVar8 = (int)*(short *)((int)puVar11 + -2);
      iVar9 = (int)*(short *)((int)puVar11 + -6);
      if ((int)puVar11 + (-0x78 - param_1) >> 2 < iVar9) {
        return 0xa1;
      }
      local_10 = (uint *)0x0;
      local_28 = 0;
      puVar11 = puVar11 + (-2 - iVar9);
      puVar10 = local_10;
      if (iVar8 < 0x15) {
        if (iVar8 == 0x14) {
          if (iVar9 != 2) {
            return 0xa0;
          }
          *puVar11 = *puVar11 + puVar11[1];
          goto LAB_0041a115;
        }
        if (iVar8 < 4) {
          if (iVar8 == 3) {
            if (iVar9 != 1) {
              return 0xa0;
            }
            local_10 = (uint *)0x1;
            puVar10 = local_10;
            if (local_18 != (undefined4 *)0x0) {
              (*(code *)local_18[5])(*local_18,(int)*(short *)(*(int *)(iVar7 + 0x14) + 2));
              puVar10 = local_10;
            }
          }
          else if (iVar8 == 0) {
            if (iVar9 != 3) {
              return 0xa0;
            }
            if (*(int *)(param_1 + 0x578) == 0) {
              return 0xa0;
            }
            if (*(int *)(param_1 + 0x57c) != 7) {
              return 0xa0;
            }
            *puVar11 = uVar5;
            puVar11[1] = local_8;
            local_10 = (uint *)0x2;
            puVar10 = local_10;
          }
          else if (iVar8 == 1) {
            if (iVar9 != 0) {
              return 0xa0;
            }
            *(undefined4 *)(param_1 + 0x578) = 1;
            *(undefined4 *)(param_1 + 0x57c) = 0;
            local_14 = FUN_0041969d(iVar7,uVar5,local_8);
            if (local_14 != 0) {
              return local_14;
            }
            local_14 = FUN_00419583(iVar7,6);
            puVar10 = local_10;
            if (local_14 != 0) {
              return local_14;
            }
          }
          else {
            if (iVar8 != 2) goto LAB_00419fd7;
            if (iVar9 != 0) {
              return 0xa0;
            }
            if (*(int *)(param_1 + 0x578) == 0) {
              return 0xa0;
            }
            iVar8 = *(int *)(param_1 + 0x57c);
            *(int *)(param_1 + 0x57c) = iVar8 + 1;
            if (iVar8 - 1U < 6) {
              if ((iVar8 == 3) || (iVar8 == 6)) {
                uVar6 = 1;
              }
              else {
                uVar6 = iVar8 - 1U & 0xffffff00;
              }
              FUN_004195ba(iVar7,uVar5,local_8,uVar6);
              puVar10 = local_10;
            }
          }
        }
        else if (iVar8 < 0xc) {
LAB_00419fd7:
          if (iVar9 < 0) {
            return 0xa0;
          }
          local_28 = iVar9;
          if (iVar8 < 0) {
            return 0xa0;
          }
        }
        else if (iVar8 < 0xe) {
          puVar11 = (uint *)(param_1 + 0x70);
        }
        else if (iVar8 < 0x13) {
          puVar4 = *(uint **)(param_1 + 0x5b8);
          if (puVar4 == (uint *)0x0) {
            return 0xa0;
          }
          puVar10 = (uint *)(((iVar8 == 0x12) - 0xd) + iVar8);
          if (iVar9 != *puVar4 * (int)puVar10) {
            return 0xa0;
          }
          local_34 = puVar11 + (int)puVar10;
          local_10 = puVar11;
          for (iVar8 = (int)puVar10; iVar8 != 0; iVar8 = iVar8 + -1) {
            local_38 = *local_10;
            local_1c = 1;
            if (1 < *puVar4) {
              do {
                iVar9 = thunk_FUN_00401000(*local_34,*(undefined4 *)(puVar4[0x22] + local_1c * 4));
                local_38 = local_38 + iVar9;
                local_34 = local_34 + 1;
                local_1c = local_1c + 1;
              } while (local_1c < *puVar4);
            }
            *local_10 = local_38;
            local_10 = local_10 + 1;
          }
        }
        else {
          if (iVar8 != 0x13) goto LAB_00419fd7;
          if (iVar9 != 1) {
            return 0xa0;
          }
          if (*(int *)(param_1 + 0x5b8) == 0) {
            return 0xa0;
          }
          if (*(short *)((int)puVar11 + 2) < 0) {
            return 0xa0;
          }
          if (*(uint *)(param_1 + 0x5d4) <
              (uint)((int)*(short *)((int)puVar11 + 2) + **(int **)(param_1 + 0x5b8))) {
            return 0xa0;
          }
          _memcpy((void *)(*(int *)(param_1 + 0x5d0) + *(short *)((int)puVar11 + 2) * 4),
                  *(void **)(*(int *)(param_1 + 0x5b8) + 0x88),**(int **)(param_1 + 0x5b8) << 2);
          puVar10 = local_10;
        }
      }
      else {
        if (iVar8 == 0x15) {
          if (iVar9 != 2) {
            return 0xa0;
          }
          *puVar11 = *puVar11 - puVar11[1];
        }
        else {
          if (iVar8 == 0x16) {
            if (iVar9 != 2) {
              return 0xa0;
            }
            uVar6 = thunk_FUN_00401000(*puVar11,puVar11[1]);
          }
          else {
            if (iVar8 != 0x17) {
              if (iVar8 == 0x18) {
                if (iVar9 != 2) {
                  return 0xa0;
                }
                if (*(int *)(param_1 + 0x5b8) == 0) {
                  return 0xa0;
                }
                uVar6 = (uint)*(short *)((int)puVar11 + 6);
                if ((int)uVar6 < 0) {
                  return 0xa0;
                }
                if (*(uint *)(param_1 + 0x5d4) <= uVar6) {
                  return 0xa0;
                }
                *(uint *)(*(int *)(param_1 + 0x5d0) + uVar6 * 4) = *puVar11;
              }
              else if (iVar8 == 0x19) {
                if (iVar9 != 1) {
                  return 0xa0;
                }
                if (*(int *)(param_1 + 0x5b8) == 0) {
                  return 0xa0;
                }
                uVar6 = (uint)*(short *)((int)puVar11 + 2);
                if ((int)uVar6 < 0) {
                  return 0xa0;
                }
                if (*(uint *)(param_1 + 0x5d4) <= uVar6) {
                  return 0xa0;
                }
                *puVar11 = *(uint *)(*(int *)(param_1 + 0x5d0) + uVar6 * 4);
                local_10 = (uint *)0x1;
                puVar10 = local_10;
              }
              else {
                if (iVar8 != 0x1b) {
                  if (iVar8 != 0x1c) goto LAB_00419fd7;
                  if (iVar9 != 0) {
                    return 0xa0;
                  }
                  uVar6 = local_24;
                  if (0x7fff < (int)local_24) {
                    uVar6 = local_24 + 1;
                  }
                  *puVar11 = uVar6;
                  local_24 = thunk_FUN_00401000(local_24,0x10000 - local_24);
                  if (local_24 == 0) {
                    local_24 = 0x2873;
                  }
                  goto LAB_0041a115;
                }
                if (iVar9 != 4) {
                  return 0xa0;
                }
                if ((int)puVar11[3] < (int)puVar11[2]) {
                  *puVar11 = puVar11[1];
                }
                local_10 = (uint *)0x1;
                puVar10 = local_10;
              }
              goto LAB_0041a11f;
            }
            if (iVar9 != 2) {
              return 0xa0;
            }
            if (puVar11[1] == 0) {
              return 0xa0;
            }
            uVar6 = FUN_0040d2d8();
          }
          *puVar11 = uVar6;
        }
LAB_0041a115:
        local_10 = (uint *)0x1;
        puVar10 = local_10;
      }
LAB_0041a11f:
      local_10 = puVar10;
      *(uint **)(param_1 + 0x470) = puVar11 + (int)local_10;
      goto LAB_0041a566;
    }
    if ((int)puVar11 + (-0x70 - param_1) >> 2 < *(int *)(&UNK_008fc318 + uVar6 * 4)) {
      return 0xa1;
    }
    puVar11 = puVar11 + -*(int *)(&UNK_008fc318 + uVar6 * 4);
    switch(uVar6) {
    case 1:
      FUN_004196cf(iVar7);
      puVar3 = local_18;
      if (local_18 != (undefined4 *)0x0) {
        iVar8 = (*(code *)local_18[2])(*local_18,(int)*(short *)(*(int *)(iVar7 + 0x14) + 2));
        if (iVar8 != 0) {
          return 0xa0;
        }
        (*(code *)puVar3[6])
                  (*puVar3,*(undefined4 *)(iVar7 + 0x14),*(undefined4 *)(iVar7 + 0x4c),
                   *(undefined4 *)(param_1 + 0x5bc));
      }
      FUN_0040d89f();
      return 0;
    case 2:
      *(undefined4 *)(iVar7 + 0x40) = 1;
      *(int *)(iVar7 + 0x20) = *(int *)(iVar7 + 0x20) + *puVar11;
      uVar5 = puVar11[1];
      *(undefined4 *)(iVar7 + 0x2c) = 0;
      *(uint *)(iVar7 + 0x28) = uVar5;
      uVar5 = *(int *)(iVar7 + 0x18) + *puVar11;
      local_8 = *(uint *)(iVar7 + 0x1c);
      local_40 = uVar5;
      goto LAB_0041a183;
    case 3:
      iVar7 = FUN_004197da(*puVar11,puVar11[2],(int)*(short *)((int)puVar11 + 0x12));
      return iVar7;
    case 4:
      *(undefined4 *)(iVar7 + 0x40) = 1;
      *(int *)(iVar7 + 0x20) = *(int *)(iVar7 + 0x20) + *puVar11;
      *(int *)(iVar7 + 0x24) = *(int *)(iVar7 + 0x24) + puVar11[1];
      *(uint *)(iVar7 + 0x28) = puVar11[2];
      *(uint *)(iVar7 + 0x2c) = puVar11[3];
      uVar5 = *(int *)(iVar7 + 0x18) + *puVar11;
      local_8 = puVar11[1] + *(int *)(iVar7 + 0x1c);
LAB_0041a183:
      if (*(char *)(iVar7 + 0x46) != '\0') {
        return 0;
      }
      break;
    case 5:
      if ((*(int *)(iVar7 + 0x40) == 3) || (*(int *)(iVar7 + 0x40) == 2)) {
        FUN_004196cf(iVar7);
      }
      *(undefined4 *)(iVar7 + 0x40) = 1;
      break;
    case 6:
      iVar8 = FUN_0041969d(iVar7,uVar5,local_8);
      if (iVar8 != 0) {
        return iVar8;
      }
      uVar5 = uVar5 + *puVar11;
      goto LAB_0041a3a6;
    case 7:
      uVar5 = uVar5 + *puVar11;
      goto LAB_0041a201;
    case 8:
      local_14 = FUN_0041969d(iVar7,uVar5,local_8);
      if (local_14 != 0) {
        return local_14;
      }
      local_14 = FUN_00419583(iVar7,3);
      if (local_14 != 0) {
        return local_14;
      }
      uVar6 = *puVar11;
      FUN_004195ba(iVar7,uVar5 + uVar6,local_8,0);
      local_8 = local_8 + puVar11[2];
      uVar5 = uVar5 + uVar6 + puVar11[1];
      FUN_004195ba(iVar7,uVar5,local_8,0);
      local_8 = local_8 + puVar11[3];
      goto LAB_0041a283;
    case 9:
      iVar8 = FUN_0041969d(iVar7,uVar5,local_8);
      if (iVar8 != 0) {
        return iVar8;
      }
      uVar5 = uVar5 + *puVar11;
      uVar6 = puVar11[1];
      goto LAB_0041a3a3;
    case 10:
      uVar5 = uVar5 + *puVar11;
      uVar6 = puVar11[1];
      goto LAB_0041a2b9;
    case 0xb:
      local_14 = FUN_0041969d(iVar7,uVar5,local_8);
      if (local_14 != 0) {
        return local_14;
      }
      local_14 = FUN_00419583(iVar7,3);
      if (local_14 != 0) {
        return local_14;
      }
      local_8 = local_8 + puVar11[1];
      uVar6 = *puVar11;
      FUN_004195ba(iVar7,uVar5 + uVar6,local_8,0);
      local_8 = local_8 + puVar11[3];
      iVar8 = uVar5 + uVar6 + puVar11[2];
      FUN_004195ba(iVar7,iVar8,local_8,0);
      uVar5 = iVar8 + puVar11[4];
      local_8 = local_8 + puVar11[5];
      goto LAB_0041a283;
    case 0xc:
      local_14 = FUN_0041969d(iVar7,uVar5,local_8);
      if (local_14 != 0) {
        return local_14;
      }
      local_14 = FUN_00419583(iVar7,3);
      if (local_14 != 0) {
        return local_14;
      }
      local_8 = local_8 + *puVar11;
      FUN_004195ba(iVar7,uVar5,local_8,0);
      local_8 = local_8 + puVar11[2];
      uVar6 = puVar11[1];
      FUN_004195ba(iVar7,uVar5 + uVar6,local_8,0);
      uVar5 = uVar5 + uVar6 + puVar11[3];
LAB_0041a283:
      FUN_004195ba(iVar7,uVar5,local_8,1);
      break;
    case 0xd:
      iVar8 = FUN_0041969d(iVar7,uVar5,local_8);
      if (iVar8 != 0) {
        return iVar8;
      }
      uVar6 = *puVar11;
LAB_0041a3a3:
      local_8 = local_8 + uVar6;
LAB_0041a3a6:
      local_14 = 0;
      local_14 = FUN_00419608(iVar7,uVar5,local_8);
      if (local_14 != 0) {
        return local_14;
      }
      break;
    case 0xe:
      uVar6 = *puVar11;
LAB_0041a2b9:
      local_8 = local_8 + uVar6;
LAB_0041a201:
      if (*(int *)(param_1 + 0x578) == 0) {
        if (*(int *)(iVar7 + 0x40) == 0) {
LAB_00419df7:
          return 0xa0;
        }
        *(undefined4 *)(iVar7 + 0x40) = 2;
      }
      break;
    case 0xf:
    case 0x1a:
      break;
    case 0x10:
      if (local_18 != (undefined4 *)0x0) {
        uVar12 = 1;
LAB_0041a505:
        (*(code *)local_18[3])(*local_18,uVar12,puVar11);
      }
      break;
    case 0x11:
      if (local_18 != (undefined4 *)0x0) {
        uVar12 = 1;
LAB_0041a51b:
        (*(code *)local_18[4])(*local_18,uVar12,puVar11);
      }
      break;
    case 0x12:
      if (local_18 != (undefined4 *)0x0) {
        *puVar11 = *puVar11 + local_40;
        uVar12 = 0;
        goto LAB_0041a505;
      }
      break;
    case 0x13:
      if (local_18 != (undefined4 *)0x0) {
        *puVar11 = *puVar11 + local_40;
        puVar11[2] = puVar11[2] + local_40;
        puVar11[4] = puVar11[4] + local_40;
        uVar12 = 0;
        goto LAB_0041a51b;
      }
      break;
    case 0x14:
      param_3 = puVar11 + 1;
      uVar6 = FUN_0040d2d8();
      puVar10 = param_3;
      *puVar11 = uVar6;
      param_3 = (uint *)((uint)param_3 & 0xffffff);
      puVar11 = puVar10;
      break;
    default:
      goto LAB_00419df7;
    case 0x16:
      iVar8 = (int)*(short *)((int)puVar11 + 2);
      if (iVar8 < 0) {
        return 0xa0;
      }
      if (*(int *)(param_1 + 0x554) <= iVar8) {
        return 0xa0;
      }
      if (0xf < ((int)local_20 + (-0x474 - param_1)) / 0xc) {
        return 0xa0;
      }
      *local_20 = (uint)local_c;
      puVar10 = local_20 + 3;
      iVar8 = iVar8 * 4;
      uVar6 = *(uint *)(iVar8 + *(int *)(param_1 + 0x558));
      local_20[4] = uVar6;
      if (*(int *)(param_1 + 0x55c) == 0) {
        iVar9 = *(int *)(param_1 + 0x550);
        if (iVar9 < 0) {
          iVar9 = 0;
        }
        local_20[4] = uVar6 + iVar9;
        local_20[5] = *(uint *)(*(int *)(param_1 + 0x558) + 4 + iVar8);
      }
      else {
        local_20[5] = *(int *)(*(int *)(param_1 + 0x55c) + iVar8) + uVar6;
      }
      *puVar10 = local_20[4];
      if (local_20[4] == 0) {
        return 0xa0;
      }
      *(uint **)(param_1 + 0x540) = puVar10;
      local_c = (byte *)local_20[4];
      local_2c = (byte *)local_20[5];
      local_20 = puVar10;
      break;
    case 0x17:
      if (0 < (int)local_10) {
        local_10 = (uint *)((int)local_10 + -1);
        break;
      }
      if (local_28 == 0) {
        return 0xa0;
      }
      local_28 = local_28 + -1;
      goto LAB_0041a4c7;
    case 0x18:
      if (local_20 <= (uint *)(param_1 + 0x474U)) {
        return 0xa0;
      }
      puVar10 = local_20 + -3;
      local_c = (byte *)*puVar10;
      local_2c = (byte *)local_20[-1];
      *(uint **)(param_1 + 0x540) = puVar10;
      local_20 = puVar10;
      break;
    case 0x19:
      local_8 = puVar11[1];
      uVar5 = *puVar11;
      *(undefined4 *)(param_1 + 0x578) = 0;
    }
switchD_0041a15b_caseD_f:
    *(uint **)(param_1 + 0x470) = puVar11;
  } while( true );
}

