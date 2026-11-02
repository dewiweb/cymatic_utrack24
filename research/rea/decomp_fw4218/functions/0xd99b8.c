// rea decompile_all
// name: FUN_000d99b8
// address: 0xd99b8
// body: available
// range: 0xd99b8-0xd9c67 inclusive
// range: 0xd9d94-0xda04f inclusive
// range: 0xda220-0xda453 inclusive
// range: 0xda580-0xda5fb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000d99b8(undefined4 param_1,undefined4 *param_2)

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
  
  iVar2 = FUN_00003d18(*param_2,&DAT_000d9c68);
  piVar1 = DAT_000d9c6c;
  if (iVar2 == 0) {
    FUN_00002898(s_Configuration_registers__000d9c8c);
    FUN_00002898(s_0x_08x____20_20s___0x_08x_000d9cb4,(undefined4 *)*piVar1,s_blockMvSet_000d9ca8,
                 *(undefined4 *)*piVar1);
    FUN_00002898(s_0x_08x____20_20s___0x_08x_000d9cb4,(undefined4 *)(*piVar1 + 4),
                 s_blockMvClr_000d9cd0,*(undefined4 *)(*piVar1 + 4));
    FUN_00002898(s_0x_08x____20_20s___0x_08x_000d9cb4,(undefined4 *)(*piVar1 + 8),
                 s_blockMvID_000d9cdc,*(undefined4 *)(*piVar1 + 8));
    iVar2 = 0;
    do {
      iVar3 = *piVar1 + iVar2 * 4;
      uVar5 = *(undefined4 *)(iVar3 + 0x80);
      FUN_000028f8(auStack_54,0x16,s_blockMvCtx__d__000d9ce8,iVar2);
      local_3f = 0;
      FUN_00002898(s_0x_08x____20_20s___0x_08x_000d9cb4,iVar3 + 0x80,auStack_54,uVar5);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x10);
    iVar2 = *piVar1;
    FUN_00002898(s_0x_08x____20_20s___0x_08x_000d9cb4,FUN_0000100c + iVar2,s_genCtxSwitch_000d9cf8,
                 *(undefined4 *)(FUN_0000100c + iVar2));
    FUN_00002898(s_0x_08x____20_20s___0x_08x_000d9cb4,*piVar1 + 0x1010,s_ctrlGeneralSet_000d9d08,
                 *(undefined4 *)(iVar2 + 0x1010));
    FUN_00002898(s_0x_08x____20_20s___0x_08x_000d9cb4,*piVar1 + 0x1014,s_ctrlGeneralClr_000d9d18,
                 *(undefined4 *)(iVar2 + 0x1014));
    FUN_00002898(s_0x_08x____20_20s___0x_08x_000d9cb4,*piVar1 + 0x1018,s_irqGenSet_000d9d28,
                 *(undefined4 *)(iVar2 + 0x1018));
    FUN_00002898(s_0x_08x____20_20s___0x_08x_000d9cb4,*piVar1 + 0x101c,s_irqGenClr_000d9d34,
                 *(undefined4 *)(iVar2 + 0x101c));
    FUN_00002898(s_0x_08x____20_20s___0x_08x_000d9cb4,*piVar1 + 0x1020,s_bmExcl0_000d9d40,
                 *(undefined4 *)(iVar2 + 0x1020));
    FUN_00002898(s_0x_08x____20_20s___0x_08x_000d9cb4,*piVar1 + 0x1024,s_bmExcl1_000d9d48,
                 *(undefined4 *)(iVar2 + 0x1024));
    FUN_00002898(s_0x_08x____20_20s___0x_08x_000d9cb4,*piVar1 + 0x1200,s_lockEngine_000d9d50,
                 *(undefined4 *)(iVar2 + 0x1200));
    FUN_00002898(s_0x_08x____20_20s___0x_08x_000d9cb4,*piVar1 + 0x1204,s_highPriority_000d9d5c,
                 *(undefined4 *)(iVar2 + 0x1204));
    iVar2 = 0;
    do {
      iVar3 = *piVar1 + iVar2 * 4;
      uVar5 = *(undefined4 *)(DAT_000d9d7c + iVar3);
      iVar3 = iVar3 + DAT_000d9d7c;
      FUN_000028f8(auStack_70,0x16,s_bmClientDma__d__000d9d6c,iVar2);
      local_5b = 0;
      FUN_00002898(s_0x_08x____20_20s___0x_08x_000d9cb4,iVar3,auStack_70,uVar5);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x10);
    iVar2 = 0;
    do {
      iVar3 = *piVar1 + iVar2 * 4;
      uVar5 = *(undefined4 *)(DAT_000d9d90 + iVar3);
      iVar3 = iVar3 + DAT_000d9d90;
      FUN_000028f8(auStack_3c,0x16,s_hwClientDma__d__000d9d80,iVar2);
      local_27 = 0;
      FUN_00002898(s_0x_08x____20_20s___0x_08x_000d9cb4,iVar3,auStack_3c,uVar5);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 5);
  }
  else {
    iVar2 = FUN_00003d18(*param_2,&DAT_000d9c70);
    if (iVar2 == 0) {
      FUN_00002898(s_Status_registers__000da050);
      FUN_00002898(s_0x_08x____20_20s___0x_08x_000d9cb4,(undefined4 *)(*piVar1 + 0x2800),
                   s_emptyFlagSet_0__000da064,*(undefined4 *)(*piVar1 + 0x2800));
      FUN_00002898(s_0x_08x____20_20s___0x_08x_000d9cb4,(undefined4 *)(*piVar1 + 0x2804),
                   s_emptyFlagSet_1__000da074,*(undefined4 *)(*piVar1 + 0x2804));
      FUN_00002898(s_0x_08x____20_20s___0x_08x_000d9cb4,(undefined4 *)(*piVar1 + 0x2808),
                   s_emptyFlagSet_2__000da084,*(undefined4 *)(*piVar1 + 0x2808));
      FUN_00002898(s_0x_08x____20_20s___0x_08x_000d9cb4,(undefined4 *)(*piVar1 + 0x2810),
                   s_emptyFlagClr_0__000da094,*(undefined4 *)(*piVar1 + 0x2810));
      FUN_00002898(s_0x_08x____20_20s___0x_08x_000d9cb4,(undefined4 *)(*piVar1 + 0x2814),
                   s_emptyFlagClr_1__000da0a4,*(undefined4 *)(*piVar1 + 0x2814));
      FUN_00002898(s_0x_08x____20_20s___0x_08x_000d9cb4,(undefined4 *)(*piVar1 + 0x2818),
                   s_emptyFlagClr_2__000da0b4,*(undefined4 *)(*piVar1 + 0x2818));
      FUN_00002898(s_0x_08x____20_20s___0x_08x_000d9cb4,(undefined4 *)((int)&DAT_00002820 + *piVar1)
                   ,s_fullFlagSet_0__000da0c4,*(undefined4 *)((int)&DAT_00002820 + *piVar1));
      FUN_00002898(s_0x_08x____20_20s___0x_08x_000d9cb4,FUN_00002824 + *piVar1,
                   s_fullFlagSet_1__000da0d4,*(undefined4 *)(FUN_00002824 + *piVar1));
      FUN_00002898(s_0x_08x____20_20s___0x_08x_000d9cb4,(undefined4 *)(*piVar1 + 0x2828),
                   s_fullFlagSet_2__000da0e4,*(undefined4 *)(*piVar1 + 0x2828));
      FUN_00002898(s_0x_08x____20_20s___0x_08x_000d9cb4,(undefined4 *)((int)&DAT_00002830 + *piVar1)
                   ,s_fullFlagClr_0__000da0f4,*(undefined4 *)((int)&DAT_00002830 + *piVar1));
      FUN_00002898(s_0x_08x____20_20s___0x_08x_000d9cb4,FUN_00002834 + *piVar1,
                   s_fullFlagClr_1__000da104,*(undefined4 *)(FUN_00002834 + *piVar1));
      FUN_00002898(s_0x_08x____20_20s___0x_08x_000d9cb4,(undefined4 *)(*piVar1 + 0x2838),
                   s_fullFlagClr_2__000da114,*(undefined4 *)(*piVar1 + 0x2838));
      FUN_00002898(s_0x_08x____20_20s___0x_08x_000d9cb4,&DAT_00001900 + *piVar1,
                   s_hsErrorClr_000da124,*(undefined4 *)(&DAT_00001900 + *piVar1));
      FUN_00002898(s_0x_08x____20_20s___0x_08x_000d9cb4,&DAT_00001920 + *piVar1,
                   s_irqStatusWrSet_0__000da130,*(undefined4 *)(&DAT_00001920 + *piVar1));
      FUN_00002898(s_0x_08x____20_20s___0x_08x_000d9cb4,&DAT_00001924 + *piVar1,
                   s_irqStatusWrSet_1__000da144,*(undefined4 *)(&DAT_00001924 + *piVar1));
      FUN_00002898(s_0x_08x____20_20s___0x_08x_000d9cb4,&DAT_00001928 + *piVar1,
                   s_irqStatusWrSet_2__000da158,*(undefined4 *)(&DAT_00001928 + *piVar1));
      FUN_00002898(s_0x_08x____20_20s___0x_08x_000d9cb4,&DAT_00001930 + *piVar1,
                   s_irqStatusWrClr_0__000da16c,*(undefined4 *)(&DAT_00001930 + *piVar1));
      FUN_00002898(s_0x_08x____20_20s___0x_08x_000d9cb4,&DAT_00001934 + *piVar1,
                   s_irqStatusWrClr_1__000da180,*(undefined4 *)(&DAT_00001934 + *piVar1));
      FUN_00002898(s_0x_08x____20_20s___0x_08x_000d9cb4,&DAT_00001938 + *piVar1,
                   s_irqStatusWrClr_2__000da194,*(undefined4 *)(&DAT_00001938 + *piVar1));
      FUN_00002898(s_0x_08x____20_20s___0x_08x_000d9cb4,&DAT_00001940 + *piVar1,
                   s_irqStatusRdSet_0__000da1a8,*(undefined4 *)(&DAT_00001940 + *piVar1));
      FUN_00002898(s_0x_08x____20_20s___0x_08x_000d9cb4,&DAT_00001944 + *piVar1,
                   s_irqStatusRdSet_1__000da1bc,*(undefined4 *)(&DAT_00001944 + *piVar1));
      FUN_00002898(s_0x_08x____20_20s___0x_08x_000d9cb4,&DAT_00001948 + *piVar1,
                   s_irqStatusRdSet_2__000da1d0,*(undefined4 *)(&DAT_00001948 + *piVar1));
      FUN_00002898(s_0x_08x____20_20s___0x_08x_000d9cb4,&DAT_00001950 + *piVar1,
                   s_irqStatusRdClr_0__000da1e4,*(undefined4 *)(&DAT_00001950 + *piVar1));
      FUN_00002898(s_0x_08x____20_20s___0x_08x_000d9cb4,&DAT_00001954 + *piVar1,
                   s_irqStatusRdClr_1__000da1f8,*(undefined4 *)(&DAT_00001954 + *piVar1));
      FUN_00002898(s_0x_08x____20_20s___0x_08x_000d9cb4,&DAT_00001958 + *piVar1,
                   s_irqStatusRdClr_2__000da20c,*(undefined4 *)(&DAT_00001958 + *piVar1));
    }
    else {
      iVar2 = FUN_00003d18(*param_2,&DAT_000d9c78);
      if (iVar2 == 0) {
        FUN_00002898(s_Interrupt_registers__000da454);
        FUN_00002898(DAT_000da478,(undefined4 *)(*piVar1 + 0x1c00),s_irqGrp0Set_000da46c,
                     *(undefined4 *)(*piVar1 + 0x1c00));
        FUN_00002898(DAT_000da478,&DAT_00001c04 + *piVar1,s_irqGrp0Clr_000da47c,
                     *(undefined4 *)(&DAT_00001c04 + *piVar1));
        FUN_00002898(DAT_000da478,&DAT_00001c08 + *piVar1,s_irqGrp0MaskSet_000da488,
                     *(undefined4 *)(&DAT_00001c08 + *piVar1));
        FUN_00002898(DAT_000da478,&DAT_00001c0c + *piVar1,s_irqGrp0MaskClr_000da498,
                     *(undefined4 *)(&DAT_00001c0c + *piVar1));
        FUN_00002898(DAT_000da478,&DAT_00001c10 + *piVar1,s_irqGrp1Set_000da4a8,
                     *(undefined4 *)(&DAT_00001c10 + *piVar1));
        FUN_00002898(DAT_000da478,&DAT_00001c14 + *piVar1,s_irqGrp1Clr_000da4b4,
                     *(undefined4 *)(&DAT_00001c14 + *piVar1));
        FUN_00002898(DAT_000da478,&DAT_00001c18 + *piVar1,s_irqGrp1MaskSet_000da4c0,
                     *(undefined4 *)(&DAT_00001c18 + *piVar1));
        FUN_00002898(DAT_000da478,&DAT_00001c1c + *piVar1,s_irqGrp1MaskClr_000da4d0,
                     *(undefined4 *)(&DAT_00001c1c + *piVar1));
        FUN_00002898(DAT_000da478,&DAT_00001c20 + *piVar1,s_irqGrp2Set_000da4e0,
                     *(undefined4 *)(&DAT_00001c20 + *piVar1));
        FUN_00002898(DAT_000da478,&DAT_00001c24 + *piVar1,s_irqGrp2Clr_000da4ec,
                     *(undefined4 *)(&DAT_00001c24 + *piVar1));
        FUN_00002898(DAT_000da478,&DAT_00001c28 + *piVar1,s_irqGrp2MaskSet_000da4f8,
                     *(undefined4 *)(&DAT_00001c28 + *piVar1));
        FUN_00002898(DAT_000da478,&DAT_00001c2c + *piVar1,s_irqGrp2MaskClr_000da508,
                     *(undefined4 *)(&DAT_00001c2c + *piVar1));
        FUN_00002898(DAT_000da478,&DAT_00001c30 + *piVar1,s_irqGrp3Set_000da518,
                     *(undefined4 *)(&DAT_00001c30 + *piVar1));
        FUN_00002898(DAT_000da478,&DAT_00001c34 + *piVar1,s_irqGrp3Clr_000da524,
                     *(undefined4 *)(&DAT_00001c34 + *piVar1));
        FUN_00002898(DAT_000da478,&DAT_00001c38 + *piVar1,s_irqGrp3MaskSet_000da530,
                     *(undefined4 *)(&DAT_00001c38 + *piVar1));
        FUN_00002898(DAT_000da478,&DAT_00001c3c + *piVar1,s_irqGrp3MaskClr_000da540,
                     *(undefined4 *)(&DAT_00001c3c + *piVar1));
        FUN_00002898(DAT_000da478,&DAT_00001c40 + *piVar1,s_irqGrpID_0__000da550,
                     *(undefined4 *)(&DAT_00001c40 + *piVar1));
        FUN_00002898(DAT_000da478,&DAT_00001c44 + *piVar1,s_irqGrpID_1__000da55c,
                     *(undefined4 *)(&DAT_00001c44 + *piVar1));
        FUN_00002898(DAT_000da478,&DAT_00001c48 + *piVar1,s_irqGrpID_2__000da568,
                     *(undefined4 *)(&DAT_00001c48 + *piVar1));
        FUN_00002898(DAT_000da478,&DAT_00001c4c + *piVar1,s_irqGrpID_3__000da574,
                     *(undefined4 *)(&DAT_00001c4c + *piVar1));
      }
      else {
        iVar2 = FUN_00003d18(*param_2,&DAT_000d9c7c);
        if (iVar2 == 0) {
          FUN_00002898(s_Fast_registers__000da5fc);
          iVar2 = *piVar1;
          puVar4 = (undefined4 *)(iVar2 + 0x8000);
          FUN_00002898(DAT_000da478,puVar4,s_ctxBmFastRd_0__000da610,*puVar4);
          FUN_00002898(DAT_000da478,*piVar1 + 0x8200,s_ctxBmFastWr_0__000da620,
                       *(undefined4 *)(iVar2 + 0x8200));
          iVar2 = *piVar1;
          puVar4 = (undefined4 *)(iVar2 + 0x9000);
          FUN_00002898(DAT_000da478,puVar4,s_ctxPktFastRd_0__000da630,*puVar4);
          FUN_00002898(DAT_000da478,*piVar1 + 0x9200,s_ctxPktFastWr_0__000da640,
                       *(undefined4 *)(iVar2 + 0x9200));
        }
        else {
          iVar2 = FUN_00003d18(*param_2,&DAT_000d9c84);
          if (iVar2 == 0) {
            FUN_000da650();
          }
        }
      }
    }
  }
  return 0;
}

