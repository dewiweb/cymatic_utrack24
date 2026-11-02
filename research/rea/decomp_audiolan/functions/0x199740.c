// rea decompile_all
// name: FUN_00199740
// address: 0x199740
// body: available
// range: 0x199740-0x1997c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_00199740(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(undefined4 *)(param_2 + 0x114) = param_5;
  puVar1 = DAT_001997c4;
  uVar3 = DAT_001997c4[1];
  uVar4 = DAT_001997c4[2];
  uVar5 = DAT_001997c4[3];
  *(undefined4 *)(param_2 + 0x118) = *DAT_001997c4;
  *(undefined4 *)(param_2 + 0x11c) = uVar3;
  *(undefined4 *)(param_2 + 0x120) = uVar4;
  *(undefined4 *)(param_2 + 0x124) = uVar5;
  *(undefined4 *)(param_2 + 0x128) = puVar1[4];
  *(undefined2 *)(param_2 + 0x230) = 0xc;
  *(undefined2 *)(param_2 + 0x232) = 1;
  *(undefined4 *)(param_2 + 0x234) = 1;
  *(undefined4 *)(param_2 + 0x23c) = param_6;
  *(undefined4 *)(param_2 + 0x238) = 0;
  *(undefined4 *)(param_2 + 0x240) = 0;
  *(undefined4 *)(param_2 + 0x244) = 0;
  *(undefined1 *)(param_2 + 0x24e) = 0;
  *(undefined1 *)(param_2 + 0x24f) = 0;
  *(undefined4 *)(param_2 + 0x248) = 0;
  *(undefined1 *)(param_2 + 0x24c) = 0;
  *(undefined1 *)(param_2 + 0x24d) = 0;
  *(undefined4 *)(param_2 + 0x254) = 0;
  *(undefined4 *)(param_2 + 600) = param_7;
  *(undefined4 *)(param_2 + 0x25c) = param_8;
  iVar2 = FUN_0001e5b8(param_2 + 0x130,0,param_3,param_4);
  if (iVar2 != 0) {
    uVar3 = FUN_00199948(param_1,param_2);
    return uVar3;
  }
  return DAT_001997c8;
}

