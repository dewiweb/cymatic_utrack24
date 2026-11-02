// rea decompile_all
// name: FUN_000da650
// address: 0xda650
// body: available
// range: 0xda650-0xda9e3 inclusive
// range: 0xdab70-0xdac17 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000da650(void)

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
  
  FUN_00002898(s_Misc_registers__000da9e4);
  piVar1 = _DAT_000da9f8;
  iVar3 = *_DAT_000da9f8;
  FUN_00002898(s_0x_08x____20_20s___0x_08x_000daa0c,iVar3 + 0x10b0,s___ctxReleaseID_000da9fa + 2,
               *(undefined4 *)(iVar3 + 0x10b0));
  FUN_00002898(s_0x_08x____20_20s___0x_08x_000daa0c,*piVar1 + 0x10c0,s_clientRelease_000daa28,
               *(undefined4 *)(iVar3 + 0x10c0));
  FUN_00002898(s_0x_08x____20_20s___0x_08x_000daa0c,*piVar1 + 0x10c4,s_stallSet_000daa38,
               *(undefined4 *)(iVar3 + 0x10c4));
  FUN_00002898(s_0x_08x____20_20s___0x_08x_000daa0c,*piVar1 + 0x10c8,s_stallClr_000daa44,
               *(undefined4 *)(iVar3 + 0x10c8));
  FUN_00002898(s_0x_08x____20_20s___0x_08x_000daa0c,*piVar1 + 0x10cc,s_ctxSup_000daa50,
               *(undefined4 *)(iVar3 + 0x10cc));
  FUN_00002898(s_0x_08x____20_20s___0x_08x_000daa0c,*piVar1 + 0x10d0,s_testBusAddr_000daa58,
               *(undefined4 *)(iVar3 + 0x10d0));
  iVar3 = 0;
  do {
    iVar2 = *piVar1 + iVar3 * 4;
    uVar4 = *(undefined4 *)(DAT_000daa78 + iVar2);
    iVar2 = iVar2 + DAT_000daa78;
    FUN_000028f8(auStack_60,0x16,s_bmClientStat__d__000daa64,iVar3);
    local_4b = 0;
    FUN_00002898(s_0x_08x____20_20s___0x_08x_000daa0c,iVar2,auStack_60,uVar4);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  iVar3 = 0;
  do {
    iVar2 = *piVar1 + iVar3 * 4;
    uVar4 = *(undefined4 *)(DAT_000daa90 + iVar2);
    iVar2 = iVar2 + DAT_000daa90;
    FUN_000028f8(auStack_48,0x16,s_hwClientStat__d__000daa7c,iVar3);
    local_33 = 0;
    FUN_00002898(s_0x_08x____20_20s___0x_08x_000daa0c,iVar2,auStack_48,uVar4);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 5);
  FUN_00002898(s_0x_08x____20_20s___0x_08x_000daa0c,&DAT_00001960 + *piVar1,
               s_mismatchStatus_000daa94,*(undefined4 *)(&DAT_00001960 + *piVar1));
  FUN_00002898(s_0x_08x____20_20s___0x_08x_000daa0c,&DAT_00001970 + *piVar1,s_supCfg_000daaa4,
               *(undefined4 *)(&DAT_00001970 + *piVar1));
  FUN_00002898(s_0x_08x____20_20s___0x_08x_000daa0c,&DAT_00001974 + *piVar1,s_supRefCnt_000daaac,
               *(undefined4 *)(&DAT_00001974 + *piVar1));
  FUN_00002898(s_0x_08x____20_20s___0x_08x_000daa0c,&DAT_00001978 + *piVar1,s_supCnt_000daab8,
               *(undefined4 *)(&DAT_00001978 + *piVar1));
  FUN_00002898(s_0x_08x____20_20s___0x_08x_000daa0c,&DAT_00001980 + *piVar1,s_discardCtx_000daac0,
               *(undefined4 *)(&DAT_00001980 + *piVar1));
  FUN_00002898(s_0x_08x____20_20s___0x_08x_000daa0c,&DAT_00001990 + *piVar1,s_actSup_000daacc,
               *(undefined4 *)(&DAT_00001990 + *piVar1));
  iVar3 = 0;
  do {
    iVar2 = *piVar1;
    uVar4 = *(undefined4 *)(&DAT_00001a00 + iVar2 + iVar3 * 4);
    FUN_000028f8(auStack_30,0x16,s_dmaStatus__d__000daad4,iVar3);
    local_1b = 0;
    FUN_00002898(s_0x_08x____20_20s___0x_08x_000daa0c,&DAT_00001a00 + iVar2 + iVar3 * 4,auStack_30,
                 uVar4);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  FUN_00002898(s_0x_08x____20_20s___0x_08x_000daa0c,(undefined4 *)(*piVar1 + 0x1ff8),
               s_version_000daae4,*(undefined4 *)(*piVar1 + 0x1ff8));
  iVar3 = *piVar1;
  FUN_00002898(s_0x_08x____20_20s___0x_08x_000daa0c,iVar3 + 0x3100,s_keepArb_000daaec,
               *(undefined4 *)(iVar3 + 0x3100));
  FUN_00002898(s_0x_08x____20_20s___0x_08x_000daa0c,*piVar1 + 0x3104,s_vClientFlush_000daaf4,
               *(undefined4 *)(iVar3 + 0x3104));
  FUN_00002898(s_0x_08x____20_20s___0x_08x_000daa0c,*piVar1 + 0x3108,s_vClientID_000dab04,
               *(undefined4 *)(iVar3 + 0x3108));
  FUN_00002898(s_0x_08x____20_20s___0x_08x_000daa0c,(undefined4 *)(*piVar1 + 0x3800),
               s_errorSet_000dab10,*(undefined4 *)(*piVar1 + 0x3800));
  FUN_00002898(s_0x_08x____20_20s___0x_08x_000daa0c,&DAT_00003804 + *piVar1,s_errorClr_000dab1c,
               *(undefined4 *)(&DAT_00003804 + *piVar1));
  FUN_00002898(s_0x_08x____20_20s___0x_08x_000daa0c,&DAT_00003808 + *piVar1,s_errorMaskSet_000dab28,
               *(undefined4 *)(&DAT_00003808 + *piVar1));
  FUN_00002898(s_0x_08x____20_20s___0x_08x_000daa0c,&DAT_0000380c + *piVar1,s_errorMaskClr_000dab38,
               *(undefined4 *)(&DAT_0000380c + *piVar1));
  FUN_00002898(s_0x_08x____20_20s___0x_08x_000daa0c,(undefined4 *)(*piVar1 + 0x3c00),
               s_irqSet_000dab48,*(undefined4 *)(*piVar1 + 0x3c00));
  FUN_00002898(s_0x_08x____20_20s___0x_08x_000daa0c,(undefined4 *)(*piVar1 + 0x3c04),
               s_irqClr_000dab50,*(undefined4 *)(*piVar1 + 0x3c04));
  FUN_00002898(s_0x_08x____20_20s___0x_08x_000daa0c,FUN_00003c08 + *piVar1,s_irqMaskSet_000dab58,
               *(undefined4 *)(FUN_00003c08 + *piVar1));
  FUN_00002898(s_0x_08x____20_20s___0x_08x_000daa0c,(undefined4 *)(*piVar1 + 0x3c0c),
               s_irqMaskClr_000dab64,*(undefined4 *)(*piVar1 + 0x3c0c));
  FUN_00002898(s_0x_08x____20_20s___0x_08x_000daa0c,(undefined4 *)(*piVar1 + 0x4000),
               s_ctxQuadAccess_0__000dac18,*(undefined4 *)(*piVar1 + 0x4000));
  FUN_00002898(s_0x_08x____20_20s___0x_08x_000daa0c,(undefined4 *)(*piVar1 + 0x6000),
               s_luAccess_0__000dac2c,*(undefined4 *)(*piVar1 + 0x6000));
  FUN_00002898(s_0x_08x____20_20s___0x_08x_000daa0c,FUN_000097fc + *piVar1 + 4,
               s_ctxSwitchCfg_0__000dac38,*(undefined4 *)(FUN_000097fc + *piVar1 + 4));
  iVar3 = *piVar1;
  FUN_00002898(s_0x_08x____20_20s___0x_08x_000daa0c,&LAB_0000a000 + iVar3,s_vFifoInit_0__000dac48,
               *(undefined4 *)(&LAB_0000a000 + iVar3));
  FUN_00002898(s_0x_08x____20_20s___0x_08x_000daa0c,&LAB_0000a100 + *piVar1,s_vFifoAdd_0__000dac58,
               *(undefined4 *)(&LAB_0000a100 + iVar3));
  FUN_00002898(s_0x_08x____20_20s___0x_08x_000daa0c,&DAT_0000a200 + *piVar1,s_vFifoFlush_0__000dac64
               ,*(undefined4 *)(&DAT_0000a200 + iVar3));
  return;
}

