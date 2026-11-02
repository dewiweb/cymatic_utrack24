// rea decompile_all
// name: FUN_0005a234
// address: 0x5a234
// body: available
// range: 0x5a234-0x5a433 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0005a234(undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  puVar2 = (undefined4 *)FUN_000d739c(param_1);
  *puVar2 = _DAT_0005a434;
  iVar3 = FUN_000b51c4(puVar2 + 1);
  iVar3 = FUN_00098f48(iVar3 + 0xc,0xd8,0x40);
  iVar3 = FUN_00203e9c(iVar3 + 0x10);
  iVar3 = FUN_00091838(iVar3 + 0xc,s_z__LCDDisplay_0005a435 + 3);
  *(undefined4 *)(iVar3 + 0x24) = 0;
  *(undefined4 *)(iVar3 + 0x28) = 0;
  iVar3 = FUN_001c70d8(iVar3 + 0x2c,DAT_0005a444,0x70,3);
  *(undefined4 *)(iVar3 + 0x150) = 0;
  iVar3 = FUN_00064a34(iVar3 + 0x154);
  *(undefined1 *)(iVar3 + 0x14) = 0;
  iVar3 = FUN_00064a34(iVar3 + 0x18);
  iVar3 = FUN_000d7ae4(iVar3 + 0x14,0,0,0,0);
  iVar3 = FUN_000fad30(iVar3 + 4);
  iVar6 = iVar3 + -0x1dc;
  FUN_00058654(iVar6);
  FUN_00059130(iVar6);
  FUN_000591b0(iVar6);
  uVar4 = FUN_000b4964();
  FUN_000b472c(uVar4,iVar6);
  iVar5 = FUN_001c6b14(0x114,_DAT_0005a448);
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00070ef0(iVar5,s____LCDDisplayThread_0005a449 + 3,1,10,1,0x18,0x18,0x600,1,1);
  }
  *(undefined4 *)(iVar3 + -0x18c) = uVar4;
  if (*(int *)(iVar3 + -0x18c) == 0) {
    FUN_00003548(s____m_pFunctorThread_0005a461 + 3,_DAT_0005a460,0x55);
  }
  for (iVar5 = 0; iVar5 < 3; iVar5 = iVar5 + 1) {
    FUN_001a2950(iVar3 + -0x184 + iVar5 * 0x70,*(undefined4 *)(iVar3 + -0x18c));
  }
  iVar3 = FUN_001c6b14(0x30,_DAT_0005a448);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0017d474(iVar3,0xd8,0x40,1);
  }
  piVar1 = _DAT_0005a478;
  *_DAT_0005a478 = iVar3;
  if (*piVar1 == 0) {
    FUN_00002898(s_B__ERROR__LCDDisplay__Failed_to_c_0005a479 + 3);
  }
  return iVar6;
}

