// rea decompile_all
// name: FUN_0006a654
// address: 0x6a654
// body: available
// range: 0x6a654-0x6a6d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_0006a654(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint local_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  local_20 = param_2;
  iStack_1c = param_3;
  uStack_18 = param_4;
  uVar1 = FUN_0022e594(param_1 + 0xc0);
  if (param_2 < uVar1) {
    FUN_001a2920(&iStack_1c,param_1 + 0x144);
    *(char *)(param_1 + 0x118) = (char)param_2;
    if (param_3 == 0) {
      FUN_00069e54(param_1);
    }
    else {
      uVar2 = FUN_0022edd8(param_1 + 0x100);
      local_20 = 1;
      FUN_002436d8(param_1 + 0x100,uVar2,&local_20);
    }
    FUN_001a2938(&iStack_1c);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(local_20,uVar2);
}

