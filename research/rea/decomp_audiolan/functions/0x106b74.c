// rea decompile_all
// name: FUN_00106b74
// address: 0x106b74
// body: available
// range: 0x106b74-0x106d8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_00106b74(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13,undefined4 param_14,int param_15)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_15 != 0) {
    iVar1 = FUN_001d782c(param_1,param_3);
    uVar2 = DAT_00106d8c;
    if (iVar1 != 0) {
      FUN_0010f650(iVar1 + 0x20,param_5);
      *(undefined4 *)(iVar1 + 0x2c) = param_6;
      *(undefined4 *)(iVar1 + 0x30) = param_7;
      *(undefined4 *)(iVar1 + 0x34) = param_8;
      *(undefined4 *)(iVar1 + 0x48) = param_13;
      *(undefined4 *)(iVar1 + 0x44) = param_12;
      *(undefined4 *)(iVar1 + 0x40) = param_11;
      *(undefined4 *)(iVar1 + 0x38) = param_9;
      *(undefined4 *)(iVar1 + 0x3c) = param_10;
      FUN_0010e820(iVar1 + 0x4c,param_14);
      FUN_000fe4a8(iVar1,4);
      uVar2 = FUN_0017bfc0();
      *(undefined4 *)(iVar1 + 0x54) = uVar2;
      return 0;
    }
    FUN_00106474(param_1,param_2,param_3);
    return uVar2;
  }
  iVar1 = FUN_001d782c(param_1,param_4);
  if (iVar1 == 0) {
    FUN_00106474(param_1,param_2,param_3,1);
    return 1;
  }
  if (*param_1 < 0x400) {
    iVar3 = FUN_0016d7a4(0x68,DAT_00106d90);
    if (iVar3 != 0) {
      uVar2 = FUN_0017bfc0();
      iVar1 = FUN_000fe4e8(iVar3,param_2,param_3,param_3,iVar1,(*(byte *)(iVar1 + 0x58) & 0x1f) >> 4
                           ,uVar2);
      if (iVar1 != 0) {
        iVar1 = FUN_001bd0f0(param_1);
        if (iVar1 != 0) {
          FUN_0010f650(iVar1 + 0x20,param_5);
          *(undefined4 *)(iVar1 + 0x2c) = param_6;
          *(undefined4 *)(iVar1 + 0x30) = param_7;
          *(undefined4 *)(iVar1 + 0x48) = param_13;
          *(undefined4 *)(iVar1 + 0x44) = param_12;
          *(undefined4 *)(iVar1 + 0x40) = param_11;
          *(undefined4 *)(iVar1 + 0x34) = param_8;
          *(undefined4 *)(iVar1 + 0x38) = param_9;
          *(undefined4 *)(iVar1 + 0x3c) = param_10;
          FUN_0010e820(iVar1 + 0x4c,param_14);
          FUN_000fe4a8(iVar1,4);
          return 0;
        }
        uVar2 = 0x11;
        goto LAB_00106d58;
      }
    }
    uVar2 = 0x10;
  }
  else {
    uVar2 = 0x12;
  }
LAB_00106d58:
  FUN_00106474(param_1,param_2,param_3,uVar2);
  return uVar2;
}

