// rea decompile_all
// name: FUN_00003374
// address: 0x3374
// body: available
// range: 0x3374-0x33dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_00003374(short *param_1,undefined4 *param_2,undefined4 param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  bool bVar8;
  
  bVar8 = false;
  psVar6 = param_1;
  do {
    psVar5 = psVar6;
    sVar1 = *psVar5;
    psVar6 = psVar5 + 1;
    if (sVar1 == 0) break;
    iVar3 = FUN_000041c6(sVar1);
  } while (iVar3 != 0);
  psVar7 = psVar6;
  if ((sVar1 != 0x2b) && (psVar7 = psVar5, sVar1 == 0x2d)) {
    bVar8 = true;
    psVar7 = psVar6;
  }
  iVar3 = FUN_00004d32(psVar7,param_2,param_3);
  if ((param_2 != (undefined4 *)0x0) && ((short *)*param_2 == psVar7)) {
    *param_2 = param_1;
  }
  if (bVar8) {
    iVar2 = -iVar3;
    bVar8 = iVar3 != 0;
    iVar3 = iVar2;
    if (bVar8 && -1 < iVar2) {
      puVar4 = (undefined4 *)FUN_00004104();
      *puVar4 = 2;
      iVar3 = -0x80000000;
    }
  }
  else if (iVar3 < 0) {
    puVar4 = (undefined4 *)FUN_00004104();
    *puVar4 = 2;
    return CONCAT44(param_1,DAT_000033e0);
  }
  return CONCAT44(param_1,iVar3);
}

