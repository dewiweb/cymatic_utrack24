// rea decompile_all
// name: FUN_001ae384
// address: 0x1ae384
// body: available
// range: 0x1ae384-0x1ae3e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001ae384(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_1c = param_2;
  local_18 = param_3;
  local_14 = param_4;
  iVar1 = FUN_0006f3bc();
  uVar2 = 0;
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 8) == 0) {
      iVar3 = FUN_001ce2b4(iVar1 + 0x174,&local_1c,0x32);
      iVar4 = local_1c;
      if (iVar3 != 0) {
        FUN_00002898(s__s__available_Blocks____d__d__bl_001ae3e8,*(undefined4 *)(iVar1 + 0x178),
                     *(undefined4 *)(iVar1 + 0x17c),*(undefined4 *)(iVar1 + 0x184),iVar3);
        iVar4 = 0;
      }
      *(int *)(param_1 + 8) = iVar4;
      uVar2 = 0;
      if (iVar4 != 0) {
        local_1c = 1;
        local_14 = 0x40;
        local_18 = 0;
        FUN_000470a0(iVar4,9,0xff,0xff,0xffffffff);
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

