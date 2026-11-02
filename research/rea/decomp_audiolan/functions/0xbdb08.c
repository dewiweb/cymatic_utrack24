// rea decompile_all
// name: FUN_000bdb08
// address: 0xbdb08
// body: available
// range: 0xbdb08-0xbdbef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000bdb08(int param_1,uint param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  undefined1 uVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 local_20;
  int iStack_1c;
  uint local_18;
  
  pbVar3 = *(byte **)(param_1 + 0x128);
  pbVar5 = *(byte **)(param_1 + 300);
  local_18._0_1_ = (undefined1)param_2;
  uVar2 = (undefined1)local_18;
  uVar6 = param_2 & 0xff;
  while( true ) {
    if (pbVar3 != pbVar5) {
      param_4 = (uint)*pbVar3;
    }
    if (pbVar3 == pbVar5 || param_4 == uVar6) break;
    pbVar3 = pbVar3 + 1;
  }
  iStack_1c = param_1;
  local_18 = param_2;
  if (pbVar5 != pbVar3) {
    iVar4 = FUN_00041c14(DAT_000bdbf4,&local_20);
    if (iVar4 != 0) {
      iVar4 = FUN_00048f94(local_20,DAT_000bdbf8,uVar6);
      FUN_00041dd4(local_20);
      uVar1 = DAT_000bdbfc;
      if (iVar4 != 0) {
        FUN_001a0700();
        *(undefined1 *)(param_1 + 0x251) = uVar2;
        FUN_000be614(param_1);
        FUN_000bd1e4(param_1);
        FUN_001a0d18(uVar1);
        return 1;
      }
    }
    FUN_000028a4(DAT_000bdbf8 + -400);
    return 0;
  }
  FUN_000028a4(DAT_000bdbf0,uVar6);
  return 0;
}

