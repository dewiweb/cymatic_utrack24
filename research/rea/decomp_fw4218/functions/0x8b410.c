// rea decompile_all
// name: FUN_0008b410
// address: 0x8b410
// body: available
// range: 0x8b410-0x8b517 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0008b410(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [12];
  
  uVar7 = 0;
  FUN_0023cec0(auStack_30,param_1 + 0x50);
  FUN_0023cc18(param_1 + 0x50);
  FUN_0023ccd0(param_1 + 0x50,*(undefined1 *)(param_1 + 0x75));
  for (uVar6 = 0; uVar5 = FUN_0022e4a0(auStack_30), uVar6 < uVar5; uVar6 = uVar6 + 1) {
    FUN_0023cff0(auStack_30,uVar6);
    iVar2 = FUN_001b9eb8();
    if (iVar2 == param_2) {
      uVar7 = 1;
    }
    else {
      FUN_0023cff0(auStack_30,uVar6);
      FUN_001b9ed0();
      uVar3 = FUN_0022d49c();
      cVar1 = FUN_0022e4a0(param_1 + 0x50);
      FUN_0023cff0(auStack_30,uVar6);
      uVar4 = FUN_001b9eb8();
      uVar3 = FUN_00111458(auStack_48,uVar4,cVar1 + '\x01',uVar3,1);
      FUN_0023ce2c(param_1 + 0x50,uVar3);
      FUN_00111568(auStack_48);
    }
  }
  FUN_0023cf90(auStack_30);
  return uVar7;
}

