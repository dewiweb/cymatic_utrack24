// rea decompile_all
// name: FUN_000e634c
// address: 0xe634c
// body: available
// range: 0xe634c-0xe6427 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000e634c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_34 [16];
  
  FUN_00002898(s_TRACE__startRecordingAsMaster____000e6428);
  FUN_000aa570();
  uVar1 = FUN_000aa88c();
  FUN_000f4e84();
  uVar2 = FUN_000f5150();
  uVar2 = FUN_001b6f18(uVar2);
  iVar3 = FUN_000bdf40(param_1 + 0x14,uVar2);
  if (param_2 == 0) {
    iVar3 = iVar3 << 1;
  }
  iVar4 = FUN_00012c20();
  iVar4 = iVar4 + iVar3;
  FUN_0008bee0(uVar1,iVar4);
  FUN_00176c04(auStack_34);
  FUN_00176be4(auStack_34,iVar4);
  FUN_00002898(s_TRACE__Recording_Starts_in_Maste_000e6454,iVar4);
  piVar5 = (int *)FUN_000f8ee0();
  (**(code **)(*piVar5 + 0x80))(piVar5,auStack_34);
  FUN_001a48f0(param_1,0x43,0);
  FUN_00176c4c(auStack_34);
  return;
}

