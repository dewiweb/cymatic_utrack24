// rea decompile_all
// name: FUN_0003b9f0
// address: 0x3b9f0
// body: available
// range: 0x3b9f0-0x3ba3d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0003b9f0(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_40 [32];
  undefined2 local_20;
  undefined4 local_1c;
  
  pcVar1 = DAT_0003ba40;
  uVar3 = 0;
  if (*DAT_0003ba40 != '\0') {
    if (DAT_0003ba40[1] == '\0') {
      iVar2 = FUN_0002cc64(DAT_0003ba44,param_1);
      if (iVar2 == 0) {
        return 0;
      }
      FUN_0003afe2(iVar2,param_2);
    }
    else {
      FUN_0002c41c(auStack_40,0x14);
      local_20 = (undefined2)param_1;
      if ((pcVar1[1] != '\0') && (*pcVar1 != '\0')) {
        local_1c = param_2;
        FUN_0003b260();
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}

