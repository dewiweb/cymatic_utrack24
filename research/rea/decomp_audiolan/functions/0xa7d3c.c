// rea decompile_all
// name: FUN_000a7d3c
// address: 0xa7d3c
// body: available
// range: 0xa7d3c-0xa7feb inclusive
// range: 0xa8118-0xa83d3 inclusive
// range: 0xa85a4-0xa87d7 inclusive
// range: 0xa8904-0xa897f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000a7d3c(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_70 [21];
  undefined1 local_5b;
  undefined1 auStack_54 [21];
  undefined1 local_3f;
  undefined1 auStack_3c [21];
  undefined1 local_27;
  
  iVar2 = FUN_00003960(*param_2,&DAT_000a7fec);
  piVar1 = DAT_000a7ff0;
  if (iVar2 == 0) {
    FUN_000028a4(s_Configuration_registers__000a8010);
    FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8038,(undefined4 *)*piVar1,s_blockMvSet_000a802c,
                 *(undefined4 *)*piVar1);
    FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8038,(undefined4 *)(*piVar1 + 4),
                 s_blockMvClr_000a8054,*(undefined4 *)(*piVar1 + 4));
    FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8038,(undefined4 *)(*piVar1 + 8),
                 s_blockMvID_000a8060,*(undefined4 *)(*piVar1 + 8));
    iVar2 = 0;
    do {
      iVar3 = *piVar1 + iVar2 * 4;
      uVar5 = *(undefined4 *)(iVar3 + 0x80);
      FUN_00002904(auStack_54,0x16,s_blockMvCtx__d__000a806c,iVar2);
      local_3f = 0;
      FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8038,iVar3 + 0x80,auStack_54,uVar5);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x10);
    iVar2 = *piVar1;
    FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8038,iVar2 + 0x100c,s_genCtxSwitch_000a807c,
                 *(undefined4 *)(iVar2 + 0x100c));
    FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8038,FUN_00001010 + *piVar1,
                 s_ctrlGeneralSet_000a808c,*(undefined4 *)(FUN_00001010 + iVar2));
    FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8038,*piVar1 + 0x1014,s_ctrlGeneralClr_000a809c,
                 *(undefined4 *)(iVar2 + 0x1014));
    FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8038,*piVar1 + 0x1018,s_irqGenSet_000a80ac,
                 *(undefined4 *)(iVar2 + 0x1018));
    FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8038,*piVar1 + 0x101c,s_irqGenClr_000a80b8,
                 *(undefined4 *)(iVar2 + 0x101c));
    FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8038,*piVar1 + 0x1020,s_bmExcl0_000a80c4,
                 *(undefined4 *)(iVar2 + 0x1020));
    FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8038,*piVar1 + 0x1024,s_bmExcl1_000a80cc,
                 *(undefined4 *)(iVar2 + 0x1024));
    FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8038,*piVar1 + 0x1200,s_lockEngine_000a80d4,
                 *(undefined4 *)(iVar2 + 0x1200));
    FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8038,*piVar1 + 0x1204,s_highPriority_000a80e0,
                 *(undefined4 *)(iVar2 + 0x1204));
    iVar2 = 0;
    do {
      iVar3 = *piVar1 + iVar2 * 4;
      uVar5 = *(undefined4 *)(DAT_000a8100 + iVar3);
      iVar3 = iVar3 + DAT_000a8100;
      FUN_00002904(auStack_70,0x16,s_bmClientDma__d__000a80f0,iVar2);
      local_5b = 0;
      FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8038,iVar3,auStack_70,uVar5);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x10);
    iVar2 = 0;
    do {
      iVar3 = *piVar1 + iVar2 * 4;
      uVar5 = *(undefined4 *)(DAT_000a8114 + iVar3);
      iVar3 = iVar3 + DAT_000a8114;
      FUN_00002904(auStack_3c,0x16,s_hwClientDma__d__000a8104,iVar2);
      local_27 = 0;
      FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8038,iVar3,auStack_3c,uVar5);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 5);
  }
  else {
    iVar2 = FUN_00003960(*param_2,&DAT_000a7ff4);
    if (iVar2 == 0) {
      FUN_000028a4(s_Status_registers__000a83d4);
      FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8038,(undefined4 *)(*piVar1 + 0x2800),
                   s_emptyFlagSet_0__000a83e8,*(undefined4 *)(*piVar1 + 0x2800));
      FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8038,(undefined4 *)(*piVar1 + 0x2804),
                   s_emptyFlagSet_1__000a83f8,*(undefined4 *)(*piVar1 + 0x2804));
      FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8038,(undefined4 *)(*piVar1 + 0x2808),
                   s_emptyFlagSet_2__000a8408,*(undefined4 *)(*piVar1 + 0x2808));
      FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8038,(undefined4 *)(*piVar1 + 0x2810),
                   s_emptyFlagClr_0__000a8418,*(undefined4 *)(*piVar1 + 0x2810));
      FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8038,(undefined4 *)(*piVar1 + 0x2814),
                   s_emptyFlagClr_1__000a8428,*(undefined4 *)(*piVar1 + 0x2814));
      FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8038,(undefined4 *)(*piVar1 + 0x2818),
                   s_emptyFlagClr_2__000a8438,*(undefined4 *)(*piVar1 + 0x2818));
      FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8038,(undefined4 *)(*piVar1 + 0x2820),
                   s_fullFlagSet_0__000a8448,*(undefined4 *)(*piVar1 + 0x2820));
      FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8038,(undefined4 *)(*piVar1 + 0x2824),
                   s_fullFlagSet_1__000a8458,*(undefined4 *)(*piVar1 + 0x2824));
      FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8038,(undefined4 *)(*piVar1 + 0x2828),
                   s_fullFlagSet_2__000a8468,*(undefined4 *)(*piVar1 + 0x2828));
      FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8038,FUN_00002830 + *piVar1,
                   s_fullFlagClr_0__000a8478,*(undefined4 *)(FUN_00002830 + *piVar1));
      FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8038,(undefined4 *)(*piVar1 + 0x2834),
                   s_fullFlagClr_1__000a8488,*(undefined4 *)(*piVar1 + 0x2834));
      FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8038,(undefined4 *)(*piVar1 + 0x2838),
                   s_fullFlagClr_2__000a8498,*(undefined4 *)(*piVar1 + 0x2838));
      FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8038,&DAT_00001900 + *piVar1,
                   s_hsErrorClr_000a84a8,*(undefined4 *)(&DAT_00001900 + *piVar1));
      FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8038,&DAT_00001920 + *piVar1,
                   s_irqStatusWrSet_0__000a84b4,*(undefined4 *)(&DAT_00001920 + *piVar1));
      FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8038,&DAT_00001924 + *piVar1,
                   s_irqStatusWrSet_1__000a84c8,*(undefined4 *)(&DAT_00001924 + *piVar1));
      FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8038,&DAT_00001928 + *piVar1,
                   s_irqStatusWrSet_2__000a84dc,*(undefined4 *)(&DAT_00001928 + *piVar1));
      FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8038,&DAT_00001930 + *piVar1,
                   s_irqStatusWrClr_0__000a84f0,*(undefined4 *)(&DAT_00001930 + *piVar1));
      FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8038,&DAT_00001934 + *piVar1,
                   s_irqStatusWrClr_1__000a8504,*(undefined4 *)(&DAT_00001934 + *piVar1));
      FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8038,&DAT_00001938 + *piVar1,
                   s_irqStatusWrClr_2__000a8518,*(undefined4 *)(&DAT_00001938 + *piVar1));
      FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8038,&DAT_00001940 + *piVar1,
                   s_irqStatusRdSet_0__000a852c,*(undefined4 *)(&DAT_00001940 + *piVar1));
      FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8038,&DAT_00001944 + *piVar1,
                   s_irqStatusRdSet_1__000a8540,*(undefined4 *)(&DAT_00001944 + *piVar1));
      FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8038,&DAT_00001948 + *piVar1,
                   s_irqStatusRdSet_2__000a8554,*(undefined4 *)(&DAT_00001948 + *piVar1));
      FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8038,&DAT_00001950 + *piVar1,
                   s_irqStatusRdClr_0__000a8568,*(undefined4 *)(&DAT_00001950 + *piVar1));
      FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8038,&DAT_00001954 + *piVar1,
                   s_irqStatusRdClr_1__000a857c,*(undefined4 *)(&DAT_00001954 + *piVar1));
      FUN_000028a4(s_0x_08x____20_20s___0x_08x_000a8038,&DAT_00001958 + *piVar1,
                   s_irqStatusRdClr_2__000a8590,*(undefined4 *)(&DAT_00001958 + *piVar1));
    }
    else {
      iVar2 = FUN_00003960(*param_2,&DAT_000a7ffc);
      if (iVar2 == 0) {
        FUN_000028a4(s_Interrupt_registers__000a87d8);
        FUN_000028a4(DAT_000a87fc,(undefined4 *)(*piVar1 + 0x1c00),s_irqGrp0Set_000a87f0,
                     *(undefined4 *)(*piVar1 + 0x1c00));
        FUN_000028a4(DAT_000a87fc,&DAT_00001c04 + *piVar1,s_irqGrp0Clr_000a8800,
                     *(undefined4 *)(&DAT_00001c04 + *piVar1));
        FUN_000028a4(DAT_000a87fc,&DAT_00001c08 + *piVar1,s_irqGrp0MaskSet_000a880c,
                     *(undefined4 *)(&DAT_00001c08 + *piVar1));
        FUN_000028a4(DAT_000a87fc,&DAT_00001c0c + *piVar1,s_irqGrp0MaskClr_000a881c,
                     *(undefined4 *)(&DAT_00001c0c + *piVar1));
        FUN_000028a4(DAT_000a87fc,&DAT_00001c10 + *piVar1,s_irqGrp1Set_000a882c,
                     *(undefined4 *)(&DAT_00001c10 + *piVar1));
        FUN_000028a4(DAT_000a87fc,&DAT_00001c14 + *piVar1,s_irqGrp1Clr_000a8838,
                     *(undefined4 *)(&DAT_00001c14 + *piVar1));
        FUN_000028a4(DAT_000a87fc,&DAT_00001c18 + *piVar1,s_irqGrp1MaskSet_000a8844,
                     *(undefined4 *)(&DAT_00001c18 + *piVar1));
        FUN_000028a4(DAT_000a87fc,&DAT_00001c1c + *piVar1,s_irqGrp1MaskClr_000a8854,
                     *(undefined4 *)(&DAT_00001c1c + *piVar1));
        FUN_000028a4(DAT_000a87fc,&DAT_00001c20 + *piVar1,s_irqGrp2Set_000a8864,
                     *(undefined4 *)(&DAT_00001c20 + *piVar1));
        FUN_000028a4(DAT_000a87fc,&DAT_00001c24 + *piVar1,s_irqGrp2Clr_000a8870,
                     *(undefined4 *)(&DAT_00001c24 + *piVar1));
        FUN_000028a4(DAT_000a87fc,&DAT_00001c28 + *piVar1,s_irqGrp2MaskSet_000a887c,
                     *(undefined4 *)(&DAT_00001c28 + *piVar1));
        FUN_000028a4(DAT_000a87fc,&DAT_00001c2c + *piVar1,s_irqGrp2MaskClr_000a888c,
                     *(undefined4 *)(&DAT_00001c2c + *piVar1));
        FUN_000028a4(DAT_000a87fc,&DAT_00001c30 + *piVar1,s_irqGrp3Set_000a889c,
                     *(undefined4 *)(&DAT_00001c30 + *piVar1));
        FUN_000028a4(DAT_000a87fc,&DAT_00001c34 + *piVar1,s_irqGrp3Clr_000a88a8,
                     *(undefined4 *)(&DAT_00001c34 + *piVar1));
        FUN_000028a4(DAT_000a87fc,&DAT_00001c38 + *piVar1,s_irqGrp3MaskSet_000a88b4,
                     *(undefined4 *)(&DAT_00001c38 + *piVar1));
        FUN_000028a4(DAT_000a87fc,&DAT_00001c3c + *piVar1,s_irqGrp3MaskClr_000a88c4,
                     *(undefined4 *)(&DAT_00001c3c + *piVar1));
        FUN_000028a4(DAT_000a87fc,&DAT_00001c40 + *piVar1,s_irqGrpID_0__000a88d4,
                     *(undefined4 *)(&DAT_00001c40 + *piVar1));
        FUN_000028a4(DAT_000a87fc,&DAT_00001c44 + *piVar1,s_irqGrpID_1__000a88e0,
                     *(undefined4 *)(&DAT_00001c44 + *piVar1));
        FUN_000028a4(DAT_000a87fc,&DAT_00001c48 + *piVar1,s_irqGrpID_2__000a88ec,
                     *(undefined4 *)(&DAT_00001c48 + *piVar1));
        FUN_000028a4(DAT_000a87fc,&DAT_00001c4c + *piVar1,s_irqGrpID_3__000a88f8,
                     *(undefined4 *)(&DAT_00001c4c + *piVar1));
      }
      else {
        iVar2 = FUN_00003960(*param_2,&DAT_000a8000);
        if (iVar2 == 0) {
          FUN_000028a4(s_Fast_registers__000a8980);
          iVar2 = *piVar1;
          puVar4 = (undefined4 *)(iVar2 + 0x8000);
          FUN_000028a4(DAT_000a87fc,puVar4,s_ctxBmFastRd_0__000a8994,*puVar4);
          FUN_000028a4(DAT_000a87fc,*piVar1 + 0x8200,s_ctxBmFastWr_0__000a89a4,
                       *(undefined4 *)(iVar2 + 0x8200));
          iVar2 = *piVar1;
          puVar4 = (undefined4 *)(iVar2 + 0x9000);
          FUN_000028a4(DAT_000a87fc,puVar4,s_ctxPktFastRd_0__000a89b4,*puVar4);
          FUN_000028a4(DAT_000a87fc,*piVar1 + 0x9200,s_ctxPktFastWr_0__000a89c4,
                       *(undefined4 *)(iVar2 + 0x9200));
        }
        else {
          iVar2 = FUN_00003960(*param_2,&DAT_000a8008);
          if (iVar2 == 0) {
            FUN_000a89d4();
          }
        }
      }
    }
  }
  return 0;
}

