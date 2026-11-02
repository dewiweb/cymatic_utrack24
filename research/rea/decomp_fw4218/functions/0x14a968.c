// rea decompile_all
// name: FUN_0014a968
// address: 0x14a968
// body: available
// range: 0x14a968-0x14a9ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0014a968(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined1 auStack_28 [18];
  undefined1 local_16;
  undefined1 auStack_10 [8];
  
  do {
    iVar2 = thunk_EXT_FUN_004002f0(DAT_0014aa00,auStack_10,0);
    puVar1 = DAT_0014aa04;
  } while (iVar2 == 0);
  FUN_0012c504(auStack_28,DAT_0014aa08,*DAT_0014aa04,DAT_0014aa04[1]);
  piVar3 = (int *)FUN_000cbaf0();
  iVar2 = (**(code **)(*piVar3 + 8))(piVar3,auStack_28,0,DAT_0014aa0c);
  if (iVar2 == 0) {
    puVar1[1] = 0xffffffff;
    *puVar1 = 0xffffffff;
    pcVar4 = s_File_successfully_closed_0014aa24;
  }
  else {
    if (iVar2 == 1) {
      FUN_00002898(s_Close_file_failed_with__d_0014aa40,local_16);
      return 0;
    }
    pcVar4 = s_Close_file_failed_0014aa10;
  }
  FUN_00002898(pcVar4);
  return 0;
}

