// rea decompile_all
// name: FUN_000e2da8
// address: 0xe2da8
// body: available
// range: 0xe2da8-0xe2ed7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000e2da8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  FUN_00002898(s_TRACE__________>_becameMaster_000e2ed8);
  FUN_000f4e84();
  uVar1 = FUN_000f4fb4();
  FUN_0006d824(uVar1,1);
  FUN_0006de44(uVar1,1);
  *(undefined1 *)(param_1 + 0xbc) = 0;
  for (iVar2 = FUN_0023cc00(param_2); iVar4 = FUN_0023cbe8(param_2), iVar4 != iVar2;
      iVar2 = iVar2 + 0x18) {
    *(char *)(param_1 + 0xbc) = *(char *)(param_1 + 0xbc) + '\x01';
    uVar5 = FUN_001b9eb8(iVar2);
    uVar3 = FUN_001b9edc(iVar2);
    FUN_0006d9b8(uVar1,uVar3,uVar5);
    FUN_00002898(s_TRACE__Total_Slaves_are__d_000e2efc,*(undefined1 *)(param_1 + 0xbc));
  }
  FUN_0006d910(uVar1,0);
  FUN_0003bd34(0xb4);
  FUN_0003bd78(0xbe);
  FUN_001a48f0(param_1,0x4f,0);
  FUN_001a48f0(param_1,0x32,0);
  FUN_000aa570();
  uVar1 = FUN_000aa88c();
  FUN_000f4e84();
  uVar5 = FUN_000f4fc0();
  uVar5 = FUN_001b5a3c(uVar5);
  FUN_0008c990(uVar1,uVar5);
  FUN_001a48f0(param_1,0x56,0);
  return;
}

