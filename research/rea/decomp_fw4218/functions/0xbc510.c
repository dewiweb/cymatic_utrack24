// rea decompile_all
// name: FUN_000bc510
// address: 0xbc510
// body: available
// range: 0xbc510-0xbc64b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000bc510(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_64 [24];
  undefined1 auStack_4c [28];
  undefined4 local_30;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  
  puVar1 = (undefined4 *)FUN_000cbaf0();
  uVar2 = (**(code **)*puVar1)(puVar1);
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  uVar2 = FUN_00230e4c(auStack_2c);
  uVar3 = FUN_00231ef4(auStack_28,&DAT_000bc64c,uVar2);
  FUN_001156a4(auStack_4c,param_1 + 4,*(undefined4 *)(param_1 + 0x58),uVar3,uVar2);
  FUN_00232190(auStack_28);
  piVar4 = (int *)FUN_000cbaf0();
  iVar5 = (**(code **)(*piVar4 + 8))(piVar4,auStack_4c,0,0xffffffff);
  if (iVar5 == 0) {
    local_30 = FUN_001ba160(auStack_4c);
    FUN_0012c504(auStack_64,param_1 + 4,*(undefined4 *)(param_1 + 0x58),local_30);
    piVar4 = (int *)FUN_000cbaf0();
    (**(code **)(*piVar4 + 8))(piVar4,auStack_64,0xffffffff);
    uVar2 = FUN_001b29dc(auStack_4c);
    FUN_0012c578(auStack_64);
    FUN_001156f4(auStack_4c);
  }
  else {
    uVar2 = FUN_001b29dc(auStack_4c);
    FUN_00002898(DAT_000bc650,uVar2);
    uVar2 = FUN_001b29dc(auStack_4c);
    FUN_001156f4(auStack_4c);
  }
  return uVar2;
}

