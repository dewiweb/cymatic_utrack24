// rea decompile_all
// name: FUN_001a6170
// address: 0x1a6170
// body: available
// range: 0x1a6170-0x1a6313 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_001a6170(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  
  *param_1 = DAT_001a6314;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0x48] = 0;
  *(undefined1 *)(param_1 + 0x49) = 1;
  param_1[0x4a] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(char *)((int)param_1 + 0x141) = (char)param_1 + '\x14';
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  piVar3 = (int *)FUN_00173860(0xc,0,param_3,param_4,param_4);
  iVar4 = FUN_00173860(0x18,0);
  piVar3[2] = iVar4;
  *piVar3 = param_1[0x4a];
  piVar3[1] = 1;
  param_1[0x4a] = piVar3;
  uVar1 = DAT_001a6318;
  puVar5 = (undefined1 *)piVar3[2];
  param_1[0x4c] = puVar5;
  param_1[0x4d] = puVar5 + 0x18;
  param_1[0x4c] = puVar5 + 0x18;
  *(undefined4 *)(puVar5 + 8) = 0;
  *(undefined4 *)(puVar5 + 0xc) = 0;
  *puVar5 = 0;
  param_1[0x4e] = puVar5;
  *(undefined4 *)(puVar5 + 4) = 0;
  *(undefined4 *)(param_1[0x4e] + 8) = param_1[0x4e];
  *(undefined4 *)(param_1[0x4e] + 0xc) = param_1[0x4e];
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x55] = 0x1000;
  param_1[0x54] = 0;
  param_1[0x56] = 0x1000;
  param_1[0x57] = 0;
  param_1[0x58] = 0x1000;
  param_1[0x59] = 0x1000;
  *(undefined1 *)(param_1 + 0x5a) = 1;
  param_1[0x5b] = 0xffffffff;
  param_1[0x15] = uVar1;
  param_1[0x16] = 0xad000000;
  param_1[0x5c] = 0xffffffff;
  param_1[0x5d] = 0;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0x3e9;
  param_1[0x47] = 0xd;
  FUN_00048b00(4);
  if (((*DAT_001a631c & 1) == 0) &&
     (iVar4 = FUN_001c7162(DAT_001a631c), puVar2 = DAT_001a6320, iVar4 != 0)) {
    DAT_001a6320[1] = &DAT_001a6324;
    puVar2[2] = s_warp_commands_001a632c;
    puVar2[3] = 0;
    puVar2[4] = 0;
    uVar1 = DAT_001a6340;
    *puVar2 = DAT_001a633c;
    FUN_001c70ac(puVar2,DAT_001a6344,uVar1);
  }
  FUN_001a7b9c(DAT_001a6320,0);
  return param_1;
}

