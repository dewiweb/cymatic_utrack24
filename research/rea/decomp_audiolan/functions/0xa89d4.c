// rea decompile_all
// name: FUN_000a89d4
// address: 0xa89d4
// body: available
// range: 0xa89d4-0xa8d67 inclusive
// range: 0xa8ef4-0xa8f9b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a89d4(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_60 [21];
  undefined1 local_4b;
  undefined1 auStack_48 [21];
  undefined1 local_33;
  undefined1 auStack_30 [21];
  undefined1 local_1b;
  
  FUN_000028a4(s_Misc_registers__000a8d68);
  piVar1 = _DAT_000a8d7c;
  iVar3 = *_DAT_000a8d7c;
  FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8d90,iVar3 + 0x10b0,s_F__ctxReleaseID_000a8d7d + 3,
               *(undefined4 *)(iVar3 + 0x10b0));
  FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8d90,*piVar1 + 0x10c0,s_clientRelease_000a8dac,
               *(undefined4 *)(iVar3 + 0x10c0));
  FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8d90,*piVar1 + 0x10c4,s_stallSet_000a8dbc,
               *(undefined4 *)(iVar3 + 0x10c4));
  FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8d90,*piVar1 + 0x10c8,s_stallClr_000a8dc8,
               *(undefined4 *)(iVar3 + 0x10c8));
  FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8d90,*piVar1 + 0x10cc,s_ctxSup_000a8dd4,
               *(undefined4 *)(iVar3 + 0x10cc));
  FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8d90,*piVar1 + 0x10d0,s_testBusAddr_000a8ddc,
               *(undefined4 *)(iVar3 + 0x10d0));
  iVar3 = 0;
  do {
    iVar2 = *piVar1 + iVar3 * 4;
    uVar4 = *(undefined4 *)(DAT_000a8dfc + iVar2);
    iVar2 = iVar2 + DAT_000a8dfc;
    FUN_00002904(auStack_60,0x16,s_bmClientStat__d__000a8de8,iVar3);
    local_4b = 0;
    FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8d90,iVar2,auStack_60,uVar4);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  iVar3 = 0;
  do {
    iVar2 = *piVar1 + iVar3 * 4;
    uVar4 = *(undefined4 *)(DAT_000a8e14 + iVar2);
    iVar2 = iVar2 + DAT_000a8e14;
    FUN_00002904(auStack_48,0x16,s_hwClientStat__d__000a8e00,iVar3);
    local_33 = 0;
    FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8d90,iVar2,auStack_48,uVar4);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 5);
  FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8d90,&DAT_00001960 + *piVar1,
               s_mismatchStatus_000a8e18,*(undefined4 *)(&DAT_00001960 + *piVar1));
  FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8d90,&DAT_00001970 + *piVar1,s_supCfg_000a8e28,
               *(undefined4 *)(&DAT_00001970 + *piVar1));
  FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8d90,&DAT_00001974 + *piVar1,s_supRefCnt_000a8e30,
               *(undefined4 *)(&DAT_00001974 + *piVar1));
  FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8d90,&DAT_00001978 + *piVar1,s_supCnt_000a8e3c,
               *(undefined4 *)(&DAT_00001978 + *piVar1));
  FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8d90,&DAT_00001980 + *piVar1,s_discardCtx_000a8e44,
               *(undefined4 *)(&DAT_00001980 + *piVar1));
  FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8d90,&DAT_00001990 + *piVar1,s_actSup_000a8e50,
               *(undefined4 *)(&DAT_00001990 + *piVar1));
  iVar3 = 0;
  do {
    iVar2 = *piVar1;
    uVar4 = *(undefined4 *)(&DAT_00001a00 + iVar2 + iVar3 * 4);
    FUN_00002904(auStack_30,0x16,s_dmaStatus__d__000a8e58,iVar3);
    local_1b = 0;
    FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8d90,&DAT_00001a00 + iVar2 + iVar3 * 4,auStack_30,
                 uVar4);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8d90,(undefined4 *)(*piVar1 + 0x1ff8),
               s_version_000a8e68,*(undefined4 *)(*piVar1 + 0x1ff8));
  iVar3 = *piVar1;
  FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8d90,iVar3 + 0x3100,s_keepArb_000a8e70,
               *(undefined4 *)(iVar3 + 0x3100));
  FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8d90,*piVar1 + 0x3104,s_vClientFlush_000a8e78,
               *(undefined4 *)(iVar3 + 0x3104));
  FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8d90,*piVar1 + 0x3108,s_vClientID_000a8e88,
               *(undefined4 *)(iVar3 + 0x3108));
  FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8d90,(undefined4 *)(*piVar1 + 0x3800),
               s_errorSet_000a8e94,*(undefined4 *)(*piVar1 + 0x3800));
  FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8d90,(undefined4 *)(*piVar1 + 0x3804),
               s_errorClr_000a8ea0,*(undefined4 *)(*piVar1 + 0x3804));
  FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8d90,(undefined4 *)(*piVar1 + 0x3808),
               s_errorMaskSet_000a8eac,*(undefined4 *)(*piVar1 + 0x3808));
  FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8d90,(undefined4 *)(*piVar1 + 0x380c),
               s_errorMaskClr_000a8ebc,*(undefined4 *)(*piVar1 + 0x380c));
  FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8d90,(undefined4 *)(*piVar1 + 0x3c00),
               s_irqSet_000a8ecc,*(undefined4 *)(*piVar1 + 0x3c00));
  FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8d90,(undefined4 *)(*piVar1 + 0x3c04),
               s_irqClr_000a8ed4,*(undefined4 *)(*piVar1 + 0x3c04));
  FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8d90,(undefined4 *)(*piVar1 + 0x3c08),
               s_irqMaskSet_000a8edc,*(undefined4 *)(*piVar1 + 0x3c08));
  FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8d90,(undefined4 *)(*piVar1 + 0x3c0c),
               s_irqMaskClr_000a8ee8,*(undefined4 *)(*piVar1 + 0x3c0c));
  FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8d90,(undefined4 *)(*piVar1 + 0x4000),
               s_ctxQuadAccess_0__000a8f9c,*(undefined4 *)(*piVar1 + 0x4000));
  FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8d90,(undefined4 *)(*piVar1 + 0x6000),
               s_luAccess_0__000a8fb0,*(undefined4 *)(*piVar1 + 0x6000));
  FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8d90,s_getProcessLocalId_____d_000097f8 + *piVar1 + 8
               ,s_ctxSwitchCfg_0__000a8fbc,
               *(undefined4 *)(s_getProcessLocalId_____d_000097f8 + *piVar1 + 8));
  iVar3 = *piVar1;
  FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8d90,
               (undefined4 *)((int)&PTR_caseD_1_0000a000 + iVar3),s_vFifoInit_0__000a8fcc,
               *(undefined4 *)((int)&PTR_caseD_1_0000a000 + iVar3));
  FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8d90,&LAB_0000a100 + *piVar1,s_vFifoAdd_0__000a8fdc,
               *(undefined4 *)(&LAB_0000a100 + iVar3));
  FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8d90,*piVar1 + 0xa200,s_vFifoFlush_0__000a8fe8,
               *(undefined4 *)(iVar3 + 0xa200));
  return;
}

