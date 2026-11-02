// rea decompile_all
// name: FUN_0015dd18
// address: 0x15dd18
// body: available
// range: 0x15dd18-0x15dfcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0015dd18(undefined2 *param_1,int *param_2)

{
  int iVar1;
  
  *(undefined2 *)*param_2 = *param_1;
  iVar1 = *param_2;
  *param_2 = iVar1 + 2;
  *(undefined2 *)(iVar1 + 2) = 0;
  iVar1 = *param_2;
  *param_2 = iVar1 + 2;
  *(undefined2 *)(iVar1 + 2) = param_1[2];
  iVar1 = *param_2;
  *param_2 = iVar1 + 2;
  *(undefined2 *)(iVar1 + 2) = param_1[3];
  iVar1 = *param_2;
  *param_2 = iVar1 + 2;
  *(undefined2 *)(iVar1 + 2) = param_1[4];
  iVar1 = *param_2;
  *param_2 = iVar1 + 2;
  *(short *)(iVar1 + 2) = (short)((uint)*(undefined4 *)(param_1 + 4) >> 0x10);
  iVar1 = *param_2;
  *param_2 = iVar1 + 2;
  *(undefined2 *)(iVar1 + 2) = param_1[6];
  iVar1 = *param_2;
  *param_2 = iVar1 + 2;
  *(undefined2 *)(iVar1 + 2) = param_1[8];
  iVar1 = *param_2;
  *param_2 = iVar1 + 2;
  *(undefined2 *)(iVar1 + 2) = param_1[9];
  iVar1 = *param_2;
  *param_2 = iVar1 + 2;
  *(undefined2 *)(iVar1 + 2) = param_1[10];
  iVar1 = *param_2;
  *param_2 = iVar1 + 2;
  *(short *)(iVar1 + 2) = (short)((uint)*(undefined4 *)(param_1 + 10) >> 0x10);
  iVar1 = *param_2;
  *param_2 = iVar1 + 2;
  *(undefined2 *)(iVar1 + 2) = param_1[0xc];
  iVar1 = *param_2;
  *param_2 = iVar1 + 2;
  *(undefined4 *)(iVar1 + 2) = *(undefined4 *)(param_1 + 0xe);
  iVar1 = *param_2;
  *param_2 = iVar1 + 4;
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x10);
  iVar1 = *param_2;
  *param_2 = iVar1 + 4;
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x12);
  iVar1 = *param_2;
  *param_2 = iVar1 + 4;
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x14);
  iVar1 = *param_2;
  *param_2 = iVar1 + 4;
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x16);
  iVar1 = *param_2;
  *param_2 = iVar1 + 4;
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x18);
  iVar1 = *param_2;
  *param_2 = iVar1 + 4;
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x1a);
  iVar1 = *param_2;
  *param_2 = iVar1 + 4;
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x1c);
  iVar1 = *param_2;
  *param_2 = iVar1 + 4;
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x1e);
  iVar1 = *param_2;
  *param_2 = iVar1 + 4;
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  iVar1 = *param_2;
  *param_2 = iVar1 + 4;
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x22);
  iVar1 = *param_2;
  *param_2 = iVar1 + 4;
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x24);
  iVar1 = *param_2;
  *param_2 = iVar1 + 4;
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x26);
  iVar1 = *param_2;
  *param_2 = iVar1 + 4;
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x28);
  iVar1 = *param_2;
  *param_2 = iVar1 + 4;
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x2a);
  iVar1 = *param_2;
  *param_2 = iVar1 + 4;
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x2c);
  iVar1 = *param_2;
  *param_2 = iVar1 + 4;
  *(undefined2 *)(iVar1 + 4) = param_1[0x2e];
  iVar1 = *param_2;
  *param_2 = iVar1 + 2;
  *(undefined2 *)(iVar1 + 2) = param_1[0x2f];
  iVar1 = *param_2;
  *param_2 = iVar1 + 2;
  *(undefined1 *)(iVar1 + 2) = *(undefined1 *)(param_1 + 0x32);
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  *(undefined1 *)(iVar1 + 1) = *(undefined1 *)((int)param_1 + 0x65);
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  FUN_00003628(iVar1 + 1,param_1 + 0x33,6);
  *param_2 = *param_2 + 6;
  return;
}

