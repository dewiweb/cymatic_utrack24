// rea decompile_all
// name: FUN_0011e434
// address: 0x11e434
// body: available
// range: 0x11e434-0x11e78f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0011e434(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_000f4e84();
  uVar1 = FUN_000f4fc0();
  iVar2 = FUN_0009dc24(param_1,param_2);
  if (iVar2 != 0) {
    return 0;
  }
  if (param_2 == DAT_0011e790) {
    iVar2 = param_1[0x32];
    if (iVar2 == 1) {
      FUN_001a48f0(param_1,0x36,0);
      FUN_001a48f0(param_1,4,0);
      FUN_00094444(uVar1,1);
      return 0;
    }
    if (iVar2 == 2) {
      *(bool *)((int)param_1 + 0xd2) = *(char *)((int)param_1 + 0xd2) == '\0';
      if (*(char *)((int)param_1 + 0xd3) == '\0') {
        FUN_00178f04();
        iVar2 = FUN_001bf388();
        if (iVar2 == 0) {
          uVar1 = FUN_0011eda0();
          FUN_0011ff88(uVar1,s_No_Drive_Connected_0011e798,&DAT_0011e794);
          uVar1 = FUN_0011eda0();
          FUN_000a1000(uVar1,0x1c);
          FUN_001d0130(2000);
          (**(code **)(*param_1 + 0x50))(param_1);
          *(undefined1 *)((int)param_1 + 0xd2) = 0;
          return 1;
        }
        *(undefined1 *)((int)param_1 + 0xd3) = 1;
        *(undefined1 *)((int)param_1 + 0xd2) = 1;
        *(undefined1 *)(param_1 + 0x35) = 0;
        uVar1 = FUN_0011eda0();
        FUN_0011fe74(uVar1,s_Format_USB_Drive__0011e7b4,&DAT_0011e7b0,(char)param_1[0x35],
                     &DAT_0011e7ac,0);
        uVar1 = FUN_0011eda0();
        FUN_000a1000(uVar1,0x1b);
      }
      else {
        if ((char)param_1[0x35] != '\0') {
          FUN_000bdd08(param_1 + 6);
          FUN_00129534(param_1 + 0x37,0);
          FUN_00095224(uVar1,1);
          iVar2 = FUN_000bb678(param_1 + 6);
          if (iVar2 == 1) {
            FUN_001293ac(param_1 + 0x37);
            FUN_00095224(uVar1,3);
            uVar3 = FUN_0011eda0();
            FUN_0011ff88(uVar3,s_Format_Drive_Succeeded_0011e7c8,&DAT_0011e794);
            uVar3 = FUN_0011eda0();
            FUN_000a1000(uVar3,0x1c);
            FUN_00093a74(uVar1,0);
            FUN_001a48f0(param_1,0x20,0);
            iVar2 = FUN_000bc47c(param_1 + 6);
            if (iVar2 != 0) {
              FUN_000aa570();
              uVar1 = FUN_000aa88c();
              FUN_0008d25c(uVar1);
            }
          }
          else {
            FUN_001293ac(param_1 + 0x37);
            FUN_00095224(uVar1,2);
            uVar1 = FUN_0011eda0();
            FUN_0011ff88(uVar1,s_Format_Drive_Failed_0011e7e0,&DAT_0011e794);
            uVar1 = FUN_0011eda0();
            FUN_000a1000(uVar1,0x1c);
          }
          FUN_001d0130(2000);
          FUN_001a48f0(param_1,0x36,0);
        }
        *(undefined1 *)((int)param_1 + 0xd3) = 0;
        (**(code **)(*param_1 + 0x50))(param_1);
      }
      return 1;
    }
    if (iVar2 == 3) {
      FUN_001a48f0(param_1,0x1d,0);
      return 1;
    }
    if (iVar2 == 4) {
      FUN_001a48f0(param_1,0x1b,0);
      return 1;
    }
  }
  if ((param_2 == 0x192) &&
     ((*(char *)((int)param_1 + 0xd3) != '\0' || (*(char *)((int)param_1 + 0xd2) != '\0')))) {
    (**(code **)(*(int *)param_1[0x31] + 0x2c))((int *)param_1[0x31],10);
    (**(code **)(*param_1 + 0x80))(param_1);
    *(undefined1 *)((int)param_1 + 0xd2) = 0;
    *(undefined1 *)((int)param_1 + 0xd3) = 0;
    (**(code **)(*param_1 + 0x50))(param_1);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

