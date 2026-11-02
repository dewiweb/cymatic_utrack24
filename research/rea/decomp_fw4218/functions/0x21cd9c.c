// rea decompile_all
// name: FUN_0021cd9c
// address: 0x21cd9c
// body: available
// range: 0x21cd9c-0x21d163 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0021cd9c(undefined4 *param_1,int *param_2,int param_3,int param_4,int *param_5)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  pcVar5 = (char *)param_2[1];
  if (pcVar5 == (char *)0x0) {
    pcVar5 = (char *)param_2[2];
    if (pcVar5 == (char *)param_2[3]) {
      if (*param_2 == 0) {
        uVar11 = 1;
      }
      else {
        uVar1 = *(uint *)(*param_2 + 4);
        uVar6 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
        uVar11 = uVar1 + 1;
        if (uVar1 + 1 <= uVar6) {
          uVar11 = uVar6;
        }
      }
      piVar2 = (int *)FUN_00173860(0xc,0);
      iVar3 = FUN_00173860(uVar11 * 0x18,0);
      piVar2[2] = iVar3;
      *piVar2 = *param_2;
      piVar2[1] = uVar11;
      *param_2 = (int)piVar2;
      iVar3 = piVar2[2];
      param_2[2] = iVar3;
      param_2[3] = iVar3 + uVar11 * 0x18;
      pcVar5 = (char *)param_2[2];
      param_2[2] = (int)(pcVar5 + 0x18);
    }
    else {
      param_2[2] = (int)(pcVar5 + 0x18);
    }
  }
  else {
    param_2[1] = *(int *)(pcVar5 + 0xc);
  }
  pcVar5[4] = '\0';
  pcVar5[5] = '\0';
  pcVar5[6] = '\0';
  pcVar5[7] = '\0';
  pcVar5[8] = '\0';
  pcVar5[9] = '\0';
  pcVar5[10] = '\0';
  pcVar5[0xb] = '\0';
  pcVar5[0xc] = '\0';
  pcVar5[0xd] = '\0';
  pcVar5[0xe] = '\0';
  pcVar5[0xf] = '\0';
  *pcVar5 = '\0';
  *(int *)(pcVar5 + 0x10) = *param_5;
  *(int *)(pcVar5 + 0x14) = param_5[1];
  param_2[5] = param_2[5] + 1;
  if (((param_2[4] == param_4) || (param_3 != 0)) || (*param_5 < *(int *)(param_4 + 0x10))) {
    *(char **)(param_4 + 8) = pcVar5;
    iVar3 = param_2[4];
    if (iVar3 == param_4) {
      *(char **)(iVar3 + 4) = pcVar5;
      *(char **)(param_2[4] + 0xc) = pcVar5;
    }
    else if (*(int *)(iVar3 + 8) == param_4) {
      *(char **)(iVar3 + 8) = pcVar5;
    }
  }
  else {
    *(char **)(param_4 + 0xc) = pcVar5;
    if (*(int *)(param_2[4] + 0xc) == param_4) {
      *(char **)(param_2[4] + 0xc) = pcVar5;
    }
  }
  *(int *)(pcVar5 + 4) = param_4;
  pcVar4 = pcVar5;
  do {
    while( true ) {
      if ((*(char **)(param_2[4] + 4) == pcVar4) ||
         (pcVar7 = *(char **)(pcVar4 + 4), *pcVar7 != '\0')) {
        **(undefined1 **)(param_2[4] + 4) = 1;
        *param_1 = pcVar5;
        return;
      }
      pcVar8 = *(char **)(*(int *)(pcVar7 + 4) + 8);
      if (pcVar8 != pcVar7) break;
      pcVar8 = *(char **)(*(int *)(pcVar7 + 4) + 0xc);
      if ((pcVar8 == (char *)0x0) || (*pcVar8 != '\0')) {
        if (*(char **)(pcVar7 + 0xc) == pcVar4) {
          iVar3 = *(int *)(pcVar7 + 0xc);
          *(undefined4 *)(pcVar7 + 0xc) = *(undefined4 *)(iVar3 + 8);
          if (*(int *)(iVar3 + 8) != 0) {
            *(char **)(*(int *)(iVar3 + 8) + 4) = pcVar7;
          }
          *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(pcVar7 + 4);
          if (*(char **)(param_2[4] + 4) == pcVar7) {
            *(int *)(param_2[4] + 4) = iVar3;
          }
          else {
            iVar9 = *(int *)(pcVar7 + 4);
            if (*(char **)(iVar9 + 8) == pcVar7) {
              *(int *)(iVar9 + 8) = iVar3;
            }
            else {
              *(int *)(iVar9 + 0xc) = iVar3;
            }
          }
          *(char **)(iVar3 + 8) = pcVar7;
          *(int *)(pcVar7 + 4) = iVar3;
          pcVar4 = pcVar7;
        }
        **(undefined1 **)(pcVar4 + 4) = 1;
        **(undefined1 **)(*(int *)(pcVar4 + 4) + 4) = 0;
        iVar3 = *(int *)(*(int *)(pcVar4 + 4) + 4);
        iVar9 = *(int *)(iVar3 + 8);
        *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar9 + 0xc);
        if (*(int *)(iVar9 + 0xc) != 0) {
          *(int *)(*(int *)(iVar9 + 0xc) + 4) = iVar3;
        }
        *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(iVar3 + 4);
        if (*(int *)(param_2[4] + 4) == iVar3) {
          *(int *)(param_2[4] + 4) = iVar9;
        }
        else {
          iVar10 = *(int *)(iVar3 + 4);
          if (*(int *)(iVar10 + 0xc) == iVar3) {
            *(int *)(iVar10 + 0xc) = iVar9;
          }
          else {
            *(int *)(iVar10 + 8) = iVar9;
          }
        }
        *(int *)(iVar9 + 0xc) = iVar3;
LAB_0021d13c:
        *(int *)(iVar3 + 4) = iVar9;
      }
      else {
        *pcVar7 = '\x01';
        *pcVar8 = '\x01';
        **(undefined1 **)(*(int *)(pcVar4 + 4) + 4) = 0;
        pcVar4 = *(char **)(*(int *)(pcVar4 + 4) + 4);
      }
    }
    if ((pcVar8 == (char *)0x0) || (*pcVar8 != '\0')) {
      pcVar8 = pcVar7;
      if (*(char **)(pcVar7 + 8) == pcVar4) {
        pcVar8 = *(char **)(pcVar7 + 8);
        *(undefined4 *)(pcVar7 + 8) = *(undefined4 *)(pcVar8 + 0xc);
        if (*(int *)(pcVar8 + 0xc) != 0) {
          *(char **)(*(int *)(pcVar8 + 0xc) + 4) = pcVar7;
        }
        *(undefined4 *)(pcVar8 + 4) = *(undefined4 *)(pcVar7 + 4);
        if (*(char **)(param_2[4] + 4) == pcVar7) {
          *(char **)(param_2[4] + 4) = pcVar8;
        }
        else {
          iVar3 = *(int *)(pcVar7 + 4);
          if (*(char **)(iVar3 + 0xc) == pcVar7) {
            *(char **)(iVar3 + 0xc) = pcVar8;
          }
          else {
            *(char **)(iVar3 + 8) = pcVar8;
          }
        }
        *(char **)(pcVar8 + 0xc) = pcVar7;
        *(char **)(pcVar7 + 4) = pcVar8;
        pcVar4 = pcVar7;
      }
      *pcVar8 = '\x01';
      **(undefined1 **)(*(int *)(pcVar4 + 4) + 4) = 0;
      iVar3 = *(int *)(*(int *)(pcVar4 + 4) + 4);
      iVar9 = *(int *)(iVar3 + 0xc);
      *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar9 + 8);
      if (*(int *)(iVar9 + 8) != 0) {
        *(int *)(*(int *)(iVar9 + 8) + 4) = iVar3;
      }
      *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(iVar3 + 4);
      if (*(int *)(param_2[4] + 4) == iVar3) {
        *(int *)(param_2[4] + 4) = iVar9;
      }
      else {
        iVar10 = *(int *)(iVar3 + 4);
        if (*(int *)(iVar10 + 8) == iVar3) {
          *(int *)(iVar10 + 8) = iVar9;
        }
        else {
          *(int *)(iVar10 + 0xc) = iVar9;
        }
      }
      *(int *)(iVar9 + 8) = iVar3;
      goto LAB_0021d13c;
    }
    *pcVar7 = '\x01';
    *pcVar8 = '\x01';
    **(undefined1 **)(*(int *)(pcVar4 + 4) + 4) = 0;
    pcVar4 = *(char **)(*(int *)(pcVar4 + 4) + 4);
  } while( true );
}

