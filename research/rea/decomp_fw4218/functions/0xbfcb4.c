// rea decompile_all
// name: FUN_000bfcb4
// address: 0xbfcb4
// body: available
// range: 0xbfcb4-0xbfd83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000bfcb4(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  
  local_34 = *DAT_000bfd84;
  uStack_30 = DAT_000bfd84[1];
  uStack_2c = DAT_000bfd84[2];
  uStack_28 = DAT_000bfd84[3];
  uVar1 = FUN_00230e4c(auStack_24);
  uVar1 = FUN_00231ef4(auStack_20,u__dummy_txt_000bfd88,uVar1);
  iVar2 = FUN_000bb52c(param_1,uVar1);
  uVar1 = FUN_00232190(auStack_20);
  if (iVar2 != 0) {
    uVar1 = FUN_00003738(&local_34);
    FUN_000c1358(param_1,iVar2,&local_34,uVar1);
    FUN_000c1220(param_1,iVar2);
    uVar1 = FUN_00230e4c(auStack_3c);
    uVar1 = FUN_00231ef4(auStack_38,u__dummy_txt_000bfd88,uVar1);
    FUN_000bd954(param_1,uVar1);
    uVar1 = FUN_00232190(auStack_38);
  }
  return uVar1;
}

