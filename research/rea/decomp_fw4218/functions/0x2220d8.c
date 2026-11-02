// rea decompile_all
// name: FUN_002220d8
// address: 0x2220d8
// body: available
// range: 0x2220d8-0x22247f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_002220d8(undefined4 *param_1,int *param_2,int param_3,int param_4,uint *param_5)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  
  pcVar8 = (char *)param_2[1];
  if (pcVar8 == (char *)0x0) {
    pcVar8 = (char *)param_2[2];
    if (pcVar8 == (char *)param_2[3]) {
      if (*param_2 == 0) {
        uVar9 = 1;
      }
      else {
        uVar1 = *(uint *)(*param_2 + 4);
        uVar9 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
        if (uVar9 < uVar1 + 1) {
          uVar9 = uVar1 + 1;
        }
      }
      piVar2 = (int *)FUN_00173860(0xc,0);
      iVar3 = FUN_00173860(uVar9 * 0x44,0);
      piVar2[2] = iVar3;
      *piVar2 = *param_2;
      piVar2[1] = uVar9;
      *param_2 = (int)piVar2;
      iVar3 = piVar2[2];
      param_2[2] = iVar3;
      param_2[3] = iVar3 + uVar9 * 0x44;
      pcVar8 = (char *)param_2[2];
      param_2[2] = (int)(pcVar8 + 0x44);
    }
    else {
      param_2[2] = (int)(pcVar8 + 0x44);
    }
  }
  else {
    param_2[1] = *(int *)(pcVar8 + 0xc);
  }
  pcVar8[4] = '\0';
  pcVar8[5] = '\0';
  pcVar8[6] = '\0';
  pcVar8[7] = '\0';
  pcVar8[8] = '\0';
  pcVar8[9] = '\0';
  pcVar8[10] = '\0';
  pcVar8[0xb] = '\0';
  pcVar8[0xc] = '\0';
  pcVar8[0xd] = '\0';
  pcVar8[0xe] = '\0';
  pcVar8[0xf] = '\0';
  *pcVar8 = '\0';
  *(uint *)(pcVar8 + 0x10) = *param_5;
  FUN_000c9e88(pcVar8 + 0x14,param_5 + 1);
  param_2[5] = param_2[5] + 1;
  if (((param_2[4] == param_4) || (param_3 != 0)) || (*param_5 < *(uint *)(param_4 + 0x10))) {
    *(char **)(param_4 + 8) = pcVar8;
    iVar3 = param_2[4];
    if (iVar3 == param_4) {
      *(char **)(iVar3 + 4) = pcVar8;
      *(char **)(param_2[4] + 0xc) = pcVar8;
    }
    else if (*(int *)(iVar3 + 8) == param_4) {
      *(char **)(iVar3 + 8) = pcVar8;
    }
  }
  else {
    *(char **)(param_4 + 0xc) = pcVar8;
    if (*(int *)(param_2[4] + 0xc) == param_4) {
      *(char **)(param_2[4] + 0xc) = pcVar8;
    }
  }
  *(int *)(pcVar8 + 4) = param_4;
  pcVar4 = pcVar8;
  do {
    while( true ) {
      if ((*(char **)(param_2[4] + 4) == pcVar4) ||
         (pcVar5 = *(char **)(pcVar4 + 4), *pcVar5 != '\0')) {
        **(undefined1 **)(param_2[4] + 4) = 1;
        *param_1 = pcVar8;
        return;
      }
      pcVar6 = *(char **)(*(int *)(pcVar5 + 4) + 8);
      if (pcVar6 != pcVar5) break;
      pcVar6 = *(char **)(*(int *)(pcVar5 + 4) + 0xc);
      if ((pcVar6 != (char *)0x0) && (*pcVar6 == '\0')) goto LAB_00222460;
      pcVar6 = pcVar5;
      if (*(char **)(pcVar5 + 0xc) == pcVar4) {
        pcVar6 = *(char **)(pcVar5 + 0xc);
        *(undefined4 *)(pcVar5 + 0xc) = *(undefined4 *)(pcVar6 + 8);
        if (*(int *)(pcVar6 + 8) != 0) {
          *(char **)(*(int *)(pcVar6 + 8) + 4) = pcVar5;
        }
        *(undefined4 *)(pcVar6 + 4) = *(undefined4 *)(pcVar5 + 4);
        if (*(char **)(param_2[4] + 4) == pcVar5) {
          *(char **)(param_2[4] + 4) = pcVar6;
        }
        else {
          iVar3 = *(int *)(pcVar5 + 4);
          if (*(char **)(iVar3 + 8) == pcVar5) {
            *(char **)(iVar3 + 8) = pcVar6;
          }
          else {
            *(char **)(iVar3 + 0xc) = pcVar6;
          }
        }
        *(char **)(pcVar6 + 8) = pcVar5;
        *(char **)(pcVar5 + 4) = pcVar6;
        pcVar4 = pcVar5;
      }
      *pcVar6 = '\x01';
      **(undefined1 **)(*(int *)(pcVar4 + 4) + 4) = 0;
      iVar3 = *(int *)(*(int *)(pcVar4 + 4) + 4);
      iVar7 = *(int *)(iVar3 + 8);
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar7 + 0xc);
      if (*(int *)(iVar7 + 0xc) != 0) {
        *(int *)(*(int *)(iVar7 + 0xc) + 4) = iVar3;
      }
      *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar3 + 4);
      if (*(int *)(param_2[4] + 4) == iVar3) {
        *(int *)(param_2[4] + 4) = iVar7;
      }
      else {
        iVar10 = *(int *)(iVar3 + 4);
        if (*(int *)(iVar10 + 0xc) == iVar3) {
          *(int *)(iVar10 + 0xc) = iVar7;
        }
        else {
          *(int *)(iVar10 + 8) = iVar7;
        }
      }
      *(int *)(iVar7 + 0xc) = iVar3;
LAB_00222458:
      *(int *)(iVar3 + 4) = iVar7;
    }
    if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\0')) {
      pcVar6 = pcVar5;
      if (*(char **)(pcVar5 + 8) == pcVar4) {
        pcVar6 = *(char **)(pcVar5 + 8);
        *(undefined4 *)(pcVar5 + 8) = *(undefined4 *)(pcVar6 + 0xc);
        if (*(int *)(pcVar6 + 0xc) != 0) {
          *(char **)(*(int *)(pcVar6 + 0xc) + 4) = pcVar5;
        }
        *(undefined4 *)(pcVar6 + 4) = *(undefined4 *)(pcVar5 + 4);
        if (*(char **)(param_2[4] + 4) == pcVar5) {
          *(char **)(param_2[4] + 4) = pcVar6;
        }
        else {
          iVar3 = *(int *)(pcVar5 + 4);
          if (*(char **)(iVar3 + 0xc) == pcVar5) {
            *(char **)(iVar3 + 0xc) = pcVar6;
          }
          else {
            *(char **)(iVar3 + 8) = pcVar6;
          }
        }
        *(char **)(pcVar6 + 0xc) = pcVar5;
        *(char **)(pcVar5 + 4) = pcVar6;
        pcVar4 = pcVar5;
      }
      *pcVar6 = '\x01';
      **(undefined1 **)(*(int *)(pcVar4 + 4) + 4) = 0;
      iVar3 = *(int *)(*(int *)(pcVar4 + 4) + 4);
      iVar7 = *(int *)(iVar3 + 0xc);
      *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar7 + 8);
      if (*(int *)(iVar7 + 8) != 0) {
        *(int *)(*(int *)(iVar7 + 8) + 4) = iVar3;
      }
      *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar3 + 4);
      if (*(int *)(param_2[4] + 4) == iVar3) {
        *(int *)(param_2[4] + 4) = iVar7;
      }
      else {
        iVar10 = *(int *)(iVar3 + 4);
        if (*(int *)(iVar10 + 8) == iVar3) {
          *(int *)(iVar10 + 8) = iVar7;
        }
        else {
          *(int *)(iVar10 + 0xc) = iVar7;
        }
      }
      *(int *)(iVar7 + 8) = iVar3;
      goto LAB_00222458;
    }
LAB_00222460:
    *pcVar5 = '\x01';
    *pcVar6 = '\x01';
    **(undefined1 **)(*(int *)(pcVar4 + 4) + 4) = 0;
    pcVar4 = *(char **)(*(int *)(pcVar4 + 4) + 4);
  } while( true );
}

