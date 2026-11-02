// rea decompile_all
// name: FUN_00179dac
// address: 0x179dac
// body: available
// range: 0x179dac-0x179e9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_00179dac(undefined4 *param_1,undefined4 param_2,int param_3,uint *param_4,uint param_5)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = param_3 + 3U & 0xfffffffc;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[1] = param_2;
  param_1[8] = uVar6;
  param_1[6] = param_4;
  param_1[7] = param_5 & 0xfffffffc;
  iVar7 = 0;
  puVar2 = param_4;
  while (puVar1 = (uint *)((int)puVar2 + uVar6 + 4), puVar1 <= (int)param_4 + (param_5 & 0xfffffffc)
        ) {
    *puVar2 = (uint)puVar1;
    iVar7 = iVar7 + 1;
    puVar2 = puVar1;
  }
  *(undefined4 *)((int)puVar2 + (-4 - uVar6)) = 0;
  param_1[2] = iVar7;
  param_1[4] = iVar7;
  if (iVar7 == 0) {
    param_1[5] = 0;
  }
  else {
    param_1[5] = param_4;
  }
  uVar4 = thunk_EXT_FUN_0040001c();
  piVar3 = DAT_00179ea0;
  *param_1 = DAT_00179e9c;
  iVar7 = *piVar3;
  if (iVar7 == 0) {
    *piVar3 = (int)param_1;
    param_1[0xb] = param_1;
    param_1[0xc] = param_1;
  }
  else {
    iVar5 = *(int *)(iVar7 + 0x30);
    *(undefined4 **)(iVar7 + 0x30) = param_1;
    *(undefined4 **)(iVar5 + 0x2c) = param_1;
    param_1[0xb] = iVar7;
    param_1[0xc] = iVar5;
  }
  *DAT_00179ea4 = *DAT_00179ea4 + 1;
  thunk_EXT_FUN_00400034(uVar4);
  return 0;
}

