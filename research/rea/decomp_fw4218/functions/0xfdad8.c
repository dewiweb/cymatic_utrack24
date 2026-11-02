// rea decompile_all
// name: FUN_000fdad8
// address: 0xfdad8
// body: available
// range: 0xfdad8-0xfde1f inclusive
// range: 0xfde80-0xfe09f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000fdad8(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
  bool bVar14;
  bool bVar15;
  undefined4 local_60 [2];
  char *local_58;
  char *local_54;
  undefined4 local_4c;
  undefined4 local_48 [4];
  char *local_38;
  char *local_34;
  char *local_30;
  char *local_2c;
  char *local_28;
  
  uVar11 = 1;
  iVar5 = FUN_0004eb44(*(undefined4 *)(param_1 + 0x114),s_OutgoingStreams_000fde20,&local_4c);
  if (iVar5 != 0) {
    FUN_000fe0a0(param_1);
    FUN_00046be8(local_4c);
    uVar2 = DAT_000fde30;
    local_60[0] = DAT_000fde30;
    iVar5 = FUN_0004ce00(local_4c,local_60);
    while (iVar5 != 0) {
      iVar5 = FUN_000466b0(local_60[0],local_48);
      if (iVar5 != 0) {
        iVar5 = FUN_001f01c4(0x84,1);
        uVar3 = DAT_000fde34;
        if (iVar5 != 0) {
          *(undefined4 *)(iVar5 + 4) = 0;
          FUN_001f0168(iVar5,uVar3);
          *(undefined4 *)(iVar5 + 0x28) = uVar2;
          *(undefined4 *)(iVar5 + 0x24) = 0;
          *(undefined4 *)(iVar5 + 0x30) = uVar2;
          *(undefined4 *)(iVar5 + 0x2c) = 0;
          *(undefined1 *)(iVar5 + 0x34) = 1;
          uVar3 = DAT_000fde38;
          *(undefined1 *)(iVar5 + 0x35) = 0;
          *(undefined4 *)(iVar5 + 0x38) = uVar2;
          *(short *)(iVar5 + 0x3c) = (short)uVar3;
          *(undefined1 *)(iVar5 + 0x3e) = 1;
          *(undefined1 *)(iVar5 + 0x3f) = 0x62;
          *(undefined4 *)(iVar5 + 0x40) = uVar2;
          *(undefined1 *)(iVar5 + 0x44) = 0;
          *(undefined1 *)(iVar5 + 0x45) = 0;
          *(undefined1 *)(iVar5 + 0x46) = 0;
          *(undefined2 *)(iVar5 + 0x48) = 0x30;
          *(undefined2 *)(iVar5 + 0x4a) = 0x60;
          *(undefined2 *)(iVar5 + 0x4c) = 0xc0;
          *(undefined2 *)(iVar5 + 0x4e) = 0;
          *(undefined4 *)(iVar5 + 0x50) = uVar2;
          *(undefined4 *)(iVar5 + 0x54) = 0;
          *(undefined4 *)(iVar5 + 0x58) = 0;
          *(undefined4 *)(iVar5 + 0x5c) = 0;
          *(undefined1 *)(iVar5 + 0x60) = 4;
          *(undefined1 *)(iVar5 + 0x61) = 0;
          *(undefined4 *)(iVar5 + 100) = uVar2;
          *(undefined1 *)(iVar5 + 0x68) = 0;
          *(undefined1 *)(iVar5 + 0x69) = 0;
          *(undefined1 *)(iVar5 + 0x6a) = 0;
          *(undefined4 *)(iVar5 + 0x6c) = 0xffffffff;
          *(undefined4 *)(iVar5 + 0x70) = 0xffffffff;
          *(undefined2 *)(iVar5 + 0x78) = 0;
          *(undefined2 *)(iVar5 + 0x7a) = 0;
          *(undefined1 *)(iVar5 + 0x7c) = 4;
          *(undefined1 *)(iVar5 + 0x7d) = 0;
          *(undefined4 *)(iVar5 + 0x80) = uVar2;
          *(undefined4 *)(iVar5 + 0x74) = 0;
        }
        iVar6 = FUN_0007d96c(iVar5,param_1,local_48[0]);
        if (iVar6 == 0) {
          if (iVar5 != 0) {
            FUN_00232920(iVar5 + 0x80);
            FUN_00232920(iVar5 + 100);
            piVar4 = DAT_000fde7c;
            piVar13 = *(int **)(iVar5 + 0x58);
            for (piVar12 = *(int **)(iVar5 + 0x54); piVar12 != piVar13; piVar12 = piVar12 + 1) {
              if ((int *)*piVar12 != piVar4 + 3) {
                piVar8 = (int *)*piVar12 + -3;
                iVar6 = *piVar8;
                if ((iVar6 == -1) || ((piVar8 != piVar4 && (*piVar8 = iVar6 + -1, iVar6 == 0)))) {
                  FUN_00173a54(*piVar12 + -0xc,*(int *)(*piVar12 + -8) + 0xe,0);
                }
              }
            }
LAB_000fe044:
            FUN_00173a54(*(int *)(iVar5 + 0x54),*(int *)(iVar5 + 0x5c) - *(int *)(iVar5 + 0x54) >> 2
                         ,0);
            FUN_00232920(iVar5 + 0x50);
            FUN_00232920(iVar5 + 0x40);
            FUN_00232920(iVar5 + 0x38);
            FUN_00232920(iVar5 + 0x30);
            FUN_00232920(iVar5 + 0x28);
            FUN_001f01ac(iVar5);
            FUN_001eecc8(iVar5);
          }
LAB_000fdf88:
          uVar11 = 0;
        }
        else {
          local_58 = *(char **)(param_1 + 0x198);
          pcVar7 = *(char **)(*(char **)(param_1 + 0x198) + 4);
          while (pcVar7 != (char *)0x0) {
            if (*(uint *)(pcVar7 + 0x10) < *(uint *)(iVar5 + 0x2c)) {
              pcVar7 = *(char **)(pcVar7 + 0xc);
            }
            else {
              local_58 = pcVar7;
              pcVar7 = *(char **)(pcVar7 + 8);
            }
          }
          local_54 = *(char **)(param_1 + 0x198);
          pcVar7 = *(char **)(*(char **)(param_1 + 0x198) + 4);
          while (pcVar7 != (char *)0x0) {
            if (*(uint *)(iVar5 + 0x2c) < *(uint *)(pcVar7 + 0x10)) {
              local_54 = pcVar7;
              pcVar7 = *(char **)(pcVar7 + 8);
            }
            else {
              pcVar7 = *(char **)(pcVar7 + 0xc);
            }
          }
          iVar6 = 0;
          pcVar7 = local_58;
          while (pcVar7 != local_54) {
            iVar6 = iVar6 + 1;
            pcVar10 = *(char **)(pcVar7 + 0xc);
            if (*(char **)(pcVar7 + 0xc) == (char *)0x0) {
              for (pcVar10 = *(char **)(pcVar7 + 4); pcVar7 == *(char **)(pcVar10 + 0xc);
                  pcVar10 = *(char **)(pcVar10 + 4)) {
                pcVar7 = pcVar10;
              }
              if (*(char **)(pcVar7 + 0xc) != pcVar10) {
                pcVar7 = pcVar10;
              }
            }
            else {
              do {
                pcVar7 = pcVar10;
                pcVar10 = *(char **)(pcVar7 + 8);
              } while (*(char **)(pcVar7 + 8) != (char *)0x0);
            }
          }
          local_34 = local_54;
          if (iVar6 != 0) {
            local_38 = local_58;
            FUN_00002898(s_ERROR__RavennaConfiguration__Rep_000fde3c,*(undefined4 *)(iVar5 + 0x2c));
            if (iVar5 != 0) {
              FUN_00232920(iVar5 + 0x80);
              FUN_00232920(iVar5 + 100);
              piVar4 = DAT_000fde7c;
              piVar13 = *(int **)(iVar5 + 0x58);
              for (piVar12 = *(int **)(iVar5 + 0x54); piVar12 != piVar13; piVar12 = piVar12 + 1) {
                if ((int *)*piVar12 != piVar4 + 3) {
                  piVar8 = (int *)*piVar12 + -3;
                  iVar6 = *piVar8;
                  if ((iVar6 == -1) || ((piVar8 != piVar4 && (*piVar8 = iVar6 + -1, iVar6 == 0)))) {
                    FUN_00173a54(*piVar12 + -0xc,*(int *)(*piVar12 + -8) + 0xe,0);
                  }
                }
              }
              goto LAB_000fe044;
            }
            goto LAB_000fdf88;
          }
          pcVar10 = *(char **)(param_1 + 0x198);
          bVar14 = *(char **)(pcVar10 + 4) != (char *)0x0;
          pcVar7 = local_54;
          if (bVar14) {
            pcVar7 = *(char **)(iVar5 + 0x2c);
          }
          bVar15 = true;
          local_38 = pcVar10;
          pcVar1 = *(char **)(pcVar10 + 4);
          while (bVar14) {
            bVar15 = pcVar7 < *(char **)(pcVar1 + 0x10);
            if (bVar15) {
              pcVar9 = *(char **)(pcVar1 + 8);
            }
            else {
              pcVar9 = *(char **)(pcVar1 + 0xc);
            }
            bVar14 = pcVar9 != (char *)0x0;
            local_38 = pcVar1;
            pcVar1 = pcVar9;
          }
          if (*(char *)(param_1 + 0x1a0) == '\0') {
            if (bVar15) {
              if (local_38 == *(char **)(pcVar10 + 8)) {
                local_38 = local_58;
                FUN_002215fc(&local_2c);
                local_38 = local_2c;
                local_34 = (char *)CONCAT31(local_34._1_3_,1);
                goto LAB_000fdf54;
              }
              if ((*local_38 == '\0') && (*(char **)(*(int *)(local_38 + 4) + 4) == local_38)) {
                local_38 = *(char **)(local_38 + 0xc);
              }
              else {
                pcVar7 = *(char **)(local_38 + 8);
                if (*(char **)(local_38 + 8) == (char *)0x0) {
                  pcVar7 = *(char **)(local_38 + 4);
                  pcVar10 = local_38;
                  while (local_38 = pcVar7, pcVar10 == *(char **)(local_38 + 8)) {
                    pcVar10 = local_38;
                    pcVar7 = *(char **)(local_38 + 4);
                  }
                }
                else {
                  do {
                    local_38 = pcVar7;
                    pcVar7 = *(char **)(local_38 + 0xc);
                  } while (*(char **)(local_38 + 0xc) != (char *)0x0);
                }
              }
            }
            if (*(char **)(local_38 + 0x10) < *(char **)(iVar5 + 0x2c)) {
              local_38 = local_58;
              FUN_002215fc(&local_28);
              local_38 = local_28;
              local_34 = (char *)CONCAT31(local_34._1_3_,1);
            }
            else {
              local_34 = (char *)((uint)local_54 & 0xffffff00);
            }
          }
          else {
            local_38 = local_58;
            FUN_002215fc(&local_30);
            local_38 = local_30;
            local_34 = (char *)CONCAT31(local_34._1_3_,1);
          }
LAB_000fdf54:
          *(int *)(local_38 + 0x14) = iVar5;
        }
        FUN_00046b8c(local_48[0]);
      }
      iVar5 = FUN_0004ce00(local_4c,local_60);
    }
    FUN_00046b8c(local_4c);
    FUN_00232920(local_60);
  }
  return uVar11;
}

