// rea decompile_all
// name: FUN_0007cb38
// address: 0x7cb38
// body: available
// range: 0x7cb38-0x7ceff inclusive
// range: 0x7d084-0x7d3af inclusive
// range: 0x7d3f8-0x7d727 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0007cb38(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 **ppuVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  undefined4 *local_ac;
  undefined1 auStack_a8 [64];
  int local_68;
  undefined4 *local_64 [3];
  undefined2 local_58 [2];
  undefined4 local_54;
  uint local_50;
  uint local_4c [2];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [16];
  int iStack_30;
  int iStack_2c;
  undefined4 local_28;
  
  *(int *)(param_1 + 0x24) = param_2;
  iStack_30 = param_1;
  iStack_2c = param_2;
  local_28 = param_3;
  iVar3 = FUN_000420a8(param_3,param_1 + 0x28);
  if (iVar3 == 0) {
    FUN_000028a4(s____ERROR__OutgoingStream__Cannot_0007cf29 + 3);
    return 0;
  }
  iVar3 = FUN_00048ef8(local_28,s_StreamID_0007cf00,param_1 + 0x2c);
  if (iVar3 == 0) {
    FUN_000028a4(s_ERROR__OutgoingStream__Could_NOT_0007cf5c,s_StreamID_0007cf00);
    return 0;
  }
  iVar3 = FUN_00042a00(local_28,s_User_StreamName_0007cf0c,param_1 + 0x30);
  if (iVar3 == 0) {
    FUN_000028d8(auStack_a8,s_Stream_u_0007cf88,*(undefined4 *)(param_1 + 0x2c));
    FUN_001da458(param_1 + 0x30,auStack_a8);
    FUN_000028a4(s_ERROR__OutgoingStream__Could_NOT_0007cf5c,s_User_StreamName_0007cf0c);
  }
  else {
    iVar3 = FUN_00043278(local_28,s_AppendMAC_0007cf1c,local_64);
    if (iVar3 == 0) {
      FUN_000028a4(s_ERROR__OutgoingStream__Could_NOT_0007cf5c,s_AppendMAC_0007cf1c);
      local_64[0] = (undefined4 *)CONCAT31(local_64[0]._1_3_,1);
    }
    else if ((char)local_64[0] == '\0') goto LAB_0007cd00;
    uVar2 = _DAT_0007cf28;
    piVar10 = (int *)(param_1 + 0x30);
    FUN_001a0700();
    FUN_001da408(&local_68,param_2 + 0x11c);
    FUN_001a0d18(uVar2);
    iVar15 = *piVar10;
    uVar8 = *(uint *)(iVar15 + -4);
    iVar3 = *(int *)(local_68 + -4);
    if ((*(uint *)(iVar15 + -8) < uVar8 + iVar3) || (1 < *(int *)(iVar15 + -0xc) + 1U)) {
      if (-iVar3 - 0xfU < uVar8) {
        FUN_0010f7cc(8,s_StreamID_0007cf00 + 8,s_StreamID_0007cf00 + 8,uVar8,-iVar3 - 0xfU);
      }
      FUN_001da110(piVar10,*(undefined4 *)(*piVar10 + -4),0,local_68,*(undefined4 *)(local_68 + -4),
                   0,iVar3);
    }
    else {
      FUN_00003628(iVar15 + uVar8,local_68,iVar3 + 1);
      *(uint *)(*piVar10 + -4) = uVar8 + iVar3;
    }
    FUN_001da314(&local_68);
  }
LAB_0007cd00:
  iVar3 = FUN_00043278(local_28,s_User_Enabled_0007cf94,param_1 + 0x34);
  if (iVar3 == 0) {
    FUN_000028a4(s_ERROR__OutgoingStream__Could_NOT_0007cf5c,s_User_Enabled_0007cf94);
  }
  iVar3 = FUN_00043278(local_28,s_User_AutomaticConfigEnabled_0007cfa4,param_1 + 0x35);
  if (iVar3 == 0) {
    FUN_000028a4(s_ERROR__OutgoingStream__Could_NOT_0007cf5c,s_User_AutomaticConfigEnabled_0007cfa4)
    ;
  }
  iVar3 = FUN_00042a00(local_28,s_User_DestAddr_0007cfc0,param_1 + 0x38);
  if ((iVar3 == 0) || (iVar3 = FUN_000bc20c(*(undefined4 *)(param_1 + 0x38)), iVar3 == 0)) {
    FUN_000028d8(auStack_a8,s_239_8_4__u_0007cfd0,*(int *)(param_1 + 0x2c) + 200);
    FUN_001da458(param_1 + 0x38,auStack_a8);
    FUN_000028a4(s_ERROR__OutgoingStream__Could_NOT_0007cf5c,s_User_DestAddr_0007cfc0);
  }
  iVar3 = FUN_00048ef8(local_28,s_User_DestPort_0007cfdc,&local_50);
  if (((iVar3 == 0) || (*(ushort *)(param_1 + 0x3c) < 1000)) || (0xffff < local_50)) {
    FUN_000028a4(s_ERROR__OutgoingStream__Could_NOT_0007cf5c,s_User_DestPort_0007cfdc);
  }
  else {
    *(short *)(param_1 + 0x3c) = (short)local_50;
  }
  iVar3 = FUN_00048ef8(local_28,s_User_TTL_0007cfec,local_4c);
  if (((-iVar3 & local_4c[0]) == 0) || (0xff < local_4c[0])) {
    FUN_000028a4(s_ERROR__OutgoingStream__Could_NOT_0007cf5c,s_User_TTL_0007cfec);
  }
  else {
    *(char *)(param_1 + 0x3e) = (char)local_4c[0];
  }
  iVar3 = FUN_00042a00(local_28,s_User_SIPIdentity_0007cff8,param_1 + 0x40);
  if (iVar3 == 0) {
    FUN_000028a4(s_ERROR__OutgoingStream__Could_NOT_0007cf5c,s_User_SIPIdentity_0007cff8);
  }
  iVar3 = FUN_00043278(local_28,s_EnabledIn1xFS_0007d00c,param_1 + 0x44);
  if (iVar3 == 0) {
    FUN_000028a4(s_ERROR__OutgoingStream__Could_NOT_0007cf5c,s_EnabledIn1xFS_0007d00c);
  }
  iVar3 = FUN_00043278(local_28,s_EnabledIn2xFS_0007d01c,param_1 + 0x45);
  if (iVar3 == 0) {
    FUN_000028a4(s_ERROR__OutgoingStream__Could_NOT_0007cf5c,s_EnabledIn2xFS_0007d01c);
  }
  iVar3 = FUN_00043278(local_28,s_EnabledIn4xFS_0007d02c,param_1 + 0x46);
  if (iVar3 == 0) {
    FUN_000028a4(s_ERROR__OutgoingStream__Could_NOT_0007cf5c,s_EnabledIn4xFS_0007d02c);
  }
  iVar3 = FUN_00048ef8(local_28,s_SamplesPerPacket1xFS_0007d03c,local_58);
  if (iVar3 == 0) {
    FUN_000028a4(s_ERROR__OutgoingStream__Could_NOT_0007cf5c,s_SamplesPerPacket1xFS_0007d03c);
  }
  else {
    *(undefined2 *)(param_1 + 0x48) = local_58[0];
  }
  iVar3 = FUN_00048ef8(local_28,s_SamplesPerPacket2xFS_0007d054,local_58);
  if (iVar3 == 0) {
    FUN_000028a4(s_ERROR__OutgoingStream__Could_NOT_0007cf5c,s_SamplesPerPacket2xFS_0007d054);
  }
  else {
    *(undefined2 *)(param_1 + 0x4a) = local_58[0];
  }
  iVar3 = FUN_00048ef8(local_28,s_SamplesPerPacket4xFS_0007d06c,local_58);
  if (iVar3 == 0) {
    FUN_000028a4(s_ERROR__OutgoingStream__Could_NOT_0007cf5c,s_SamplesPerPacket4xFS_0007d06c);
  }
  else {
    *(undefined2 *)(param_1 + 0x4c) = local_58[0];
  }
  iVar3 = FUN_00048ef8(local_28,s_NoOfChannels_0007d3b0,local_58);
  if (iVar3 == 0) {
    FUN_000028a4(s_ERROR__OutgoingStream__Could_NOT_0007cf5c,s_NoOfChannels_0007d3b0);
  }
  else {
    *(undefined2 *)(param_1 + 0x4e) = local_58[0];
  }
  iVar3 = FUN_00042a00(local_28,s_ChannelRouting_0007d3c0,param_1 + 0x50);
  if (iVar3 == 0) {
    FUN_000028a4(s_ERROR__OutgoingStream__Could_NOT_0007cf5c,s_ChannelRouting_0007d3c0);
    return 0;
  }
  local_ac = (undefined4 *)(uint)*(ushort *)(param_1 + 0x4e);
  piVar10 = (int *)(param_1 + 0x54);
  if ((undefined4 *)0x3fffffff < local_ac) {
    FUN_0010f7cc(8,s_NoOfChannels_0007d3b0 + 0xc,s_NoOfChannels_0007d3b0 + 0xc,local_ac,0x3fffffff);
  }
  piVar12 = DAT_0007d3d0;
  if ((undefined4 *)(*(int *)(param_1 + 0x5c) - *piVar10 >> 2) < local_ac) {
    uVar8 = *(int *)(param_1 + 0x58) - *piVar10 >> 2;
    puVar6 = (undefined4 *)(uVar8 + (uVar8 >> 1) + (uVar8 >> 3));
    local_64[0] = (undefined4 *)(uVar8 + 1);
    if ((undefined4 *)(uVar8 + 1) <= puVar6) {
      local_64[0] = puVar6;
    }
    ppuVar7 = local_64;
    if (local_64[0] <= local_ac) {
      ppuVar7 = &local_ac;
    }
    puVar6 = *ppuVar7;
    iVar4 = FUN_0010f82c((int)puVar6 << 2,0);
    iVar13 = *(int *)(param_1 + 0x58);
    iVar15 = iVar4;
    for (iVar3 = *piVar10; iVar3 != iVar13; iVar3 = iVar3 + 4) {
      if (iVar15 != 0) {
        FUN_001da408(iVar15,iVar3);
      }
      iVar15 = iVar15 + 4;
    }
    piVar9 = *(int **)(param_1 + 0x58);
    for (piVar11 = (int *)*piVar10; piVar11 != piVar9; piVar11 = piVar11 + 1) {
      if ((int *)*piVar11 != piVar12 + 3) {
        piVar5 = (int *)*piVar11 + -3;
        iVar3 = *piVar5;
        if ((iVar3 == -1) || ((piVar5 != piVar12 && (*piVar5 = iVar3 + -1, iVar3 == 0)))) {
          FUN_0010fa20(*piVar11 + -0xc,*(int *)(*piVar11 + -8) + 0xe,0);
        }
      }
    }
    FUN_0010fa20(*piVar10,*(int *)(param_1 + 0x5c) - *piVar10 >> 2,0);
    iVar3 = *piVar10;
    *piVar10 = iVar4;
    *(uint *)(param_1 + 0x58) = (*(int *)(param_1 + 0x58) - iVar3 & 0xfffffffcU) + iVar4;
    *(int *)(param_1 + 0x5c) = iVar4 + (int)puVar6 * 4;
  }
  uVar8 = 0;
  local_54 = _DAT_0007d3d4;
  if (*(short *)(param_1 + 0x4e) != 0) {
    do {
      FUN_000028d8(auStack_a8,s_I_User_ChannelName_u_0007d3d6 + 2,uVar8);
      iVar3 = FUN_00042a00(local_28,auStack_a8,&local_54);
      if (iVar3 == 0) {
        FUN_000028a4(s_ERROR__OutgoingStream__Could_NOT_0007cf5c,auStack_a8);
        FUN_000028d8(auStack_a8,s_Channel__u_0007d3ec,uVar8 + 1);
        piVar12 = (int *)(param_1 + 0x54);
        iVar3 = FUN_001da358(auStack_44,auStack_a8,auStack_40);
        piVar10 = *(int **)(param_1 + 0x58);
        if (piVar10 == *(int **)(param_1 + 0x5c)) {
          uVar1 = (int)piVar10 - *piVar12 >> 2;
          local_68 = iVar3;
          if (uVar1 < (uint)((int)*(int **)(param_1 + 0x5c) - *piVar12 >> 2)) {
            *(int **)(param_1 + 0x58) = piVar10 + 1;
            if (piVar10 != (int *)0x0) {
              thunk_FUN_001da408(piVar10,piVar10 + -1);
            }
            piVar11 = piVar10 + -1;
            piVar12 = piVar10;
            while (piVar10 != piVar11) {
              piVar12 = piVar12 + -1;
              piVar11 = piVar11 + -1;
              FUN_001da4a8(piVar12,piVar11);
            }
            FUN_001da4a8(piVar10,local_68);
          }
          else {
            uVar14 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
            if (uVar14 < uVar1 + 1) {
              uVar14 = uVar1 + 1;
            }
            iVar15 = FUN_0010f82c(uVar14 << 2,0);
            iVar3 = iVar15;
            for (piVar11 = (int *)*piVar12; piVar11 != piVar10; piVar11 = piVar11 + 1) {
              if (iVar3 != 0) {
                thunk_FUN_001da408(iVar3,piVar11);
              }
              iVar3 = iVar3 + 4;
            }
            iVar3 = ((int)piVar10 - *piVar12 & 0xfffffffcU) + iVar15;
            if (iVar3 != 0) {
              thunk_FUN_001da408(iVar3,local_68);
            }
            piVar11 = *(int **)(param_1 + 0x58);
            iVar3 = ((int)piVar10 - *piVar12 & 0xfffffffcU) + iVar15;
            for (; piVar10 != piVar11; piVar10 = piVar10 + 1) {
              iVar3 = iVar3 + 4;
              if (iVar3 != 0) {
                thunk_FUN_001da408(iVar3,piVar10);
              }
            }
            piVar10 = (int *)*piVar12;
            piVar9 = *(int **)(param_1 + 0x58);
            bVar16 = piVar10 != piVar9;
            if (bVar16) {
              piVar11 = DAT_0007d3d0;
            }
            iVar3 = (int)piVar9 - (int)piVar10 >> 2;
            while (bVar16) {
              if ((int *)*piVar10 != piVar11 + 3) {
                piVar5 = (int *)*piVar10 + -3;
                iVar4 = *piVar5;
                if ((iVar4 == -1) || ((piVar5 != piVar11 && (*piVar5 = iVar4 + -1, iVar4 == 0)))) {
                  FUN_0010fa20(*piVar10 + -0xc,*(int *)(*piVar10 + -8) + 0xe,0);
                }
              }
              piVar10 = piVar10 + 1;
              bVar16 = piVar10 != piVar9;
            }
            FUN_0010fa20(*piVar12,*(int *)(param_1 + 0x5c) - *piVar12 >> 2,0);
            *piVar12 = iVar15;
            *(int *)(param_1 + 0x58) = iVar15 + iVar3 * 4 + 4;
            *(uint *)(param_1 + 0x5c) = iVar15 + uVar14 * 4;
          }
        }
        else {
          *(int **)(param_1 + 0x58) = piVar10 + 1;
          if (piVar10 != (int *)0x0) {
            thunk_FUN_001da408();
          }
        }
        FUN_001da314(auStack_44);
      }
      else {
        piVar10 = *(int **)(param_1 + 0x58);
        piVar12 = (int *)(param_1 + 0x54);
        if (piVar10 == *(int **)(param_1 + 0x5c)) {
          uVar1 = (int)piVar10 - *piVar12 >> 2;
          local_ac = &local_54;
          if (uVar1 < (uint)((int)*(int **)(param_1 + 0x5c) - *piVar12 >> 2)) {
            *(int **)(param_1 + 0x58) = piVar10 + 1;
            if (piVar10 != (int *)0x0) {
              thunk_FUN_001da408(piVar10,piVar10 + -1);
            }
            piVar11 = piVar10 + -1;
            piVar12 = piVar10;
            while (piVar10 != piVar11) {
              piVar12 = piVar12 + -1;
              piVar11 = piVar11 + -1;
              FUN_001da4a8(piVar12,piVar11);
            }
            FUN_001da4a8(piVar10,local_ac);
          }
          else {
            uVar14 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
            if (uVar14 < uVar1 + 1) {
              uVar14 = uVar1 + 1;
            }
            iVar15 = FUN_0010f82c(uVar14 << 2,0);
            iVar3 = iVar15;
            for (piVar11 = (int *)*piVar12; piVar11 != piVar10; piVar11 = piVar11 + 1) {
              if (iVar3 != 0) {
                thunk_FUN_001da408(iVar3,piVar11);
              }
              iVar3 = iVar3 + 4;
            }
            iVar3 = ((int)piVar10 - *piVar12 & 0xfffffffcU) + iVar15;
            if (iVar3 != 0) {
              thunk_FUN_001da408(iVar3,local_ac);
            }
            piVar11 = *(int **)(param_1 + 0x58);
            iVar3 = ((int)piVar10 - *piVar12 & 0xfffffffcU) + iVar15;
            for (; piVar10 != piVar11; piVar10 = piVar10 + 1) {
              iVar3 = iVar3 + 4;
              if (iVar3 != 0) {
                FUN_001da408(iVar3,piVar10);
              }
            }
            piVar10 = (int *)*piVar12;
            piVar9 = *(int **)(param_1 + 0x58);
            bVar16 = piVar10 != piVar9;
            if (bVar16) {
              piVar11 = DAT_0007d3d0;
            }
            local_64[0] = (undefined4 *)((int)piVar9 - (int)piVar10 >> 2);
            while (bVar16) {
              if ((int *)*piVar10 != piVar11 + 3) {
                piVar5 = (int *)*piVar10 + -3;
                iVar3 = *piVar5;
                if ((iVar3 == -1) || ((piVar5 != piVar11 && (*piVar5 = iVar3 + -1, iVar3 == 0)))) {
                  FUN_0010fa20(*piVar10 + -0xc,*(int *)(*piVar10 + -8) + 0xe,0);
                }
              }
              piVar10 = piVar10 + 1;
              bVar16 = piVar10 != piVar9;
            }
            FUN_0010fa20(*piVar12,*(int *)(param_1 + 0x5c) - *piVar12 >> 2,0);
            *piVar12 = iVar15;
            *(int *)(param_1 + 0x58) = iVar15 + (int)local_64[0] * 4 + 4;
            *(uint *)(param_1 + 0x5c) = iVar15 + uVar14 * 4;
          }
        }
        else {
          *(int **)(param_1 + 0x58) = piVar10 + 1;
          if (piVar10 != (int *)0x0) {
            thunk_FUN_001da408();
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(ushort *)(param_1 + 0x4e));
  }
  FUN_001da314(&local_54);
  return 1;
}

