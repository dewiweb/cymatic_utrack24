// rea decompile_all
// name: FUN_001c5a08
// address: 0x1c5a08
// body: available
// range: 0x1c5a08-0x1c5c01 inclusive
// range: 0x1c5c04-0x1c5c73 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001c5a08(undefined4 *param_1,int *param_2,int param_3,int param_4,uint *param_5)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  pcVar1 = (char *)param_2[1];
  if (pcVar1 == (char *)0x0) {
    pcVar1 = (char *)param_2[2];
    if (pcVar1 == (char *)param_2[3]) {
      if (*param_2 == 0) {
        uVar6 = 1;
      }
      else {
        uVar11 = *(uint *)(*param_2 + 4);
        uVar8 = (uVar11 >> 1) + uVar11 + (uVar11 >> 3);
        uVar6 = uVar11 + 1;
        if (uVar11 + 1 <= uVar8) {
          uVar6 = uVar8;
        }
      }
      piVar2 = (int *)FUN_0010f82c(0xc,0);
      iVar3 = FUN_0010f82c(uVar6 * 0x2c,0);
      piVar2[2] = iVar3;
      iVar3 = *param_2;
      piVar2[1] = uVar6;
      *piVar2 = iVar3;
      *param_2 = (int)piVar2;
      iVar3 = piVar2[2];
      param_2[2] = iVar3;
      param_2[3] = iVar3 + uVar6 * 0x2c;
      pcVar1 = (char *)param_2[2];
      param_2[2] = (int)(pcVar1 + 0x2c);
    }
    else {
      param_2[2] = (int)(pcVar1 + 0x2c);
    }
  }
  else {
    param_2[1] = *(int *)(pcVar1 + 0xc);
  }
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  pcVar1[8] = '\0';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  pcVar1[0xc] = '\0';
  pcVar1[0xd] = '\0';
  pcVar1[0xe] = '\0';
  pcVar1[0xf] = '\0';
  *pcVar1 = '\0';
  *(uint *)(pcVar1 + 0x10) = *param_5;
  uVar6 = param_5[2];
  uVar8 = param_5[3];
  uVar11 = param_5[4];
  *(uint *)(pcVar1 + 0x14) = param_5[1];
  *(uint *)(pcVar1 + 0x18) = uVar6;
  *(uint *)(pcVar1 + 0x1c) = uVar8;
  *(uint *)(pcVar1 + 0x20) = uVar11;
  uVar6 = param_5[5];
  *(uint *)(pcVar1 + 0x28) = param_5[6];
  *(uint *)(pcVar1 + 0x24) = uVar6;
  param_2[5] = param_2[5] + 1;
  if (((param_2[4] == param_4) || (param_3 != 0)) || (*param_5 < *(uint *)(param_4 + 0x10))) {
    *(char **)(param_4 + 8) = pcVar1;
    iVar3 = param_2[4];
    if (iVar3 == param_4) {
      *(char **)(iVar3 + 4) = pcVar1;
      *(char **)(param_2[4] + 0xc) = pcVar1;
    }
    else if (*(int *)(iVar3 + 8) == param_4) {
      *(char **)(iVar3 + 8) = pcVar1;
    }
  }
  else {
    *(char **)(param_4 + 0xc) = pcVar1;
    if (*(int *)(param_2[4] + 0xc) == param_4) {
      *(char **)(param_2[4] + 0xc) = pcVar1;
    }
  }
  *(int *)(pcVar1 + 4) = param_4;
  pcVar4 = pcVar1;
  do {
    while( true ) {
      if ((*(char **)(param_2[4] + 4) == pcVar4) ||
         (pcVar5 = *(char **)(pcVar4 + 4), *pcVar5 != '\0')) {
        **(undefined1 **)(param_2[4] + 4) = 1;
        *param_1 = pcVar1;
        return;
      }
      pcVar7 = *(char **)(*(int *)(pcVar5 + 4) + 8);
      if (pcVar7 == pcVar5) break;
      if ((pcVar7 != (char *)0x0) && (*pcVar7 == '\0')) goto LAB_001c5c04;
      if (*(char **)(pcVar5 + 8) == pcVar4) {
        iVar3 = *(int *)(pcVar5 + 8);
        *(undefined4 *)(pcVar5 + 8) = *(undefined4 *)(iVar3 + 0xc);
        iVar9 = *(int *)(iVar3 + 0xc);
        if (iVar9 != 0) {
          *(char **)(iVar9 + 4) = pcVar5;
        }
        *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(pcVar5 + 4);
        if (*(char **)(param_2[4] + 4) == pcVar5) {
          *(int *)(param_2[4] + 4) = iVar3;
        }
        else {
          iVar9 = *(int *)(pcVar5 + 4);
          if (*(char **)(iVar9 + 0xc) == pcVar5) {
            *(int *)(iVar9 + 0xc) = iVar3;
          }
          else {
            *(int *)(iVar9 + 8) = iVar3;
          }
        }
        *(int *)(iVar3 + 0xc) = (int)pcVar5;
        *(int *)(pcVar5 + 4) = iVar3;
        pcVar4 = pcVar5;
      }
      **(undefined1 **)(pcVar4 + 4) = 1;
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
LAB_001c5c70:
      *(int *)(iVar3 + 4) = iVar9;
    }
    pcVar7 = *(char **)(*(int *)(pcVar5 + 4) + 0xc);
    if ((pcVar7 == (char *)0x0) || (*pcVar7 != '\0')) {
      if (*(char **)(pcVar5 + 0xc) == pcVar4) {
        iVar3 = *(int *)(pcVar5 + 0xc);
        *(undefined4 *)(pcVar5 + 0xc) = *(undefined4 *)(iVar3 + 8);
        iVar9 = *(int *)(iVar3 + 8);
        if (iVar9 != 0) {
          *(char **)(iVar9 + 4) = pcVar5;
        }
        *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(pcVar5 + 4);
        if (*(char **)(param_2[4] + 4) == pcVar5) {
          *(int *)(param_2[4] + 4) = iVar3;
        }
        else {
          iVar9 = *(int *)(pcVar5 + 4);
          if (*(char **)(iVar9 + 8) == pcVar5) {
            *(int *)(iVar9 + 8) = iVar3;
          }
          else {
            *(int *)(iVar9 + 0xc) = iVar3;
          }
        }
        *(int *)(iVar3 + 8) = (int)pcVar5;
        *(int *)(pcVar5 + 4) = iVar3;
        pcVar4 = pcVar5;
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
      goto LAB_001c5c70;
    }
LAB_001c5c04:
    *pcVar5 = '\x01';
    *pcVar7 = '\x01';
    **(undefined1 **)(*(int *)(pcVar4 + 4) + 4) = 0;
    pcVar4 = *(char **)(*(int *)(pcVar4 + 4) + 4);
  } while( true );
}

