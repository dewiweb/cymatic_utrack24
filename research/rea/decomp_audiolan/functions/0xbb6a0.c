// rea decompile_all
// name: FUN_000bb6a0
// address: 0xbb6a0
// body: available
// range: 0xbb6a0-0xbb9d7 inclusive
// range: 0xbba38-0xbbc9f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000bb6a0(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  int *piVar12;
  int *piVar13;
  undefined4 uVar14;
  bool bVar15;
  bool bVar16;
  undefined4 local_4c;
  char *local_48;
  char *local_44;
  char *local_40;
  char *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  char *local_30;
  char *local_2c;
  char *local_28;
  
  uVar14 = 1;
  iVar5 = FUN_00047cf4(*(undefined4 *)(param_1 + 0x114),s_OutgoingStreams_000bb9d8,&local_4c);
  if (iVar5 != 0) {
    FUN_000bbdbc(param_1);
    FUN_00041e54(local_4c);
    uVar2 = DAT_000bb9e8;
    local_38 = DAT_000bb9e8;
    iVar5 = FUN_00046580(local_4c,&local_38);
    while (iVar5 != 0) {
      iVar5 = FUN_00041c14(local_38,&local_34);
      if (iVar5 != 0) {
        iVar5 = FUN_001a0808(0x84,1);
        uVar3 = DAT_000bb9ec;
        if (iVar5 != 0) {
          *(undefined4 *)(iVar5 + 4) = 0;
          FUN_001a07ac(iVar5,uVar3);
          *(undefined4 *)(iVar5 + 0x28) = uVar2;
          *(undefined4 *)(iVar5 + 0x2c) = 0;
          *(undefined4 *)(iVar5 + 0x30) = uVar2;
          *(undefined1 *)(iVar5 + 0x34) = 1;
          uVar3 = DAT_000bb9f0;
          *(undefined1 *)(iVar5 + 0x35) = 0;
          *(undefined4 *)(iVar5 + 0x38) = uVar2;
          *(short *)(iVar5 + 0x3c) = (short)uVar3;
          *(undefined1 *)(iVar5 + 0x3e) = 1;
          *(undefined4 *)(iVar5 + 0x40) = uVar2;
          *(undefined1 *)(iVar5 + 0x44) = 0;
          *(undefined1 *)(iVar5 + 0x45) = 0;
          *(undefined1 *)(iVar5 + 0x46) = 0;
          *(undefined2 *)(iVar5 + 0x48) = 0x30;
          *(undefined2 *)(iVar5 + 0x4a) = 0x60;
          *(undefined2 *)(iVar5 + 0x4c) = 0xc0;
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
        iVar6 = FUN_0007cb38(iVar5,param_1,local_34);
        if (iVar6 == 0) {
          if (iVar5 != 0) {
            FUN_001da314(iVar5 + 0x80);
            FUN_001da314(iVar5 + 100);
            piVar4 = DAT_000bba34;
            piVar12 = *(int **)(iVar5 + 0x58);
            for (piVar13 = *(int **)(iVar5 + 0x54); piVar13 != piVar12; piVar13 = piVar13 + 1) {
              if ((int *)*piVar13 != piVar4 + 3) {
                piVar7 = (int *)*piVar13 + -3;
                iVar6 = *piVar7;
                if ((iVar6 == -1) || ((piVar7 != piVar4 && (*piVar7 = iVar6 + -1, iVar6 == 0)))) {
                  FUN_0010fa20(*piVar13 + -0xc,*(int *)(*piVar13 + -8) + 0xe,0);
                }
              }
            }
            iVar6 = *(int *)(iVar5 + 0x54);
            FUN_0010fa20(iVar6,*(int *)(iVar5 + 0x5c) - iVar6 >> 2,0);
            FUN_001da314(iVar5 + 0x50);
            FUN_001da314(iVar5 + 0x40);
            FUN_001da314(iVar5 + 0x38);
            FUN_001da314(iVar5 + 0x30);
            FUN_001da314(iVar5 + 0x28);
            FUN_001a07f0(iVar5);
            FUN_0019f30c(iVar5);
          }
LAB_000bbb80:
          uVar14 = 0;
        }
        else {
          local_48 = *(char **)(param_1 + 0x198);
          pcVar9 = *(char **)(*(char **)(param_1 + 0x198) + 4);
          while (pcVar9 != (char *)0x0) {
            if (*(uint *)(pcVar9 + 0x10) < *(uint *)(iVar5 + 0x2c)) {
              pcVar9 = *(char **)(pcVar9 + 0xc);
            }
            else {
              local_48 = pcVar9;
              pcVar9 = *(char **)(pcVar9 + 8);
            }
          }
          local_44 = *(char **)(param_1 + 0x198);
          pcVar9 = *(char **)(*(char **)(param_1 + 0x198) + 4);
          while (pcVar9 != (char *)0x0) {
            if (*(uint *)(iVar5 + 0x2c) < *(uint *)(pcVar9 + 0x10)) {
              local_44 = pcVar9;
              pcVar9 = *(char **)(pcVar9 + 8);
            }
            else {
              pcVar9 = *(char **)(pcVar9 + 0xc);
            }
          }
          iVar6 = 0;
          pcVar9 = local_48;
          while (pcVar9 != local_44) {
            iVar6 = iVar6 + 1;
            pcVar11 = *(char **)(pcVar9 + 0xc);
            if (*(char **)(pcVar9 + 0xc) == (char *)0x0) {
              for (pcVar11 = *(char **)(pcVar9 + 4); pcVar9 == *(char **)(pcVar11 + 0xc);
                  pcVar11 = *(char **)(pcVar11 + 4)) {
                pcVar9 = pcVar11;
              }
              if (*(char **)(pcVar9 + 0xc) != pcVar11) {
                pcVar9 = pcVar11;
              }
            }
            else {
              do {
                pcVar9 = pcVar11;
                pcVar11 = *(char **)(pcVar9 + 8);
              } while (*(char **)(pcVar9 + 8) != (char *)0x0);
            }
          }
          if (iVar6 != 0) {
            local_40 = local_48;
            local_3c = local_44;
            FUN_000028a4(s_ERROR__RavennaConfiguration__Rep_000bb9f4,*(undefined4 *)(iVar5 + 0x2c));
            if (iVar5 != 0) {
              FUN_001da314(iVar5 + 0x80);
              FUN_001da314(iVar5 + 100);
              piVar4 = DAT_000bba34;
              piVar12 = *(int **)(iVar5 + 0x58);
              for (piVar13 = *(int **)(iVar5 + 0x54); piVar13 != piVar12; piVar13 = piVar13 + 1) {
                if ((int *)*piVar13 != piVar4 + 3) {
                  piVar7 = (int *)*piVar13 + -3;
                  iVar6 = *piVar7;
                  if ((iVar6 == -1) || ((piVar7 != piVar4 && (*piVar7 = iVar6 + -1, iVar6 == 0)))) {
                    FUN_0010fa20(*piVar13 + -0xc,*(int *)(*piVar13 + -8) + 0xe,0);
                  }
                }
              }
              FUN_0010fa20(*(int *)(iVar5 + 0x54),
                           *(int *)(iVar5 + 0x5c) - *(int *)(iVar5 + 0x54) >> 2,0);
              FUN_001da314(iVar5 + 0x50);
              FUN_001da314(iVar5 + 0x40);
              FUN_001da314(iVar5 + 0x38);
              FUN_001da314(iVar5 + 0x30);
              FUN_001da314(iVar5 + 0x28);
              FUN_001a07f0(iVar5);
              FUN_0019f30c(iVar5);
            }
            goto LAB_000bbb80;
          }
          local_40 = *(char **)(iVar5 + 0x2c);
          local_3c = (char *)0x0;
          pcVar11 = *(char **)(param_1 + 0x198);
          bVar15 = *(char **)(pcVar11 + 4) != (char *)0x0;
          pcVar9 = "";
          if (bVar15) {
            pcVar9 = local_40;
          }
          bVar16 = true;
          pcVar8 = pcVar11;
          pcVar1 = *(char **)(pcVar11 + 4);
          while (bVar15) {
            bVar16 = pcVar9 < *(char **)(pcVar1 + 0x10);
            if (bVar16) {
              pcVar10 = *(char **)(pcVar1 + 8);
            }
            else {
              pcVar10 = *(char **)(pcVar1 + 0xc);
            }
            bVar15 = pcVar10 != (char *)0x0;
            pcVar8 = pcVar1;
            pcVar1 = pcVar10;
          }
          if (*(char *)(param_1 + 0x1a0) == '\0') {
            if (bVar16) {
              if (pcVar8 == *(char **)(pcVar11 + 8)) {
                FUN_001cfe08(&local_2c);
                local_48 = local_2c;
                local_44 = (char *)CONCAT31(local_44._1_3_,1);
                goto LAB_000bbaf8;
              }
              if ((*pcVar8 == '\0') && (*(char **)(*(int *)(pcVar8 + 4) + 4) == pcVar8)) {
                pcVar8 = *(char **)(pcVar8 + 0xc);
              }
              else {
                pcVar9 = *(char **)(pcVar8 + 8);
                if (*(char **)(pcVar8 + 8) == (char *)0x0) {
                  pcVar9 = pcVar8;
                  for (pcVar8 = *(char **)(pcVar8 + 4); pcVar9 == *(char **)(pcVar8 + 8);
                      pcVar8 = *(char **)(pcVar8 + 4)) {
                    pcVar9 = pcVar8;
                  }
                }
                else {
                  do {
                    pcVar8 = pcVar9;
                    pcVar9 = *(char **)(pcVar8 + 0xc);
                  } while (*(char **)(pcVar8 + 0xc) != (char *)0x0);
                }
              }
            }
            if (*(char **)(pcVar8 + 0x10) < local_40) {
              FUN_001cfe08(&local_28);
              local_48 = local_28;
              local_44 = (char *)CONCAT31(local_44._1_3_,1);
            }
            else {
              local_44 = (char *)((uint)local_44 & 0xffffff00);
              local_48 = pcVar8;
            }
          }
          else {
            FUN_001cfe08(&local_30);
            local_48 = local_30;
            local_44 = (char *)CONCAT31(local_44._1_3_,1);
          }
LAB_000bbaf8:
          *(int *)(local_48 + 0x14) = iVar5;
        }
        FUN_00041dd4(local_34);
      }
      iVar5 = FUN_00046580(local_4c,&local_38);
    }
    FUN_00041dd4(local_4c);
    FUN_001da314(&local_38);
  }
  return uVar14;
}

