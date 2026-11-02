// rea decompile_all
// name: FUN_001e9a9c
// address: 0x1e9a9c
// body: available
// range: 0x1e9a9c-0x1e9bcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001e9a9c(int param_1,int param_2,int param_3,int param_4,uint param_5,undefined1 param_6,
                 int param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((param_3 == -2) && (param_7 != 2)) {
    FUN_0002a1c6(0,DAT_001e9bd0,0xfffffffe,param_7);
    return;
  }
  if (param_3 == -4) {
    if (param_7 != 3) {
      FUN_0002a1c6(0,DAT_001e9bd4,0xfffffffc,param_7);
      return;
    }
  }
  else if ((param_3 == 0) && ((param_7 == 3 || (param_7 == 2)))) {
    FUN_0002a1c6(0,DAT_001e9be0,0,param_7);
    return;
  }
  uVar2 = FUN_00006604(DAT_001e9bdc,*DAT_001e9bd8);
  if (((param_5 <= uVar2) && (uVar2 = param_5, param_5 == 0)) &&
     ((param_4 == 1 || ((param_4 == 0x1c || (uVar2 = DAT_001e9be4, param_4 == 0x21)))))) {
    uVar2 = 0x78;
  }
  *(undefined1 *)(param_1 + 4) = param_6;
  *(int *)(param_1 + 0x1c) = param_3;
  *(int *)(param_1 + 0x20) = param_1 + 0x158;
  *(short *)(param_1 + 6) = (short)param_4;
  *(undefined2 *)(param_1 + 8) = 1;
  *(uint *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_2 == 0) {
    *(undefined2 **)(param_1 + 0x24) = (undefined2 *)(param_1 + 600);
    *(undefined2 *)(param_1 + 600) = 0x108;
  }
  else {
    *(int *)(param_1 + 0x24) = param_2;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  uVar3 = DAT_001e9be8;
  *(undefined4 *)(param_1 + 0x3c) = param_8;
  *(undefined4 *)(param_1 + 0x40) = param_9;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  FUN_000039e0(param_1 + 0x47,uVar3,0x14);
  iVar1 = DAT_001e9bec;
  uVar3 = *(undefined4 *)(DAT_001e9bec + 0x24);
  uVar4 = *(undefined4 *)(DAT_001e9bec + 0x28);
  uVar5 = *(undefined4 *)(DAT_001e9bec + 0x2c);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(DAT_001e9bec + 0x20);
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  *(undefined4 *)(param_1 + 100) = uVar4;
  *(undefined4 *)(param_1 + 0x68) = uVar5;
  uVar3 = *(undefined4 *)(iVar1 + 0x30);
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  *(char *)(param_1 + 0x78) = (char)param_7;
  *(undefined1 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  iVar1 = DAT_001e9bec;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined2 *)(param_1 + 0xe8) = *(undefined2 *)(iVar1 + 2);
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined2 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined2 *)(param_1 + 0x146) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined2 *)(param_1 + 0x148) = 0;
  FUN_001e58ac(param_1 + 0xf8,0x3c);
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined1 *)(param_1 + 0x138) = 0;
  *(undefined1 *)(param_1 + 0x158) = 0;
  return;
}

