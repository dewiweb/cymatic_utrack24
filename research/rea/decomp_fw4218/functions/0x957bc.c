// rea decompile_all
// name: FUN_000957bc
// address: 0x957bc
// body: available
// range: 0x957bc-0x9590b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000957bc(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  
  FUN_001a2920(auStack_3c,param_1);
  if (*(byte *)(param_1 + 0x148) == param_2) {
    FUN_001a2938(auStack_3c);
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_000fc280();
    *(char *)(param_1 + 0x148) = (char)param_2;
    FUN_001b9c34(auStack_34,uVar1);
    uVar2 = FUN_0022d49c(auStack_34);
    FUN_001b9be8(auStack_30,uVar1);
    uVar3 = FUN_0022d49c(auStack_30);
    FUN_001b9c80(auStack_2c,uVar1);
    uVar4 = FUN_0022d49c(auStack_2c);
    FUN_001b9a80(auStack_28,uVar1);
    uVar5 = FUN_0022d49c(auStack_28);
    iVar6 = FUN_000fd8a0(uVar1,*(undefined1 *)(param_1 + 0x148),uVar5,uVar4,uVar3,uVar2,0);
    FUN_002329f0(auStack_28);
    FUN_002329f0(auStack_2c);
    FUN_002329f0(auStack_30);
    FUN_002329f0(auStack_34);
    if (iVar6 == 1) {
      FUN_001a2938(auStack_3c);
      uVar1 = FUN_000f4e84();
      FUN_000f5268(uVar1,0x19);
      uVar1 = FUN_000f4e84();
      FUN_000f5268(uVar1,0x33);
      uVar1 = 1;
    }
    else {
      FUN_00002898(DAT_0009590c,*(undefined1 *)(param_1 + 0x148));
      FUN_001a2938(auStack_3c);
      uVar1 = 0;
    }
  }
  return uVar1;
}

