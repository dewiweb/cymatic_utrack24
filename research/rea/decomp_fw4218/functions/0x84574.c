// rea decompile_all
// name: FUN_00084574
// address: 0x84574
// body: available
// range: 0x84574-0x84603 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_00084574(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_30 = param_1;
  iStack_2c = param_2;
  uStack_28 = param_3;
  uStack_24 = param_4;
  FUN_000aa570();
  uVar1 = FUN_000aa88c();
  if (param_2 == 0) {
    uVar2 = *(uint *)(DAT_00084604 + 0x1c);
  }
  else {
    uVar2 = *(uint *)(DAT_00084604 + 0x1c) >> 2;
  }
  iVar3 = FUN_00012c20();
  FUN_0008bd48(uVar1,iVar3 + uVar2);
  FUN_00176b88(&uStack_30);
  FUN_00176b78(&uStack_30,iVar3 + uVar2);
  piVar4 = (int *)FUN_000f8ee0();
  (**(code **)(*piVar4 + 0x80))(piVar4,&uStack_30);
  FUN_00176bd0(&uStack_30);
  return CONCAT44(iStack_2c,uStack_30);
}

