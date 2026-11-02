// rea decompile_all
// name: FUN_000d22c4
// address: 0xd22c4
// body: available
// range: 0xd22c4-0xd2577 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000d22c4(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_30;
  int iStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  
  local_30 = param_1;
  iStack_2c = param_2;
  uStack_28 = param_3;
  uStack_24 = param_4;
  FUN_000f4e84();
  uVar1 = FUN_000f4fb4();
  if (param_2 == 0x10) {
    uVar1 = 1;
    *(undefined1 *)(param_1 + 0xb8) = 1;
  }
  else if (param_2 == 0x2e) {
    uVar1 = 1;
    *(undefined1 *)(param_1 + 0xe5) = 1;
  }
  else if (param_2 == 0x2d) {
    FUN_000d17f8(param_1,param_3);
    FUN_001a48f0(param_1,0x49,0);
    uVar1 = 1;
  }
  else {
    if (param_2 == 0x4e) {
      FUN_00176c04(&local_30);
      FUN_00176bf4(&local_30,param_3);
      piVar2 = (int *)FUN_000f8ee0();
      (**(code **)(*piVar2 + 0x80))(piVar2,&local_30);
      *(undefined1 *)(param_1 + 0xe4) = 1;
      FUN_00176c4c(&local_30);
    }
    if (param_2 == 9) {
      if (param_3 < 3) {
        *(undefined1 *)(param_1 + 0x280 + param_3) = 1;
      }
      if (*(char *)(param_1 + 0x283) == '\0') {
        return 1;
      }
      for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
        iVar3 = FUN_0006d8f8(uVar1,iVar4);
        if ((iVar3 != 0) && (*(char *)(param_1 + 0x280 + iVar4) == '\0')) {
          return 1;
        }
      }
      *(undefined1 *)(param_1 + 0x283) = 0;
      FUN_000d2c78(param_1);
      *(undefined1 *)(param_1 + 0x284) = 0;
    }
    if (param_2 == 0x2c) {
      FUN_0013f9a8(param_1 + 0xe8,1);
    }
    if (param_2 == 0x15) {
      FUN_00081050(*DAT_000d258c,s_Next_Take_prepared_000d2578);
      iVar4 = FUN_0006d818(uVar1);
      if (iVar4 == 1) {
        *(undefined1 *)(param_1 + 0x283) = 1;
        FUN_001a48f0(param_1,9,0xffffffff);
      }
      else {
        iVar4 = FUN_000bc47c(param_1 + 0x14);
        if (iVar4 == 0) {
          FUN_000c01cc(param_1 + 0x14);
          *(undefined1 *)(param_1 + 0xe4) = 1;
        }
        else {
          FUN_000aa570();
          uVar1 = FUN_000aa88c();
          FUN_0008cebc(uVar1,1);
        }
      }
      uVar1 = 1;
    }
    else if (param_2 == 0x4a) {
      (**(code **)(**(int **)(param_1 + 0x70) + 0x14))(*(int **)(param_1 + 0x70),0xcf,3,0);
      FUN_000d2bd8(param_1,param_3);
      uVar1 = 1;
    }
    else if (param_2 == 0x3f) {
      FUN_000d34d0(param_1,param_3);
      uVar1 = 1;
    }
    else {
      if (param_2 == 0x13) {
        FUN_000bc068(param_1 + 0x14,1);
      }
      if (param_2 == 0x14) {
        FUN_000bc068(param_1 + 0x14,0);
      }
      if (param_2 == 0x30) {
        local_30 = 0;
        (**(code **)(**(int **)(param_1 + 0x90) + 0x24))
                  (*(int **)(param_1 + 0x90),0x29,0,DAT_000d2590);
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}

