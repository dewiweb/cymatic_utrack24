// rea decompile_all
// name: FUN_00220b9c
// address: 0x220b9c
// body: available
// range: 0x220b9c-0x220e93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00220b9c(undefined4 *param_1,int param_2,int param_3,int param_4,uint *param_5)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  
  pcVar1 = (char *)FUN_00220234(param_2);
  *(uint *)(pcVar1 + 0x10) = *param_5;
  *(uint *)(pcVar1 + 0x14) = param_5[1];
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  if (((*(int *)(param_2 + 0x10) == param_4) || (param_3 != 0)) ||
     (*param_5 < *(uint *)(param_4 + 0x10))) {
    *(char **)(param_4 + 8) = pcVar1;
    iVar2 = *(int *)(param_2 + 0x10);
    if (iVar2 == param_4) {
      *(char **)(iVar2 + 4) = pcVar1;
      *(char **)(*(int *)(param_2 + 0x10) + 0xc) = pcVar1;
    }
    else if (*(int *)(iVar2 + 8) == param_4) {
      *(char **)(iVar2 + 8) = pcVar1;
    }
  }
  else {
    *(char **)(param_4 + 0xc) = pcVar1;
    if (*(int *)(*(int *)(param_2 + 0x10) + 0xc) == param_4) {
      *(char **)(*(int *)(param_2 + 0x10) + 0xc) = pcVar1;
    }
  }
  *(int *)(pcVar1 + 4) = param_4;
  pcVar3 = pcVar1;
  do {
    while( true ) {
      if ((*(char **)(*(int *)(param_2 + 0x10) + 4) == pcVar3) ||
         (pcVar4 = *(char **)(pcVar3 + 4), *pcVar4 != '\0')) {
        **(undefined1 **)(*(int *)(param_2 + 0x10) + 4) = 1;
        *param_1 = pcVar1;
        return;
      }
      pcVar5 = *(char **)(*(int *)(pcVar4 + 4) + 8);
      if (pcVar5 == pcVar4) break;
      if ((pcVar5 != (char *)0x0) && (*pcVar5 == '\0')) goto LAB_00220e74;
      pcVar5 = pcVar4;
      if (*(char **)(pcVar4 + 8) == pcVar3) {
        pcVar5 = *(char **)(pcVar4 + 8);
        *(undefined4 *)(pcVar4 + 8) = *(undefined4 *)(pcVar5 + 0xc);
        if (*(int *)(pcVar5 + 0xc) != 0) {
          *(char **)(*(int *)(pcVar5 + 0xc) + 4) = pcVar4;
        }
        *(undefined4 *)(pcVar5 + 4) = *(undefined4 *)(pcVar4 + 4);
        if (*(char **)(*(int *)(param_2 + 0x10) + 4) == pcVar4) {
          *(char **)(*(int *)(param_2 + 0x10) + 4) = pcVar5;
        }
        else {
          iVar2 = *(int *)(pcVar4 + 4);
          if (*(char **)(iVar2 + 0xc) == pcVar4) {
            *(char **)(iVar2 + 0xc) = pcVar5;
          }
          else {
            *(char **)(iVar2 + 8) = pcVar5;
          }
        }
        *(char **)(pcVar5 + 0xc) = pcVar4;
        *(char **)(pcVar4 + 4) = pcVar5;
        pcVar3 = pcVar4;
      }
      *pcVar5 = '\x01';
      **(undefined1 **)(*(int *)(pcVar3 + 4) + 4) = 0;
      iVar2 = *(int *)(*(int *)(pcVar3 + 4) + 4);
      iVar6 = *(int *)(iVar2 + 0xc);
      *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar6 + 8);
      if (*(int *)(iVar6 + 8) != 0) {
        *(int *)(*(int *)(iVar6 + 8) + 4) = iVar2;
      }
      *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar2 + 4);
      if (*(int *)(*(int *)(param_2 + 0x10) + 4) == iVar2) {
        *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar6;
      }
      else {
        iVar7 = *(int *)(iVar2 + 4);
        if (*(int *)(iVar7 + 8) == iVar2) {
          *(int *)(iVar7 + 8) = iVar6;
        }
        else {
          *(int *)(iVar7 + 0xc) = iVar6;
        }
      }
      *(int *)(iVar6 + 8) = iVar2;
LAB_00220e6c:
      *(int *)(iVar2 + 4) = iVar6;
    }
    pcVar5 = *(char **)(*(int *)(pcVar4 + 4) + 0xc);
    if ((pcVar5 == (char *)0x0) || (*pcVar5 != '\0')) {
      pcVar5 = pcVar4;
      if (*(char **)(pcVar4 + 0xc) == pcVar3) {
        pcVar5 = *(char **)(pcVar4 + 0xc);
        *(undefined4 *)(pcVar4 + 0xc) = *(undefined4 *)(pcVar5 + 8);
        if (*(int *)(pcVar5 + 8) != 0) {
          *(char **)(*(int *)(pcVar5 + 8) + 4) = pcVar4;
        }
        *(undefined4 *)(pcVar5 + 4) = *(undefined4 *)(pcVar4 + 4);
        if (*(char **)(*(int *)(param_2 + 0x10) + 4) == pcVar4) {
          *(char **)(*(int *)(param_2 + 0x10) + 4) = pcVar5;
        }
        else {
          iVar2 = *(int *)(pcVar4 + 4);
          if (*(char **)(iVar2 + 8) == pcVar4) {
            *(char **)(iVar2 + 8) = pcVar5;
          }
          else {
            *(char **)(iVar2 + 0xc) = pcVar5;
          }
        }
        *(char **)(pcVar5 + 8) = pcVar4;
        *(char **)(pcVar4 + 4) = pcVar5;
        pcVar3 = pcVar4;
      }
      *pcVar5 = '\x01';
      **(undefined1 **)(*(int *)(pcVar3 + 4) + 4) = 0;
      iVar2 = *(int *)(*(int *)(pcVar3 + 4) + 4);
      iVar6 = *(int *)(iVar2 + 8);
      *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar6 + 0xc);
      if (*(int *)(iVar6 + 0xc) != 0) {
        *(int *)(*(int *)(iVar6 + 0xc) + 4) = iVar2;
      }
      *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar2 + 4);
      if (*(int *)(*(int *)(param_2 + 0x10) + 4) == iVar2) {
        *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar6;
      }
      else {
        iVar7 = *(int *)(iVar2 + 4);
        if (*(int *)(iVar7 + 0xc) == iVar2) {
          *(int *)(iVar7 + 0xc) = iVar6;
        }
        else {
          *(int *)(iVar7 + 8) = iVar6;
        }
      }
      *(int *)(iVar6 + 0xc) = iVar2;
      goto LAB_00220e6c;
    }
LAB_00220e74:
    *pcVar4 = '\x01';
    *pcVar5 = '\x01';
    **(undefined1 **)(*(int *)(pcVar3 + 4) + 4) = 0;
    pcVar3 = *(char **)(*(int *)(pcVar3 + 4) + 4);
  } while( true );
}

