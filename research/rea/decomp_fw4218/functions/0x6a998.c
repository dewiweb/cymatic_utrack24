// rea decompile_all
// name: FUN_0006a998
// address: 0x6a998
// body: available
// range: 0x6a998-0x6aa9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0006a998(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  FUN_000036d4(param_7,s__index_html_0006aaa0);
  iVar1 = FUN_00003d18(param_3,s__command_0006aaac);
  if (iVar1 == 0) {
    uVar4 = 2;
  }
  else {
    iVar1 = FUN_00003d18(param_3,s__api_fileupload_0006aab8);
    if (iVar1 != 0) {
      return 0;
    }
    FUN_000dfcb0();
    iVar1 = FUN_000e05cc();
    if (iVar1 == 0) {
      return 0;
    }
    FUN_000dfcb0();
    FUN_000e0b50();
    FUN_001d0130(1000);
    uVar4 = 1;
  }
  uVar2 = FUN_000cbd94(param_1);
  FUN_001ad880(uVar2,0xffffffff);
  puVar3 = (undefined1 *)FUN_0023374c(param_1 + 0x44,&local_30);
  *puVar3 = uVar4;
  FUN_000cbd94(param_1);
  FUN_001ad8b0();
  uVar2 = FUN_000cbcf0(param_1,local_30,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return uVar2;
}

