// rea decompile_all
// name: FUN_001a7238
// address: 0x1a7238
// body: available
// range: 0x1a7238-0x1a72b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001a7238(int param_1,byte *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar2 = DAT_001a72bc;
  if (*param_2 == 0x16) {
    if (param_2 != (byte *)0x0) {
      if ((code *)*DAT_001a72bc == entry) {
        FUN_0018a280(param_2);
      }
      else {
        (*(code *)*DAT_001a72bc)(param_2);
      }
    }
    return 0;
  }
  cVar1 = *(char *)(param_1 + 0x44);
  uVar4 = DAT_001a72c4;
  if (((cVar1 != '\0') && (uVar4 = DAT_001a72c8, cVar1 != '\x01')) &&
     (uVar4 = DAT_001a72cc, cVar1 != '\x02')) {
    uVar4 = DAT_001a72c0;
  }
  iVar3 = FUN_0018a43e(*param_2,*(undefined1 *)(param_1 + 0x2c),uVar4,param_2,param_1);
  if (((iVar3 != 0) && (*param_2 - 10 < 0xc)) && (*(int *)(param_2 + 8) != 0)) {
    FUN_001a52e0();
  }
  if (param_2 != (byte *)0x0) {
    if ((code *)*puVar2 == entry) {
      FUN_0018a280(param_2);
    }
    else {
      (*(code *)*puVar2)(param_2);
    }
  }
  return 1;
}

