// rea decompile_all
// name: FUN_000c8718
// address: 0xc8718
// body: available
// range: 0xc8718-0xc890f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_000c8718(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 unaff_r6;
  
  *(undefined1 *)(param_2 + 0x10) = 9;
  *(undefined1 *)(param_2 + 0x18) = 1;
  *(undefined4 *)(param_2 + 0x1c) = 4;
  *(undefined4 *)(param_2 + 0x14) = 8;
  *(undefined1 *)(param_2 + 4) = 2;
  iVar1 = FUN_001bab30(param_1 + 0x3d);
  uVar3 = DAT_000c891c;
  uVar2 = DAT_000c8910;
  if ((iVar1 == 0) || (iVar1 == 1)) {
    iVar1 = (**(code **)(*param_1 + 0xf0))
                      (param_1,param_2,0x96,DAT_000c8918,DAT_000c8914,param_1 + 0x5c);
    uVar3 = uVar2;
    if (iVar1 == 0) {
      return false;
    }
  }
  else if (iVar1 == 2) {
    iVar1 = (**(code **)(*param_1 + 0xf0))
                      (param_1,param_2,0x96,DAT_000c8918,DAT_000c8914,param_1 + 0x5c);
    uVar3 = uVar2;
    if (iVar1 == 0) {
      return false;
    }
  }
  else {
    if (iVar1 != 3) {
      return false;
    }
    iVar1 = (**(code **)(*param_1 + 0xf0))
                      (param_1,param_2,0x96,DAT_000c8920,DAT_000c8914,param_1 + 0x5c);
    if (iVar1 == 0) {
      return false;
    }
  }
  iVar1 = FUN_001bab30(param_1 + 0x3d);
  uVar2 = DAT_000c8924;
  if ((((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 2)) && (uVar2 = unaff_r6, iVar1 == 3)) {
    uVar2 = DAT_000c8928;
  }
  iVar1 = FUN_000c8e78(param_1,param_2,uVar3);
  if (iVar1 != 0) {
    FUN_000eaa80(param_1[0x2b],uVar2);
    uVar2 = FUN_0004b608(uVar2);
    uVar3 = FUN_000d65d8(param_1);
    FUN_0013a368(uVar3,uVar2);
  }
  return iVar1 != 0;
}

