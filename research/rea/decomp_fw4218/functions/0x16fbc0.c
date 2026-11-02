// rea decompile_all
// name: FUN_0016fbc0
// address: 0x16fbc0
// body: available
// range: 0x16fbc0-0x16fcb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0016fbc0(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  ushort local_228 [256];
  undefined4 local_28 [4];
  undefined1 local_16;
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  undefined1 auStack_c [4];
  undefined1 auStack_8 [4];
  
  for (iVar1 = 0; *(byte *)(*param_2 + iVar1) != 0; iVar1 = iVar1 + 1) {
    local_228[iVar1] = (ushort)*(byte *)(*param_2 + iVar1);
  }
  local_228[iVar1] = 0;
  FUN_00231ef4(auStack_10,local_228,auStack_c);
  do {
    iVar1 = thunk_EXT_FUN_004002f0(DAT_0016fcb4,auStack_8,0);
  } while (iVar1 == 0);
  puVar2 = (undefined4 *)FUN_000cbaf0();
  uVar3 = (**(code **)*puVar2)();
  FUN_000f95fc(local_28,DAT_0016fcb8,uVar3,auStack_10);
  piVar4 = (int *)FUN_000cbaf0();
  iVar1 = (**(code **)(*piVar4 + 8))(piVar4,local_28,0,DAT_0016fcbc);
  if (iVar1 == 0) {
    pcVar5 = s_File_successfully_removed_0016fcc0;
  }
  else {
    if (iVar1 == 1) {
      FUN_00002898(s_Remove_file_failed_with__d_0016fcf0,local_16);
      goto LAB_0016fc90;
    }
    pcVar5 = s_Remove_file_failed_0016fcdc;
  }
  FUN_00002898(pcVar5);
LAB_0016fc90:
  local_28[0] = DAT_0016fd0c;
  FUN_00232190(auStack_14);
  FUN_00232190(auStack_10);
  return 0;
}

