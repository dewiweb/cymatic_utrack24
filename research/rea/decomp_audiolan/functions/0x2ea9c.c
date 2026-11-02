// rea decompile_all
// name: FUN_0002ea9c
// address: 0x2ea9c
// body: available
// range: 0x2ea9c-0x2eb0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0002e936) */
/* WARNING: Removing unreachable block (ram,0x0002ea1e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002ea9c(void)

{
  char cVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_r4;
  int unaff_r5;
  
  uVar5 = DAT_0002ec3c;
  iVar4 = FUN_00030b90(DAT_0002ec3c);
  if (iVar4 != 0) {
    FUN_00029e6c(uVar5);
    FUN_00029eac(6,DAT_0002ed48);
  }
  iVar4 = *(int *)(unaff_r5 + 0xc);
  FUN_000358f6(*(undefined2 *)(iVar4 + 0x34));
  cVar1 = *(char *)(iVar4 + 0x2c);
  cVar2 = *(char *)(iVar4 + 0x2d);
  uVar3 = FUN_000358f6(*(undefined2 *)(iVar4 + 0x1e));
  FUN_0002fef8(unaff_r4,uVar3,iVar4 + 0x14,cVar1 - cVar2);
  iVar4 = FUN_00030b90();
  if (iVar4 != 0) {
    uVar5 = FUN_00029e6c();
    FUN_0002c114(uVar5,_DAT_0002ed4c);
    return;
  }
  FUN_00030aa4();
  return;
}

