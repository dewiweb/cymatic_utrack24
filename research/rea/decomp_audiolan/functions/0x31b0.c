// rea decompile_all
// name: FUN_000031b0
// address: 0x31b0
// body: available
// range: 0x31b0-0x321b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_000031b0(byte *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  bool bVar9;
  
  bVar9 = false;
  pbVar6 = param_1;
  do {
    pbVar5 = pbVar6;
    uVar8 = (uint)*pbVar5;
    pbVar6 = pbVar5 + 1;
    if (uVar8 == 0) break;
    piVar2 = (int *)FUN_00002428();
  } while ((*(byte *)(*piVar2 + uVar8) & 1) != 0);
  pbVar7 = pbVar6;
  if ((uVar8 != 0x2b) && (pbVar7 = pbVar5, uVar8 == 0x2d)) {
    bVar9 = true;
    pbVar7 = pbVar6;
  }
  iVar3 = FUN_000045de(pbVar7,param_2,param_3);
  if ((param_2 != (undefined4 *)0x0) && ((byte *)*param_2 == pbVar7)) {
    *param_2 = param_1;
  }
  if (bVar9) {
    iVar1 = -iVar3;
    bVar9 = iVar3 != 0;
    iVar3 = iVar1;
    if (bVar9 && -1 < iVar1) {
      puVar4 = (undefined4 *)FUN_00003d0c();
      *puVar4 = 2;
      iVar3 = -0x80000000;
    }
  }
  else if (iVar3 < 0) {
    puVar4 = (undefined4 *)FUN_00003d0c();
    *puVar4 = 2;
    return CONCAT44(param_1,DAT_0000321c);
  }
  return CONCAT44(param_1,iVar3);
}

