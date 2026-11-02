// rea decompile_all
// name: FUN_0007d96c
// address: 0x7d96c
// body: available
// range: 0x7d96c-0x7dd43 inclusive
// range: 0x7dec4-0x7e20f inclusive
// range: 0x7e270-0x7e5a3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0007d96c(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  undefined1 auStack_a8 [64];
  char *local_68;
  char local_64 [4];
  uint local_60;
  uint local_5c;
  undefined2 local_58 [2];
  char local_54 [4];
  uint local_50;
  uint local_4c;
  uint local_48 [2];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [12];
  int iStack_30;
  int iStack_2c;
  undefined4 local_28;
  
  *(int *)(param_1 + 0x24) = param_2;
  iStack_30 = param_1;
  iStack_2c = param_2;
  local_28 = param_3;
  iVar2 = FUN_000473e8(param_3,param_1 + 0x28);
  if (iVar2 == 0) {
    FUN_00002898(s_c__ERROR__OutgoingStream__Cannot_0007dd6d + 3);
    return 0;
  }
  iVar2 = FUN_0004febc(local_28,s_StreamID_0007dd44,param_1 + 0x2c);
  if (iVar2 == 0) {
    FUN_00002898(s_ERROR__OutgoingStream__Could_NOT_0007dda0,s_StreamID_0007dd44);
    return 0;
  }
  iVar2 = FUN_00048bd4(local_28,s_User_StreamName_0007dd50,param_1 + 0x30);
  if (iVar2 == 0) {
    FUN_000028cc(auStack_a8,s_Stream_u_0007ddcc,*(undefined4 *)(param_1 + 0x2c));
    FUN_002329fc(param_1 + 0x30,auStack_a8);
    FUN_00002898(s_ERROR__OutgoingStream__Could_NOT_0007dda0,s_User_StreamName_0007dd50);
  }
  else {
    iVar2 = FUN_00049674(local_28,s_AppendMAC_0007dd60,local_64);
    if (iVar2 == 0) {
      FUN_00002898(s_ERROR__OutgoingStream__Could_NOT_0007dda0,s_AppendMAC_0007dd60);
      local_64[0] = '\x01';
    }
    else if (local_64[0] == '\0') goto LAB_0007db34;
    uVar5 = _DAT_0007dd6c;
    piVar9 = (int *)(param_1 + 0x30);
    FUN_001f00bc();
    FUN_002329b4(&local_68,param_2 + 0x11c);
    FUN_001f06d4(uVar5);
    iVar14 = *piVar9;
    uVar7 = *(uint *)(iVar14 + -4);
    iVar2 = *(int *)(local_68 + -4);
    if ((*(uint *)(iVar14 + -8) < uVar7 + iVar2) || (1 < *(int *)(iVar14 + -0xc) + 1U)) {
      if (-iVar2 - 0xfU < uVar7) {
        FUN_00173800(8,s_StreamID_0007dd44 + 8,s_StreamID_0007dd44 + 8,uVar7,-iVar2 - 0xfU);
      }
      FUN_00232724(piVar9,*(undefined4 *)(*piVar9 + -4),0,local_68,*(undefined4 *)(local_68 + -4),0,
                   iVar2);
    }
    else {
      FUN_000039e0(iVar14 + uVar7,local_68,iVar2 + 1);
      *(uint *)(*piVar9 + -4) = uVar7 + iVar2;
    }
    FUN_00232920(&local_68);
  }
LAB_0007db34:
  iVar2 = FUN_00049674(local_28,s_User_Enabled_0007ddd8,param_1 + 0x34);
  if (iVar2 == 0) {
    FUN_00002898(s_ERROR__OutgoingStream__Could_NOT_0007dda0,s_User_Enabled_0007ddd8);
  }
  iVar2 = FUN_00049674(local_28,s_User_AutomaticConfigEnabled_0007dde8,param_1 + 0x35);
  if (iVar2 == 0) {
    FUN_00002898(s_ERROR__OutgoingStream__Could_NOT_0007dda0,s_User_AutomaticConfigEnabled_0007dde8)
    ;
  }
  iVar2 = FUN_00048bd4(local_28,s_User_DestAddr_0007de04,param_1 + 0x38);
  if ((iVar2 == 0) || (iVar2 = FUN_000fe4f0(*(undefined4 *)(param_1 + 0x38)), iVar2 == 0)) {
    FUN_000028cc(auStack_a8,s_239_8_4__u_0007de14,*(int *)(param_1 + 0x2c) + 200);
    FUN_002329fc(param_1 + 0x38,auStack_a8);
    FUN_00002898(s_ERROR__OutgoingStream__Could_NOT_0007dda0,s_User_DestAddr_0007de04);
  }
  iVar2 = FUN_0004febc(local_28,s_User_DestPort_0007de20,&local_50);
  if (((iVar2 == 0) || (*(ushort *)(param_1 + 0x3c) < 1000)) || (0xffff < local_50)) {
    FUN_00002898(s_ERROR__OutgoingStream__Could_NOT_0007dda0,s_User_DestPort_0007de20);
  }
  else {
    *(short *)(param_1 + 0x3c) = (short)local_50;
  }
  iVar2 = FUN_0004febc(local_28,s_User_TTL_0007de30,&local_4c);
  if (((-iVar2 & local_4c) == 0) || (0xff < local_4c)) {
    FUN_00002898(s_ERROR__OutgoingStream__Could_NOT_0007dda0,s_User_TTL_0007de30);
  }
  else {
    *(char *)(param_1 + 0x3e) = (char)local_4c;
  }
  iVar2 = FUN_0004febc(local_28,s_User_PayloadType_0007de3c,local_48);
  if (((-iVar2 & local_48[0]) == 0) || (0xff < local_48[0])) {
    FUN_00002898(s_ERROR__OutgoingStream__Could_NOT_0007dda0,s_User_PayloadType_0007de3c);
  }
  else {
    *(char *)(param_1 + 0x3f) = (char)local_48[0];
  }
  iVar2 = FUN_00048bd4(local_28,s_User_SIPIdentity_0007de50,param_1 + 0x40);
  if (iVar2 == 0) {
    FUN_00002898(s_ERROR__OutgoingStream__Could_NOT_0007dda0,s_User_SIPIdentity_0007de50);
  }
  iVar2 = FUN_00049674(local_28,s_EnabledIn1xFS_0007de64,param_1 + 0x44);
  if (iVar2 == 0) {
    FUN_00002898(s_ERROR__OutgoingStream__Could_NOT_0007dda0,s_EnabledIn1xFS_0007de64);
  }
  iVar2 = FUN_00049674(local_28,s_EnabledIn2xFS_0007de74,param_1 + 0x45);
  if (iVar2 == 0) {
    FUN_00002898(s_ERROR__OutgoingStream__Could_NOT_0007dda0,s_EnabledIn2xFS_0007de74);
  }
  iVar2 = FUN_00049674(local_28,s_EnabledIn4xFS_0007de84,param_1 + 0x46);
  if (iVar2 == 0) {
    FUN_00002898(s_ERROR__OutgoingStream__Could_NOT_0007dda0,s_EnabledIn4xFS_0007de84);
  }
  iVar2 = FUN_0004febc(local_28,s_SamplesPerPacket1xFS_0007de94,local_58);
  if (iVar2 == 0) {
    FUN_00002898(s_ERROR__OutgoingStream__Could_NOT_0007dda0,s_SamplesPerPacket1xFS_0007de94);
  }
  else {
    *(undefined2 *)(param_1 + 0x48) = local_58[0];
  }
  iVar2 = FUN_0004febc(local_28,s_SamplesPerPacket2xFS_0007deac,local_58);
  if (iVar2 == 0) {
    FUN_00002898(s_ERROR__OutgoingStream__Could_NOT_0007dda0,s_SamplesPerPacket2xFS_0007deac);
  }
  else {
    *(undefined2 *)(param_1 + 0x4a) = local_58[0];
  }
  iVar2 = FUN_0004febc(local_28,s_SamplesPerPacket4xFS_0007e210,local_58);
  if (iVar2 == 0) {
    FUN_00002898(s_ERROR__OutgoingStream__Could_NOT_0007dda0,s_SamplesPerPacket4xFS_0007e210);
  }
  else {
    *(undefined2 *)(param_1 + 0x4c) = local_58[0];
  }
  iVar2 = FUN_0004febc(local_28,s_NoOfChannels_0007e228,local_58);
  if (iVar2 == 0) {
    FUN_00002898(s_ERROR__OutgoingStream__Could_NOT_0007dda0,s_NoOfChannels_0007e228);
  }
  else {
    *(undefined2 *)(param_1 + 0x4e) = local_58[0];
  }
  iVar2 = FUN_00048bd4(local_28,s_ChannelRouting_0007e238,param_1 + 0x50);
  if (iVar2 == 0) {
    FUN_00002898(s_ERROR__OutgoingStream__Could_NOT_0007dda0,s_ChannelRouting_0007e238);
    return 0;
  }
  local_60 = (uint)*(ushort *)(param_1 + 0x4e);
  piVar9 = (int *)(param_1 + 0x54);
  if (0x3fffffff < local_60) {
    FUN_00173800(8,s_SamplesPerPacket4xFS_0007e210 + 0x14,s_SamplesPerPacket4xFS_0007e210 + 0x14,
                 local_60,0x3fffffff);
  }
  piVar10 = _DAT_0007e248;
  if ((uint)(*(int *)(param_1 + 0x5c) - *piVar9 >> 2) < local_60) {
    uVar7 = *(int *)(param_1 + 0x58) - *piVar9 >> 2;
    local_5c = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
    if (local_5c < uVar7 + 1) {
      local_5c = uVar7 + 1;
    }
    puVar6 = &local_5c;
    if (local_5c <= local_60) {
      puVar6 = &local_60;
    }
    uVar7 = *puVar6;
    iVar3 = FUN_00173860(uVar7 << 2,0);
    iVar13 = *(int *)(param_1 + 0x58);
    iVar14 = iVar3;
    for (iVar2 = *piVar9; iVar2 != iVar13; iVar2 = iVar2 + 4) {
      if (iVar14 != 0) {
        thunk_FUN_002329b4(iVar14,iVar2);
      }
      iVar14 = iVar14 + 4;
    }
    piVar11 = *(int **)(param_1 + 0x58);
    for (piVar8 = (int *)*piVar9; piVar8 != piVar11; piVar8 = piVar8 + 1) {
      if ((int *)*piVar8 != piVar10 + 3) {
        piVar4 = (int *)*piVar8 + -3;
        iVar2 = *piVar4;
        if ((iVar2 == -1) || ((piVar4 != piVar10 && (*piVar4 = iVar2 + -1, iVar2 == 0)))) {
          FUN_00173a54(*piVar8 + -0xc,*(int *)(*piVar8 + -8) + 0xe,0);
        }
      }
    }
    FUN_00173a54(*piVar9,*(int *)(param_1 + 0x5c) - *piVar9 >> 2,0);
    iVar2 = *piVar9;
    *piVar9 = iVar3;
    *(uint *)(param_1 + 0x58) = (*(int *)(param_1 + 0x58) - iVar2 & 0xfffffffcU) + iVar3;
    *(uint *)(param_1 + 0x5c) = iVar3 + uVar7 * 4;
  }
  uVar7 = 0;
  local_54[0] = s_iI__iI_User_ChannelName_u_0007e249[3];
  local_54[1] = s_iI__iI_User_ChannelName_u_0007e249[4];
  local_54[2] = s_iI__iI_User_ChannelName_u_0007e249[5];
  local_54[3] = s_iI__iI_User_ChannelName_u_0007e249[6];
  if (*(short *)(param_1 + 0x4e) != 0) {
    do {
      FUN_000028cc(auStack_a8,s_iI__iI_User_ChannelName_u_0007e249 + 7,uVar7);
      iVar2 = FUN_00048bd4(local_28,auStack_a8,local_54);
      if (iVar2 == 0) {
        FUN_00002898(s_ERROR__OutgoingStream__Could_NOT_0007dda0,auStack_a8);
        FUN_000028cc(auStack_a8,s_Channel__u_0007e264,uVar7 + 1);
        piVar10 = (int *)(param_1 + 0x54);
        uVar5 = FUN_00232964(auStack_40,auStack_a8,auStack_3c);
        piVar9 = *(int **)(param_1 + 0x58);
        if (piVar9 == *(int **)(param_1 + 0x5c)) {
          uVar1 = (int)piVar9 - *piVar10 >> 2;
          if (uVar1 < (uint)((int)*(int **)(param_1 + 0x5c) - *piVar10 >> 2)) {
            *(int **)(param_1 + 0x58) = piVar9 + 1;
            if (piVar9 != (int *)0x0) {
              thunk_FUN_002329b4(piVar9,piVar9 + -1);
            }
            piVar8 = piVar9 + -1;
            piVar10 = piVar9;
            while (piVar9 != piVar8) {
              piVar10 = piVar10 + -1;
              piVar8 = piVar8 + -1;
              FUN_00232a4c(piVar10,piVar8);
            }
            FUN_00232a4c(piVar9,uVar5);
          }
          else {
            uVar12 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
            if (uVar12 < uVar1 + 1) {
              uVar12 = uVar1 + 1;
            }
            iVar14 = FUN_00173860(uVar12 << 2,0);
            iVar2 = iVar14;
            for (piVar8 = (int *)*piVar10; piVar8 != piVar9; piVar8 = piVar8 + 1) {
              if (iVar2 != 0) {
                FUN_002329b4(iVar2,piVar8);
              }
              iVar2 = iVar2 + 4;
            }
            iVar2 = ((int)piVar9 - *piVar10 & 0xfffffffcU) + iVar14;
            if (iVar2 != 0) {
              thunk_FUN_002329b4(iVar2,uVar5);
            }
            piVar8 = *(int **)(param_1 + 0x58);
            iVar2 = ((int)piVar9 - *piVar10 & 0xfffffffcU) + iVar14;
            for (; piVar9 != piVar8; piVar9 = piVar9 + 1) {
              iVar2 = iVar2 + 4;
              if (iVar2 != 0) {
                thunk_FUN_002329b4(iVar2,piVar9);
              }
            }
            piVar9 = (int *)*piVar10;
            piVar11 = *(int **)(param_1 + 0x58);
            bVar15 = piVar9 != piVar11;
            if (bVar15) {
              piVar8 = _DAT_0007e248;
            }
            local_68 = (char *)((int)piVar11 - (int)piVar9 >> 2);
            while (bVar15) {
              if ((int *)*piVar9 != piVar8 + 3) {
                piVar4 = (int *)*piVar9 + -3;
                iVar2 = *piVar4;
                if ((iVar2 == -1) || ((piVar4 != piVar8 && (*piVar4 = iVar2 + -1, iVar2 == 0)))) {
                  FUN_00173a54(*piVar9 + -0xc,*(int *)(*piVar9 + -8) + 0xe,0);
                }
              }
              piVar9 = piVar9 + 1;
              bVar15 = piVar9 != piVar11;
            }
            FUN_00173a54(*piVar10,*(int *)(param_1 + 0x5c) - *piVar10 >> 2,0);
            *piVar10 = iVar14;
            *(int *)(param_1 + 0x58) = iVar14 + (int)local_68 * 4 + 4;
            *(uint *)(param_1 + 0x5c) = iVar14 + uVar12 * 4;
          }
        }
        else {
          *(int **)(param_1 + 0x58) = piVar9 + 1;
          if (piVar9 != (int *)0x0) {
            thunk_FUN_002329b4();
          }
        }
        FUN_00232920(auStack_40);
      }
      else {
        piVar9 = *(int **)(param_1 + 0x58);
        piVar10 = (int *)(param_1 + 0x54);
        if (piVar9 == *(int **)(param_1 + 0x5c)) {
          uVar1 = (int)piVar9 - *piVar10 >> 2;
          local_68 = local_54;
          if (uVar1 < (uint)((int)*(int **)(param_1 + 0x5c) - *piVar10 >> 2)) {
            *(int **)(param_1 + 0x58) = piVar9 + 1;
            if (piVar9 != (int *)0x0) {
              thunk_FUN_002329b4(piVar9,piVar9 + -1);
            }
            piVar8 = piVar9 + -1;
            piVar10 = piVar9;
            while (piVar9 != piVar8) {
              piVar10 = piVar10 + -1;
              piVar8 = piVar8 + -1;
              FUN_00232a4c(piVar10,piVar8);
            }
            FUN_00232a4c(piVar9,local_68);
          }
          else {
            uVar12 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
            if (uVar12 < uVar1 + 1) {
              uVar12 = uVar1 + 1;
            }
            iVar14 = FUN_00173860(uVar12 << 2,0);
            iVar2 = iVar14;
            for (piVar8 = (int *)*piVar10; piVar8 != piVar9; piVar8 = piVar8 + 1) {
              if (iVar2 != 0) {
                FUN_002329b4(iVar2,piVar8);
              }
              iVar2 = iVar2 + 4;
            }
            iVar2 = ((int)piVar9 - *piVar10 & 0xfffffffcU) + iVar14;
            if (iVar2 != 0) {
              thunk_FUN_002329b4(iVar2,local_68);
            }
            piVar8 = *(int **)(param_1 + 0x58);
            iVar2 = ((int)piVar9 - *piVar10 & 0xfffffffcU) + iVar14;
            for (; piVar9 != piVar8; piVar9 = piVar9 + 1) {
              iVar2 = iVar2 + 4;
              if (iVar2 != 0) {
                thunk_FUN_002329b4(iVar2,piVar9);
              }
            }
            piVar9 = (int *)*piVar10;
            piVar11 = *(int **)(param_1 + 0x58);
            bVar15 = piVar9 != piVar11;
            if (bVar15) {
              piVar8 = _DAT_0007e248;
            }
            local_60 = (int)piVar11 - (int)piVar9 >> 2;
            while (bVar15) {
              if ((int *)*piVar9 != piVar8 + 3) {
                piVar4 = (int *)*piVar9 + -3;
                iVar2 = *piVar4;
                if ((iVar2 == -1) || ((piVar4 != piVar8 && (*piVar4 = iVar2 + -1, iVar2 == 0)))) {
                  FUN_00173a54(*piVar9 + -0xc,*(int *)(*piVar9 + -8) + 0xe,0);
                }
              }
              piVar9 = piVar9 + 1;
              bVar15 = piVar9 != piVar11;
            }
            FUN_00173a54(*piVar10,*(int *)(param_1 + 0x5c) - *piVar10 >> 2,0);
            *piVar10 = iVar14;
            *(uint *)(param_1 + 0x58) = iVar14 + local_60 * 4 + 4;
            *(uint *)(param_1 + 0x5c) = iVar14 + uVar12 * 4;
          }
        }
        else {
          *(int **)(param_1 + 0x58) = piVar9 + 1;
          if (piVar9 != (int *)0x0) {
            thunk_FUN_002329b4();
          }
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(ushort *)(param_1 + 0x4e));
  }
  FUN_00232920(local_54);
  return 1;
}

