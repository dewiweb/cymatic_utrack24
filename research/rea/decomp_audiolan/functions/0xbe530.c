// rea decompile_all
// name: FUN_000be530
// address: 0xbe530
// body: available
// range: 0xbe530-0xbe5e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000be530(int param_1,uint param_2)

{
  int iVar1;
  int iStack_20;
  undefined4 auStack_1c [2];
  
  if (*(ushort *)(param_1 + 0x25a) != param_2) {
    iVar1 = FUN_00041c14(s__cfg_AppSettings_SAP_000be5e4,auStack_1c);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_00048f94(auStack_1c[0],s_SessionTimeoutSeconds_000be5fc,param_2);
    FUN_00041dd4(auStack_1c[0]);
    if (iVar1 == 0) {
      return 0;
    }
    *(short *)(param_1 + 0x25a) = (short)param_2;
    iStack_20 = *(int *)(*(int *)(param_1 + 0x270) + 8);
    if (iStack_20 != *(int *)(param_1 + 0x270)) {
      do {
        (**(code **)(**(int **)(iStack_20 + 0x10) + 0x50))();
        FUN_001c03bc(&iStack_20);
      } while (iStack_20 != *(int *)(param_1 + 0x270));
    }
  }
  return 1;
}

