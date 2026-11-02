// rea decompile_all
// name: FUN_0017b1b0
// address: 0x17b1b0
// body: available
// range: 0x17b1b0-0x17b32f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0017b1b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int param_5,int param_6,uint param_7,uint param_8,undefined4 param_9,int param_10)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  param_1[6] = param_9;
  param_1[3] = param_5;
  param_1[7] = param_9;
  param_1[5] = param_6;
  param_1[0x14] = param_3;
  param_1[0x15] = param_4;
  param_1[0x18] = DAT_0017b330;
  param_1[0x19] = param_1;
  param_1[0xb] = 0;
  param_1[0xf] = 3;
  param_1[2] = 0;
  param_1[4] = param_5 + param_6 + -1;
  param_1[1] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = param_8 & 0x1f;
  param_1[0x1c] = 0;
  param_1[0x17] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0xd] = param_2;
  param_1[0xe] = param_7 & 0x1f;
  iVar2 = FUN_0017a1c4(param_1 + 0x27,param_2,0);
  if (iVar2 != 0) {
    return 0xe;
  }
  param_1[0x13] = 1 << (param_7 & 0x1f);
  FUN_00011edc(param_1,DAT_0017b334);
  uVar3 = thunk_EXT_FUN_0040001c();
  piVar1 = DAT_0017b33c;
  *param_1 = DAT_0017b338;
  if (*piVar1 == 0) {
    *piVar1 = (int)param_1;
    param_1[0x25] = param_1;
    param_1[0x26] = param_1;
  }
  else {
    iVar2 = *(int *)(*piVar1 + 0x98);
    *(undefined4 **)(*piVar1 + 0x98) = param_1;
    *(undefined4 **)(iVar2 + 0x94) = param_1;
    param_1[0x26] = iVar2;
    param_1[0x25] = *piVar1;
  }
  piVar1 = DAT_0017b344;
  *DAT_0017b340 = *DAT_0017b340 + 1;
  *piVar1 = *piVar1 + 1;
  thunk_EXT_FUN_00400034(uVar3);
  if (param_10 == 0) {
    thunk_EXT_FUN_0040001c();
    *piVar1 = *piVar1 + -1;
    thunk_EXT_FUN_00400034();
  }
  else {
    iVar2 = FUN_0017b780(param_1);
    if (iVar2 != 0) {
      FUN_0001181c();
    }
  }
  return 0;
}

