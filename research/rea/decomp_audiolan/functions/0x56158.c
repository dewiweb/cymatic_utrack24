// rea decompile_all
// name: FUN_00056158
// address: 0x56158
// body: available
// range: 0x56158-0x5637f inclusive
// range: 0x56490-0x5659f inclusive
// range: 0x566a4-0x567ef inclusive
// range: 0x568f4-0x56c9b inclusive
// range: 0x56d04-0x56da3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_00056158(undefined1 *param_1,int *param_2)

{
  int ***pppiVar1;
  undefined2 uVar2;
  int *piVar3;
  int iVar4;
  code ***pppcVar5;
  int iVar6;
  int iVar7;
  int ***pppiVar8;
  int *piVar9;
  int ***pppiVar10;
  int **ppiVar11;
  int ****ppppiVar12;
  uint uVar13;
  int ****local_178;
  code ****local_174;
  int ****local_170;
  undefined4 *local_16c;
  code ***local_168;
  undefined1 *local_164;
  undefined1 *local_160;
  undefined1 auStack_158 [260];
  code ***local_54;
  undefined1 local_50 [2];
  undefined1 auStack_4e [2];
  undefined1 local_4c [2];
  undefined1 uStack_4a;
  undefined1 uStack_49;
  code ***local_48;
  undefined1 *local_44;
  int ***local_40;
  byte local_3c [4];
  int ***local_38 [3];
  code ***local_2c [2];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  pppiVar1 = _DAT_00056380;
  param_1[0xc] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(int ****)(param_1 + 0x10) = pppiVar1;
  *(int ****)(param_1 + 0x14) = pppiVar1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  piVar3 = (int *)FUN_0010f82c(0xc,0);
  iVar4 = FUN_0010f82c(0x10,0);
  piVar3[2] = iVar4;
  *piVar3 = *(int *)(param_1 + 0x18);
  piVar3[1] = 1;
  *(int **)(param_1 + 0x18) = piVar3;
  iVar4 = piVar3[2];
  *(int *)(param_1 + 0x20) = iVar4;
  *(int *)(param_1 + 0x24) = iVar4 + 0x10;
  *(int *)(param_1 + 0x28) = iVar4;
  *(int *)(param_1 + 0x20) = iVar4 + 0x10;
  *(int *)iVar4 = iVar4;
  piVar3 = (int *)(param_1 + 0x14);
  *(int *)(*(int *)(param_1 + 0x28) + 4) = *(int *)(param_1 + 0x28);
  iVar4 = *param_2;
  if (*(int *)(iVar4 + -0xc) == -1) {
    if (piVar3 != param_2) {
      local_178 = *(int *****)(iVar4 + -4);
      local_174 = (code ****)0x0;
      local_170 = local_178;
      FUN_001da110(piVar3,0,*(undefined4 *)(*piVar3 + -4));
    }
  }
  else {
    if ((int ***)(iVar4 + -0xc) != pppiVar1 + -3) {
      *(int ***)(iVar4 + -0xc) = (int **)(*(int *)(iVar4 + -0xc) + 1);
    }
    if ((int ***)*piVar3 != pppiVar1) {
      pppiVar8 = (int ***)*piVar3 + -3;
      ppiVar11 = *pppiVar8;
      if ((ppiVar11 == (int **)0xffffffff) ||
         ((pppiVar8 != pppiVar1 + -3 &&
          (*pppiVar8 = (int **)((int)ppiVar11 + -1), ppiVar11 == (int **)0x0)))) {
        FUN_0010fa20(*piVar3 + -0xc,*(int *)(*piVar3 + -8) + 0xe,0);
      }
    }
    *piVar3 = *param_2;
  }
  iVar4 = FUN_00003374(*param_2,s_I_a_clock_deviation__00056382 + 2);
  if (iVar4 != 0) {
    iVar4 = iVar4 - *param_2;
    if (iVar4 != -1) {
      iVar4 = FUN_00002f10(iVar4 + *param_2,s_a_clock_deviation___u____u_00056398,&local_178,
                           &local_174);
      if (iVar4 != 2) {
        FUN_000028a4(s_ERROR__SDP_Parser__Error_parsing_000563b4);
        return param_1;
      }
      if ((code ****)local_178 != local_174) {
        FUN_000028a4(s_ERROR__SDP_Parser__Clock_deviati_000563f4);
        return param_1;
      }
    }
  }
  iVar4 = FUN_00003374(*param_2,s_a_clock_domain__00056428);
  if (iVar4 == 0) {
LAB_00056490:
    iVar4 = FUN_00003374(*param_2,s_a_ts_refclk__000565a0);
    if (iVar4 != 0) {
      iVar4 = iVar4 - *param_2;
      if (iVar4 != -1) {
        iVar6 = FUN_00002f10(*param_2 + iVar4,DAT_000565b0,param_1 + 0xc);
        if ((iVar6 != 1) &&
           (iVar4 = FUN_00002f10(*param_2 + iVar4,_DAT_000565b4,param_1 + 0xc), iVar4 != 1)) {
          FUN_000028a4(s_l__ERROR__SDP_Parser__Error_pars_000565b5 + 3);
          return param_1;
        }
        goto LAB_00056500;
      }
    }
    param_1[3] = 1;
  }
  else {
    iVar4 = iVar4 - *param_2;
    if (iVar4 == -1) goto LAB_00056490;
    iVar4 = FUN_00002f10(*param_2 + iVar4,s_a_clock_domain__PTPv2__hhu_00056438,param_1 + 0xc);
    if (iVar4 != 1) {
      FUN_000028a4(s_ERROR__SDP_Parser__Error_parsing_00056454);
      return param_1;
    }
  }
LAB_00056500:
  iVar4 = FUN_00003374(*param_2,s_a_sync_time__000565f0);
  if (iVar4 != 0) {
    iVar4 = iVar4 - *param_2;
    if (iVar4 != -1) {
      iVar4 = FUN_00002f10(iVar4 + *param_2,s_a_sync_time___u_00056600,param_1 + 8);
      if (iVar4 != 1) {
        FUN_000028a4(s_ERROR__SDP_Parser__Error_parsing_00056610);
        return param_1;
      }
      goto LAB_000566a8;
    }
  }
  iVar4 = FUN_00003374(*param_2,s_a_mediaclk__00056648);
  if (iVar4 != 0) {
    iVar4 = iVar4 - *param_2;
    if (iVar4 != -1) {
      iVar4 = FUN_00002f10(iVar4 + *param_2,s_a_mediaclk_direct___u_00056654,param_1 + 8);
      if (iVar4 != 1) {
        FUN_000028a4(s_ERROR__SDP_Parser__Error_parsing_0005666c);
        return param_1;
      }
      goto LAB_000566a8;
    }
  }
  param_1[3] = 1;
LAB_000566a8:
  iVar4 = FUN_00003374(*param_2,s_m_audio_000567f0);
  if (iVar4 != 0) {
    uVar13 = iVar4 - *param_2;
    if (uVar13 != 0xffffffff) {
      local_160 = local_4c + 3;
      local_178 = (int ****)(local_50 + 1);
      local_170 = (int ****)(local_50 + 3);
      local_174 = (code ****)(local_50 + 2);
      local_164 = local_4c + 2;
      local_168 = (code ***)(local_4c + 1);
      local_16c = (undefined4 *)local_4c;
      iVar4 = FUN_00002f10(*param_2 + uVar13,s_m_audio__hu_RTP_AVP__hhu__hhu__h_000567fc,
                           param_1 + 0xe,local_50);
      if (iVar4 < 2) {
        FUN_000028a4(s_ERROR__SDP_Parser__Error_parsing_0005689c);
        return param_1;
      }
      local_54 = (code ***)(iVar4 + -1);
      pppcVar5 = local_54;
      if (0 < (int)local_54) {
        pppcVar5 = (code ***)(param_1 + 4);
      }
      iVar4 = 0;
      if (0 < (int)local_54) {
        do {
          _local_50 = pppcVar5;
          if ((*(uint *)(*param_2 + -4) < uVar13) ||
             (iVar6 = FUN_00003374(*param_2 + uVar13,s_a_rtpmap__00056838), iVar6 == 0)) {
LAB_000568f4:
            FUN_000028a4(s_ERROR__SDP_Parser__Missing__a_rt_00056c9c);
            return param_1;
          }
          iVar6 = iVar6 - *param_2;
          if (iVar6 == -1) goto LAB_000568f4;
          local_174 = (code ****)&local_170;
          local_178 = (int ****)_local_50;
          iVar7 = FUN_00002f10(*param_2 + iVar6,s_a_rtpmap__hhu_________u__hu_00056844,local_3c,
                               auStack_158);
          if (iVar7 != 4) {
            FUN_000028a4(s_ERROR__SDP_Parser__Error_parsing_00056864);
            return param_1;
          }
          local_174 = (code ****)local_38;
          local_44 = local_4c;
          piVar3 = (int *)(param_1 + 0x18);
          local_164 = auStack_158;
          local_48 = (code ***)FUN_000034d0(auStack_158);
          pppiVar8 = pppiVar1;
          if (local_48 != (code ***)0x0) {
            local_2c[0] = local_48;
            local_40 = (int ***)0x80;
            ppppiVar12 = &local_40;
            if ((code ***)0x80 < local_48) {
              ppppiVar12 = (int ****)local_2c;
            }
            pppcVar5 = (code ***)*ppppiVar12;
            local_168 = local_48;
            if ((code ***)0xfffffff1 < pppcVar5) {
              local_178 = (int ****)0xfffffff1;
              FUN_0010f7cc(8,DAT_00056cc4,DAT_00056cc4,pppcVar5);
            }
            if (pppcVar5 < local_168) {
              local_178 = (int ****)pppcVar5;
              FUN_0010f7cc(8,DAT_00056cc4,DAT_00056cc4,local_168);
            }
            pppiVar8 = DAT_00056cc8;
            if (pppcVar5 != (code ***)0x0) {
              pppiVar8 = (int ***)FUN_0010f82c((code *)((int)pppcVar5 + 0xe),0);
              if (pppiVar8 != (int ***)0x0) {
                *pppiVar8 = (int **)0x0;
                pppiVar8[1] = (int **)0x0;
                pppiVar8[2] = (int **)0x0;
              }
              pppiVar8[1] = (int **)pppcVar5;
              pppiVar8[2] = (int **)local_168;
              *pppiVar8 = (int **)0x0;
              if ((code *)((int)local_168 + (int)pppiVar8) + 0xc != entry) {
                ((code *)((int)local_168 + (int)pppiVar8))[0xc] = (code)0x0;
              }
            }
            pppiVar8 = pppiVar8 + 3;
          }
          _local_4c = pppiVar8;
          FUN_00003628(pppiVar8,local_164,local_48);
          local_164 = (undefined1 *)(uint)local_3c[0];
          uVar2 = local_170._0_2_;
          local_160 = (undefined1 *)FUN_001da408(local_174,local_44);
          *(undefined2 *)(local_160 + 4) = uVar2;
          local_160[6] = (char)local_164;
          local_174 = *(code *****)(param_1 + 0x28);
          pppiVar8 = *(int ****)(param_1 + 0x1c);
          if (pppiVar8 == (int ***)0x0) {
            pppiVar8 = *(int ****)(param_1 + 0x20);
            if (pppiVar8 == *(int ****)(param_1 + 0x24)) {
              if (*piVar3 == 0) {
                local_168 = (code ***)(code *)0x20;
              }
              else {
                uVar13 = *(uint *)(*piVar3 + 4);
                local_168 = (code ***)(uVar13 + (uVar13 >> 1) + (uVar13 >> 3));
                if (local_168 < (code ***)(uVar13 + 0x20)) {
                  local_168 = (code ***)(uVar13 + 0x20);
                }
              }
              piVar9 = (int *)FUN_0010f82c(0xc,0);
              iVar7 = FUN_0010f82c((int)local_168 << 4,0);
              piVar9[2] = iVar7;
              *piVar9 = *piVar3;
              piVar9[1] = (int)local_168;
              *piVar3 = (int)piVar9;
              pppiVar8 = (int ***)piVar9[2];
              *(int ****)(param_1 + 0x20) = pppiVar8;
              *(int ****)(param_1 + 0x24) = pppiVar8 + (int)local_168 * 4;
            }
            *(int ****)(param_1 + 0x20) = pppiVar8 + 4;
          }
          else {
            *(int ***)(param_1 + 0x1c) = *pppiVar8;
          }
          if (pppiVar8 + 2 != (int ***)0x0) {
            iVar7 = FUN_001da408(pppiVar8 + 2,local_160);
            *(undefined2 *)(iVar7 + 4) = *(undefined2 *)(local_160 + 4);
            *(undefined1 *)(iVar7 + 6) = local_160[6];
          }
          *pppiVar8 = (int **)local_174;
          pppiVar8[1] = (int **)local_174[1];
          *local_174[1] = (code **)pppiVar8;
          local_174[1] = (code ***)pppiVar8;
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
          if (local_38[0] != pppiVar1) {
            pppiVar8 = local_38[0] + -3;
            ppiVar11 = *pppiVar8;
            if ((ppiVar11 == (int **)0xffffffff) ||
               ((pppiVar8 != DAT_00056cc8 &&
                (*pppiVar8 = (int **)((int)ppiVar11 + -1), ppiVar11 == (int **)0x0)))) {
              FUN_0010fa20(local_38[0] + -3,(int)local_38[0][-2] + 0xe,0);
            }
          }
          if (_local_4c != pppiVar1) {
            pppiVar8 = _local_4c + -3;
            ppiVar11 = *pppiVar8;
            if ((ppiVar11 == (int **)0xffffffff) ||
               ((pppiVar8 != DAT_00056cc8 &&
                (*pppiVar8 = (int **)((int)ppiVar11 + -1), ppiVar11 == (int **)0x0)))) {
              FUN_0010fa20(_local_4c + -3,(int)_local_4c[-2] + 0xe,0);
            }
          }
          iVar4 = iVar4 + 1;
          uVar13 = iVar6 + 1;
          pppcVar5 = _local_50;
        } while (iVar4 < (int)local_54);
      }
      iVar4 = FUN_00003374(*param_2,s_c_IN_IP4_00056ccc);
      if ((iVar4 == 0) || (iVar4 - *param_2 == -1)) {
        FUN_000028a4(s_ERROR__SDP_Parser__No__c_IN_IP4__00056da4);
      }
      else {
        local_16c = (undefined4 *)0x0;
        iVar4 = FUN_00002f10((iVar4 - *param_2) + *param_2,s_c_IN_IP4_________d_00056cd8,auStack_158
                             ,&local_16c);
        if (0 < iVar4) {
          piVar3 = (int *)(param_1 + 0x10);
          pppcVar5 = (code ***)FUN_000034d0(auStack_158);
          if (pppcVar5 == (code ***)0x0) {
            pppiVar8 = (int ***)*piVar3;
            pppiVar10 = pppiVar8 + -3;
            ppiVar11 = *pppiVar10;
            if (ppiVar11 == (int **)0x0) {
              pppiVar8[-1] = (int **)0x0;
              *(undefined1 *)*piVar3 = 0;
            }
            else {
              if (pppiVar8 != pppiVar1) {
                if (ppiVar11 == (int **)0xffffffff) {
                  FUN_0010fa20(pppiVar10,(int)pppiVar8[-2] + 0xe,0);
                }
                else if (pppiVar10 != DAT_00056cc8) {
                  *pppiVar10 = (int **)((int)ppiVar11 + -1);
                }
              }
              *piVar3 = (int)pppiVar1;
            }
          }
          else {
            local_174 = (code ****)0x0;
            local_178 = (int ****)pppcVar5;
            local_170 = (int ****)pppcVar5;
            FUN_001da110(piVar3,0,*(undefined4 *)(*piVar3 + -4),auStack_158);
          }
        }
        iVar4 = FUN_00003374(*param_2,s_a_recvonly_00056cec);
        if ((iVar4 != 0) && (iVar4 - *param_2 != -1)) {
          param_1[1] = 1;
        }
        iVar4 = FUN_00003374(*param_2,s_a_sendonly_00056cf8);
        if ((iVar4 != 0) && (iVar4 - *param_2 != -1)) {
          param_1[2] = 1;
        }
        *param_1 = 1;
      }
      return param_1;
    }
  }
  FUN_000028a4(s_ERROR__SDP_Parser__No__m_audio__000568d0);
  return param_1;
}

