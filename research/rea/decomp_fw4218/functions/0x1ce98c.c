// rea decompile_all
// name: FUN_001ce98c
// address: 0x1ce98c
// body: available
// range: 0x1ce98c-0x1cea8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001ce98c(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = thunk_EXT_FUN_0040001c();
  *DAT_001cea8c = *DAT_001cea8c + -1;
  *param_1 = 0;
  puVar1 = DAT_001cea90;
  if ((undefined4 *)param_1[5] == param_1) {
    *DAT_001cea90 = 0;
  }
  else {
    ((undefined4 *)param_1[5])[6] = param_1[6];
    *(undefined4 *)(param_1[6] + 0x14) = param_1[5];
    if ((undefined4 *)*puVar1 == param_1) {
      *puVar1 = param_1[5];
    }
  }
  piVar2 = DAT_001cea94;
  *DAT_001cea94 = *DAT_001cea94 + 1;
  thunk_EXT_FUN_00400034(uVar3);
  iVar4 = param_1[4];
  iVar5 = param_1[3];
  while (iVar4 != 0) {
    thunk_EXT_FUN_0040001c();
    *(undefined4 *)(iVar5 + 0x74) = 0;
    *piVar2 = *piVar2 + 1;
    thunk_EXT_FUN_00400034();
    FUN_001d0878(iVar5 + 0x58);
    *(undefined4 *)(iVar5 + 0x90) = 1;
    iVar5 = *(int *)(iVar5 + 0x7c);
    FUN_001cfeb8(*(undefined4 *)(iVar5 + 0x80));
    iVar4 = param_1[4] + -1;
    param_1[4] = iVar4;
  }
  thunk_EXT_FUN_0040001c();
  *piVar2 = *piVar2 + -1;
  thunk_EXT_FUN_00400034();
  if (*DAT_001cea98 != *DAT_001cea9c) {
    FUN_00011ef4();
  }
  return 0;
}

