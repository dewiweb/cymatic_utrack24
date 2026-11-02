// rea decompile_all
// name: FUN_000a588c
// address: 0xa588c
// body: available
// range: 0xa588c-0xa5903 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000a588c(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_9c [128];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [8];
  
  FUN_000033f4(auStack_9c,*param_2,0x40);
  uVar1 = s_l___pG_000a5904._0_4_;
  uVar2 = FUN_00231ef4(auStack_18,auStack_9c,auStack_14);
  piVar3 = (int *)FUN_001a2f10(auStack_1c,uVar2);
  iVar4 = *piVar3;
  if (*(int *)(iVar4 + -0xc) == -1) {
    if ((int *)uVar1 != piVar3) {
      FUN_0023181c(uVar1,0,*(undefined4 *)(*(int *)uVar1 + -4),iVar4,*(undefined4 *)(iVar4 + -4),0,
                   *(undefined4 *)(iVar4 + -4));
    }
  }
  else {
    FUN_00208ac0((int *)(iVar4 + -0xc));
    FUN_00231ebc(uVar1);
    *(int *)uVar1 = *piVar3;
  }
  FUN_00232190(auStack_1c);
  FUN_00231ebc(auStack_18);
  return 0;
}

