// rea decompile_all
// name: FUN_001a7014
// address: 0x1a7014
// body: available
// range: 0x1a7014-0x1a7077 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


longlong FUN_001a7014(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_20 = param_2;
  if ((*(char *)(param_1 + 5) != '\x03') && (*(char *)(param_1 + 5) != '\x02')) {
LAB_001a7024:
    return (ulonglong)uStack_20 << 0x20;
  }
  if (*(byte *)(param_1 + 0x2c) != param_2) {
    if (param_2 == 0) {
      uVar2 = 6;
    }
    else {
      uVar2 = 5;
    }
    uStack_1c = param_3;
    uStack_18 = param_4;
    FUN_001ae4ec(&uStack_20,uVar2,0xff,0xffffffff);
    iVar1 = FUN_001c0d74(&uStack_20);
    if ((iVar1 == 0) || (iVar1 = FUN_00019208(param_1,&uStack_20,16000), iVar1 != 0)) {
      FUN_001ae614(&uStack_20);
      goto LAB_001a7024;
    }
    *(char *)(param_1 + 0x2c) = (char)param_2;
    FUN_001ae614(&uStack_20);
  }
  return CONCAT44(uStack_20,1);
}

