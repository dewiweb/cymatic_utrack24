// rea decompile_all
// name: FUN_0014afac
// address: 0x14afac
// body: available
// range: 0x14afac-0x14b083 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0014afac(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined1 param_12,
                 undefined4 param_13,undefined4 param_14,undefined1 param_15,undefined1 param_16,
                 undefined4 param_17)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *(char *)((int)param_1 + 5) = (char)param_2;
  param_1[2] = param_8;
  *(char *)(param_1 + 3) = (char)param_10;
  uVar1 = DAT_0014b084;
  param_1[4] = param_11;
  *(undefined1 *)(param_1 + 5) = param_12;
  *param_1 = uVar1;
  *(undefined1 *)((int)param_1 + 0x15) = param_3;
  *(undefined1 *)((int)param_1 + 0x16) = param_4;
  *(undefined1 *)((int)param_1 + 0x17) = param_5;
  *(undefined1 *)(param_1 + 6) = param_6;
  param_1[7] = param_7;
  param_1[8] = param_17;
  iVar2 = FUN_00232084(param_1 + 9,param_9,param_8,param_10,param_1,param_2);
  *(undefined4 *)(iVar2 + 4) = param_13;
  *(undefined4 *)(iVar2 + 8) = param_14;
  *(undefined1 *)(iVar2 + 0xc) = param_15;
  iVar5 = 0x20;
  *(undefined1 *)(iVar2 + 0xd) = param_16;
  iVar3 = 0;
  do {
    iVar4 = (int)(((uint)*(byte *)(iVar2 + -0xe) + iVar3) * 0x1000000) >> 0x18;
    if ((int)(uint)*(byte *)(iVar2 + -0xf) <= iVar4) {
      iVar4 = -1;
    }
    iVar6 = iVar2 + iVar3;
    iVar5 = iVar5 + -1;
    iVar3 = iVar3 + 1;
    *(char *)(iVar6 + 0xe) = (char)iVar4;
  } while (iVar5 != 0);
  *(undefined1 *)(iVar2 + -0x20) = 1;
  return;
}

