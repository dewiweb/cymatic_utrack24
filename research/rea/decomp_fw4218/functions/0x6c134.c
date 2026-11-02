// rea decompile_all
// name: FUN_0006c134
// address: 0x6c134
// body: available
// range: 0x6c134-0x6c277 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0006c134(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  piVar1 = (int *)FUN_00173860(0xc,0);
  iVar2 = FUN_00173860(0x18,0);
  piVar1[2] = iVar2;
  *piVar1 = *param_1;
  piVar1[1] = 1;
  *param_1 = (int)piVar1;
  iVar2 = piVar1[2];
  param_1[2] = iVar2;
  param_1[3] = iVar2 + 0x18;
  iVar2 = param_1[2];
  param_1[4] = iVar2;
  param_1[2] = iVar2 + 0x18;
  *(int *)iVar2 = iVar2;
  *(int *)(param_1[4] + 4) = param_1[4];
  local_1c = 0xffff;
  local_28 = 0xffff;
  local_24 = 0xffff;
  local_20 = 0xffff;
  local_30 = 0xffff;
  local_2c = 0xffff;
  iVar2 = FUN_00070ef0(param_1 + 6,s_PowerManagerThread_0006c278,0,0x14);
  iVar2 = FUN_00065fa0(iVar2 + 0x114,s_PowerManagerTimer_0006c28c);
  uVar4 = *(undefined4 *)(DAT_0006c2a0 + 0x20);
  uVar6 = *(undefined4 *)(DAT_0006c2a0 + 0x24);
  uVar3 = *(undefined4 *)(DAT_0006c2a0 + 0x28);
  uVar5 = *(undefined4 *)(DAT_0006c2a0 + 0x2c);
  *(undefined4 *)(iVar2 + 0x5c) = DAT_0006c2a4;
  *(int *)(iVar2 + 0x60) = iVar2 + -300;
  *(undefined4 *)(iVar2 + 0x6c) = uVar3;
  *(undefined4 *)(iVar2 + 0x70) = uVar5;
  uVar3 = DAT_0006c2a8;
  *(undefined4 *)(iVar2 + 100) = uVar4;
  *(undefined4 *)(iVar2 + 0x68) = uVar6;
  *(undefined4 *)(iVar2 + 0x74) = uVar3;
  *(undefined4 *)(iVar2 + 0x7c) = 0;
  *(undefined4 *)(iVar2 + 0x80) = 0;
  *(undefined4 *)(iVar2 + 0x84) = 0;
  *(undefined4 *)(iVar2 + 0x88) = 0;
  *(undefined4 *)(iVar2 + 0x8c) = 0;
  FUN_001f0370(&local_30);
  *(undefined4 *)(iVar2 + 0x7c) = local_30;
  *(undefined4 *)(iVar2 + 0x84) = local_30;
  *(undefined4 *)(iVar2 + 0x80) = local_2c;
  *(undefined4 *)(iVar2 + 0x88) = local_2c;
  FUN_0006f678(iVar2 + -0x114);
  return iVar2 + -300;
}

