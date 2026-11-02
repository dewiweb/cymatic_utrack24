// rea decompile_all
// name: FUN_0021e6ea
// address: 0x21e6ea
// body: available
// range: 0x21e6ea-0x21e96f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0021e6ea(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  int iStack_1c;
  undefined4 *puStack_18;
  
  local_28 = *param_3;
  local_24 = *(undefined4 *)(param_2 + 0x10);
  local_20 = param_1;
  iStack_1c = param_2;
  puStack_18 = param_3;
  iVar2 = FUN_0022483c(&local_28,&local_24);
  if (iVar2 != 0) {
    local_28 = *(undefined4 *)(param_2 + 0x10);
    goto LAB_0021e934;
  }
  FUN_0020ab9a(&local_28);
  pcVar6 = (char *)*param_3;
  pcVar3 = *(char **)(pcVar6 + 8);
  pcVar7 = pcVar6;
  if (pcVar3 == (char *)0x0) {
    pcVar5 = *(char **)(pcVar6 + 0xc);
    if (*(char **)(pcVar6 + 0xc) != (char *)0x0) goto LAB_0021e770;
    pcVar5 = *(char **)(pcVar6 + 4);
    if (*(char **)(param_2 + 0x10) == pcVar5) {
      *(char **)(*(char **)(param_2 + 0x10) + 0xc) = pcVar5;
      *(char **)(*(int *)(param_2 + 0x10) + 8) = pcVar5;
      *(undefined4 *)(*(int *)(param_2 + 0x10) + 4) = 0;
    }
    else if (*(char **)(pcVar5 + 8) == pcVar6) {
      pcVar5[8] = '\0';
      pcVar5[9] = '\0';
      pcVar5[10] = '\0';
      pcVar5[0xb] = '\0';
      if (*(char **)(*(int *)(param_2 + 0x10) + 8) == pcVar6) {
        *(char **)(*(int *)(param_2 + 0x10) + 8) = pcVar5;
      }
    }
    else {
      pcVar5[0xc] = '\0';
      pcVar5[0xd] = '\0';
      pcVar5[0xe] = '\0';
      pcVar5[0xf] = '\0';
      if (*(char **)(*(int *)(param_2 + 0x10) + 0xc) == pcVar6) {
        *(char **)(*(int *)(param_2 + 0x10) + 0xc) = pcVar5;
      }
    }
  }
  else {
    pcVar4 = *(char **)(pcVar6 + 0xc);
    pcVar5 = pcVar3;
    if (*(char **)(pcVar6 + 0xc) != (char *)0x0) {
      do {
        pcVar7 = pcVar4;
        pcVar4 = *(char **)(pcVar7 + 8);
      } while (*(char **)(pcVar7 + 8) != (char *)0x0);
      pcVar5 = *(char **)(pcVar7 + 0xc);
    }
LAB_0021e770:
    if (pcVar7 == pcVar6) {
      *(undefined4 *)(pcVar5 + 4) = *(undefined4 *)(pcVar7 + 4);
      if (*(char **)(*(int *)(param_2 + 0x10) + 4) == pcVar6) {
        *(char **)(*(int *)(param_2 + 0x10) + 4) = pcVar5;
      }
      else {
        iVar2 = *(int *)(pcVar6 + 4);
        if (*(char **)(iVar2 + 8) == pcVar6) {
          *(char **)(iVar2 + 8) = pcVar5;
        }
        else {
          *(char **)(iVar2 + 0xc) = pcVar5;
        }
      }
      if (*(char **)(*(int *)(param_2 + 0x10) + 8) == pcVar6) {
        pcVar3 = pcVar5;
        if (*(int *)(pcVar6 + 0xc) == 0) {
          pcVar4 = *(char **)(pcVar6 + 4);
        }
        else {
          do {
            pcVar4 = pcVar3;
            pcVar3 = *(char **)(pcVar4 + 8);
          } while (*(char **)(pcVar4 + 8) != (char *)0x0);
        }
        *(char **)(*(int *)(param_2 + 0x10) + 8) = pcVar4;
      }
      if (*(char **)(*(int *)(param_2 + 0x10) + 0xc) == pcVar6) {
        pcVar3 = pcVar5;
        if (*(int *)(pcVar6 + 8) == 0) {
          pcVar6 = *(char **)(pcVar6 + 4);
        }
        else {
          do {
            pcVar6 = pcVar3;
            pcVar3 = *(char **)(pcVar6 + 0xc);
          } while (*(char **)(pcVar6 + 0xc) != (char *)0x0);
        }
        *(char **)(*(int *)(param_2 + 0x10) + 0xc) = pcVar6;
      }
    }
    else {
      *(char **)(pcVar3 + 4) = pcVar7;
      *(undefined4 *)(pcVar7 + 8) = *(undefined4 *)(pcVar6 + 8);
      if (*(char **)(pcVar6 + 0xc) == pcVar7) {
        if (pcVar5 != (char *)0x0) {
          *(char **)(pcVar5 + 4) = pcVar7;
        }
      }
      else {
        if (pcVar5 != (char *)0x0) {
          *(undefined4 *)(pcVar5 + 4) = *(undefined4 *)(pcVar7 + 4);
        }
        *(char **)(*(int *)(pcVar7 + 4) + 8) = pcVar5;
        *(undefined4 *)(pcVar7 + 0xc) = *(undefined4 *)(pcVar6 + 0xc);
        *(char **)(*(int *)(pcVar6 + 0xc) + 4) = pcVar7;
      }
      if (*(char **)(*(int *)(param_2 + 0x10) + 4) == pcVar6) {
        *(char **)(*(int *)(param_2 + 0x10) + 4) = pcVar7;
      }
      else {
        iVar2 = *(int *)(pcVar6 + 4);
        if (*(char **)(iVar2 + 8) == pcVar6) {
          *(char **)(iVar2 + 8) = pcVar7;
        }
        else {
          *(char **)(iVar2 + 0xc) = pcVar7;
        }
      }
      *(undefined4 *)(pcVar7 + 4) = *(undefined4 *)(pcVar6 + 4);
      if (pcVar5 == (char *)0x0) {
        pcVar5 = pcVar7;
      }
      cVar1 = *pcVar7;
      *pcVar7 = *pcVar6;
      *pcVar6 = cVar1;
      pcVar7 = pcVar6;
    }
  }
  if ((*(char **)(param_2 + 0x10) != pcVar5) && (*pcVar7 != '\0')) {
LAB_0021e912:
    while( true ) {
      if ((*(char **)(*(int *)(param_2 + 0x10) + 4) == pcVar5) || (*pcVar5 != '\x01'))
      goto LAB_0021e920;
      pcVar3 = *(char **)(pcVar5 + 4);
      pcVar6 = *(char **)(pcVar3 + 8);
      if (pcVar6 != pcVar5) break;
      pcVar6 = *(char **)(pcVar3 + 0xc);
      if (pcVar6 == (char *)0x0) goto LAB_0021e8ca;
      if (*pcVar6 == '\0') {
        *pcVar6 = '\x01';
        **(undefined1 **)(pcVar5 + 4) = 0;
        FUN_0021e686(param_2,*(undefined4 *)(pcVar5 + 4));
        pcVar3 = *(char **)(pcVar5 + 4);
        pcVar6 = *(char **)(pcVar3 + 0xc);
        if (pcVar6 == (char *)0x0) goto LAB_0021e8ca;
      }
      pcVar3 = *(char **)(pcVar6 + 8);
      if (((pcVar3 != (char *)0x0) && (*pcVar3 != '\x01')) ||
         ((*(char **)(pcVar6 + 0xc) != (char *)0x0 && (**(char **)(pcVar6 + 0xc) != '\x01')))) {
        if ((*(char **)(pcVar6 + 0xc) == (char *)0x0) || (**(char **)(pcVar6 + 0xc) == '\x01')) {
          if (pcVar3 != (char *)0x0) {
            *pcVar3 = '\x01';
          }
          *pcVar6 = '\0';
          FUN_0021e6b8(param_2);
          pcVar6 = *(char **)(*(int *)(pcVar5 + 4) + 0xc);
          if (pcVar6 == (char *)0x0) goto LAB_0021e920;
        }
        *pcVar6 = **(char **)(pcVar5 + 4);
        **(undefined1 **)(pcVar5 + 4) = 1;
        if (*(undefined1 **)(pcVar6 + 0xc) != (undefined1 *)0x0) {
          **(undefined1 **)(pcVar6 + 0xc) = 1;
        }
        FUN_0021e686(param_2,*(undefined4 *)(pcVar5 + 4));
        goto LAB_0021e920;
      }
LAB_0021e90e:
      *pcVar6 = '\0';
      pcVar5 = *(char **)(pcVar5 + 4);
    }
    if (pcVar6 == (char *)0x0) {
LAB_0021e8ca:
      *pcVar5 = '\0';
      pcVar5 = pcVar3;
      goto LAB_0021e912;
    }
    if (*pcVar6 == '\0') {
      *pcVar6 = '\x01';
      **(undefined1 **)(pcVar5 + 4) = 0;
      FUN_0021e6b8(param_2,*(undefined4 *)(pcVar5 + 4));
      pcVar3 = *(char **)(pcVar5 + 4);
      pcVar6 = *(char **)(pcVar3 + 8);
      if (pcVar6 == (char *)0x0) goto LAB_0021e8ca;
    }
    pcVar3 = *(char **)(pcVar6 + 0xc);
    if (((pcVar3 == (char *)0x0) || (*pcVar3 == '\x01')) &&
       ((*(char **)(pcVar6 + 8) == (char *)0x0 || (**(char **)(pcVar6 + 8) == '\x01'))))
    goto LAB_0021e90e;
    if ((*(char **)(pcVar6 + 8) == (char *)0x0) || (**(char **)(pcVar6 + 8) == '\x01')) {
      if (pcVar3 != (char *)0x0) {
        *pcVar3 = '\x01';
      }
      *pcVar6 = '\0';
      FUN_0021e686(param_2);
      pcVar6 = *(char **)(*(int *)(pcVar5 + 4) + 8);
      if (pcVar6 == (char *)0x0) goto LAB_0021e920;
    }
    *pcVar6 = **(char **)(pcVar5 + 4);
    **(undefined1 **)(pcVar5 + 4) = 1;
    if (*(undefined1 **)(pcVar6 + 8) != (undefined1 *)0x0) {
      **(undefined1 **)(pcVar6 + 8) = 1;
    }
    FUN_0021e6b8(param_2,*(undefined4 *)(pcVar5 + 4));
LAB_0021e920:
    *pcVar5 = '\x01';
  }
  *(undefined4 *)(pcVar7 + 0xc) = *(undefined4 *)(param_2 + 4);
  *(char **)(param_2 + 4) = pcVar7;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
LAB_0021e934:
  *local_20 = local_28;
  return;
}

