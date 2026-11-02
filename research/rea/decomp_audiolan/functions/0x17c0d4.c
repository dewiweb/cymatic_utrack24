// rea decompile_all
// name: FUN_0017c0d4
// address: 0x17c0d4
// body: available
// range: 0x17c0d4-0x17c173 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0017c0d4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  param_1[1] = param_2;
  param_1[8] = 0;
  param_1[2] = param_5;
  param_1[3] = param_6;
  param_1[4] = param_3;
  param_1[5] = param_4;
  uVar2 = thunk_EXT_FUN_0040001c();
  piVar1 = DAT_0017c178;
  *param_1 = DAT_0017c174;
  iVar3 = *piVar1;
  if (iVar3 == 0) {
    *piVar1 = (int)param_1;
    param_1[9] = param_1;
    param_1[10] = param_1;
  }
  else {
    iVar4 = *(int *)(iVar3 + 0x28);
    *(undefined4 **)(iVar3 + 0x28) = param_1;
    *(undefined4 **)(iVar4 + 0x24) = param_1;
    param_1[9] = iVar3;
    param_1[10] = iVar4;
  }
  *DAT_0017c17c = *DAT_0017c17c + 1;
  thunk_EXT_FUN_00400034(uVar2);
  if (param_7 != 0) {
    FUN_0017bfd0(param_1 + 2);
  }
  return 0;
}

