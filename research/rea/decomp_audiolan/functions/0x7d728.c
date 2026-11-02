// rea decompile_all
// name: FUN_0007d728
// address: 0x7d728
// body: available
// range: 0x7d728-0x7d8ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0007d728(int param_1,undefined *param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined4 local_20;
  
  local_20 = param_4;
  FUN_001a0700();
  uVar1 = FUN_001d8eb0(param_1 + 0x38,param_2);
  bVar4 = uVar1 == 0;
  if (bVar4) {
    uVar1 = (uint)*(ushort *)(param_1 + 0x3c);
  }
  if (!bVar4 || uVar1 != param_3) {
    iVar2 = FUN_000bc20c(param_2);
    if (iVar2 == 0) {
      if (param_2 == (undefined *)0x0) {
        param_2 = &DAT_0007d8dc;
      }
      FUN_000028a4(s_ERROR__OutgoingStream__Multicast_0007d8e0,param_2);
    }
    else if (param_3 < 1000) {
      FUN_000028a4(s_ERROR__OutgoingStream__Multicast_0007d8ac,param_3);
    }
    else {
      iVar2 = FUN_00041c14(*(undefined4 *)(param_1 + 0x28),&local_20);
      if (iVar2 == 0) {
        FUN_000028a4(s_ERROR__OutgoingStream__Could_NOT_0007d928);
      }
      else {
        iVar2 = FUN_00042a98(local_20,s_User_DestAddr_0007d918,param_2);
        if (iVar2 == 0) {
          FUN_000028a4(s_ERROR__OutgoingStream__Could_NOT_0007d968,s_User_DestAddr_0007d918);
        }
        iVar3 = FUN_00048f94(local_20,s_User_DestPort_0007d994,param_3);
        if (iVar3 == 0) {
          FUN_000028a4(s_ERROR__OutgoingStream__Could_NOT_0007d968,s_User_DestPort_0007d994);
          FUN_00041dd4(local_20);
        }
        else {
          FUN_00041dd4(local_20);
          if (iVar2 != 0) {
            FUN_001da458(param_1 + 0x38,param_2);
            *(short *)(param_1 + 0x3c) = (short)param_3;
            FUN_001a0d18(param_1);
            FUN_000bdd20(*(undefined4 *)(param_1 + 0x24),param_1,4);
            return 1;
          }
        }
      }
    }
    FUN_001a0d18(param_1);
    return 0;
  }
  FUN_001a0d18(param_1);
  return 1;
}

