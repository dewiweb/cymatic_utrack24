// rea decompile_all
// name: FUN_000c33e4
// address: 0xc33e4
// body: available
// range: 0xc33e4-0xc3763 inclusive
// range: 0xc3b48-0xc3d3f inclusive
// range: 0xc3f48-0xc412b inclusive
// range: 0xc42a4-0xc4403 inclusive
// range: 0xc4628-0xc48f3 inclusive
// range: 0xc4a64-0xc4cb3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c33e4(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_7c;
  byte *local_70 [2];
  undefined4 local_68;
  uint local_64;
  uint local_60;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  undefined4 local_34 [2];
  int iStack_2c;
  int local_28;
  
  local_70[0] = (byte *)0x0;
  iStack_2c = param_1;
  local_28 = param_2;
  if (param_2 == 0) {
    FUN_000c59bc(param_1,0,2,local_70);
    local_7c = (uint)*local_70[0];
    local_38 = local_7c;
  }
  else {
    FUN_000c59bc(param_1,param_2,1,local_70);
    local_38 = (uint)*local_70[0];
    FUN_000c59bc(param_1,local_28,0,local_70);
    local_7c = (uint)*local_70[0];
  }
  FUN_001fe1e4(&local_68);
  piVar10 = (int *)(param_1 + 0x4c8);
  iVar7 = *(int *)(param_1 + 0x4c8);
  bVar1 = *(byte *)(iVar7 + 0x1f);
  uVar8 = (uint)bVar1;
  uVar4 = *(ushort *)(iVar7 + 0x12);
  local_3c = (uint)*(ushort *)(iVar7 + 0x10);
  local_40 = (uint)*(byte *)(iVar7 + 0x1a);
  bVar2 = *(byte *)(iVar7 + 0x1b);
  local_44 = (uint)*(byte *)(iVar7 + 0x62);
  uVar11 = (uint)uVar4;
  local_4c = (uint)*(ushort *)(iVar7 + 100);
  FUN_001fe1f8(local_68);
  FUN_001fe1e4(local_34);
  iVar7 = *piVar10;
  uVar5 = *(ushort *)(iVar7 + 0x16);
  bVar3 = *(byte *)(iVar7 + 0x18);
  uVar6 = *(ushort *)(iVar7 + 0x18);
  local_48 = (uint)*(byte *)(iVar7 + 0x1c);
  local_50 = (uint)*(byte *)(iVar7 + 0x1d);
  local_60 = (uint)*(byte *)(iVar7 + 99);
  local_64 = (uint)*(ushort *)(iVar7 + 0x66);
  uVar13 = (uint)*(ushort *)(iVar7 + 0x14);
  uVar12 = (uint)uVar5;
  FUN_001fe1f8(local_34[0]);
  FUN_00002898(s_Configuration_of_endpoint__d__000c3764,local_28);
  FUN_00002898(s_______________________________000c3784);
  FUN_00002898(s___HW_EP_index___Logical_EP___Set_000c37a4);
  FUN_00002898(s__________________________________000c37d0);
  FUN_00002898(s_TX___0x_02x___000c37fc,local_28);
  if (local_7c == 0xff) {
    FUN_00002898(s_undefined___no___000c412c);
  }
  else {
    FUN_00002898(s_0x_02x___yes___000c3814,local_7c);
  }
  FUN_00002898(s_RX___0x_02x___000c382c,local_28);
  if (local_38 == 0xff) {
    FUN_00002898(s_undefined___no___000c412c);
  }
  else {
    FUN_00002898(s_0x_02x___yes___000c3814,local_38);
  }
  FUN_00002898(s__________________________________000c37d0);
  if (*(int *)(param_1 + 0x314) == 1) {
    pcVar9 = &DAT_000c3844;
  }
  else {
    pcVar9 = s_DEVICE_000c384c;
  }
  FUN_00002898(s_Registers_of_EP__d_in__s_mode__000c3854,local_28,pcVar9);
  FUN_00002898(s__________________________________000c3878);
  if (*(int *)(param_1 + 0x314) == 1) {
    if (local_28 == 0) {
      FUN_00002898(s_CSR0_0x_08x__0x_04x_000c4404,*(int *)(param_1 + 0x4c8) + 0x12,uVar11);
      FUN_00002898(_DAT_000c4424,uVar11 & 1);
      FUN_00002898(DAT_000c4178,(uVar11 & 3) >> 1);
      FUN_00002898(s___RxStall___d_000c41a3 + 1,(uVar11 & 7) >> 2);
      FUN_00002898(s___SetupPkt___d_000c4427 + 1,(uVar11 & 0xf) >> 3);
      FUN_00002898(s___Error___d_000c417f + 1,(uVar11 & 0x1f) >> 4);
      FUN_00002898(s_RequestPkt___d_000c4448,(uVar11 & 0x3f) >> 5);
      FUN_00002898(s_StatusPkt___d_000c4468,(uVar11 & 0x7f) >> 6);
      FUN_00002898(s_NAKTimeOut___d_000c4488,(uVar11 & 0xff) >> 7);
      FUN_00002898(s_FlushFifo___d_000c44a8,(uVar11 & 0x1ff) >> 8);
      FUN_00002898(s_RxCount0_0x_08x__0x_04x_000c44c8,*piVar10 + 0x18,bVar3 & 0x7f);
      FUN_00002898(s_NakLimit0_0x_08x__0x_02x_000c44e8,*piVar10 + 0x1b,bVar2 & 0x1f);
      FUN_00002898(s_HwConfig_0x_08x__0x_02x_000c4508,*piVar10 + 0x1f,uVar8);
      FUN_00002898(s_UTMIDataWidth___d_000c4528,uVar8 & 1);
      FUN_00002898(s_SoftConnEnabl___d_000c4548,(uVar8 & 3) >> 1);
      FUN_00002898(s_DynFifoSizing___d_000c4568,(uVar8 & 7) >> 2);
      FUN_00002898(s_HighBandwTxEn___d_000c4588,(uVar8 & 0xf) >> 3);
      FUN_00002898(s_HighBandwRxEn___d_000c45a8,(uVar8 & 0x1f) >> 4);
      FUN_00002898(s_BigEndian___d_000c45c8,(uVar8 & 0x3f) >> 5);
      FUN_00002898(s_MPTxE___d_000c45e8,(uVar8 & 0x7f) >> 6);
      uVar8 = (uint)(bVar1 >> 7);
      pcVar9 = s_MPRxE___d_000c4608;
    }
    else {
      FUN_00002898(DAT_000c4144);
      uVar8 = local_3c;
      FUN_00002898(DAT_000c4148,*(int *)(param_1 + 0x4c8) + 0x10,local_3c & 0xffff);
      FUN_00002898(_DAT_000c414c,uVar8 & 0x7ff);
      FUN_00002898(s___Multiplier__m_1____d_000c414f + 1,(local_3c & 0x1fff) >> 0xb);
      FUN_00002898(DAT_000c4174,*piVar10 + 0x12,uVar11);
      FUN_00002898(DAT_000c4178,uVar11 & 1);
      FUN_00002898(_DAT_000c417c,(uVar11 & 3) >> 1);
      FUN_00002898(s___Error___d_000c417f + 1,(uVar11 & 7) >> 2);
      FUN_00002898(_DAT_000c41a0,(uVar11 & 0xf) >> 3);
      FUN_00002898(s___RxStall___d_000c41a3 + 1,(uVar11 & 0x3f) >> 5);
      FUN_00002898(_DAT_000c41c4,(uVar11 & 0x7f) >> 6);
      FUN_00002898(s___NakTimeOut___d_000c41c7 + 1,(uVar11 & 0xff) >> 7);
      uVar8 = (uint)(uVar4 >> 8);
      FUN_00002898(DAT_000c41e8,(uVar8 & 7) >> 2);
      FUN_00002898(DAT_000c41ec,(uVar8 & 0xf) >> 3);
      FUN_00002898(s_DmaEnable___d_000c3ea8,(uVar8 & 0x1f) >> 4);
      FUN_00002898(DAT_000c41f0,(uVar8 & 0x3f) >> 5);
      FUN_00002898(_DAT_000c41f4,uVar4 >> 0xf);
      uVar8 = local_40;
      FUN_00002898(s___TxType_0x_08x__0x_02x_000c41f7 + 1,*piVar10 + 0x1a,local_40 & 0xff);
      FUN_00002898(s_TargetEpNr___d_000c4218,uVar8 & 0xf);
      uVar8 = (uVar8 & 0x3f) >> 4;
      FUN_00002898(s_Protocol___d___000c4238,uVar8);
      if (uVar8 == 1) {
        FUN_00002898(s_ISO__000c48f4);
        FUN_00002898(s_TxIntervl_0x_08x__0x_02x_000c4264,*(int *)(param_1 + 0x4c8) + 0x1b,bVar2);
        pcVar9 = s_TxInterval___d_000c48fc;
      }
      else if (uVar8 == 2) {
        FUN_00002898(s_BULK__000c491c);
        FUN_00002898(_DAT_000c4924,*(int *)(param_1 + 0x4c8) + 0x1b,bVar2);
        pcVar9 = s___NakLimit___d_000c4927 + 1;
      }
      else if (uVar8 == 3) {
        FUN_00002898(s_INT__000c4948);
        FUN_00002898(_DAT_000c4924,*(int *)(param_1 + 0x4c8) + 0x1b,bVar2);
        pcVar9 = s_TxInterval___d_000c48fc;
      }
      else {
        FUN_00002898(s_ILLEGAL__000c4258);
        FUN_00002898(s_TxIntervl_0x_08x__0x_02x_000c4264,*(int *)(param_1 + 0x4c8) + 0x1b,bVar2);
        pcVar9 = s_TxIntNakLimit___d_000c4284;
      }
      FUN_00002898(pcVar9,bVar2);
      uVar8 = local_44;
      FUN_00002898(DAT_000c4950,*(int *)(param_1 + 0x4c8) + 0x62,local_44 & 0xff);
      FUN_00002898(DAT_000c4954,1 - ((int)(uVar8 << 0x1b) >> 0x1f) << (uVar8 & 0xf) + 3);
      FUN_00002898(DAT_000c4958,(uVar8 & 0x1f) >> 4);
      uVar8 = local_4c;
      FUN_00002898(DAT_000c495c,*piVar10 + 100,local_4c & 0xffff);
      FUN_00002898(DAT_000c4960,(uVar8 & 0x1fff) << 3);
      FUN_00002898(DAT_000c4964);
      FUN_00002898(DAT_000c4968,*piVar10 + 0x14,uVar13);
      FUN_00002898(_DAT_000c414c,uVar13 & 0xffff07ff);
      FUN_00002898(DAT_000c496c,(uVar13 & 0x1fff) >> 0xb);
      FUN_00002898(DAT_000c4970,*piVar10 + 0x16,uVar12);
      FUN_00002898(_DAT_000c4424,uVar12 & 1);
      FUN_00002898(DAT_000c4974,(uVar12 & 3) >> 1);
      FUN_00002898(_DAT_000c4978,(uVar12 & 7) >> 2);
      FUN_00002898(s___DataErrNakTO___d_000c497b + 1,(uVar12 & 0xf) >> 3);
      FUN_00002898(_DAT_000c41a0,(uVar12 & 0x1f) >> 4);
      FUN_00002898(s_RequestPkt___d_000c4448,(uVar12 & 0x3f) >> 5);
      FUN_00002898(DAT_000c499c,(uVar12 & 0x7f) >> 6);
      FUN_00002898(_DAT_000c41c4,(uVar12 & 0xff) >> 7);
      uVar8 = (uint)(uVar5 >> 8);
      FUN_00002898(_DAT_000c49a0,uVar8 & 1);
      FUN_00002898(DAT_000c41e8,(uVar8 & 0xf) >> 3);
      FUN_00002898(s___PIDError___d_000c49a3 + 1,(uVar8 & 0x1f) >> 4);
      FUN_00002898(_DAT_000c49c4,(uVar8 & 0x3f) >> 5);
      FUN_00002898(s___AutoRequest___d_000c49c7 + 1,(uVar8 & 0x7f) >> 6);
      FUN_00002898(DAT_000c49e8,uVar5 >> 0xf);
      FUN_00002898(_DAT_000c49ec,*piVar10 + 0x18,uVar6 & 0x1fff);
      uVar8 = local_48;
      FUN_00002898(s___RxType_0x_08x__0x_02x_000c49ef + 1,*piVar10 + 0x1c,local_48 & 0xff);
      FUN_00002898(DAT_000c4a10,uVar8 & 0xf);
      uVar8 = (uVar8 & 0x3f) >> 4;
      FUN_00002898(_DAT_000c4a14,uVar8);
      if (uVar8 == 1) {
        FUN_00002898(s_ISO__000c48f4);
        uVar8 = local_50 & 0xff;
        FUN_00002898(s_RxIntervl_0x_08x__0x_02x_000c4a24,*(int *)(param_1 + 0x4c8) + 0x1d,uVar8);
        pcVar9 = s_RxInterval___d_000c4cb4;
      }
      else if (uVar8 == 2) {
        FUN_00002898(s_BULK__000c491c);
        uVar8 = local_50 & 0xff;
        FUN_00002898(s_RxIntervl_0x_08x__0x_02x_000c4a24,*(int *)(param_1 + 0x4c8) + 0x1d,uVar8);
        pcVar9 = s___NakLimit___d_000c4927 + 1;
      }
      else if (uVar8 == 3) {
        FUN_00002898(s_INT__000c4948);
        uVar8 = local_50 & 0xff;
        FUN_00002898(s_RxIntervl_0x_08x__0x_02x_000c4a24,*(int *)(param_1 + 0x4c8) + 0x1d,uVar8);
        pcVar9 = s_RxInterval___d_000c4cb4;
      }
      else {
        FUN_00002898(s__ILLEGAL__000c4a17 + 1);
        uVar8 = local_50 & 0xff;
        FUN_00002898(s_RxIntervl_0x_08x__0x_02x_000c4a24,*(int *)(param_1 + 0x4c8) + 0x1d,uVar8);
        pcVar9 = s_RxIntNakLimit___d_000c4a44;
      }
      FUN_00002898(pcVar9,uVar8);
      uVar8 = local_60;
      FUN_00002898(DAT_000c4cd4,*(int *)(param_1 + 0x4c8) + 99,local_60 & 0xff);
      FUN_00002898(DAT_000c4954,1 - ((int)(uVar8 << 0x1b) >> 0x1f) << (uVar8 & 0xf) + 3);
      FUN_00002898(DAT_000c4958,(uVar8 & 0x1f) >> 4);
      uVar8 = local_64;
      FUN_00002898(DAT_000c4cd8,*piVar10 + 0x66,local_64 & 0xffff);
      uVar8 = (uVar8 & 0x1fff) << 3;
      pcVar9 = DAT_000c4960;
    }
  }
  else if (local_28 == 0) {
    FUN_00002898(DAT_000c4cdc,*(int *)(param_1 + 0x4c8) + 0x12,uVar11);
    FUN_00002898(_DAT_000c4424,uVar11 & 1);
    FUN_00002898(DAT_000c4178,(uVar11 & 3) >> 1);
    FUN_00002898(_DAT_000c4ce0,(uVar11 & 7) >> 2);
    FUN_00002898(s___DataEnd___d_000c4ce3 + 1,(uVar11 & 0xf) >> 3);
    FUN_00002898(s_SetupEnd___d_000c4d04,(uVar11 & 0x1f) >> 4);
    FUN_00002898(_DAT_000c4d24,(uVar11 & 0x3f) >> 5);
    FUN_00002898(s___ServdRxPktRdy___d_000c4d27 + 1,(uVar11 & 0x7f) >> 6);
    FUN_00002898(s_ServdSetupEnd___d_000c4d48,(uVar11 & 0xff) >> 7);
    FUN_00002898(DAT_000c4d68,(uVar11 & 0x1ff) >> 8);
    FUN_00002898(DAT_000c4d6c,*piVar10 + 0x18,bVar3 & 0x7f);
    FUN_00002898(DAT_000c4d70,*piVar10 + 0x1f,uVar8);
    FUN_00002898(DAT_000c4d74,uVar8 & 1);
    FUN_00002898(DAT_000c4d78,(uVar8 & 3) >> 1);
    FUN_00002898(DAT_000c4d7c,(uVar8 & 7) >> 2);
    FUN_00002898(DAT_000c4d80,(uVar8 & 0xf) >> 3);
    FUN_00002898(DAT_000c4d84,(uVar8 & 0x1f) >> 4);
    FUN_00002898(DAT_000c4d88,(uVar8 & 0x3f) >> 5);
    FUN_00002898(DAT_000c4d8c,(uVar8 & 0x7f) >> 6);
    uVar8 = (uint)(bVar1 >> 7);
    pcVar9 = DAT_000c4d90;
  }
  else {
    FUN_00002898(s_______________TX_________________000c38a0);
    uVar8 = local_3c;
    FUN_00002898(s_TxMaxPkt_0x_08x__0x_04x_000c38c4,*(int *)(param_1 + 0x4c8) + 0x10,
                 local_3c & 0xffff);
    FUN_00002898(s_MaxPayload__0x_03x_000c38e4,uVar8 & 0x7ff);
    FUN_00002898(s_Multiplier___d_000c3908,(local_3c & 0x1fff) >> 0xb);
    FUN_00002898(s_TX_CSR_0x_08x__0x_04x_000c3928,*piVar10 + 0x12,uVar11);
    FUN_00002898(s_TxPktRdy___d_000c3948,uVar11 & 1);
    FUN_00002898(s_FifoNotEmpty___d_000c3968,(uVar11 & 3) >> 1);
    FUN_00002898(s_FifoUnderRun___d_000c3988,(uVar11 & 7) >> 2);
    FUN_00002898(s_FlushFifo___d_000c39a8,(uVar11 & 0xf) >> 3);
    FUN_00002898(s_SendStall___d_000c39c8,(uVar11 & 0x1f) >> 4);
    FUN_00002898(s_SentStall___d_000c39e8,(uVar11 & 0x3f) >> 5);
    FUN_00002898(s_ClrDataToggle___d_000c3a08,(uVar11 & 0x7f) >> 6);
    FUN_00002898(s_IncompleteTx___d_000c3a28,(uVar11 & 0xff) >> 7);
    uVar8 = (uint)(uVar4 >> 8);
    FUN_00002898(s_FrcDataToggle___d_000c3a48,(uVar8 & 0xf) >> 3);
    FUN_00002898(s_DmaMode___d_000c3a68,(uVar8 & 7) >> 2);
    FUN_00002898(s_Mode___d_000c3a88,(uVar8 & 0x3f) >> 5);
    FUN_00002898(s_IsoMode___d_000c3aa8,(uVar8 & 0x7f) >> 6);
    FUN_00002898(s_AutoSet___d_000c3ac8,uVar4 >> 0xf);
    uVar8 = local_44;
    FUN_00002898(s_TxFifoSiz_0x_08x__0x_02x_000c3ae8,*piVar10 + 0x62,local_44 & 0xff);
    FUN_00002898(s_Size___d_000c3b08,1 - ((int)(uVar8 << 0x1b) >> 0x1f) << (uVar8 & 0xf) + 3);
    FUN_00002898(s_DblPktBuffer___d_000c3b28,(uVar8 & 0x1f) >> 4);
    uVar8 = local_4c;
    FUN_00002898(s_TxFifoAdd_0x_08x__0x_04x_000c3d40,*piVar10 + 100,local_4c & 0xffff);
    FUN_00002898(s_StartAddress__0x_04x_000c3d60,(uVar8 & 0x1fff) << 3);
    FUN_00002898(s_______________RX_________________000c3d84);
    FUN_00002898(s_RxMaxPkt_0x_08x__0x_04x_000c3da8,*piVar10 + 0x14,uVar13);
    FUN_00002898(s_MaxPayload__0x_03x_000c38e4,uVar13 & 0xffff07ff);
    FUN_00002898(s_Multiplier___d_000c3908,(uVar13 & 0x1fff) >> 0xb);
    FUN_00002898(s_RX_CSR_0x_08x__0x_04x_000c3dc8,*piVar10 + 0x16,uVar12);
    FUN_00002898(s_RxPktRdy___d_000c3de8,uVar12 & 1);
    FUN_00002898(s_FifoFull___d_000c3e08,(uVar12 & 3) >> 1);
    FUN_00002898(s_FifoOverRun___d_000c3e28,(uVar12 & 7) >> 2);
    FUN_00002898(s_DataError___d_000c3e48,(uVar12 & 0xf) >> 3);
    FUN_00002898(s_FlushFifo___d_000c39a8,(uVar12 & 0x1f) >> 4);
    FUN_00002898(s_SendStall___d_000c39c8,(uVar12 & 0x3f) >> 5);
    FUN_00002898(s_SentStall___d_000c39e8,(uVar12 & 0x7f) >> 6);
    FUN_00002898(s_ClrDataToggle___d_000c3a08,(uVar12 & 0xff) >> 7);
    uVar8 = (uint)(uVar5 >> 8);
    FUN_00002898(s_IncompleteRx___d_000c3e68,uVar8 & 1);
    FUN_00002898(s_DmaMode___d_000c3a68,(uVar8 & 0xf) >> 3);
    FUN_00002898(s_DisableNyet___d_000c3e88,(uVar8 & 0x1f) >> 4);
    FUN_00002898(s_DmaEnable___d_000c3ea8,(uVar8 & 0x3f) >> 5);
    FUN_00002898(s_IsoMode___d_000c3aa8,(uVar8 & 0x7f) >> 6);
    FUN_00002898(s_AutoClear___d_000c3ec8,uVar5 >> 0xf);
    FUN_00002898(s_RxCount_0x_08x__0x_04x_000c3ee8,*piVar10 + 0x18,uVar6 & 0x1fff);
    uVar8 = local_60;
    FUN_00002898(s_RxFifoSiz_0x_08x__0x_02x_000c3f08,*piVar10 + 99,local_60 & 0xff);
    FUN_00002898(s_Size___d_000c3b08,1 - ((int)(uVar8 << 0x1b) >> 0x1f) << (uVar8 & 0xf) + 3);
    FUN_00002898(s_DblPktBuffer___d_000c3b28,(uVar8 & 0x1f) >> 4);
    uVar8 = local_64;
    FUN_00002898(s_RxFifoAdd_0x_08x__0x_04x_000c3f28,*piVar10 + 0x66,local_64 & 0xffff);
    uVar8 = (uVar8 & 0x1fff) << 3;
    pcVar9 = s_StartAddress__0x_04x_000c3d60;
  }
  FUN_00002898(pcVar9,uVar8);
  return;
}

