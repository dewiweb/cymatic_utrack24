// rea decompile_all
// name: FUN_001bbb14
// address: 0x1bbb14
// body: available
// range: 0x1bbb14-0x1bbb7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001bbb14(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_2 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    iVar2 = FUN_0016deb0(param_2,DAT_001bbb84,DAT_001bbb80,0xffffffff);
    if (iVar2 == 0) {
      FUN_0008b6a4(param_1,0);
      return 0;
    }
  }
  if (param_2 == 0) {
    if (*(int *)(param_1 + 4) != 0) {
      iVar2 = FUN_0008cf78();
      uVar1 = DAT_0008b7d8;
      puVar3 = *(undefined4 **)(param_1 + 4);
      FUN_001a0700(DAT_0008b7d8);
      if (*(char *)(puVar3 + 2) == '\0') {
        (**(code **)(**(int **)(iVar2 + 0x1c) + 8))(*(int **)(iVar2 + 0x1c),puVar3);
      }
      else {
        iVar2 = puVar3[1];
        puVar3[1] = iVar2 + -1;
        if (iVar2 + -1 == 0) {
          (**(code **)(*(int *)*puVar3 + 0xc))();
        }
      }
      FUN_001a0d18(uVar1);
    }
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    if (param_3 == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 4) != 0) {
      iVar2 = FUN_0008cf78();
      uVar1 = DAT_0008b7d8;
      puVar3 = *(undefined4 **)(param_1 + 4);
      FUN_001a0700(DAT_0008b7d8);
      if (*(char *)(puVar3 + 2) == '\0') {
        (**(code **)(**(int **)(iVar2 + 0x1c) + 8))(*(int **)(iVar2 + 0x1c),puVar3);
      }
      else {
        iVar2 = puVar3[1];
        puVar3[1] = iVar2 + -1;
        if (iVar2 + -1 == 0) {
          (**(code **)(*(int *)*puVar3 + 0xc))();
        }
      }
      FUN_001a0d18(uVar1);
    }
    *(int *)(param_1 + 8) = param_2;
    *(int *)(param_1 + 4) = param_3;
    iVar2 = FUN_0008cf78();
    uVar1 = DAT_0008b7d8;
    puVar3 = *(undefined4 **)(param_1 + 4);
    FUN_001a0700(DAT_0008b7d8);
    if (*(char *)(puVar3 + 2) == '\0') {
      (**(code **)(**(int **)(iVar2 + 0x1c) + 4))(*(int **)(iVar2 + 0x1c),puVar3);
    }
    else {
      iVar2 = puVar3[1];
      puVar3[1] = iVar2 + 1;
      if (iVar2 + 1 == 1) {
        (**(code **)(*(int *)*puVar3 + 8))();
      }
    }
    FUN_001a0d18(uVar1);
  }
  return 1;
}

