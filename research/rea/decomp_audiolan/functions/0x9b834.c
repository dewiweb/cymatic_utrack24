// rea decompile_all
// name: FUN_0009b834
// address: 0x9b834
// body: available
// range: 0x9b834-0x9b8a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_0009b834(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  undefined1 *puVar4;
  
  *param_1 = _DAT_0009b8a4;
  param_1[1] = 0;
  uVar1 = FUN_0017ae30(param_1 + 1,s____Semaphore_0009b8a5 + 3,1,param_4,param_4);
  param_1[9] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((int)param_1 + 0x3d) = uVar1;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  piVar2 = (int *)FUN_0010f82c(0xc,0);
  iVar3 = FUN_0010f82c(0x2c,0);
  piVar2[2] = iVar3;
  iVar3 = param_1[9];
  piVar2[1] = 1;
  *piVar2 = iVar3;
  param_1[9] = piVar2;
  iVar3 = piVar2[2];
  param_1[0xb] = iVar3;
  param_1[0xc] = iVar3 + 0x2c;
  puVar4 = (undefined1 *)param_1[0xb];
  param_1[0xb] = puVar4 + 0x2c;
  *(undefined4 *)(puVar4 + 8) = 0;
  *(undefined4 *)(puVar4 + 0xc) = 0;
  *puVar4 = 0;
  param_1[0xd] = puVar4;
  *(undefined4 *)(puVar4 + 4) = 0;
  *(undefined4 *)(param_1[0xd] + 8) = param_1[0xd];
  *(undefined4 *)(param_1[0xd] + 0xc) = param_1[0xd];
  return param_1;
}

