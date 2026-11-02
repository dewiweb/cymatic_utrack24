// rea decompile_all
// name: FUN_001d28e0
// address: 0x1d28e0
// body: available
// range: 0x1d28e0-0x1d2ba3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001d28e0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  int iVar14;
  int extraout_r3;
  int iVar15;
  bool bVar16;
  
  iVar1 = DAT_001d2bd8;
  piVar4 = DAT_001d2bd4;
  iVar12 = DAT_001d2bac;
  iVar15 = DAT_001d2ba4;
  *DAT_001d2bd4 = DAT_001d2ba4;
  piVar4[4] = iVar12;
  piVar4[1] = iVar1 - iVar15;
  iVar5 = DAT_001d2be0;
  iVar1 = DAT_001d2bb4;
  piVar4[5] = DAT_001d2bdc - iVar12;
  iVar6 = DAT_001d2bec;
  iVar3 = DAT_001d2bcc;
  iVar2 = DAT_001d2bc4;
  iVar12 = DAT_001d2bbc;
  iVar13 = DAT_001d2be4 - DAT_001d2bbc;
  iVar14 = DAT_001d2be8 - DAT_001d2bc4;
  piVar4[6] = iVar1;
  piVar4[0xb] = iVar14;
  piVar4[3] = iVar6 - iVar3;
  piVar4[2] = iVar3;
  piVar4[7] = iVar5 - iVar1;
  piVar4[8] = iVar12;
  piVar4[9] = iVar13;
  piVar4[10] = iVar2;
  iVar12 = FUN_001db0e4();
  FUN_00006604(iVar15,iVar12);
  piVar7 = DAT_001d2bf0;
  if (extraout_r1 != 0) {
    iVar15 = iVar15 + (iVar12 - extraout_r1);
  }
  *DAT_001d2bf0 = iVar15;
  piVar7[1] = piVar4[1] - (iVar15 - *piVar4);
  piVar7[-0x10] = piVar4[2];
  piVar7[-0xf] = piVar4[3];
  iVar12 = piVar4[4];
  iVar15 = FUN_001db0e4();
  FUN_00006604(iVar12,iVar15);
  piVar8 = DAT_001d2bf4;
  if (extraout_r1_00 != 0) {
    iVar12 = iVar12 + (iVar15 - extraout_r1_00);
  }
  *DAT_001d2bf4 = iVar12;
  piVar8[1] = piVar4[5] - (iVar12 - piVar4[4]);
  iVar12 = piVar4[6];
  iVar15 = FUN_001db0e4();
  FUN_00006604(iVar12,iVar15);
  piVar9 = DAT_001d2bf8;
  if (extraout_r1_01 != 0) {
    iVar12 = iVar12 + (iVar15 - extraout_r1_01);
  }
  *DAT_001d2bf8 = iVar12;
  piVar9[1] = piVar4[7] - (iVar12 - piVar4[6]);
  iVar12 = piVar4[8];
  iVar15 = FUN_001db0e4();
  FUN_00006604(iVar12,iVar15);
  piVar10 = DAT_001d2bfc;
  if (extraout_r1_02 != 0) {
    iVar12 = iVar12 + (iVar15 - extraout_r1_02);
  }
  *DAT_001d2bfc = iVar12;
  piVar10[1] = piVar4[9] - (iVar12 - piVar4[8]);
  iVar12 = piVar4[10];
  iVar15 = FUN_001db0e4();
  FUN_00006604(iVar12,iVar15);
  piVar11 = _DAT_001d2c00;
  if (extraout_r1_03 != 0) {
    iVar12 = iVar12 + (iVar15 - extraout_r1_03);
  }
  *_DAT_001d2c00 = iVar12;
  piVar11[1] = piVar4[0xb] - (iVar12 - piVar4[10]);
  bVar16 = piVar7[-0x10] == 0;
  iVar15 = extraout_r3;
  if (!bVar16) {
    iVar15 = piVar7[-0xf];
  }
  if ((((bVar16 || iVar15 == 0) ||
       (iVar15 = FUN_001ef4f0(piVar7 + -0xe,s_E_HeapNoCached_Memory_001d2c02 + 2), iVar15 == 0)) &&
      (iVar15 = FUN_001ef4f0(piVar7 + 2,s_Heap_Memory_001d2c18,*piVar7,piVar7[1]), iVar15 == 0)) &&
     (((iVar15 = FUN_001ef4f0(piVar8 + 2,s_UMR0_Memory_001d2c24,*piVar8,piVar8[1]), iVar15 == 0 &&
       (iVar15 = FUN_001ef4f0(piVar9 + 2,s_TCM_WLAN_Memory_001d2c30,*piVar9,piVar9[1]), iVar15 == 0)
       ) && ((iVar15 = FUN_001ef4f0(piVar10 + 2,s_TCM_WARP_Memory_001d2c40,*piVar10,piVar10[1]),
             iVar15 == 0 &&
             (iVar15 = FUN_001ef4f0(piVar11 + 2,s_TCM_SOL_Memory_001d2c50,*piVar11,piVar11[1]),
             iVar15 == 0)))))) {
    return 0;
  }
  return 0xffffffff;
}

