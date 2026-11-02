// rea decompile_all
// name: FUN_000e3254
// address: 0xe3254
// body: available
// range: 0xe3254-0xe355f inclusive
// range: 0xe35c8-0xe39ab inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000e3254(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  FUN_00002898(s_TRACE__UIState_IdlePlayer__timer_000e3560,param_2,param_3);
  FUN_000f4e84();
  uVar1 = FUN_000f4fc0();
  FUN_000f4e84();
  uVar2 = FUN_000f4fb4();
  iVar3 = (**(code **)(**(int **)(param_1 + 8) + 8))();
  if (iVar3 != 0) {
    if (param_2 == 0xc) {
      iVar3 = FUN_0022e20c(*DAT_000e3598);
      if ((iVar3 != 0) && (*(int *)(DAT_000e359c + 0x54) != -1)) {
        FUN_000bb774(param_1 + 0x14,DAT_000e35a0 + -0x10);
        FUN_00085cdc(param_1 + 0x14);
        FUN_001a7f24(&local_30);
        FUN_00084d48(param_1 + 0x14);
        (**(code **)(*(int *)(param_1 + 0x14) + 8))
                  (param_1 + 0x14,*(undefined4 *)(DAT_000e359c + 0x40),
                   *(undefined4 *)(DAT_000e359c + 0x44),*(undefined4 *)(DAT_000e359c + 0x48),
                   local_30,local_2c,local_28,0,1);
      }
      if (*(char *)(param_1 + 0xad) != '\0') {
        *(undefined1 *)(param_1 + 0xad) = 0;
        FUN_000aa570();
        uVar1 = FUN_000aa88c();
        FUN_0008c334(uVar1,1);
      }
      return 1;
    }
    if (param_2 == 0xd) {
      FUN_000e4298(param_1,0);
      return 1;
    }
  }
  if (param_2 == 0x12) {
    if (*DAT_000e35a4 == '\0') {
      FUN_000944a4(uVar1);
      uVar1 = FUN_001b598c(uVar1);
      uVar5 = FUN_000bd680(param_1 + 0x14);
      uVar4 = FUN_0011eda0();
      FUN_0011fa48(uVar4,uVar5,1,uVar1);
    }
    else {
      (**(code **)(**(int **)(param_1 + 0xa4) + 0x2c))(*(int **)(param_1 + 0xa4),0x12);
    }
  }
  if (param_2 == 0x1e) {
    iVar3 = FUN_001b2780(uVar2);
    if (iVar3 == 0) {
      FUN_0006de64(uVar2);
    }
    else {
      FUN_0006de5c(uVar2,0);
      (**(code **)(**(int **)(param_1 + 0xa4) + 0x2c))(*(int **)(param_1 + 0xa4),0x1e);
      uVar1 = FUN_001b27a4(uVar2);
      uVar5 = FUN_0011eda0();
      FUN_0011f310(uVar5,&DAT_000e35a8,uVar1,1);
    }
    iVar6 = (**(code **)(**(int **)(param_1 + 8) + 8))();
    if (iVar6 != 0) {
      iVar6 = FUN_0006d818(uVar2);
      if (iVar6 == 1) {
        uVar1 = FUN_001b27a4(uVar2);
        local_28 = FUN_0011eda0();
        FUN_0011f628(local_28,0x71,uVar1);
        if (iVar3 == 0) {
          uVar1 = FUN_001b27a4(uVar2);
          local_28 = FUN_0011eda0();
          FUN_0011f310(local_28,s_Slave_Missing_000e35ac,uVar1,1);
        }
      }
      else if (iVar6 == 2) {
        iVar6 = FUN_0006db64(uVar2);
        if ((0 < iVar6) && (iVar6 < 4)) {
          local_28 = FUN_001b27a4(uVar2);
          local_2c = FUN_0011eda0();
          FUN_0011f628(local_2c,iVar6 + 0x71,local_28);
          if (iVar3 == 0) {
            local_28 = FUN_001b27a4(uVar2);
            local_2c = FUN_0011eda0();
            FUN_0011f310(local_2c,s_No_Master_000e35bc,local_28,1);
          }
        }
      }
      else {
        FUN_0011eda0();
        FUN_0011f900();
      }
    }
  }
  if (param_2 == 0x18) {
    FUN_000bfcb4(param_1 + 0x14);
  }
  if (param_2 == 0xe) {
    iVar3 = (**(code **)(**(int **)(param_1 + 8) + 8))();
    if (iVar3 != 0) {
      iVar3 = FUN_0006d818(uVar2);
      iVar6 = FUN_001b2780(uVar2);
      if ((iVar3 == 0) || ((iVar3 == 2 && (iVar6 == 0)))) {
        FUN_001a48f0(param_1,0x28,0);
      }
      else if (iVar3 == 1) {
        FUN_000e6f2c(param_1,0);
      }
    }
    uVar1 = 1;
  }
  else {
    if (param_2 == 0x1f) {
      FUN_000bf8ec(param_1 + 0x14);
      FUN_001a48f0(param_1,0x2b,0);
    }
    if (((param_2 == 0x19) && (iVar3 = FUN_0022e20c(*DAT_000e3598), iVar3 != 0)) &&
       (*(int *)(DAT_000e359c + 0x54) != -1)) {
      iVar3 = (**(code **)(**(int **)(param_1 + 8) + 8))();
      if (iVar3 != 0) {
        iVar3 = FUN_0006d818(uVar2);
        iVar6 = FUN_001b2780(uVar2);
        if ((iVar3 == 0) || ((iVar3 == 2 && (iVar6 == 0)))) {
          FUN_001a48f0(param_1,0x22,0);
        }
        else if (iVar3 == 1) {
          *(undefined1 *)(param_1 + 0xbf) = 0;
          FUN_000e6a64(param_1);
        }
      }
      uVar1 = 1;
    }
    else {
      if ((param_2 == 0x20) && (FUN_0006de3c(uVar2,1), *(char *)(param_1 + 0xc0) == '\0')) {
        *(undefined1 *)(param_1 + 0xc0) = 1;
      }
      if ((param_2 == 0x21) && (*(char *)(param_1 + 0xc0) == '\0')) {
        *(undefined1 *)(param_1 + 0xc0) = 1;
      }
      if (param_2 == 0x22) {
        (**(code **)(**(int **)(param_1 + 0x70) + 0x14))(*(int **)(param_1 + 0x70),0xce,1,0);
        (**(code **)(**(int **)(param_1 + 0x70) + 0x14))(*(int **)(param_1 + 0x70),0xcd,3,0);
        *DAT_000e39ac = *DAT_000e39ac + -1;
        iVar3 = FUN_000bc654(param_1 + 0x14,5);
        if ((iVar3 == 0) && (0 < *DAT_000e39ac)) {
          (**(code **)(**(int **)(param_1 + 0xa4) + 0x24))(*(int **)(param_1 + 0xa4),0x22,0,0xfa,0);
        }
        else {
          (**(code **)(**(int **)(param_1 + 0xa4) + 0x2c))(*(int **)(param_1 + 0xa4),0x22);
          FUN_00084574(param_1 + 0x14,0);
          FUN_001a48f0(param_1,0x46,0);
          *(undefined4 *)(param_1 + 200) = 0;
        }
      }
      if (param_2 == 0x24) {
        FUN_000bf8ec(param_1 + 0x14);
        FUN_001a48f0(param_1,0x2b,0);
      }
      if (param_2 == 0x25) {
        *DAT_000e39b0 = 1;
      }
      if (param_2 == 0x26) {
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + -300;
        if (*(int *)(param_1 + 0xc4) < 1) {
          *(undefined4 *)(param_1 + 0xc4) = 0;
          (**(code **)(**(int **)(param_1 + 0xa4) + 0x2c))(*(int **)(param_1 + 0xa4),0x26);
          *(undefined1 *)(param_1 + 0xbf) = 1;
          FUN_000e6a64(param_1);
        }
        else {
          iVar3 = FUN_000bc654(param_1 + 0x14,0);
          if (iVar3 != 0) {
            (**(code **)(**(int **)(param_1 + 0xa4) + 0x2c))(*(int **)(param_1 + 0xa4),0x26);
            *(undefined1 *)(param_1 + 0xbf) = 1;
            FUN_000e6a64(param_1);
          }
        }
      }
      if (param_2 == 0x27) {
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + -300;
        if (*(int *)(param_1 + 0xc4) < 1) {
          *(undefined4 *)(param_1 + 0xc4) = 0;
          FUN_000e6f2c(param_1,1);
        }
        else {
          iVar3 = FUN_000bc654(param_1 + 0x14,0);
          if (iVar3 != 0) {
            FUN_000e6f2c(param_1,1);
          }
        }
      }
      if (param_2 == 0x28) {
        if (*(int *)(param_1 + 0xb4) < *(int *)(param_1 + 0xb8)) {
          *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0xb8);
        }
        FUN_000e786c(param_1);
      }
      if (param_2 == 0x2b) {
        FUN_000e7658(param_1);
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}

