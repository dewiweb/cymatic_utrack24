// rea decompile_all
// name: FUN_001c3160
// address: 0x1c3160
// body: available
// range: 0x1c3160-0x1c33bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001c3160(undefined4 *param_1,int *param_2,int param_3,int param_4,uint *param_5)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  undefined1 *puVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  pcVar9 = (char *)param_2[1];
  if (pcVar9 == (char *)0x0) {
    pcVar9 = (char *)param_2[2];
    if (pcVar9 == (char *)param_2[3]) {
      if (*param_2 == 0) {
        uVar11 = 1;
      }
      else {
        uVar10 = *(uint *)(*param_2 + 4);
        uVar1 = (uVar10 >> 1) + uVar10 + (uVar10 >> 3);
        uVar11 = uVar10 + 1;
        if (uVar10 + 1 <= uVar1) {
          uVar11 = uVar1;
        }
      }
      piVar2 = (int *)FUN_0010f82c(0xc,0);
      iVar3 = FUN_0010f82c(uVar11 * 0x30,0);
      piVar2[2] = iVar3;
      iVar3 = *param_2;
      piVar2[1] = uVar11;
      *piVar2 = iVar3;
      *param_2 = (int)piVar2;
      iVar3 = piVar2[2];
      param_2[2] = iVar3;
      param_2[3] = iVar3 + uVar11 * 0x30;
      pcVar9 = (char *)param_2[2];
      param_2[2] = (int)(pcVar9 + 0x30);
    }
    else {
      param_2[2] = (int)(pcVar9 + 0x30);
    }
  }
  else {
    param_2[1] = *(int *)(pcVar9 + 0xc);
  }
  pcVar9[4] = '\0';
  pcVar9[5] = '\0';
  pcVar9[6] = '\0';
  pcVar9[7] = '\0';
  pcVar9[8] = '\0';
  pcVar9[9] = '\0';
  pcVar9[10] = '\0';
  pcVar9[0xb] = '\0';
  pcVar9[0xc] = '\0';
  pcVar9[0xd] = '\0';
  pcVar9[0xe] = '\0';
  pcVar9[0xf] = '\0';
  *pcVar9 = '\0';
  *(uint *)(pcVar9 + 0x10) = *param_5;
  FUN_00088164(pcVar9 + 0x14,param_5 + 1);
  param_2[5] = param_2[5] + 1;
  if (((param_2[4] == param_4) || (param_3 != 0)) || (*param_5 < *(uint *)(param_4 + 0x10))) {
    *(char **)(param_4 + 8) = pcVar9;
    iVar3 = param_2[4];
    if (iVar3 == param_4) {
      *(char **)(iVar3 + 4) = pcVar9;
      *(char **)(param_2[4] + 0xc) = pcVar9;
    }
    else if (*(int *)(iVar3 + 8) == param_4) {
      *(char **)(iVar3 + 8) = pcVar9;
    }
  }
  else {
    *(char **)(param_4 + 0xc) = pcVar9;
    if (*(int *)(param_2[4] + 0xc) == param_4) {
      *(char **)(param_2[4] + 0xc) = pcVar9;
    }
  }
  *(int *)(pcVar9 + 4) = param_4;
  pcVar6 = pcVar9;
  do {
    while( true ) {
      if ((*(char **)(param_2[4] + 4) == pcVar6) ||
         (pcVar7 = *(char **)(pcVar6 + 4), *pcVar7 != '\0')) {
        **(undefined1 **)(param_2[4] + 4) = 1;
        *param_1 = pcVar9;
        return;
      }
      pcVar4 = *(char **)(*(int *)(pcVar7 + 4) + 8);
      if (pcVar4 == pcVar7) break;
      if ((pcVar4 != (char *)0x0) && (*pcVar4 == '\0')) goto LAB_001c331a;
      if (*(char **)(pcVar7 + 8) == pcVar6) {
        puVar5 = *(undefined1 **)(pcVar7 + 8);
        *(undefined4 *)(pcVar7 + 8) = *(undefined4 *)(puVar5 + 0xc);
        iVar3 = *(int *)(puVar5 + 0xc);
        if (iVar3 != 0) {
          *(char **)(iVar3 + 4) = pcVar7;
        }
        *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(pcVar7 + 4);
        if (*(char **)(param_2[4] + 4) == pcVar7) {
          *(undefined1 **)(param_2[4] + 4) = puVar5;
        }
        else {
          iVar3 = *(int *)(pcVar7 + 4);
          if (*(char **)(iVar3 + 0xc) == pcVar7) {
            *(undefined1 **)(iVar3 + 0xc) = puVar5;
          }
          else {
            *(undefined1 **)(iVar3 + 8) = puVar5;
          }
        }
        *(char **)(puVar5 + 0xc) = pcVar7;
        *(undefined1 **)(pcVar7 + 4) = puVar5;
      }
      else {
        puVar5 = *(undefined1 **)(pcVar6 + 4);
        pcVar7 = pcVar6;
      }
      *puVar5 = 1;
      **(undefined1 **)(*(int *)(pcVar7 + 4) + 4) = 0;
      iVar3 = *(int *)(*(int *)(pcVar7 + 4) + 4);
      iVar8 = *(int *)(iVar3 + 0xc);
      *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar8 + 8);
      if (*(int *)(iVar8 + 8) != 0) {
        *(int *)(*(int *)(iVar8 + 8) + 4) = iVar3;
      }
      *(undefined4 *)(iVar8 + 4) = *(undefined4 *)(iVar3 + 4);
      if (*(int *)(param_2[4] + 4) == iVar3) {
        *(int *)(param_2[4] + 4) = iVar8;
      }
      else {
        iVar12 = *(int *)(iVar3 + 4);
        if (*(int *)(iVar12 + 8) == iVar3) {
          *(int *)(iVar12 + 8) = iVar8;
        }
        else {
          *(int *)(iVar12 + 0xc) = iVar8;
        }
      }
      *(int *)(iVar8 + 8) = iVar3;
LAB_001c33ba:
      *(int *)(iVar3 + 4) = iVar8;
      pcVar6 = pcVar7;
    }
    pcVar4 = *(char **)(*(int *)(pcVar7 + 4) + 0xc);
    if ((pcVar4 == (char *)0x0) || (*pcVar4 != '\0')) {
      if (*(char **)(pcVar7 + 0xc) == pcVar6) {
        puVar5 = *(undefined1 **)(pcVar7 + 0xc);
        *(undefined4 *)(pcVar7 + 0xc) = *(undefined4 *)(puVar5 + 8);
        iVar3 = *(int *)(puVar5 + 8);
        if (iVar3 != 0) {
          *(char **)(iVar3 + 4) = pcVar7;
        }
        *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(pcVar7 + 4);
        if (*(char **)(param_2[4] + 4) == pcVar7) {
          *(undefined1 **)(param_2[4] + 4) = puVar5;
        }
        else {
          iVar3 = *(int *)(pcVar7 + 4);
          if (*(char **)(iVar3 + 8) == pcVar7) {
            *(undefined1 **)(iVar3 + 8) = puVar5;
          }
          else {
            *(undefined1 **)(iVar3 + 0xc) = puVar5;
          }
        }
        *(char **)(puVar5 + 8) = pcVar7;
        *(undefined1 **)(pcVar7 + 4) = puVar5;
      }
      else {
        puVar5 = *(undefined1 **)(pcVar6 + 4);
        pcVar7 = pcVar6;
      }
      *puVar5 = 1;
      **(undefined1 **)(*(int *)(pcVar7 + 4) + 4) = 0;
      iVar3 = *(int *)(*(int *)(pcVar7 + 4) + 4);
      iVar8 = *(int *)(iVar3 + 8);
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar8 + 0xc);
      if (*(int *)(iVar8 + 0xc) != 0) {
        *(int *)(*(int *)(iVar8 + 0xc) + 4) = iVar3;
      }
      *(undefined4 *)(iVar8 + 4) = *(undefined4 *)(iVar3 + 4);
      if (*(int *)(param_2[4] + 4) == iVar3) {
        *(int *)(param_2[4] + 4) = iVar8;
      }
      else {
        iVar12 = *(int *)(iVar3 + 4);
        if (*(int *)(iVar12 + 0xc) == iVar3) {
          *(int *)(iVar12 + 0xc) = iVar8;
        }
        else {
          *(int *)(iVar12 + 8) = iVar8;
        }
      }
      *(int *)(iVar8 + 0xc) = iVar3;
      goto LAB_001c33ba;
    }
LAB_001c331a:
    *pcVar7 = '\x01';
    *pcVar4 = '\x01';
    **(undefined1 **)(*(int *)(pcVar6 + 4) + 4) = 0;
    pcVar6 = *(char **)(*(int *)(pcVar6 + 4) + 4);
  } while( true );
}

