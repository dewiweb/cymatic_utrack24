// rea decompile_all
// name: FUN_000b0224
// address: 0xb0224
// body: available
// range: 0xb0224-0xb035f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000b0224(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_10 [4];
  
  iVar1 = FUN_00070ef0(param_1,s_uTrackCopperLan_000b0364,0,0x40,DAT_000b0360,DAT_000b0360,
                       DAT_000b0360,DAT_000b0360,DAT_000b0360,DAT_000b0360);
  iVar1 = FUN_00143204(iVar1 + 0x114);
  iVar1 = FUN_0012d308(iVar1 + 4);
  iVar1 = FUN_001724cc(iVar1 + 4);
  iVar1 = FUN_001724b8(iVar1 + 4);
  iVar1 = FUN_00172448(iVar1 + 4);
  piVar2 = (int *)FUN_001724e0(iVar1 + 4);
  iVar1 = DAT_000b0374;
  piVar2[-0x4a] = DAT_000b0374;
  piVar2[-5] = iVar1 + 0x68;
  piVar2[-4] = iVar1 + 0x88;
  piVar2[-3] = iVar1 + 0x94;
  piVar2[-2] = iVar1 + 0xa8;
  piVar2[-1] = iVar1 + 200;
  *piVar2 = iVar1 + 0xe0;
  piVar2[1] = 0;
  piVar2[2] = 0;
  piVar2[3] = 0;
  iVar1 = FUN_00090b28(piVar2 + 0x1f);
  *(undefined1 *)(iVar1 + 0xa0) = 0;
  iVar1 = FUN_00145ff8(iVar1 + 0x3d0);
  iVar1 = FUN_0013eb08(iVar1 + 0x2d4);
  uVar3 = FUN_00230430(auStack_10);
  iVar1 = FUN_00236914(iVar1 + 0x98,uVar3);
  FUN_0006f678(iVar1 + -0x8e0);
  return iVar1 + -0x8e0;
}

