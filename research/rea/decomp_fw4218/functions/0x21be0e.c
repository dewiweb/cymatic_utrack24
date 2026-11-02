// rea decompile_all
// name: FUN_0021be0e
// address: 0x21be0e
// body: available
// range: 0x21be0e-0x21c065 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0021be0e(undefined4 *param_1,int *param_2,int param_3,int param_4,byte *param_5)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  
  pcVar8 = (char *)param_2[1];
  if (pcVar8 == (char *)0x0) {
    pcVar8 = (char *)param_2[2];
    if (pcVar8 == (char *)param_2[3]) {
      if (*param_2 == 0) {
        uVar10 = 1;
      }
      else {
        uVar9 = *(uint *)(*param_2 + 4);
        uVar1 = (uVar9 >> 1) + uVar9 + (uVar9 >> 3);
        uVar10 = uVar9 + 1;
        if (uVar9 + 1 <= uVar1) {
          uVar10 = uVar1;
        }
      }
      piVar2 = (int *)FUN_00173860(0xc,0);
      iVar3 = FUN_00173860(uVar10 * 0x1c,0);
      piVar2[2] = iVar3;
      iVar3 = *param_2;
      piVar2[1] = uVar10;
      *piVar2 = iVar3;
      *param_2 = (int)piVar2;
      iVar3 = piVar2[2];
      param_2[2] = iVar3;
      param_2[3] = iVar3 + uVar10 * 0x1c;
      pcVar8 = (char *)param_2[2];
      param_2[2] = (int)(pcVar8 + 0x1c);
    }
    else {
      param_2[2] = (int)(pcVar8 + 0x1c);
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
  pcVar8[0x10] = *param_5;
  uVar5 = *(undefined4 *)(param_5 + 4);
  *(undefined4 *)(pcVar8 + 0x18) = *(undefined4 *)(param_5 + 8);
  *(undefined4 *)(pcVar8 + 0x14) = uVar5;
  param_2[5] = param_2[5] + 1;
  if (((param_2[4] == param_4) || (param_3 != 0)) || (*param_5 < *(byte *)(param_4 + 0x10))) {
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
         (pcVar6 = *(char **)(pcVar4 + 4), *pcVar6 != '\0')) {
        **(undefined1 **)(param_2[4] + 4) = 1;
        *param_1 = pcVar8;
        return;
      }
      pcVar7 = *(char **)(*(int *)(pcVar6 + 4) + 8);
      if (pcVar7 == pcVar6) break;
      if ((pcVar7 != (char *)0x0) && (*pcVar7 == '\0')) goto LAB_0021bff6;
      if (*(char **)(pcVar6 + 8) == pcVar4) {
        iVar3 = *(int *)(pcVar6 + 8);
        *(int *)(pcVar6 + 8) = *(int *)(iVar3 + 0xc);
        iVar11 = *(int *)(iVar3 + 0xc);
        if (iVar11 != 0) {
          *(char **)(iVar11 + 4) = pcVar6;
        }
        *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(pcVar6 + 4);
        if (*(char **)(param_2[4] + 4) == pcVar6) {
          *(int *)(param_2[4] + 4) = iVar3;
        }
        else {
          iVar11 = *(int *)(pcVar6 + 4);
          if (*(char **)(iVar11 + 0xc) == pcVar6) {
            *(int *)(iVar11 + 0xc) = iVar3;
          }
          else {
            *(int *)(iVar11 + 8) = iVar3;
          }
        }
        *(int *)(iVar3 + 0xc) = (int)pcVar6;
        *(int *)(pcVar6 + 4) = iVar3;
        pcVar4 = pcVar6;
      }
      **(undefined1 **)(pcVar4 + 4) = 1;
      **(undefined1 **)(*(int *)(pcVar4 + 4) + 4) = 0;
      iVar3 = *(int *)(*(int *)(pcVar4 + 4) + 4);
      iVar11 = *(int *)(iVar3 + 0xc);
      *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar11 + 8);
      if (*(int *)(iVar11 + 8) != 0) {
        *(int *)(*(int *)(iVar11 + 8) + 4) = iVar3;
      }
      *(undefined4 *)(iVar11 + 4) = *(undefined4 *)(iVar3 + 4);
      if (*(int *)(param_2[4] + 4) == iVar3) {
        *(int *)(param_2[4] + 4) = iVar11;
      }
      else {
        iVar12 = *(int *)(iVar3 + 4);
        if (*(int *)(iVar12 + 8) == iVar3) {
          *(int *)(iVar12 + 8) = iVar11;
        }
        else {
          *(int *)(iVar12 + 0xc) = iVar11;
        }
      }
      *(int *)(iVar11 + 8) = iVar3;
LAB_0021c062:
      *(int *)(iVar3 + 4) = iVar11;
    }
    pcVar7 = *(char **)(*(int *)(pcVar6 + 4) + 0xc);
    if ((pcVar7 == (char *)0x0) || (*pcVar7 != '\0')) {
      if (*(char **)(pcVar6 + 0xc) == pcVar4) {
        iVar3 = *(int *)(pcVar6 + 0xc);
        *(undefined4 *)(pcVar6 + 0xc) = *(undefined4 *)(iVar3 + 8);
        iVar11 = *(int *)(iVar3 + 8);
        if (iVar11 != 0) {
          *(char **)(iVar11 + 4) = pcVar6;
        }
        *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(pcVar6 + 4);
        if (*(char **)(param_2[4] + 4) == pcVar6) {
          *(int *)(param_2[4] + 4) = iVar3;
        }
        else {
          iVar11 = *(int *)(pcVar6 + 4);
          if (*(char **)(iVar11 + 8) == pcVar6) {
            *(int *)(iVar11 + 8) = iVar3;
          }
          else {
            *(int *)(iVar11 + 0xc) = iVar3;
          }
        }
        *(int *)(iVar3 + 8) = (int)pcVar6;
        *(int *)(pcVar6 + 4) = iVar3;
        pcVar4 = pcVar6;
      }
      **(undefined1 **)(pcVar4 + 4) = 1;
      **(undefined1 **)(*(int *)(pcVar4 + 4) + 4) = 0;
      iVar3 = *(int *)(*(int *)(pcVar4 + 4) + 4);
      iVar11 = *(int *)(iVar3 + 8);
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar11 + 0xc);
      if (*(int *)(iVar11 + 0xc) != 0) {
        *(int *)(*(int *)(iVar11 + 0xc) + 4) = iVar3;
      }
      *(undefined4 *)(iVar11 + 4) = *(undefined4 *)(iVar3 + 4);
      if (*(int *)(param_2[4] + 4) == iVar3) {
        *(int *)(param_2[4] + 4) = iVar11;
      }
      else {
        iVar12 = *(int *)(iVar3 + 4);
        if (*(int *)(iVar12 + 0xc) == iVar3) {
          *(int *)(iVar12 + 0xc) = iVar11;
        }
        else {
          *(int *)(iVar12 + 8) = iVar11;
        }
      }
      *(int *)(iVar11 + 0xc) = iVar3;
      goto LAB_0021c062;
    }
LAB_0021bff6:
    *pcVar6 = '\x01';
    *pcVar7 = '\x01';
    **(undefined1 **)(*(int *)(pcVar4 + 4) + 4) = 0;
    pcVar4 = *(char **)(*(int *)(pcVar4 + 4) + 4);
  } while( true );
}

