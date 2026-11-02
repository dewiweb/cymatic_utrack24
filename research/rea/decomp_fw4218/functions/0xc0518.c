// rea decompile_all
// name: FUN_000c0518
// address: 0xc0518
// body: available
// range: 0xc0518-0xc0627 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_000c0518(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 auStack_6c [68];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  
  iVar1 = FUN_0022cefc(param_2,&DAT_000c0628,0xffffffff);
  FUN_0022d1b0(auStack_24,param_2,iVar1 + 1,0xffffffff);
  FUN_00231500(auStack_24,u__set_000c062c);
  FUN_00248acc(auStack_20,param_2,&DAT_000c0628);
  FUN_00248b50(auStack_28,auStack_20,auStack_24);
  FUN_00232190(auStack_20);
  puVar2 = (undefined4 *)FUN_000cbaf0();
  uVar3 = (**(code **)*puVar2)(puVar2);
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  FUN_000d6f54(auStack_6c,param_1 + 4,*(undefined4 *)(param_1 + 0x58),auStack_28);
  piVar4 = (int *)FUN_000cbaf0();
  iVar1 = (**(code **)(*piVar4 + 8))(piVar4,auStack_6c,0xffffffff);
  if (iVar1 == 0) {
    FUN_000d6fb8(auStack_6c);
    FUN_00232190(auStack_28);
    FUN_00232190(auStack_24);
  }
  else {
    FUN_000d6fb8(auStack_6c);
    FUN_00232190(auStack_28);
    FUN_00232190(auStack_24);
  }
  return iVar1 == 0;
}

