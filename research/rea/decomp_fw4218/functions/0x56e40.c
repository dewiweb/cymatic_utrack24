// rea decompile_all
// name: FUN_00056e40
// address: 0x56e40
// body: available
// range: 0x56e40-0x571a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_00056e40(int param_1,int param_2,int param_3,int *param_4,int *param_5,int param_6)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  int extraout_r12;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  int *local_60 [2];
  int local_58;
  char *local_54;
  undefined1 auStack_50 [4];
  int local_4c;
  int local_48 [3];
  char *local_3c;
  char *local_38;
  undefined1 local_34;
  char *local_28;
  
  local_58 = *(int *)(param_6 + 0x10);
  local_60[0] = *(int **)(local_58 + 8);
  FUN_0021d9d4(auStack_50,param_6,local_60,&local_58);
  *(undefined4 *)(param_2 + 0x24) = 0xffffffff;
  iVar3 = *(int *)(param_2 + 0x28);
  iVar6 = *(int *)(param_2 + 0x2c);
  if (iVar3 != iVar6) {
    iVar3 = iVar6 - (iVar6 - iVar3 & 0xfffffffcU);
    *(int *)(param_2 + 0x2c) = iVar3;
  }
  *(undefined4 *)(param_2 + 0x20) = 0;
  if (param_4 != (int *)0x0) {
    iVar3 = *param_4;
  }
  iVar6 = 0;
  if (param_4 != (int *)0x0 && iVar3 != -1) {
    do {
      local_4c = param_4[iVar6];
      if (local_4c == param_3) {
        *(int *)(param_2 + 0x24) = local_4c;
      }
      piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x8c) + 0x2c))();
      if (piVar4 == (int *)0x0) {
        return 0;
      }
      piVar5 = *(int **)(param_2 + 0x2c);
      if (piVar5 == *(int **)(param_2 + 0x30)) {
        FUN_00243fa0(param_2 + 0x28,piVar5,&local_4c);
      }
      else {
        *(int **)(param_2 + 0x2c) = piVar5 + 1;
        if (piVar5 != (int *)0x0) {
          *piVar5 = local_4c;
        }
      }
      (**(code **)(*piVar4 + 0x1c))(piVar4,*(undefined4 *)(param_1 + 0xe4));
      iVar3 = (**(code **)(*piVar4 + 0x38))(piVar4);
      uVar2 = DAT_000571a4;
      *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + iVar3;
      iVar3 = FUN_001c7218(piVar4,DAT_000571a8,uVar2,0xffffffff);
      if (iVar3 == 0) {
        FUN_001c7218(piVar4,DAT_000571a8,DAT_000571ac,0xffffffff);
      }
      else {
        local_48[0] = local_4c;
        local_48[1] = 0;
        pcVar8 = *(char **)(param_6 + 0x10);
        bVar11 = *(char **)(pcVar8 + 4) != (char *)0x0;
        iVar3 = extraout_r12;
        if (bVar11) {
          iVar3 = local_4c;
        }
        bVar1 = true;
        pcVar9 = pcVar8;
        pcVar10 = *(char **)(pcVar8 + 4);
        while (bVar11) {
          bVar1 = iVar3 < *(int *)(pcVar10 + 0x10);
          if (bVar1) {
            pcVar7 = *(char **)(pcVar10 + 8);
          }
          else {
            pcVar7 = *(char **)(pcVar10 + 0xc);
          }
          bVar11 = pcVar7 != (char *)0x0;
          pcVar9 = pcVar10;
          pcVar10 = pcVar7;
        }
        if (*(char *)(param_6 + 0x18) == '\0') {
          if (bVar1) {
            if (pcVar9 == *(char **)(pcVar8 + 8)) {
              local_60[0] = local_48;
              FUN_0021e1a0(&local_3c);
              local_38 = local_3c;
              local_34 = 1;
              goto LAB_000570d4;
            }
            if ((*pcVar9 == '\0') && (*(char **)(*(int *)(pcVar9 + 4) + 4) == pcVar9)) {
              pcVar9 = *(char **)(pcVar9 + 0xc);
            }
            else {
              pcVar8 = *(char **)(pcVar9 + 8);
              if (*(char **)(pcVar9 + 8) == (char *)0x0) {
                pcVar8 = *(char **)(pcVar9 + 4);
                pcVar10 = pcVar9;
                while (pcVar9 = pcVar8, pcVar10 == *(char **)(pcVar9 + 8)) {
                  pcVar10 = pcVar9;
                  pcVar8 = *(char **)(pcVar9 + 4);
                }
              }
              else {
                do {
                  pcVar9 = pcVar8;
                  pcVar8 = *(char **)(pcVar9 + 0xc);
                } while (*(char **)(pcVar9 + 0xc) != (char *)0x0);
              }
            }
          }
          if (*(int *)(pcVar9 + 0x10) < local_4c) {
            local_60[0] = local_48;
            FUN_0021e1a0(&local_28);
            local_38 = local_28;
            local_34 = 1;
          }
          else {
            local_34 = 0;
            local_38 = pcVar9;
          }
        }
        else {
          local_60[0] = local_48;
          FUN_0021e1a0(&local_54);
          local_38 = local_54;
          local_34 = 1;
        }
LAB_000570d4:
        *(int *)(local_38 + 0x14) = iVar6;
      }
      iVar6 = iVar6 + 1;
      iVar3 = param_4[iVar6];
    } while (iVar3 != -1);
  }
  if (param_5 != (int *)0x0) {
    iVar3 = *param_5;
  }
  iVar6 = 0;
  if (param_5 != (int *)0x0 && iVar3 != -1) {
    do {
      local_60[0] = (int *)param_5[iVar6];
      iVar3 = (**(code **)(**(int **)(param_1 + 0x8c) + 0x3c))();
      if (iVar3 == 0) {
        return 0;
      }
      piVar4 = *(int **)(param_2 + 0x2c);
      if (piVar4 == *(int **)(param_2 + 0x30)) {
        FUN_00243fa0(param_2 + 0x28,piVar4,local_60);
      }
      else {
        *(int **)(param_2 + 0x2c) = piVar4 + 1;
        if (piVar4 != (int *)0x0) {
          *piVar4 = (int)local_60[0];
        }
      }
      iVar6 = iVar6 + 1;
    } while (param_5[iVar6] != -1);
  }
  if (*(int *)(param_2 + 0x24) == -1) {
    return 0;
  }
  return 1;
}

