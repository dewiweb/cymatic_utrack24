// rea decompile_all
// name: FUN_0005565c
// address: 0x5565c
// body: available
// range: 0x5565c-0x55783 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0005565c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_2c [2];
  
  uVar3 = 0;
  iVar5 = param_1 + 0x24;
  FUN_001f00bc(iVar5);
  iVar1 = FUN_00052500(param_2,param_3);
  if (iVar1 == 0) {
    FUN_001f06d4(iVar5);
    return 0;
  }
  iVar4 = param_1 + 0x24;
  FUN_001f00bc(iVar4);
  iVar2 = FUN_00003d18(*(undefined4 *)(iVar1 + 8),param_4);
  if (iVar2 == 0) {
    FUN_001f06d4(iVar4);
    uVar3 = 1;
  }
  else {
    iVar2 = FUN_00052874(iVar1,param_4);
    if (iVar2 != 0) {
      FUN_001b0f2c(local_2c,iVar1);
      uVar3 = FUN_00054604(param_1,0,local_2c[0],param_4);
      FUN_002329f0(local_2c);
    }
    FUN_001f06d4(iVar4);
  }
  FUN_001f06d4(iVar5);
  return uVar3;
}

