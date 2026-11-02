// rea decompile_all
// name: FUN_000bd954
// address: 0xbd954
// body: available
// range: 0xbd954-0xbda4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000bd954(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 auStack_38 [24];
  undefined1 auStack_20 [4];
  
  do {
    iVar1 = FUN_0022c84c(param_1 + 4,auStack_20,0);
  } while (iVar1 != 0);
  puVar2 = (undefined4 *)FUN_000cbaf0();
  uVar3 = (**(code **)*puVar2)(puVar2);
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  FUN_000f95fc(auStack_38,param_1 + 4,*(undefined4 *)(param_1 + 0x58),param_2);
  piVar4 = (int *)FUN_000cbaf0();
  iVar1 = (**(code **)(*piVar4 + 8))(piVar4,auStack_38,0xffffffff);
  if (iVar1 == 0) {
    FUN_000f9644(auStack_38);
    uVar3 = 1;
  }
  else if (iVar1 == 1) {
    uVar3 = FUN_001b29dc(auStack_38);
    FUN_00002898(s_ERROR__Delte_directory_Item_fail_000bda4c,uVar3);
    FUN_000f9644(auStack_38);
    uVar3 = 0;
  }
  else {
    FUN_00002898(s_ERROR__Delete_directory_failed_000bda78);
    FUN_000f9644(auStack_38);
    uVar3 = 0;
  }
  return uVar3;
}

