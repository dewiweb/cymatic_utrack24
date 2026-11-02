// rea decompile_all
// name: FUN_001336a0
// address: 0x1336a0
// body: available
// range: 0x1336a0-0x133787 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_001336a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 extraout_r1;
  
  *param_1 = _DAT_00133788;
  param_1[2] = 0;
  FUN_001f0168(param_1 + 1,s___StreamControlServiceImpl_0013378a + 2,param_3,param_4,param_4);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((int)param_1 + 0x4d) = extraout_r1;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  piVar1 = (int *)FUN_00173860(0xc,0);
  iVar2 = FUN_00173860(0x18,0);
  piVar1[2] = iVar2;
  *piVar1 = param_1[0xd];
  piVar1[1] = 1;
  param_1[0xd] = piVar1;
  puVar3 = (undefined1 *)piVar1[2];
  param_1[0xf] = puVar3;
  param_1[0x10] = puVar3 + 0x18;
  param_1[0xf] = puVar3 + 0x18;
  *(undefined4 *)(puVar3 + 8) = 0;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  *puVar3 = 0;
  param_1[0x11] = puVar3;
  *(undefined4 *)(puVar3 + 4) = 0;
  *(undefined4 *)(param_1[0x11] + 8) = param_1[0x11];
  *(undefined4 *)(param_1[0x11] + 0xc) = param_1[0x11];
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  uVar4 = FUN_000b4964();
  FUN_000b472c(uVar4,param_1);
  return param_1;
}

