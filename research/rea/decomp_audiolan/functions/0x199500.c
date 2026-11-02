// rea decompile_all
// name: FUN_00199500
// address: 0x199500
// body: available
// range: 0x199500-0x1995af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00199500(int param_1,undefined4 param_2,byte *param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = DAT_001995b0;
  *(undefined4 *)(param_1 + 0x114) = param_2;
  uVar4 = *(undefined4 *)(iVar1 + 0x24);
  uVar5 = *(undefined4 *)(iVar1 + 0x28);
  uVar6 = *(undefined4 *)(iVar1 + 0x2c);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(iVar1 + 0x20);
  *(undefined4 *)(param_1 + 0x11c) = uVar4;
  *(undefined4 *)(param_1 + 0x120) = uVar5;
  *(undefined4 *)(param_1 + 0x124) = uVar6;
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(iVar1 + 0x30);
  pbVar3 = param_3;
  while( true ) {
    if ((param_3 + 0x100 <= pbVar3) || (uVar2 = (uint)*pbVar3, 0x3f < uVar2)) goto LAB_0019955c;
    if (uVar2 == 0) break;
    pbVar3 = pbVar3 + uVar2 + 1;
  }
  if (((uint)(pbVar3 + (1 - (int)param_3)) & 0xffff) < 0x101) {
    FUN_001952f0(param_1 + 0x130);
    goto LAB_00199562;
  }
LAB_0019955c:
  *(undefined1 *)(param_1 + 0x130) = 0;
LAB_00199562:
  *(short *)(param_1 + 0x230) = (short)param_4;
  *(undefined2 *)(param_1 + 0x232) = 1;
  if (param_4 == 0xc) {
    *(undefined4 *)(param_1 + 0x234) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x234) = 0;
  }
  *(undefined4 *)(param_1 + 0x23c) = 0;
  *(uint *)(param_1 + 0x238) = (uint)(param_4 != 0xc);
  *(undefined4 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x244) = 0;
  *(undefined1 *)(param_1 + 0x24e) = 0;
  *(undefined1 *)(param_1 + 0x24f) = 0;
  *(undefined4 *)(param_1 + 0x248) = 0;
  *(undefined1 *)(param_1 + 0x24c) = 0;
  *(undefined1 *)(param_1 + 0x24d) = 0;
  *(undefined4 *)(param_1 + 0x254) = 0;
  *(undefined4 *)(param_1 + 600) = param_5;
  *(undefined4 *)(param_1 + 0x25c) = param_6;
  return;
}

