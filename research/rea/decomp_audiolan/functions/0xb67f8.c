// rea decompile_all
// name: FUN_000b67f8
// address: 0xb67f8
// body: available
// range: 0xb67f8-0xb6987 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000b67f8(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 auStack_80 [4];
  undefined1 auStack_70 [80];
  undefined4 auStack_20 [2];
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  iVar1 = FUN_0015bf38(param_2,auStack_20);
  if (iVar1 == 0) {
    FUN_000028a4(DAT_000b699c);
    return;
  }
  iVar1 = (**(code **)(*param_1 + 0x58))(param_1,1);
  if (iVar1 == 0) {
    return;
  }
  if (param_1[0x74] != 0) {
    uStack_14 = 0;
    uStack_18 = DAT_000b6988;
    iVar1 = FUN_0008ab80(param_1,param_1[0x74],&uStack_18);
    uVar2 = DAT_000b698c;
    if (iVar1 == 0) goto LAB_000b6960;
  }
  piVar3 = param_1 + 0x61;
  FUN_000872a8(piVar3,auStack_20[0]);
  iVar1 = FUN_000872b0(piVar3);
  if (iVar1 == 0) {
    thunk_FUN_000028a4(DAT_000b6990);
  }
  uVar2 = DAT_000b6994;
  if (param_1[0x74] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x60))(param_1,1,auStack_20[0]);
    if (iVar1 == 0) {
      return;
    }
    FUN_000872a8(piVar3,auStack_20[0]);
    *(char *)(param_1[0x74] + 0xf0) = (char)param_1[0x6f];
    FUN_000cae8c(auStack_80,param_1 + 0x60,param_2,0);
    iVar1 = FUN_0008ab80(param_1,param_1[0x74],auStack_80);
    uVar2 = DAT_000b6998;
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x38))(param_1,1);
      FUN_000b84e0(param_1,1);
      auStack_80[0] = uVar2;
      FUN_00085a08(auStack_70);
      return;
    }
    FUN_000028a4(DAT_000b69a0);
    auStack_80[0] = uVar2;
    FUN_00085a08(auStack_70);
    return;
  }
LAB_000b6960:
  FUN_000028a4(uVar2);
  return;
}

