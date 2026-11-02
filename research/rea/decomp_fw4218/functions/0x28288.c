// rea decompile_all
// name: FUN_00028288
// address: 0x28288
// body: available
// range: 0x28288-0x284f9 inclusive
// range: 0x284fc-0x28593 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte * FUN_00028288(char *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  byte *pbVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  undefined *puVar11;
  byte *local_34;
  byte *local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  char *local_20;
  byte *pbStack_1c;
  byte *pbStack_18;
  
  local_20 = param_1;
  pbStack_1c = param_2;
  pbStack_18 = param_3;
  local_34 = (byte *)FUN_00025930(*(undefined2 *)(param_1 + 2));
  pbVar7 = *(byte **)(local_20 + 0x1c);
  iVar4 = FUN_001eaf9c(param_3,0x9f,&DAT_00028594,*(undefined2 *)(local_20 + 0xc),pbVar7);
  if (*local_20 == -0x10) {
    return param_3;
  }
  uVar10 = (uint)*(ushort *)(local_20 + 0xc);
  if (uVar10 == 0) {
    FUN_001eafb0(param_3 + iVar4,0x9f - iVar4,s_<<_ZERO_RDATA_LENGTH_>>_000285a4,&local_34,
                 s_<<_ZERO_RDATA_LENGTH_>>_000285a4);
    return param_3;
  }
  uVar2 = *(ushort *)(local_20 + 2);
  if (uVar2 == 0xd) {
LAB_0002837c:
    pbVar7 = param_2;
    if (param_2 + uVar10 <= param_2) {
      return param_3;
    }
    do {
      if (param_2 < pbVar7) {
        puVar11 = &DAT_000285f8;
      }
      else {
        puVar11 = &DAT_000285a0;
      }
      iVar8 = FUN_001eaf9c(param_3 + iVar4,0x9f - iVar4,s__s__s_000285fc,puVar11,pbVar7);
      iVar4 = iVar8 + iVar4;
      pbVar7 = pbVar7 + *pbVar7 + 1;
    } while (pbVar7 < param_2 + *(ushort *)(local_20 + 0xc));
    return param_3;
  }
  if (0xd < uVar2) {
    if (uVar2 == 0x21) {
      local_30 = param_2 + 6;
      local_34 = (byte *)((*(uint *)(param_2 + 4) & 0xff) << 8 |
                         (*(uint *)(param_2 + 4) & 0xffff) >> 8);
      FUN_001eaf9c(param_3 + iVar4,0x9f - iVar4,s__u__u__u____s_0002860c,*(undefined2 *)param_2,
                   *(undefined2 *)(param_2 + 2));
      return param_3;
    }
    if (uVar2 < 0x22) {
      if (uVar2 == 0x10) goto LAB_0002837c;
      if (uVar2 == 0x1c) {
        iVar8 = 0x9f - iVar4;
        pcVar9 = s___16a_00028604;
        goto LAB_000283ba;
      }
    }
    else {
      if (uVar2 == 0x29) {
        local_34 = param_2 + uVar10;
        iVar8 = FUN_001eaf9c(param_3 + iVar4,0x9f - iVar4,s_Max__d_0002861c,
                             *(undefined2 *)(local_20 + 4),pbVar7);
        iVar8 = iVar8 + iVar4;
        if (local_34 <= param_2) {
          return param_3;
        }
        do {
          sVar3 = *(short *)param_2;
          if (sVar3 == 1) {
            iVar4 = FUN_001eaf9c(param_3 + iVar8,0x9f - iVar8,s_Vers__d_00028630,
                                 *(undefined2 *)(param_2 + 4),pbVar7);
            iVar4 = iVar4 + iVar8;
            iVar8 = FUN_001eaf9c(param_3 + iVar4,0x9f - iVar4,s_Op__d_0002863c,
                                 *(undefined2 *)(param_2 + 6));
            iVar8 = iVar8 + iVar4;
            iVar4 = FUN_001eaf9c(param_3 + iVar8,0x9f - iVar8,s_Err_Port__d_00028644,
                                 *(undefined2 *)(param_2 + 8));
            iVar4 = iVar4 + iVar8;
            pbVar7 = *(byte **)(param_2 + 0x10);
            iVar5 = FUN_001eaf9c(param_3 + iVar4,0x9f - iVar4,s_ID__08X_08X_00028654,
                                 *(undefined4 *)(param_2 + 0xc));
            iVar5 = iVar5 + iVar4;
            iVar8 = FUN_001eaf9c(param_3 + iVar5,0x9f - iVar5,s_Lease__d_00028664,
                                 *(undefined4 *)(param_2 + 0x14));
            iVar8 = iVar8 + iVar5;
          }
          else if (sVar3 == 2) {
            iVar4 = FUN_001eaf9c(param_3 + iVar8,0x9f - iVar8,s_Lease__d_00028664,
                                 *(undefined4 *)(param_2 + 4),pbVar7);
            iVar8 = iVar4 + iVar8;
          }
          else if (sVar3 == 4) {
            iVar4 = FUN_001eaf9c(param_3 + iVar8,0x9f - iVar8,s_Vers__d_00028630,param_2[4],pbVar7);
            iVar4 = iVar4 + iVar8;
            iVar5 = FUN_001eaf9c(param_3 + iVar4,0x9f - iVar4,s_Seq__3d_00028670,param_2[5]);
            iVar5 = iVar5 + iVar4;
            iVar8 = FUN_001eaf9c(param_3 + iVar5,0x9f - iVar5,s_MAC___6a_0002867c,param_2 + 6);
            iVar8 = iVar8 + iVar5;
            if (0xd < *(ushort *)(param_2 + 2)) {
              iVar4 = FUN_001eaf9c(param_3 + iVar8,0x9f - iVar8,s_I_MAC___6a_00028688,param_2 + 0xc)
              ;
              iVar8 = iVar4 + iVar8;
              if (0xe < *(ushort *)(param_2 + 2)) {
                iVar4 = FUN_001eaf9c(param_3 + iVar8,0x9f - iVar8,s_Password___6a_00028694,
                                     param_2 + 0x12);
                iVar8 = iVar4 + iVar8;
              }
            }
          }
          else {
            iVar4 = FUN_001eaf9c(param_3 + iVar8,0x9f - iVar8,s_Unknown__d_00028624,sVar3,pbVar7);
            iVar8 = iVar4 + iVar8;
          }
          param_2 = param_2 + 0x18;
        } while (param_2 < local_34);
        return param_3;
      }
      if (uVar2 == 0x2f) {
        uVar10 = 0;
        do {
          if (((uint)param_2[uVar10 >> 3] & 0x80U >> (uVar10 & 7)) != 0) {
            uVar6 = FUN_00025930(uVar10);
            iVar8 = FUN_001eaf9c(param_3 + iVar4,0x9f - iVar4,&DAT_000286a4,uVar6,pbVar7);
            iVar4 = iVar8 + iVar4;
          }
          uVar10 = uVar10 + 1 & 0xffff;
        } while (uVar10 < 0xff);
        return param_3;
      }
    }
LAB_00028312:
    FUN_001eaf9c(param_3 + iVar4,0x9f - iVar4,s_RDLen__d___s_000285bc,uVar10,param_2);
    bVar1 = *param_3;
    pbVar7 = param_3;
    while (bVar1 != 0) {
      if (*pbVar7 < 0x20) {
        *pbVar7 = 0x2e;
      }
      pbVar7 = pbVar7 + 1;
      bVar1 = *pbVar7;
    }
    return param_3;
  }
  if (uVar2 != 5) {
    if (uVar2 < 6) {
      if (uVar2 == 1) {
        iVar8 = 0x9f - iVar4;
        pcVar9 = &DAT_000285cc;
        goto LAB_000283ba;
      }
      if (uVar2 != 2) goto LAB_00028312;
    }
    else {
      if (uVar2 == 6) {
        local_30 = *(byte **)(param_2 + 0x204);
        uStack_2c = *(undefined4 *)(param_2 + 0x208);
        uStack_28 = *(undefined4 *)(param_2 + 0x20c);
        local_24 = *(undefined4 *)(param_2 + 0x210);
        local_34 = *(byte **)(param_2 + 0x200);
        pbVar7 = param_2 + 0x100;
        iVar8 = 0x9f - iVar4;
        pcVar9 = s____s____s__d__d__d__d__d_000285dc;
        goto LAB_000283ba;
      }
      if (uVar2 != 0xc) goto LAB_00028312;
    }
  }
  iVar8 = 0x9f - iVar4;
  pcVar9 = &DAT_000285d4;
LAB_000283ba:
  FUN_001eaf9c(param_3 + iVar4,iVar8,pcVar9,param_2,pbVar7);
  return param_3;
}

