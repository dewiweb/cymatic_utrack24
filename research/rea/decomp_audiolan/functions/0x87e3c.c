// rea decompile_all
// name: FUN_00087e3c
// address: 0x87e3c
// body: available
// range: 0x87e3c-0x87f17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00087e3c(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  *param_1 = param_3;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0xff;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)((int)param_1 + 0x1d) = 7;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 9) = **(undefined2 **)(param_2 + 4);
  *(undefined1 *)((int)param_1 + 0x26) = 0;
  uVar2 = FUN_0015859e(param_2);
  param_1[10] = uVar2;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  uVar2 = FUN_00018dd0(10);
  param_1[0xf] = uVar2;
  uVar1 = DAT_00087f1c;
  uVar2 = DAT_00087f18;
  param_1[6] = 0;
  iVar3 = FUN_0016deb0(param_2,uVar1,uVar2,0xffffffff);
  if (iVar3 != 0) {
    *(undefined1 *)((int)param_1 + 0x1d) = *(undefined1 *)(*(int *)(iVar3 + 4) + 0xb2);
    param_1[8] = *(undefined4 *)(*(int *)(iVar3 + 4) + 0xbc);
    uVar2 = FUN_00046630(*(undefined4 *)(*(int *)(iVar3 + 4) + 0x60),0);
    param_1[0xd] = uVar2;
    param_1[0xe] = (uint)*(byte *)(*(int *)(iVar3 + 4) + 0xb0);
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)(*(int *)(iVar3 + 4) + 0xd9);
  }
  return param_1;
}

