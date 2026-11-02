// rea decompile_all
// name: FUN_00083c7c
// address: 0x83c7c
// body: available
// range: 0x83c7c-0x83df3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00083c7c(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 auStack_274 [72];
  undefined1 auStack_22c [4];
  undefined1 auStack_228 [512];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  
  FUN_00232084(auStack_28,DAT_00083df4);
  iVar2 = FUN_0022d19c(DAT_00083df4);
  FUN_0022d1b0(auStack_20,auStack_28,0,iVar2 + -10);
  FUN_0023223c(auStack_28,auStack_20);
  FUN_00232190(auStack_20);
  uVar3 = FUN_0022d168(auStack_28);
  FUN_00002934(auStack_228,0x100,u__ls__04d__wav_00083df8,uVar3,param_2);
  uVar3 = FUN_00230e4c(auStack_24);
  FUN_00231ef4(auStack_22c,auStack_228,uVar3);
  uVar3 = FUN_00083bc0(param_1,param_2);
  FUN_0017111c(auStack_274,0,auStack_22c,0,0xffffffff,param_2,0,uVar3,0xffffffff,0);
  for (bVar1 = 0; bVar1 < 0x18; bVar1 = bVar1 + 1) {
    iVar2 = FUN_0023bdc8(DAT_00083e14,bVar1);
    FUN_001710f4(auStack_274,bVar1,(int)(char)*(undefined4 *)(iVar2 + 0xc));
  }
  piVar4 = (int *)FUN_000f8ee0();
  iVar2 = (**(code **)(*piVar4 + 0x80))(piVar4,auStack_274);
  if (iVar2 == 0) {
    uVar3 = FUN_0022d168(auStack_22c);
    FUN_00002898(DAT_00083e1c,DAT_00083e18,uVar3);
  }
  FUN_001711c4(auStack_274);
  FUN_00232190(auStack_22c);
  FUN_00232190(auStack_28);
  return 1;
}

