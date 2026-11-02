// rea decompile_all
// name: FUN_0008bf20
// address: 0x8bf20
// body: available
// range: 0x8bf20-0x8c047 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_0008bf20(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uStack_20;
  
  uStack_20 = param_4;
  uVar2 = FUN_001b4f14(param_1);
  uVar3 = FUN_001b4ef0(param_1);
  if (*(char *)(param_1 + 0x82) == '\0') {
    uVar4 = 0x4e;
  }
  else {
    uVar4 = 0x59;
  }
  FUN_00002898(DAT_0008c048,*(undefined1 *)(param_1 + 0x1d),*(undefined1 *)(param_1 + 0x1c),uVar3,
               uVar2,uVar4);
  if (*(char *)(param_1 + 0x82) == '\0') {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
    FUN_00172844(&uStack_20,*(undefined4 *)(param_1 + 0x6c));
    if (*(char *)(param_1 + 0x1c) == '\0') {
      cVar1 = *(char *)(param_1 + 0x1d);
      if (cVar1 == '\0') {
        *(undefined1 *)(param_1 + 0x1d) = 2;
        *(undefined1 *)(param_1 + 0x75) = param_2;
        FUN_0023cc18(param_1 + 0x50);
        uVar5 = FUN_0022e51c(param_1 + 0x50);
        if (uVar5 < *(byte *)(param_1 + 0x75)) {
          FUN_0023ccd0(param_1 + 0x50,*(undefined1 *)(param_1 + 0x75));
        }
        FUN_0008be44(param_1);
      }
      else if (((cVar1 == '\x01') || (cVar1 == '\x02')) || (cVar1 == '\x03')) {
        uVar3 = 0xfffffffe;
      }
    }
    else {
      uVar3 = 0xfffffffa;
    }
    FUN_0017286c(&uStack_20);
  }
  return CONCAT44(uVar2,uVar3);
}

