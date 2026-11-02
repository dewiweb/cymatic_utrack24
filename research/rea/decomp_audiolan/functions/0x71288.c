// rea decompile_all
// name: FUN_00071288
// address: 0x71288
// body: available
// range: 0x71288-0x7131f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00071288(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  undefined4 local_18;
  undefined1 auStack_14 [4];
  
  uVar1 = FUN_0017b3e4();
  FUN_0017b4a8(uVar1,0,&local_18);
  while( true ) {
    uVar2 = (uint)*(byte *)(param_1 + 0x48);
    bVar4 = uVar2 == 0;
    if (bVar4) {
      uVar2 = *(uint *)(param_1 + 0x44);
    }
    if (bVar4 && uVar2 == 0) break;
    thunk_EXT_FUN_00400100(param_1 + 0x24);
    iVar3 = thunk_EXT_FUN_004001ec(param_1 + 0x24,param_2);
    if (iVar3 != 0) {
      uVar1 = FUN_0017b3e4();
      FUN_0017b4a8(uVar1,local_18,auStack_14);
      return 0;
    }
  }
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  uVar1 = FUN_0017b3e4();
  FUN_0017b4a8(uVar1,local_18,auStack_14);
  return 1;
}

