// rea decompile_all
// name: FUN_00034054
// address: 0x34054
// body: available
// range: 0x34054-0x340c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00033eee) */
/* WARNING: Removing unreachable block (ram,0x00033fd6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00034054(void)

{
  char cVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_r4;
  int unaff_r5;
  
  uVar5 = _DAT_0003417c;
  iVar4 = FUN_000366e0(_DAT_0003417c);
  if (iVar4 != 0) {
    FUN_0002f9bc(uVar5);
    FUN_0002f9fc(6,s___MM__UNICAST_MASTER_MAX_TABLE_S_000342e2 + 2);
  }
  iVar4 = *(int *)(unaff_r5 + 0xc);
  FUN_0003b6a2(*(undefined2 *)(iVar4 + 0x34));
  cVar1 = *(char *)(iVar4 + 0x2c);
  cVar2 = *(char *)(iVar4 + 0x2d);
  uVar3 = FUN_0003b6a2(*(undefined2 *)(iVar4 + 0x1e));
  FUN_00035a48(unaff_r4,uVar3,iVar4 + 0x14,cVar1 - cVar2);
  iVar4 = FUN_000366e0();
  if (iVar4 != 0) {
    uVar5 = FUN_0002f9bc();
    FUN_00031c64(uVar5,_DAT_00034324);
    return;
  }
  FUN_000365f4();
  return;
}

