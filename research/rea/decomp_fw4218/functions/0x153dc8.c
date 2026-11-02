// rea decompile_all
// name: FUN_00153dc8
// address: 0x153dc8
// body: available
// range: 0x153dc8-0x153f2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00153dc8(int *param_1,int *param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  int *piVar3;
  undefined2 *puVar4;
  int iVar5;
  
  uVar2 = (**(code **)(*param_1 + 8))(param_1);
  *(int *)*param_2 = param_1[4];
  iVar5 = *param_2;
  *param_2 = iVar5 + 4;
  *(undefined2 *)(iVar5 + 4) = uVar2;
  *param_2 = *param_2 + 2;
  FUN_00171f98(param_2,param_1 + 6);
  FUN_00171f98(param_2,param_1 + 0xc);
  FUN_00171f98(param_2,param_1 + 9);
  piVar3 = (int *)(*param_2 + 3U & 0xfffffffc);
  *param_2 = (int)piVar3;
  *piVar3 = param_1[0xf];
  iVar5 = *param_2;
  *param_2 = iVar5 + 4;
  *(int *)(iVar5 + 4) = param_1[0x10];
  iVar5 = *param_2;
  *param_2 = iVar5 + 4;
  *(int *)(iVar5 + 4) = param_1[0x11];
  iVar5 = *param_2;
  *param_2 = iVar5 + 4;
  *(int *)(iVar5 + 4) = param_1[0x12];
  iVar5 = *param_2;
  *param_2 = iVar5 + 4;
  *(int *)(iVar5 + 4) = param_1[0x13];
  iVar5 = *param_2;
  *param_2 = iVar5 + 4;
  *(int *)(iVar5 + 4) = param_1[0x14];
  iVar5 = *param_2;
  *param_2 = iVar5 + 4;
  *(int *)(iVar5 + 4) = param_1[0x15];
  iVar5 = *param_2;
  *param_2 = iVar5 + 4;
  *(int *)(iVar5 + 4) = param_1[0x16];
  iVar5 = *param_2;
  *param_2 = iVar5 + 4;
  *(char *)(iVar5 + 4) = (char)param_1[0x19];
  puVar4 = (undefined2 *)(*param_2 + 2U & 0xfffffffe);
  *param_2 = (int)puVar4;
  *puVar4 = *(undefined2 *)((int)param_1 + 0x62);
  iVar5 = *param_2;
  *param_2 = iVar5 + 2;
  uVar1 = *(ushort *)((int)param_1 + 0x62);
  FUN_000039e0(iVar5 + 2,param_1[0x17],(uint)uVar1);
  *param_2 = *param_2 + (uint)uVar1;
  return;
}

