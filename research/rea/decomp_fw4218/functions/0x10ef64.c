// rea decompile_all
// name: FUN_0010ef64
// address: 0x10ef64
// body: available
// range: 0x10ef64-0x10f18b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0010ef64(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0009dc24(param_1,param_2,param_3,param_4,param_3,param_4);
  if (iVar1 == 0) {
    if (param_2 == DAT_0010f18c) {
      FUN_000aa570();
      uVar2 = FUN_000aa88c();
      if ((char)param_1[0x36] == '\0') {
        *(undefined1 *)(param_1 + 0x36) = 1;
        *(undefined1 *)((int)param_1 + 0xd9) = 0;
        if (param_1[0x39] == 0) {
          FUN_0008bf20(uVar2,3);
          param_1[0x39] = 1;
          uVar2 = FUN_0011eda0();
          FUN_0011fe74(uVar2,s_Waiting_for_Slave_s__0010f19c,&DAT_0010f198,
                       *(undefined1 *)((int)param_1 + 0xd9),s_Cancel_0010f190,0);
        }
        else {
          uVar2 = FUN_0011eda0();
          FUN_0011fe74(uVar2,s_Are_you_sure__0010f1b4,&DAT_0010f198,
                       *(undefined1 *)((int)param_1 + 0xd9),s_Cancel_0010f190,0);
        }
        uVar2 = FUN_0011eda0();
        FUN_000a1000(uVar2,0x1b);
      }
      else {
        *(undefined1 *)(param_1 + 0x36) = 0;
        if (param_1[0x39] == 2) {
          if (*(char *)((int)param_1 + 0xd9) != '\0') {
            FUN_0008af00(uVar2);
            FUN_001a48f0(param_1,10,0);
            FUN_000f4e84();
            uVar2 = FUN_000f4fb4();
            iVar1 = FUN_0006d818(uVar2);
            if (iVar1 != 0) {
              FUN_0006d824(uVar2,0);
            }
          }
          (**(code **)(*param_1 + 0x50))(param_1);
          return 1;
        }
        if ((*(char *)((int)param_1 + 0xd9) == '\0') || (param_1[0x37] < 1)) {
          FUN_0008c100(uVar2);
        }
        else {
          FUN_0008c28c(uVar2);
        }
        (**(code **)(*param_1 + 0x50))(param_1);
      }
      uVar2 = 1;
    }
    else if ((param_2 == 0x192) && ((char)param_1[0x36] != '\0')) {
      *(undefined1 *)(param_1 + 0x36) = 0;
      if (param_1[0x39] == 1) {
        FUN_000aa570();
        uVar2 = FUN_000aa88c();
        FUN_0008c100(uVar2);
        param_1[0x39] = 0;
      }
      (**(code **)(*param_1 + 0x50))(param_1);
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

