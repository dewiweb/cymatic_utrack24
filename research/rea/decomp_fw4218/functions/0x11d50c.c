// rea decompile_all
// name: FUN_0011d50c
// address: 0x11d50c
// body: available
// range: 0x11d50c-0x11d7ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0011d50c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_000f4e84();
  uVar1 = FUN_000f4fc0();
  FUN_000bf8ec(param_1 + 0x14);
  (**(code **)(**(int **)(param_1 + 0xa4) + 0x24))(*(int **)(param_1 + 0xa4),0,0,DAT_0011d7ac,0);
  *(undefined4 *)(param_1 + 0x9c) = 0;
  if (*(char *)(DAT_0011d7b0 + 0x89) == '\0') {
    uVar1 = FUN_0011cde8(param_1,0x11);
  }
  else {
    iVar2 = (**(code **)(**(int **)(param_1 + 8) + 8))();
    if ((iVar2 != 0) && (*(char *)(param_1 + 0x98) != '\0')) {
      uVar3 = FUN_0011eda0();
      FUN_0011ff88(uVar3,s_Pre_Loading_Song_0011d7b8,&DAT_0011d7b4);
      uVar3 = FUN_0011eda0();
      FUN_000a1000(uVar3,0x1c);
      FUN_00093c78(uVar1,4);
    }
    if (*(int *)(DAT_0011d7b0 + 0x84) == 0) {
      iVar2 = FUN_001b5844(uVar1);
      if (((iVar2 != 0) && (iVar2 = (**(code **)(**(int **)(param_1 + 8) + 8))(), iVar2 != 0)) &&
         (*(char *)(param_1 + 0x98) == '\0')) {
        FUN_00085cbc(param_1 + 0x14,0x66);
      }
      iVar2 = FUN_001b5ac4(uVar1);
      if ((iVar2 == 1) && (*DAT_0011d7cc == 0)) {
        uVar1 = FUN_0011ca94(param_1);
      }
      else {
        *DAT_0011d7d0 = 0;
        *DAT_0011d7d4 = 0;
        iVar2 = FUN_000bfdd4(param_1 + 0x14,DAT_0011d7d8);
        if (iVar2 == 0) {
          FUN_000bb774(param_1 + 0x14,DAT_0011d7dc + -0x10);
          iVar2 = FUN_000bfdd4(param_1 + 0x14,DAT_0011d7d8);
          if (iVar2 == 0) {
            uVar1 = FUN_0011cde8(param_1,0x12);
            return uVar1;
          }
        }
        FUN_00093300(uVar1,2);
        (**(code **)(**(int **)(param_1 + 0x70) + 0x14))(*(int **)(param_1 + 0x70),0xcd,3,0);
        uVar1 = FUN_000bd790(param_1 + 0x14,*(undefined4 *)(DAT_0011d7b0 + 0x1c));
        iVar2 = FUN_000bfe7c(param_1 + 0x14,uVar1);
        uVar1 = FUN_00084450(param_1 + 0x14);
        if (iVar2 == 0) {
          *(undefined1 *)(param_1 + 0xa0) = 1;
          uVar1 = (**(code **)(**(int **)(param_1 + 0xa4) + 0x24))
                            (*(int **)(param_1 + 0xa4),0,0,DAT_0011d7e0,0);
        }
        else if (iVar2 == 1) {
          FUN_001d0130(500);
          uVar1 = 0;
          if (*DAT_0011d7e4 != '\0') {
            uVar1 = FUN_0011d0f8(param_1);
          }
        }
        else if (iVar2 == 2) {
          uVar1 = FUN_0011cde8(param_1,0x18);
        }
      }
    }
    else {
      uVar1 = FUN_0011cde8(param_1,*(undefined4 *)(DAT_0011d7b0 + 0x84));
    }
  }
  return uVar1;
}

