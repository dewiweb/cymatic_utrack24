// rea decompile_all
// name: FUN_000bd1e4
// address: 0xbd1e4
// body: available
// range: 0xbd1e4-0xbd1ff inclusive
// range: 0xbd230-0xbd77b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xbd30c to 0x289c thunk_FUN_000028a4 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000bd540) */
/* WARNING: Removing unreachable block (ram,0x000bd550) */
/* WARNING: Removing unreachable block (ram,0x000bd2fc) */
/* WARNING: Removing unreachable block (ram,0x000bd310) */
/* WARNING: Removing unreachable block (ram,0x000bd320) */
/* WARNING: Removing unreachable block (ram,0x000bd324) */
/* WARNING: Removing unreachable block (ram,0x000bd334) */
/* WARNING: Removing unreachable block (ram,0x000bd52c) */
/* WARNING: Removing unreachable block (ram,0x000bd53c) */
/* WARNING: Removing unreachable block (ram,0x000bd528) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_000bd1e4(int param_1)

{
  char *pcVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  char *extraout_r12;
  char *pcVar13;
  char *pcVar14;
  char *extraout_r12_00;
  char *extraout_r12_01;
  char *extraout_r12_02;
  bool bVar15;
  bool bVar16;
  char **local_48;
  int *local_44;
  char *pcStack_40;
  undefined1 uStack_3c;
  char *pcStack_38;
  undefined4 uStack_34;
  char *pcStack_30;
  char *pcStack_2c;
  char *pcStack_28;
  
  switch(*(undefined1 *)(param_1 + 0x251)) {
  case 0:
  case 1:
  case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 3:
  case 4:
  case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 5:
  case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    iVar5 = *(int *)(param_1 + 0x208);
    iVar10 = iVar5;
    iVar11 = *(int *)(iVar5 + 4);
  }
  while (iVar11 != 0) {
    if (*(uint *)(iVar11 + 0x10) < *(uint *)(param_1 + 0x214)) {
      iVar11 = *(int *)(iVar11 + 0xc);
    }
    else {
      iVar10 = iVar11;
      iVar11 = *(int *)(iVar11 + 8);
    }
  }
  if ((iVar10 != iVar5) && (*(uint *)(iVar10 + 0x10) <= *(uint *)(param_1 + 0x214))) {
    iVar5 = iVar10;
  }
  if (iVar5 == *(int *)(param_1 + 0x208)) {
    iVar5 = 0;
  }
  else {
    iVar5 = iVar5 + 0x14;
  }
  if (iVar5 == 0) {
    thunk_FUN_000028a4(DAT_000bd77c);
    return;
  }
  FUN_001dcef8(param_1 + 0x1a4);
  iVar10 = *(int *)(*(int *)(param_1 + 0x198) + 8);
  if (iVar10 != *(int *)(param_1 + 0x198)) {
    do {
      puVar6 = *(undefined4 **)(iVar5 + 0x1c);
      for (puVar7 = (undefined4 *)*puVar6;
          (puVar7 != puVar6 && (puVar7[2] != *(int *)(iVar10 + 0x10)));
          puVar7 = (undefined4 *)*puVar7) {
      }
      if ((puVar6 != puVar7) && (*(char *)(*(int *)(iVar10 + 0x14) + 0x46) != '\0')) {
        piVar2 = *(int **)(param_1 + 0x1a8);
        iVar11 = *(int *)(param_1 + 0x1b4);
        piVar12 = (int *)(param_1 + 0x1a4);
        if (piVar2 == (int *)0x0) {
          piVar2 = *(int **)(param_1 + 0x1ac);
          if (piVar2 == *(int **)(param_1 + 0x1b0)) {
            local_48 = (char **)0x1;
            if (*piVar12 != 0) {
              uVar3 = *(uint *)(*piVar12 + 4);
              local_48 = (char **)(uVar3 + (uVar3 >> 1) + (uVar3 >> 3));
              if (local_48 < (char **)(uVar3 + 1)) {
                local_48 = (char **)(uVar3 + 1);
              }
            }
            local_44 = (int *)FUN_0010f82c(0xc,0);
            iVar4 = FUN_0010f82c((int)local_48 * 0xc,0);
            local_44[2] = iVar4;
            *local_44 = *piVar12;
            local_44[1] = (int)local_48;
            *piVar12 = (int)local_44;
            piVar2 = (int *)local_44[2];
            *(int **)(param_1 + 0x1ac) = piVar2;
            *(int **)(param_1 + 0x1b0) = piVar2 + (int)local_48 * 3;
          }
          *(int **)(param_1 + 0x1ac) = piVar2 + 3;
        }
        else {
          *(int *)(param_1 + 0x1a8) = *piVar2;
        }
        if (piVar2 + 2 != (int *)0x0) {
          piVar2[2] = *(int *)(iVar10 + 0x10);
        }
        *piVar2 = iVar11;
        piVar2[1] = *(int *)(iVar11 + 4);
        **(int **)(iVar11 + 4) = (int)piVar2;
        *(int **)(iVar11 + 4) = piVar2;
        *(int *)(param_1 + 0x1b8) = *(int *)(param_1 + 0x1b8) + 1;
      }
      iVar11 = *(int *)(iVar10 + 0xc);
      if (*(int *)(iVar10 + 0xc) == 0) {
        iVar11 = *(int *)(iVar10 + 4);
        while (iVar4 = iVar11, iVar10 == *(int *)(iVar4 + 0xc)) {
          iVar10 = iVar4;
          iVar11 = *(int *)(iVar4 + 4);
        }
        if (*(int *)(iVar10 + 0xc) != iVar4) {
          iVar10 = iVar4;
        }
      }
      else {
        do {
          iVar10 = iVar11;
          iVar11 = *(int *)(iVar10 + 8);
        } while (*(int *)(iVar10 + 8) != 0);
      }
    } while (iVar10 != *(int *)(param_1 + 0x198));
  }
  local_44 = *(int **)(param_1 + 0x1ec);
  local_48 = (char **)local_44[2];
  FUN_001ce9cc(&pcStack_40,param_1 + 0x1dc,&local_48,&local_44);
  local_44 = (int *)(iVar5 + 0x24);
  iVar10 = *(int *)(*(int *)(param_1 + 0x1d0) + 8);
  pcVar13 = extraout_r12;
  if (iVar10 == *(int *)(param_1 + 0x1d0)) {
    return;
  }
  do {
    puVar6 = (undefined4 *)local_44[4];
    for (puVar7 = (undefined4 *)*puVar6;
        (puVar7 != puVar6 && (pcVar13 = (char *)puVar7[2], pcVar13 != *(char **)(iVar10 + 0x10)));
        puVar7 = (undefined4 *)*puVar7) {
    }
    if (((puVar6 != puVar7) && (*(char *)(*(int *)(iVar10 + 0x14) + 0x4a) != '\0')) &&
       (iVar5 = *(int *)(*(int *)(iVar10 + 0x14) + 0x38), iVar11 = *(int *)(iVar5 + 8),
       iVar11 != iVar5)) {
      do {
        pcStack_38 = *(char **)(iVar11 + 0x10);
        uStack_34 = *(undefined4 *)(iVar11 + 0x14);
        local_48 = &pcStack_38;
        pcVar9 = *(char **)(param_1 + 0x1ec);
        bVar15 = *(char **)(pcVar9 + 4) != (char *)0x0;
        pcVar14 = pcVar13;
        if (bVar15) {
          pcVar14 = pcStack_38;
        }
        bVar16 = true;
        pcVar13 = pcVar9;
        pcVar1 = *(char **)(pcVar9 + 4);
        while (bVar15) {
          bVar16 = pcVar14 < *(char **)(pcVar1 + 0x10);
          if (bVar16) {
            pcVar8 = *(char **)(pcVar1 + 8);
          }
          else {
            pcVar8 = *(char **)(pcVar1 + 0xc);
          }
          bVar15 = pcVar8 != (char *)0x0;
          pcVar13 = pcVar1;
          pcVar1 = pcVar8;
        }
        if (*(char *)(param_1 + 500) == '\0') {
          if (bVar16) {
            if (pcVar13 == *(char **)(pcVar9 + 8)) {
              FUN_001cf3a8(&pcStack_2c);
              pcStack_40 = pcStack_2c;
              uStack_3c = 1;
              pcVar13 = extraout_r12_01;
              goto LAB_000bd6c8;
            }
            if ((*pcVar13 == '\0') && (*(char **)(*(int *)(pcVar13 + 4) + 4) == pcVar13)) {
              pcVar13 = *(char **)(pcVar13 + 0xc);
            }
            else {
              pcVar14 = *(char **)(pcVar13 + 8);
              if (*(char **)(pcVar13 + 8) == (char *)0x0) {
                pcVar14 = *(char **)(pcVar13 + 4);
                pcVar9 = pcVar13;
                while (pcVar13 = pcVar14, pcVar9 == *(char **)(pcVar13 + 8)) {
                  pcVar9 = pcVar13;
                  pcVar14 = *(char **)(pcVar13 + 4);
                }
              }
              else {
                do {
                  pcVar13 = pcVar14;
                  pcVar14 = *(char **)(pcVar13 + 0xc);
                } while (*(char **)(pcVar13 + 0xc) != (char *)0x0);
              }
            }
          }
          if (*(char **)(pcVar13 + 0x10) < pcStack_38) {
            FUN_001cf3a8(&pcStack_28);
            pcStack_40 = pcStack_28;
            uStack_3c = 1;
            pcVar13 = extraout_r12_02;
          }
          else {
            uStack_3c = 0;
            pcStack_40 = pcVar13;
          }
        }
        else {
          FUN_001cf3a8(&pcStack_30);
          pcStack_40 = pcStack_30;
          uStack_3c = 1;
          pcVar13 = extraout_r12_00;
        }
LAB_000bd6c8:
        iVar5 = *(int *)(iVar11 + 0xc);
        if (*(int *)(iVar11 + 0xc) == 0) {
          iVar5 = *(int *)(iVar11 + 4);
          while (iVar4 = iVar5, iVar11 == *(int *)(iVar4 + 0xc)) {
            iVar11 = iVar4;
            iVar5 = *(int *)(iVar4 + 4);
          }
          if (*(int *)(iVar11 + 0xc) != iVar4) {
            iVar11 = iVar4;
          }
        }
        else {
          do {
            iVar11 = iVar5;
            iVar5 = *(int *)(iVar11 + 8);
          } while (*(int *)(iVar11 + 8) != 0);
        }
      } while (iVar11 != *(int *)(*(int *)(iVar10 + 0x14) + 0x38));
    }
    iVar11 = *(int *)(iVar10 + 0xc);
    if (*(int *)(iVar10 + 0xc) == 0) {
      iVar11 = *(int *)(iVar10 + 4);
      while (iVar5 = iVar11, iVar10 == *(int *)(iVar5 + 0xc)) {
        iVar10 = iVar5;
        iVar11 = *(int *)(iVar5 + 4);
      }
      if (*(int *)(iVar10 + 0xc) != iVar5) {
        iVar10 = iVar5;
      }
    }
    else {
      do {
        iVar10 = iVar11;
        iVar11 = *(int *)(iVar10 + 8);
      } while (*(int *)(iVar10 + 8) != 0);
    }
    if (iVar10 == *(int *)(param_1 + 0x1d0)) {
      return;
    }
  } while( true );
}

