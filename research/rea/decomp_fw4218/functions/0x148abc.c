// rea decompile_all
// name: FUN_00148abc
// address: 0x148abc
// body: available
// range: 0x148abc-0x148b5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00148abc(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined1 auStack_28 [18];
  undefined1 local_16;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined1 auStack_8 [4];
  
  do {
    iVar1 = thunk_EXT_FUN_004002f0(DAT_00148b5c,auStack_8,0);
  } while (iVar1 == 0);
  puVar2 = (undefined4 *)FUN_000cbaf0();
  uVar3 = (**(code **)*puVar2)();
  FUN_00115524(auStack_28,DAT_00148b60,uVar3);
  piVar4 = (int *)FUN_000cbaf0();
  uVar5 = (**(code **)(*piVar4 + 8))(piVar4,auStack_28,0,DAT_00148b64);
  if ((int)uVar5 == 0) {
    FUN_00002898(s_Free_space_is__llu_kbytes_00148b80,(int)((ulonglong)uVar5 >> 0x20),local_10,
                 uStack_c);
  }
  else if ((int)uVar5 == 1) {
    FUN_00002898(s_Get_free_space_failed_with__d_00148b9c,local_16);
  }
  else {
    FUN_00002898(s_Get_free_space_failed_00148b68);
  }
  return 0;
}

