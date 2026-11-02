// rea decompile_all
// name: FUN_0015aae4
// address: 0x15aae4
// body: available
// range: 0x15aae4-0x15ac4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0015aae4(int *param_1,int *param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  int *piVar3;
  int iVar4;
  
  uVar2 = (**(code **)(*param_1 + 8))(param_1);
  *(int *)*param_2 = param_1[4];
  iVar4 = *param_2;
  *param_2 = iVar4 + 4;
  *(undefined2 *)(iVar4 + 4) = uVar2;
  *param_2 = *param_2 + 2;
  FUN_00171f98(param_2,param_1 + 6);
  FUN_00171f98(param_2,param_1 + 9);
  piVar3 = (int *)(*param_2 + 3U & 0xfffffffc);
  *param_2 = (int)piVar3;
  *piVar3 = param_1[0xc];
  iVar4 = *param_2;
  *param_2 = iVar4 + 4;
  *(int *)(iVar4 + 4) = param_1[0xd];
  iVar4 = *param_2;
  *param_2 = iVar4 + 4;
  *(int *)(iVar4 + 4) = param_1[0xe];
  iVar4 = *param_2;
  *param_2 = iVar4 + 4;
  *(int *)(iVar4 + 4) = param_1[0xf];
  iVar4 = *param_2;
  *param_2 = iVar4 + 4;
  *(int *)(iVar4 + 4) = param_1[0x10];
  iVar4 = *param_2;
  *param_2 = iVar4 + 4;
  *(int *)(iVar4 + 4) = param_1[0x11];
  iVar4 = *param_2;
  *param_2 = iVar4 + 4;
  *(int *)(iVar4 + 4) = param_1[0x12];
  iVar4 = *param_2;
  *param_2 = iVar4 + 4;
  *(int *)(iVar4 + 4) = param_1[0x13];
  iVar4 = *param_2;
  *param_2 = iVar4 + 4;
  *(char *)(iVar4 + 4) = (char)param_1[0x16];
  iVar4 = *param_2;
  *param_2 = iVar4 + 1;
  *(undefined1 *)(iVar4 + 1) = 0;
  iVar4 = *param_2;
  *param_2 = iVar4 + 1;
  *(undefined2 *)(iVar4 + 1) = *(undefined2 *)((int)param_1 + 0x56);
  iVar4 = *param_2;
  *param_2 = iVar4 + 2;
  uVar1 = *(ushort *)((int)param_1 + 0x56);
  FUN_000039e0(iVar4 + 2,param_1[0x14],(uint)uVar1);
  *param_2 = *param_2 + (uint)uVar1;
  return;
}

