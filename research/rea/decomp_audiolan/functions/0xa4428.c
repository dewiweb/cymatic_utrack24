// rea decompile_all
// name: FUN_000a4428
// address: 0xa4428
// body: available
// range: 0xa4428-0xa45f7 inclusive
// range: 0x15908c-0x1590c7 inclusive
// range: 0x159148-0x1591d7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00159150) */
/* WARNING: Removing unreachable block (ram,0x00159194) */
/* WARNING: Removing unreachable block (ram,0x00159198) */
/* WARNING: Removing unreachable block (ram,0x001591a0) */
/* WARNING: Removing unreachable block (ram,0x001591ac) */
/* WARNING: Removing unreachable block (ram,0x001591b0) */
/* WARNING: Removing unreachable block (ram,0x001591b4) */
/* WARNING: Removing unreachable block (ram,0x001591bc) */
/* WARNING: Removing unreachable block (ram,0x001591c0) */
/* WARNING: Removing unreachable block (ram,0x00159160) */
/* WARNING: Removing unreachable block (ram,0x00159180) */
/* WARNING: Removing unreachable block (ram,0x00159168) */

undefined4 FUN_000a4428(int *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar2 = FUN_00011804();
  uVar3 = FUN_000117fc();
  piVar4 = (int *)FUN_000117f0(uVar2,uVar3);
  puVar1 = DAT_000a45f8;
  iVar8 = *piVar4;
  if ((DAT_000a45f8[1] & 7) != 0) {
    uVar5 = *DAT_000a45f8;
    uVar10 = FUN_001e3634(1 << (uVar5 & 3));
    uVar11 = FUN_001e3634((uVar5 & 0x1fffff) >> 0x10);
    uVar12 = FUN_001e3634((uVar5 & 0xffff) >> 8);
    uVar11 = FUN_001e3108((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar11,
                          (int)((ulonglong)uVar11 >> 0x20));
    uVar12 = FUN_001e3634(iVar8);
    uVar11 = FUN_001e378c((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar11,
                          (int)((ulonglong)uVar11 >> 0x20));
    FUN_001e3108((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                 (int)((ulonglong)uVar10 >> 0x20));
    iVar8 = FUN_001e34dc();
  }
  *param_1 = iVar8;
  uVar9 = puVar1[4] & 0x3f;
  iVar6 = FUN_00006158(iVar8,uVar9);
  param_1[1] = iVar6;
  uVar5 = puVar1[5];
  iVar6 = FUN_00006158(iVar8 * (uVar5 & 0xf),uVar9);
  param_1[2] = iVar6;
  iVar6 = FUN_00006158(iVar8 * ((uVar5 & 0xff) >> 4),uVar9);
  param_1[3] = iVar6;
  iVar6 = FUN_00006158(iVar8 * ((uVar5 & 0xfff) >> 8),uVar9);
  param_1[4] = iVar6;
  iVar6 = FUN_00006158(iVar8 * ((uVar5 & 0xffff) >> 0xc),uVar9);
  param_1[5] = iVar6;
  iVar6 = FUN_00006158(iVar8 * ((uVar5 & 0xfffff) >> 0x10),uVar9);
  param_1[6] = iVar6;
  iVar6 = FUN_00006158(iVar8 * ((uVar5 & 0xffffff) >> 0x14),uVar9);
  param_1[7] = iVar6;
  iVar6 = FUN_00006158(iVar8 * ((uVar5 & 0xfffffff) >> 0x18),uVar9);
  param_1[8] = iVar6;
  iVar8 = FUN_00006158(iVar8 * (uVar5 >> 0x1c),uVar9);
  param_1[9] = iVar8;
  FUN_00003628(param_1 + 10,(int)piVar4 + 0x15,7);
  iVar8 = piVar4[8];
  iVar6 = piVar4[9];
  iVar7 = piVar4[10];
  param_1[0xc] = piVar4[7];
  param_1[0xd] = iVar8;
  param_1[0xe] = iVar6;
  param_1[0xf] = iVar7;
  iVar8 = piVar4[0xc];
  iVar6 = piVar4[0xd];
  param_1[0x10] = piVar4[0xb];
  param_1[0x11] = iVar8;
  param_1[0x12] = iVar6;
  uVar5 = 0;
  do {
    switch(*(undefined1 *)((int)param_1 + uVar5 + 0x28)) {
    case 0:
    case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 7);
  return 1;
}

