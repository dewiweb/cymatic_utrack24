// rea decompile_all
// name: FUN_001c8d28
// address: 0x1c8d28
// body: available
// range: 0x1c8d28-0x1c9103 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001c8d28(undefined4 *param_1,int *param_2,int param_3,int param_4,byte *param_5)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  
  pcVar7 = (char *)param_2[1];
  if (pcVar7 == (char *)0x0) {
    pcVar7 = (char *)param_2[2];
    if (pcVar7 == (char *)param_2[3]) {
      if (*param_2 == 0) {
        uVar8 = 1;
      }
      else {
        uVar1 = *(uint *)(*param_2 + 4);
        uVar8 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
        if (uVar8 < uVar1 + 1) {
          uVar8 = uVar1 + 1;
        }
      }
      piVar2 = (int *)FUN_0010f82c(0xc,0);
      iVar3 = FUN_0010f82c(uVar8 * 0x24,0);
      piVar2[2] = iVar3;
      *piVar2 = *param_2;
      piVar2[1] = uVar8;
      *param_2 = (int)piVar2;
      iVar3 = piVar2[2];
      param_2[2] = iVar3;
      param_2[3] = iVar3 + uVar8 * 0x24;
      pcVar7 = (char *)param_2[2];
      param_2[2] = (int)(pcVar7 + 0x24);
    }
    else {
      param_2[2] = (int)(pcVar7 + 0x24);
    }
  }
  else {
    param_2[1] = *(int *)(pcVar7 + 0xc);
  }
  pcVar7[4] = '\0';
  pcVar7[5] = '\0';
  pcVar7[6] = '\0';
  pcVar7[7] = '\0';
  pcVar7[8] = '\0';
  pcVar7[9] = '\0';
  pcVar7[10] = '\0';
  pcVar7[0xb] = '\0';
  pcVar7[0xc] = '\0';
  pcVar7[0xd] = '\0';
  pcVar7[0xe] = '\0';
  pcVar7[0xf] = '\0';
  *pcVar7 = '\0';
  pcVar7[0x10] = *param_5;
  *(undefined4 *)(pcVar7 + 0x14) = *(undefined4 *)(param_5 + 4);
  *(undefined4 *)(pcVar7 + 0x18) = *(undefined4 *)(param_5 + 8);
  *(undefined2 *)(pcVar7 + 0x1c) = *(undefined2 *)(param_5 + 0xc);
  *(undefined2 *)(pcVar7 + 0x1e) = *(undefined2 *)(param_5 + 0xe);
  FUN_001d9c54(pcVar7 + 0x20,param_5 + 0x10);
  param_2[5] = param_2[5] + 1;
  if (((param_2[4] == param_4) || (param_3 != 0)) || (*param_5 < *(byte *)(param_4 + 0x10))) {
    *(char **)(param_4 + 8) = pcVar7;
    iVar3 = param_2[4];
    if (iVar3 == param_4) {
      *(char **)(iVar3 + 4) = pcVar7;
      *(char **)(param_2[4] + 0xc) = pcVar7;
    }
    else if (*(int *)(iVar3 + 8) == param_4) {
      *(char **)(iVar3 + 8) = pcVar7;
    }
  }
  else {
    *(char **)(param_4 + 0xc) = pcVar7;
    if (*(int *)(param_2[4] + 0xc) == param_4) {
      *(char **)(param_2[4] + 0xc) = pcVar7;
    }
  }
  *(int *)(pcVar7 + 4) = param_4;
  pcVar4 = pcVar7;
  do {
    while( true ) {
      if ((*(char **)(param_2[4] + 4) == pcVar4) ||
         (pcVar5 = *(char **)(pcVar4 + 4), *pcVar5 != '\0')) {
        **(undefined1 **)(param_2[4] + 4) = 1;
        *param_1 = pcVar7;
        return;
      }
      pcVar9 = *(char **)(*(int *)(pcVar5 + 4) + 8);
      if (pcVar9 != pcVar5) break;
      pcVar9 = *(char **)(*(int *)(pcVar5 + 4) + 0xc);
      if ((pcVar9 == (char *)0x0) || (*pcVar9 != '\0')) {
        pcVar9 = pcVar5;
        if (*(char **)(pcVar5 + 0xc) == pcVar4) {
          pcVar9 = *(char **)(pcVar5 + 0xc);
          *(undefined4 *)(pcVar5 + 0xc) = *(undefined4 *)(pcVar9 + 8);
          if (*(int *)(pcVar9 + 8) != 0) {
            *(char **)(*(int *)(pcVar9 + 8) + 4) = pcVar5;
          }
          *(undefined4 *)(pcVar9 + 4) = *(undefined4 *)(pcVar5 + 4);
          if (*(char **)(param_2[4] + 4) == pcVar5) {
            *(char **)(param_2[4] + 4) = pcVar9;
          }
          else {
            iVar3 = *(int *)(pcVar5 + 4);
            if (*(char **)(iVar3 + 8) == pcVar5) {
              *(char **)(iVar3 + 8) = pcVar9;
            }
            else {
              *(char **)(iVar3 + 0xc) = pcVar9;
            }
          }
          *(char **)(pcVar9 + 8) = pcVar5;
          *(char **)(pcVar5 + 4) = pcVar9;
          pcVar4 = pcVar5;
        }
        *pcVar9 = '\x01';
        **(undefined1 **)(*(int *)(pcVar4 + 4) + 4) = 0;
        iVar3 = *(int *)(*(int *)(pcVar4 + 4) + 4);
        iVar6 = *(int *)(iVar3 + 8);
        *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar6 + 0xc);
        if (*(int *)(iVar6 + 0xc) != 0) {
          *(int *)(*(int *)(iVar6 + 0xc) + 4) = iVar3;
        }
        *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar3 + 4);
        if (*(int *)(param_2[4] + 4) == iVar3) {
          *(int *)(param_2[4] + 4) = iVar6;
        }
        else {
          iVar10 = *(int *)(iVar3 + 4);
          if (*(int *)(iVar10 + 0xc) == iVar3) {
            *(int *)(iVar10 + 0xc) = iVar6;
          }
          else {
            *(int *)(iVar10 + 8) = iVar6;
          }
        }
        *(int *)(iVar6 + 0xc) = iVar3;
LAB_001c90dc:
        *(int *)(iVar3 + 4) = iVar6;
      }
      else {
        *pcVar5 = '\x01';
        *pcVar9 = '\x01';
        **(undefined1 **)(*(int *)(pcVar4 + 4) + 4) = 0;
        pcVar4 = *(char **)(*(int *)(pcVar4 + 4) + 4);
      }
    }
    if ((pcVar9 == (char *)0x0) || (*pcVar9 != '\0')) {
      pcVar9 = pcVar5;
      if (*(char **)(pcVar5 + 8) == pcVar4) {
        pcVar9 = *(char **)(pcVar5 + 8);
        *(undefined4 *)(pcVar5 + 8) = *(undefined4 *)(pcVar9 + 0xc);
        if (*(int *)(pcVar9 + 0xc) != 0) {
          *(char **)(*(int *)(pcVar9 + 0xc) + 4) = pcVar5;
        }
        *(undefined4 *)(pcVar9 + 4) = *(undefined4 *)(pcVar5 + 4);
        if (*(char **)(param_2[4] + 4) == pcVar5) {
          *(char **)(param_2[4] + 4) = pcVar9;
        }
        else {
          iVar3 = *(int *)(pcVar5 + 4);
          if (*(char **)(iVar3 + 0xc) == pcVar5) {
            *(char **)(iVar3 + 0xc) = pcVar9;
          }
          else {
            *(char **)(iVar3 + 8) = pcVar9;
          }
        }
        *(char **)(pcVar9 + 0xc) = pcVar5;
        *(char **)(pcVar5 + 4) = pcVar9;
        pcVar4 = pcVar5;
      }
      *pcVar9 = '\x01';
      **(undefined1 **)(*(int *)(pcVar4 + 4) + 4) = 0;
      iVar3 = *(int *)(*(int *)(pcVar4 + 4) + 4);
      iVar6 = *(int *)(iVar3 + 0xc);
      *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar6 + 8);
      if (*(int *)(iVar6 + 8) != 0) {
        *(int *)(*(int *)(iVar6 + 8) + 4) = iVar3;
      }
      *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar3 + 4);
      if (*(int *)(param_2[4] + 4) == iVar3) {
        *(int *)(param_2[4] + 4) = iVar6;
      }
      else {
        iVar10 = *(int *)(iVar3 + 4);
        if (*(int *)(iVar10 + 8) == iVar3) {
          *(int *)(iVar10 + 8) = iVar6;
        }
        else {
          *(int *)(iVar10 + 0xc) = iVar6;
        }
      }
      *(int *)(iVar6 + 8) = iVar3;
      goto LAB_001c90dc;
    }
    *pcVar5 = '\x01';
    *pcVar9 = '\x01';
    **(undefined1 **)(*(int *)(pcVar4 + 4) + 4) = 0;
    pcVar4 = *(char **)(*(int *)(pcVar4 + 4) + 4);
  } while( true );
}

