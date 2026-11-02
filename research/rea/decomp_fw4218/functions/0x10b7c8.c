// rea decompile_all
// name: FUN_0010b7c8
// address: 0x10b7c8
// body: available
// range: 0x10b7c8-0x10b8cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0010b7c8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  
  iVar1 = FUN_0010fce8(param_1,param_2,param_3,param_4,param_5,param_6);
  piVar2 = (int *)FUN_00143204(iVar1 + 0xd4);
  iVar1 = DAT_0010b8d0;
  piVar2[-0x35] = DAT_0010b8d0;
  piVar2[-0x2f] = iVar1 + 0xa8;
  *piVar2 = iVar1 + 0xb8;
  uVar3 = FUN_00230d7c(auStack_28);
  iVar1 = FUN_00244878(piVar2 + 3,uVar3);
  uVar3 = FUN_0023299c(auStack_2c,auStack_30);
  FUN_0024331c(iVar1 + -0x4c,5,uVar3);
  FUN_002329f0(auStack_2c);
  uVar3 = FUN_0023299c(auStack_2c,auStack_30);
  FUN_0024331c(iVar1 + -0x40,5,uVar3);
  FUN_002329f0(auStack_2c);
  FUN_00244634(iVar1,5);
  uVar3 = FUN_000f4e84();
  FUN_000f4e44(uVar3,iVar1 + -0xc);
  return iVar1 + -0xe0;
}

