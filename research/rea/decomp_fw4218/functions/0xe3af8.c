// rea decompile_all
// name: FUN_000e3af8
// address: 0xe3af8
// body: available
// range: 0xe3af8-0xe40bb inclusive
// range: 0xe4124-0xe4253 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000e3af8(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  FUN_000f4e84();
  uVar1 = FUN_000f4fc0();
  FUN_000f4e84();
  uVar2 = FUN_000f4fb4();
  iVar3 = FUN_0006d818(uVar2);
  switch(param_2 + -0x191) {
  case 0:
    break;
  case 1:
    FUN_0011eda0(param_2 + -0x191);
    iVar3 = FUN_000a0f48();
    if (iVar3 == 0x1b) {
      FUN_0011eda0();
      FUN_000a0fdc();
      uVar5 = 1;
    }
    break;
  case 2:
    iVar3 = FUN_000bc47c(param_1 + 5);
    if (iVar3 != 0) {
      uVar5 = 1;
    }
    break;
  case 3:
    iVar3 = FUN_000bc47c(param_1 + 5);
    if (iVar3 == 0) {
      iVar3 = FUN_00081914(param_1 + 5);
      if (iVar3 == 1) {
        iVar3 = (**(code **)(*(int *)param_1[2] + 8))();
        if (iVar3 == 0) {
          (**(code **)(param_1[5] + 0x18))(param_1 + 5);
        }
        else {
          FUN_000e724c(param_1);
          FUN_000835e4(param_1 + 5);
          FUN_000e7750(param_1);
          (**(code **)(param_1[5] + 0x1c))(param_1 + 5,0,1,1,1);
        }
      }
      *(undefined1 *)((int)param_1 + 0xaf) = 0;
      uVar5 = 1;
    }
    else {
      uVar5 = 1;
    }
    break;
  case 4:
    iVar3 = FUN_000bc47c(param_1 + 5);
    if (iVar3 == 0) {
      iVar3 = FUN_000815bc(param_1 + 5,0);
      if (iVar3 == 1) {
        iVar3 = (**(code **)(*(int *)param_1[2] + 8))();
        if (iVar3 == 0) {
          (**(code **)(param_1[5] + 0x18))(param_1 + 5);
        }
        else {
          FUN_000e724c(param_1);
          FUN_000835e4(param_1 + 5);
          FUN_000e7750(param_1);
          (**(code **)(param_1[5] + 0x1c))(param_1 + 5,0,1,1,1);
        }
        *(undefined1 *)((int)param_1 + 0xaf) = 0;
      }
      else {
        if (*(char *)((int)param_1 + 0xaf) != '\0') {
          return 1;
        }
        *(undefined1 *)((int)param_1 + 0xaf) = 1;
        FUN_000e7488(param_1,1);
      }
      uVar5 = 1;
    }
    else {
      uVar5 = 1;
    }
    break;
  case 5:
    break;
  case 6:
    iVar4 = FUN_000bc47c(param_1 + 5);
    if (iVar4 == 0) {
      if (iVar3 == 1) {
        iVar3 = FUN_001b2750(uVar2);
        if (iVar3 == 4) {
          iVar3 = FUN_000e2cf0(param_1);
          if (iVar3 == 0) {
            FUN_00002898(s_ERROR__All_the_clocks_are_not_re_000e40d0);
            FUN_000bdfe4(param_1 + 5);
            uVar1 = FUN_0011eda0();
            FUN_0011ff88(uVar1,s_Playback_error_000e410c,s_Clocks_not_ready__000e40f8);
            uVar1 = FUN_0011eda0();
            FUN_000a1000(uVar1,0x1c);
            FUN_001d0130(2000);
            uVar1 = FUN_0011eda0();
            FUN_000a0ec8(uVar1,5,0);
            return 1;
          }
          *(undefined1 *)((int)param_1 + 0xbf) = 0;
          iVar3 = FUN_000bc654(param_1 + 5,5);
          if ((iVar3 == 0) || (*DAT_000e411c == '\0')) {
            uVar1 = 0;
          }
          else {
            uVar1 = 1;
          }
          FUN_00084574(param_1 + 5,uVar1);
          FUN_001a48f0(param_1,0x46,0);
          param_1[0x32] = 0;
        }
        else {
          iVar3 = FUN_001b2750(uVar2);
          if (iVar3 != 3) {
            param_1[0x32] = 1;
            iVar3 = FUN_000bc654(param_1 + 5,0);
            if (iVar3 == 0) {
              (**(code **)(*(int *)param_1[0x1c] + 0x14))((int *)param_1[0x1c],0xce,1,0);
              (**(code **)(*(int *)param_1[0x1c] + 0x14))((int *)param_1[0x1c],0xcd,3,0);
              (**(code **)(*(int *)param_1[0x29] + 0x2c))((int *)param_1[0x29],0xe);
              (**(code **)(*(int *)param_1[0x29] + 0x2c))((int *)param_1[0x29],0x19);
              param_1[0x31] = DAT_000e4120;
              (**(code **)(*(int *)param_1[0x29] + 0x24))((int *)param_1[0x29],0x26,0,300,300);
            }
            else {
              *(undefined1 *)((int)param_1 + 0xbf) = 1;
              FUN_000e6a64(param_1);
            }
          }
        }
        uVar5 = 1;
      }
    }
    else {
      uVar5 = 1;
    }
    break;
  case 7:
    iVar4 = FUN_000bc47c(param_1 + 5);
    if ((iVar4 == 0) && (iVar4 = FUN_001b54c0(uVar1), iVar4 != 1)) {
      if (iVar3 == 1) {
        iVar3 = FUN_001b2750(uVar2);
        if ((iVar3 == 2) && (iVar3 = FUN_001b5b2c(uVar1), iVar3 != 0)) {
          *(undefined1 *)((int)param_1 + 0xbe) = 0;
          FUN_000e634c(param_1,1);
        }
        else {
          (**(code **)(*(int *)param_1[0x29] + 0x2c))((int *)param_1[0x29],0xe);
          (**(code **)(*(int *)param_1[0x29] + 0x2c))((int *)param_1[0x29],0x19);
          (**(code **)(*(int *)param_1[0x1c] + 0x14))((int *)param_1[0x1c],0xd0,1,0);
          (**(code **)(*(int *)param_1[0x1c] + 0x14))((int *)param_1[0x1c],0xcf,3,0);
          iVar3 = FUN_000bc654(param_1 + 5,0);
          if (iVar3 == 0) {
            param_1[0x31] = DAT_000e4120;
            (**(code **)(*(int *)param_1[0x29] + 0x24))((int *)param_1[0x29],0x27,0,300,300);
          }
          else {
            FUN_000e6f2c(param_1,1);
          }
        }
      }
      else {
        (**(code **)(*(int *)param_1[0x1c] + 0x14))((int *)param_1[0x1c],0xd0,1,0);
        (**(code **)(*(int *)param_1[0x1c] + 0x14))((int *)param_1[0x1c],0xcf,3,0);
        iVar3 = FUN_000e7608(param_1);
        if (iVar3 == 0) {
          FUN_00002898(_DAT_000e4254);
          uVar1 = FUN_0011eda0();
          FUN_0011ff88(uVar1,s_Recording_Error_000e4268,s___No_Disk_Space__000e4256 + 2);
          uVar1 = FUN_0011eda0();
          FUN_000a1000(uVar1,0x1c);
          FUN_001d0130(2000);
          uVar1 = FUN_0011eda0();
          FUN_000a0ec8(uVar1,5,0);
          FUN_00083e6c(param_1 + 5);
          return 1;
        }
        FUN_001a48f0(param_1,0x43,0);
      }
      uVar5 = 1;
    }
    else {
      uVar5 = 1;
    }
    break;
  case 8:
    iVar3 = FUN_000bc47c(param_1 + 5);
    if ((iVar3 == 0) || (iVar3 = (**(code **)(*(int *)param_1[2] + 8))(), iVar3 == 0)) {
      FUN_0011eda0();
      iVar3 = FUN_000a0f48();
      if (iVar3 == 0x1b) {
        FUN_0011eda0();
        iVar3 = FUN_0011f000();
        if (iVar3 == 3) {
          if ((char)param_1[0x2b] != '\0') {
            FUN_000aa570();
            uVar1 = FUN_000aa88c();
            iVar3 = FUN_0008b234(uVar1);
            if (iVar3 != 0) {
              uVar1 = FUN_0011eda0();
              FUN_0011ff88(uVar1,s_Setup_Failed__000e40c0,&DAT_000e40bc);
              uVar1 = FUN_0011eda0();
              FUN_000a1000(uVar1,0x1c);
              FUN_001d0130(2000);
            }
          }
          (**(code **)(*param_1 + 0x50))(param_1);
          uVar5 = 1;
        }
      }
    }
    else {
      uVar5 = 0;
    }
    break;
  default:
    FUN_00002898(s_TRACE__Key__d_is_not_utilized_000e4278,param_2);
  }
  return uVar5;
}

