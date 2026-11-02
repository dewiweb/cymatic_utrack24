// rea decompile_all
// name: FUN_0009e0ec
// address: 0x9e0ec
// body: available
// range: 0x9e0ec-0x9e3f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0009e0ec(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar7 = param_3;
  FUN_000f4e84();
  uVar1 = FUN_000f4fc0();
  if (param_2 == 0x12) {
    if (*DAT_0009e3f4 == '\0') {
      FUN_000944a4(uVar1);
      uVar2 = FUN_001b598c(uVar1);
      uVar5 = FUN_000bd680(param_1 + 0x14);
      uVar6 = FUN_0011eda0();
      FUN_0011fa48(uVar6,uVar5,1,uVar2);
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x9c) + 0x2c))(*(int **)(param_1 + 0x9c),0x12);
    }
  }
  if (param_2 == 0x1b) {
    uVar1 = 1;
    *(undefined1 *)(param_1 + 0xa1) = 1;
  }
  else {
    if (param_2 == 0x1d) {
      FUN_000dc1dc(*DAT_0009e3f8);
    }
    if (param_2 == 0x1e) {
      FUN_000f4e84();
      uVar2 = FUN_000f4fb4();
      iVar3 = FUN_001b2780(uVar2);
      if (iVar3 == 0) {
        FUN_0006de64(uVar2);
      }
      else {
        FUN_0006de5c(uVar2,0);
        (**(code **)(**(int **)(param_1 + 0x9c) + 0x2c))(*(int **)(param_1 + 0x9c),0x1e);
        iVar4 = FUN_001b5844(uVar1);
        if (iVar4 == 0) {
          uVar5 = FUN_001b27a4(uVar2);
          uVar6 = FUN_0011eda0();
          FUN_0011f310(uVar6,&DAT_0009e3fc,uVar5,1);
        }
      }
      iVar4 = (**(code **)(**(int **)(param_1 + 8) + 8))();
      if (iVar4 != 0) {
        iVar4 = FUN_0006d818(uVar2);
        if (iVar4 == 1) {
          uVar5 = FUN_001b27a4(uVar2);
          uVar6 = FUN_0011eda0();
          FUN_0011f628(uVar6,0x71,uVar5);
          if ((iVar3 == 0) && (iVar3 = FUN_001b5844(uVar1), iVar3 == 0)) {
            uVar2 = FUN_001b27a4(uVar2);
            uVar5 = FUN_0011eda0();
            FUN_0011f310(uVar5,s_Slave_Missing_0009e400,uVar2,1,iVar7,uVar5);
          }
        }
        else if (((iVar4 == 2) && (iVar7 = FUN_0006db64(uVar2), 0 < iVar7)) && (iVar7 < 4)) {
          uVar5 = FUN_001b27a4(uVar2);
          uVar6 = FUN_0011eda0();
          FUN_0011f628(uVar6,iVar7 + 0x71,uVar5);
          if ((iVar3 == 0) && (iVar7 = FUN_001b5844(uVar1), iVar7 == 0)) {
            uVar2 = FUN_001b27a4(uVar2);
            uVar5 = FUN_0011eda0();
            FUN_0011f310(uVar5,s_No_Master_0009e410,uVar2,1,uVar5);
          }
        }
      }
    }
    if (param_2 == 0x2a) {
      if (*(int *)(DAT_0009e41c + 0x4c) == 0) {
        *(undefined1 *)(param_1 + 0xa2) = 0;
      }
      else {
        *(bool *)(param_1 + 0xa2) = *(char *)(param_1 + 0xa2) == '\0';
        if (*DAT_0009e420 == '\0') {
          *(undefined1 *)(param_1 + 0xa2) = 0;
        }
        else {
          *DAT_0009e420 = '\0';
        }
        iVar7 = FUN_001b5844(uVar1);
        if ((iVar7 == 0) || (param_3 != 0)) {
          uVar1 = 0;
        }
        else {
          uVar1 = 1;
        }
        uVar2 = FUN_0011eda0();
        FUN_0011ef70(uVar2,*(undefined1 *)(param_1 + 0xa2),uVar1);
      }
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

