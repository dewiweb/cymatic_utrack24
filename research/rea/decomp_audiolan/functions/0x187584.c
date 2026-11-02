// rea decompile_all
// name: FUN_00187584
// address: 0x187584
// body: available
// range: 0x187584-0x18775f inclusive
// range: 0x187762-0x18781d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00187584(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0xa8) != -1) {
    *(undefined4 *)(param_1 + 0xa8) = 1;
    FUN_00179b24(param_1);
    FUN_00187faa(param_1);
    if (*(int *)(param_1 + 0x84) != 0) {
      if ((code *)*DAT_00187820 == entry) {
        FUN_0018a280();
      }
      else {
        (*(code *)*DAT_00187820)();
      }
    }
    iVar2 = *(int *)(param_1 + 0x8c);
    while (iVar2 != 0) {
      if (*(int *)(iVar2 + 0x20) == 0) {
        iVar2 = *(int *)(iVar2 + 0x1c);
        *(int *)(param_1 + 0x8c) = iVar2;
        if (iVar2 != 0) {
          *(undefined4 *)(iVar2 + 0x20) = 0;
        }
      }
      else {
        *(undefined4 *)(*(int *)(iVar2 + 0x20) + 0x1c) = *(undefined4 *)(iVar2 + 0x1c);
        if (*(int *)(iVar2 + 0x1c) != 0) {
          *(undefined4 *)(*(int *)(iVar2 + 0x1c) + 0x20) = *(undefined4 *)(iVar2 + 0x20);
        }
        *(undefined4 *)(iVar2 + 0x1c) = 0;
        *(undefined4 *)(iVar2 + 0x20) = 0;
      }
      FUN_00172050(param_1);
      iVar2 = *(int *)(param_1 + 0x8c);
    }
    iVar2 = *(int *)(param_1 + 0x90);
    while (iVar2 != 0) {
      if (*(int *)(iVar2 + 0x24) == 0) {
        iVar2 = *(int *)(iVar2 + 0x20);
        *(int *)(param_1 + 0x90) = iVar2;
        if (iVar2 != 0) {
          *(undefined4 *)(iVar2 + 0x24) = 0;
        }
      }
      else {
        *(undefined4 *)(*(int *)(iVar2 + 0x24) + 0x20) = *(undefined4 *)(iVar2 + 0x20);
        if (*(int *)(iVar2 + 0x20) != 0) {
          *(undefined4 *)(*(int *)(iVar2 + 0x20) + 0x24) = *(undefined4 *)(iVar2 + 0x24);
        }
        *(undefined4 *)(iVar2 + 0x20) = 0;
        *(undefined4 *)(iVar2 + 0x24) = 0;
      }
      FUN_0017952c(param_1);
      iVar2 = *(int *)(param_1 + 0x90);
    }
    iVar2 = *(int *)(param_1 + 0x94);
    while (iVar2 != 0) {
      if (*(int *)(iVar2 + 0x24) == 0) {
        iVar2 = *(int *)(iVar2 + 0x20);
        *(int *)(param_1 + 0x94) = iVar2;
        if (iVar2 != 0) {
          *(undefined4 *)(iVar2 + 0x24) = 0;
        }
      }
      else {
        *(undefined4 *)(*(int *)(iVar2 + 0x24) + 0x20) = *(undefined4 *)(iVar2 + 0x20);
        if (*(int *)(iVar2 + 0x20) != 0) {
          *(undefined4 *)(*(int *)(iVar2 + 0x20) + 0x24) = *(undefined4 *)(iVar2 + 0x24);
        }
        *(undefined4 *)(iVar2 + 0x20) = 0;
        *(undefined4 *)(iVar2 + 0x24) = 0;
      }
      FUN_00175c88(param_1);
      iVar2 = *(int *)(param_1 + 0x94);
    }
    iVar2 = *(int *)(param_1 + 0x88);
    while (iVar2 != 0) {
      if (*(int *)(iVar2 + 0x58) == 0) {
        iVar2 = *(int *)(iVar2 + 0x54);
        *(int *)(param_1 + 0x88) = iVar2;
        if (iVar2 != 0) {
          *(undefined4 *)(iVar2 + 0x58) = 0;
        }
      }
      else {
        *(undefined4 *)(*(int *)(iVar2 + 0x58) + 0x54) = *(undefined4 *)(iVar2 + 0x54);
        if (*(int *)(iVar2 + 0x54) != 0) {
          *(undefined4 *)(*(int *)(iVar2 + 0x54) + 0x58) = *(undefined4 *)(iVar2 + 0x58);
        }
        *(undefined4 *)(iVar2 + 0x54) = 0;
        *(undefined4 *)(iVar2 + 0x58) = 0;
      }
      FUN_001776d4(param_1);
      iVar2 = *(int *)(param_1 + 0x88);
    }
    iVar1 = param_1 + 0x9c;
    iVar2 = *(int *)(param_1 + 0x98);
    while (iVar2 != 0) {
      if (*(int *)(iVar2 + 0x154) == 0) {
        iVar2 = *(int *)(iVar2 + 0x150);
        *(int *)(param_1 + 0x98) = iVar2;
        if (iVar2 != 0) goto LAB_0018769c;
      }
      else {
        *(undefined4 *)(*(int *)(iVar2 + 0x154) + 0x150) = *(undefined4 *)(iVar2 + 0x150);
        if (*(int *)(iVar2 + 0x150) != 0) {
          *(undefined4 *)(*(int *)(iVar2 + 0x150) + 0x154) = *(undefined4 *)(iVar2 + 0x154);
        }
        *(undefined4 *)(iVar2 + 0x150) = 0;
LAB_0018769c:
        *(undefined4 *)(iVar2 + 0x154) = 0;
      }
      FUN_00177268(param_1);
      iVar2 = *(int *)(param_1 + 0x98);
    }
    while (iVar2 = FUN_001a4bc4(iVar1,0), iVar2 == 0) {
      iVar2 = FUN_001a4bdc(iVar1,0);
      FUN_001a4cbc(iVar1,0);
      FUN_00173680(iVar2);
      FUN_00173bae(*(undefined4 *)(iVar2 + 0x2b48));
      *(undefined4 *)(iVar2 + 0x2b48) = 0;
      FUN_001a7396(iVar2);
    }
    FUN_00175be8(*(int *)(param_1 + 0xa4) + 0x20);
    FUN_00175be8(*(int *)(param_1 + 0xa4) + 0x30);
    FUN_00175be8(*(int *)(param_1 + 0xa4) + 0x28);
    FUN_00175be8(*(int *)(param_1 + 0xa4) + 0x38);
    FUN_001a6d78(*(undefined4 *)(param_1 + 0xa4));
    iVar2 = FUN_001a3e96(*(undefined4 *)(param_1 + 0xac));
    while (iVar2 != 0) {
      FUN_001870e4();
      iVar2 = FUN_001a3e96(*(undefined4 *)(param_1 + 0xac));
    }
    FUN_001a3e64(*(undefined4 *)(param_1 + 0xac));
    iVar2 = *(int *)(param_1 + 0xb0);
    while (iVar2 != 0) {
      if (*(int *)(iVar2 + 0xfc) == 0) {
        iVar1 = *(int *)(iVar2 + 0x100);
        *(int *)(param_1 + 0xb0) = iVar1;
        if (iVar1 != 0) {
          *(undefined4 *)(iVar1 + 0xfc) = 0;
        }
      }
      else {
        piVar3 = (int *)(iVar2 + 0x100);
        *(int *)(*(int *)(iVar2 + 0xfc) + 0x100) = *piVar3;
        if (*piVar3 != 0) {
          *(undefined4 *)(*piVar3 + 0xfc) = *(undefined4 *)(iVar2 + 0xfc);
        }
        *piVar3 = 0;
        *(undefined4 *)(iVar2 + 0xfc) = 0;
      }
      if (iVar2 != 0) {
        if ((code *)*DAT_00187820 == entry) {
          FUN_0018a280();
        }
        else {
          (*(code *)*DAT_00187820)();
        }
      }
      iVar2 = *(int *)(param_1 + 0xb0);
    }
    iVar2 = 0;
    do {
      pcVar4 = (char *)(iVar2 * 0x8c + param_1 + DAT_00187824);
      if (*pcVar4 != '\0') {
        FUN_001a8fa4(*(undefined4 *)(pcVar4 + 0x40));
        FUN_000038a0(pcVar4,0x8c);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 100);
    if (*(code **)(param_1 + 0x3c) != entry) {
      (**(code **)(param_1 + 0x3c))(param_1);
    }
    FUN_000038a0(param_1,DAT_00187828);
    *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
  }
  return;
}

