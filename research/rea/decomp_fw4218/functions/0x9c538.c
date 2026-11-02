// rea decompile_all
// name: FUN_0009c538
// address: 0x9c538
// body: available
// range: 0x9c538-0x9c5c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0009c538(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_34 [8];
  undefined1 auStack_2c [28];
  
  FUN_001a2920(auStack_34,param_1 + 0x10);
  if (*(int *)(param_1 + 0x54) == 0) {
    FUN_00002898(DAT_0009c5c4);
    FUN_001a2938(auStack_34);
    uVar1 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x78);
    if (iVar2 < 0) {
      iVar2 = *(int *)(param_1 + 0x74);
    }
    iVar3 = *(int *)(param_1 + 0x70);
    if (iVar3 < 0) {
      iVar3 = *(int *)(param_1 + 0x6c);
    }
    if (param_2 == 0xffffffff) {
      if (*(int *)(param_1 + 0x80) != 0) {
        FUN_000ed2b8(auStack_2c,0xffffffff,0,0,0,0,0xffffffff);
        FUN_00003b88(param_1 + 0x7c,auStack_2c,0x1c);
      }
      FUN_001a2938(auStack_34);
      uVar1 = 1;
    }
    else {
      uVar1 = FUN_001b6d24(*(int *)(param_1 + 0x54),param_2 & 0xffff,iVar2,iVar3,param_1 + 0x7c);
      FUN_001a2938(auStack_34);
    }
  }
  return uVar1;
}

