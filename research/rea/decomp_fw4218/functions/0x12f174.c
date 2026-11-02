// rea decompile_all
// name: FUN_0012f174
// address: 0x12f174
// body: available
// range: 0x12f174-0x12f2a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0012f174(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  int local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_28 = param_1;
  uStack_24 = param_2;
  uStack_20 = param_3;
  uStack_1c = param_4;
  iVar1 = FUN_001b6806(param_2);
  if ((((iVar1 == 2) && (iVar1 = FUN_001b67dc(param_2), iVar1 == 0)) &&
      (iVar1 = FUN_001b67f4(param_2), iVar1 == 0x82)) &&
     (((iVar1 = FUN_001b6c04(param_2), iVar1 == 0 && (iVar1 = FUN_001b6c18(param_2), iVar1 == 7)) &&
      (iVar1 = FUN_001b6b94(param_2), iVar1 == 1)))) {
    FUN_001fe200();
    uVar4 = FUN_001fe3fc();
    *(undefined8 *)(param_1 + 0x30) = uVar4;
    FUN_001ae4ec(&uStack_24,0,0xff,0xffffffff);
    iVar1 = FUN_001c0d74(&uStack_24);
    if (iVar1 == 0) {
      FUN_00002898(DAT_0012f2a8);
      FUN_000d3858(param_1);
      FUN_001ae614(&uStack_24);
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_001b6c2c(param_2);
      FUN_001ae420(&uStack_24,uVar2);
      puVar3 = (undefined1 *)FUN_001c0d4a(&uStack_24);
      iVar1 = FUN_002037e4(param_1 + 0x14,&local_28);
      if (iVar1 == 0) {
        local_28 = 0;
      }
      *puVar3 = (undefined1)local_28;
      FUN_000d37dc(param_1,&uStack_24);
      FUN_001ae614(&uStack_24);
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

