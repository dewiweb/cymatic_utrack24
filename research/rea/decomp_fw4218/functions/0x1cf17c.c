// rea decompile_all
// name: FUN_001cf17c
// address: 0x1cf17c
// body: available
// range: 0x1cf17c-0x1cf27f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001cf17c(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = thunk_EXT_FUN_0040001c();
  *DAT_001cf280 = *DAT_001cf280 + -1;
  *param_1 = 0;
  puVar1 = DAT_001cf284;
  if ((undefined4 *)param_1[0xd] == param_1) {
    *DAT_001cf284 = 0;
  }
  else {
    ((undefined4 *)param_1[0xd])[0xe] = param_1[0xe];
    *(undefined4 *)(param_1[0xe] + 0x34) = param_1[0xd];
    if ((undefined4 *)*puVar1 == param_1) {
      *puVar1 = param_1[0xd];
    }
  }
  piVar2 = DAT_001cf288;
  *DAT_001cf288 = *DAT_001cf288 + 1;
  thunk_EXT_FUN_00400034(uVar3);
  iVar4 = param_1[0xb];
  iVar5 = param_1[10];
  while (iVar4 != 0) {
    thunk_EXT_FUN_0040001c();
    *(undefined4 *)(iVar5 + 0x74) = 0;
    *piVar2 = *piVar2 + 1;
    thunk_EXT_FUN_00400034();
    FUN_001d0878(iVar5 + 0x58);
    *(undefined4 *)(iVar5 + 0x58) = 0;
    *(undefined4 *)(iVar5 + 0x90) = 1;
    iVar5 = *(int *)(iVar5 + 0x7c);
    FUN_001cfeb8(*(undefined4 *)(iVar5 + 0x80));
    iVar4 = param_1[0xb] + -1;
    param_1[0xb] = iVar4;
  }
  thunk_EXT_FUN_0040001c();
  *piVar2 = *piVar2 + -1;
  thunk_EXT_FUN_00400034();
  if (*DAT_001cf28c != *DAT_001cf290) {
    FUN_00011ef4();
  }
  return 0;
}

