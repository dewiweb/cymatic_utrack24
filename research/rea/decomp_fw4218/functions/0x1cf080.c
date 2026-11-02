// rea decompile_all
// name: FUN_001cf080
// address: 0x1cf080
// body: available
// range: 0x1cf080-0x1cf16f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001cf080(undefined4 *param_1,uint param_2,int param_3,int param_4,uint param_5)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  param_1[1] = param_2;
  param_1[10] = 0;
  bVar5 = param_3 == 1;
  param_1[0xb] = 0;
  if (bVar5) {
    param_5 = param_5 >> 2;
  }
  *(undefined2 *)(param_1 + 0xc) = 0;
  if (bVar5) {
    param_2 = param_5;
  }
  param_1[2] = param_3;
  if (!bVar5) {
    if (param_3 == 2) {
      param_5 = param_5 >> 3;
      param_2 = param_5 << 1;
    }
    else if (param_3 == 4) {
      param_5 = param_5 >> 4;
      param_2 = param_5 << 2;
    }
    else if (param_3 == 8) {
      param_5 = param_5 >> 5;
      param_2 = param_5 << 3;
    }
    else {
      param_5 = param_5 >> 6;
      param_2 = param_5 << 4;
    }
  }
  param_1[6] = param_4;
  param_1[7] = param_4 + param_2 * 4;
  param_1[8] = param_4;
  param_1[5] = param_5;
  param_1[9] = param_4;
  param_1[3] = param_5;
  param_1[4] = 0;
  param_1[0xf] = 0;
  uVar2 = thunk_EXT_FUN_0040001c();
  piVar1 = DAT_001cf174;
  *param_1 = DAT_001cf170;
  iVar3 = *piVar1;
  if (iVar3 == 0) {
    *piVar1 = (int)param_1;
    param_1[0xd] = param_1;
    param_1[0xe] = param_1;
  }
  else {
    iVar4 = *(int *)(iVar3 + 0x38);
    *(undefined4 **)(iVar3 + 0x38) = param_1;
    *(undefined4 **)(iVar4 + 0x34) = param_1;
    param_1[0xd] = iVar3;
    param_1[0xe] = iVar4;
  }
  *DAT_001cf178 = *DAT_001cf178 + 1;
  thunk_EXT_FUN_00400034(uVar2);
  return 0;
}

