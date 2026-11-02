// rea decompile_all
// name: FUN_000964b8
// address: 0x964b8
// body: available
// range: 0x964b8-0x96837 inclusive
// range: 0x96c1c-0x96e13 inclusive
// range: 0x9701c-0x971ff inclusive
// range: 0x97378-0x974d7 inclusive
// range: 0x976fc-0x979c7 inclusive
// range: 0x97b38-0x97d87 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000964b8(int param_1,int param_2)

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
    FUN_00098240(param_1,0,2,local_70);
    local_7c = (uint)*local_70[0];
    local_38 = local_7c;
  }
  else {
    FUN_00098240(param_1,param_2,1,local_70);
    local_38 = (uint)*local_70[0];
    FUN_00098240(param_1,local_28,0,local_70);
    local_7c = (uint)*local_70[0];
  }
  FUN_001b714c(&local_68);
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
  FUN_001b7160(local_68);
  FUN_001b714c(local_34);
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
  FUN_001b7160(local_34[0]);
  FUN_000028a4(s_Configuration_of_endpoint__d__00096838,local_28);
  FUN_000028a4(s_______________________________00096858);
  FUN_000028a4(s___HW_EP_index___Logical_EP___Set_00096878);
  FUN_000028a4(s__________________________________000968a4);
  FUN_000028a4(s_TX___0x_02x___000968d0,local_28);
  if (local_7c == 0xff) {
    FUN_000028a4(s_undefined___no___00097200);
  }
  else {
    FUN_000028a4(s_0x_02x___yes___000968e8,local_7c);
  }
  FUN_000028a4(s_RX___0x_02x___00096900,local_28);
  if (local_38 == 0xff) {
    FUN_000028a4(s_undefined___no___00097200);
  }
  else {
    FUN_000028a4(s_0x_02x___yes___000968e8,local_38);
  }
  FUN_000028a4(s__________________________________000968a4);
  if (*(int *)(param_1 + 0x314) == 1) {
    pcVar9 = &DAT_00096918;
  }
  else {
    pcVar9 = s_DEVICE_00096920;
  }
  FUN_000028a4(s_Registers_of_EP__d_in__s_mode__00096928,local_28,pcVar9);
  FUN_000028a4(s__________________________________0009694c);
  if (*(int *)(param_1 + 0x314) == 1) {
    if (local_28 == 0) {
      FUN_000028a4(s_CSR0_0x_08x__0x_04x_000974d8,*(int *)(param_1 + 0x4c8) + 0x12,uVar11);
      FUN_000028a4(_DAT_000974f8,uVar11 & 1);
      FUN_000028a4(DAT_0009724c,(uVar11 & 3) >> 1);
      FUN_000028a4(s___RxStall___d_00097276 + 2,(uVar11 & 7) >> 2);
      FUN_000028a4(s___SetupPkt___d_000974fa + 2,(uVar11 & 0xf) >> 3);
      FUN_000028a4(s___Error___d_00097252 + 2,(uVar11 & 0x1f) >> 4);
      FUN_000028a4(s_RequestPkt___d_0009751c,(uVar11 & 0x3f) >> 5);
      FUN_000028a4(s_StatusPkt___d_0009753c,(uVar11 & 0x7f) >> 6);
      FUN_000028a4(s_NAKTimeOut___d_0009755c,(uVar11 & 0xff) >> 7);
      FUN_000028a4(s_FlushFifo___d_0009757c,(uVar11 & 0x1ff) >> 8);
      FUN_000028a4(s_RxCount0_0x_08x__0x_04x_0009759c,*piVar10 + 0x18,bVar3 & 0x7f);
      FUN_000028a4(s_NakLimit0_0x_08x__0x_02x_000975bc,*piVar10 + 0x1b,bVar2 & 0x1f);
      FUN_000028a4(s_HwConfig_0x_08x__0x_02x_000975dc,*piVar10 + 0x1f,uVar8);
      FUN_000028a4(s_UTMIDataWidth___d_000975fc,uVar8 & 1);
      FUN_000028a4(s_SoftConnEnabl___d_0009761c,(uVar8 & 3) >> 1);
      FUN_000028a4(s_DynFifoSizing___d_0009763c,(uVar8 & 7) >> 2);
      FUN_000028a4(s_HighBandwTxEn___d_0009765c,(uVar8 & 0xf) >> 3);
      FUN_000028a4(s_HighBandwRxEn___d_0009767c,(uVar8 & 0x1f) >> 4);
      FUN_000028a4(s_BigEndian___d_0009769c,(uVar8 & 0x3f) >> 5);
      FUN_000028a4(s_MPTxE___d_000976bc,(uVar8 & 0x7f) >> 6);
      uVar8 = (uint)(bVar1 >> 7);
      pcVar9 = s_MPRxE___d_000976dc;
    }
    else {
      FUN_000028a4(DAT_00097218);
      uVar8 = local_3c;
      FUN_000028a4(DAT_0009721c,*(int *)(param_1 + 0x4c8) + 0x10,local_3c & 0xffff);
      FUN_000028a4(_DAT_00097220,uVar8 & 0x7ff);
      FUN_000028a4(s___Multiplier__m_1____d_00097222 + 2,(local_3c & 0x1fff) >> 0xb);
      FUN_000028a4(DAT_00097248,*piVar10 + 0x12,uVar11);
      FUN_000028a4(DAT_0009724c,uVar11 & 1);
      FUN_000028a4(_DAT_00097250,(uVar11 & 3) >> 1);
      FUN_000028a4(s___Error___d_00097252 + 2,(uVar11 & 7) >> 2);
      FUN_000028a4(_DAT_00097274,(uVar11 & 0xf) >> 3);
      FUN_000028a4(s___RxStall___d_00097276 + 2,(uVar11 & 0x3f) >> 5);
      FUN_000028a4(_DAT_00097298,(uVar11 & 0x7f) >> 6);
      FUN_000028a4(s___NakTimeOut___d_0009729a + 2,(uVar11 & 0xff) >> 7);
      uVar8 = (uint)(uVar4 >> 8);
      FUN_000028a4(DAT_000972bc,(uVar8 & 7) >> 2);
      FUN_000028a4(DAT_000972c0,(uVar8 & 0xf) >> 3);
      FUN_000028a4(s_DmaEnable___d_00096f7c,(uVar8 & 0x1f) >> 4);
      FUN_000028a4(DAT_000972c4,(uVar8 & 0x3f) >> 5);
      FUN_000028a4(_DAT_000972c8,uVar4 >> 0xf);
      uVar8 = local_40;
      FUN_000028a4(s___TxType_0x_08x__0x_02x_000972ca + 2,*piVar10 + 0x1a,local_40 & 0xff);
      FUN_000028a4(s_TargetEpNr___d_000972ec,uVar8 & 0xf);
      uVar8 = (uVar8 & 0x3f) >> 4;
      FUN_000028a4(s_Protocol___d___0009730c,uVar8);
      if (uVar8 == 1) {
        FUN_000028a4(s_ISO__000979c8);
        FUN_000028a4(s_TxIntervl_0x_08x__0x_02x_00097338,*(int *)(param_1 + 0x4c8) + 0x1b,bVar2);
        pcVar9 = s_TxInterval___d_000979d0;
      }
      else if (uVar8 == 2) {
        FUN_000028a4(s_BULK__000979f0);
        FUN_000028a4(_DAT_000979f8,*(int *)(param_1 + 0x4c8) + 0x1b,bVar2);
        pcVar9 = s___NakLimit___d_000979fa + 2;
      }
      else if (uVar8 == 3) {
        FUN_000028a4(s_INT__00097a1c);
        FUN_000028a4(_DAT_000979f8,*(int *)(param_1 + 0x4c8) + 0x1b,bVar2);
        pcVar9 = s_TxInterval___d_000979d0;
      }
      else {
        FUN_000028a4(s_ILLEGAL__0009732c);
        FUN_000028a4(s_TxIntervl_0x_08x__0x_02x_00097338,*(int *)(param_1 + 0x4c8) + 0x1b,bVar2);
        pcVar9 = s_TxIntNakLimit___d_00097358;
      }
      FUN_000028a4(pcVar9,bVar2);
      uVar8 = local_44;
      FUN_000028a4(DAT_00097a24,*(int *)(param_1 + 0x4c8) + 0x62,local_44 & 0xff);
      FUN_000028a4(DAT_00097a28,1 - ((int)(uVar8 << 0x1b) >> 0x1f) << (uVar8 & 0xf) + 3);
      FUN_000028a4(DAT_00097a2c,(uVar8 & 0x1f) >> 4);
      uVar8 = local_4c;
      FUN_000028a4(DAT_00097a30,*piVar10 + 100,local_4c & 0xffff);
      FUN_000028a4(DAT_00097a34,(uVar8 & 0x1fff) << 3);
      FUN_000028a4(DAT_00097a38);
      FUN_000028a4(DAT_00097a3c,*piVar10 + 0x14,uVar13);
      FUN_000028a4(_DAT_00097220,uVar13 & 0xffff07ff);
      FUN_000028a4(DAT_00097a40,(uVar13 & 0x1fff) >> 0xb);
      FUN_000028a4(DAT_00097a44,*piVar10 + 0x16,uVar12);
      FUN_000028a4(_DAT_000974f8,uVar12 & 1);
      FUN_000028a4(DAT_00097a48,(uVar12 & 3) >> 1);
      FUN_000028a4(_DAT_00097a4c,(uVar12 & 7) >> 2);
      FUN_000028a4(s___DataErrNakTO___d_00097a4e + 2,(uVar12 & 0xf) >> 3);
      FUN_000028a4(_DAT_00097274,(uVar12 & 0x1f) >> 4);
      FUN_000028a4(s_RequestPkt___d_0009751c,(uVar12 & 0x3f) >> 5);
      FUN_000028a4(DAT_00097a70,(uVar12 & 0x7f) >> 6);
      FUN_000028a4(_DAT_00097298,(uVar12 & 0xff) >> 7);
      uVar8 = (uint)(uVar5 >> 8);
      FUN_000028a4(_DAT_00097a74,uVar8 & 1);
      FUN_000028a4(DAT_000972bc,(uVar8 & 0xf) >> 3);
      FUN_000028a4(s___PIDError___d_00097a76 + 2,(uVar8 & 0x1f) >> 4);
      FUN_000028a4(_DAT_00097a98,(uVar8 & 0x3f) >> 5);
      FUN_000028a4(s___AutoRequest___d_00097a9a + 2,(uVar8 & 0x7f) >> 6);
      FUN_000028a4(DAT_00097abc,uVar5 >> 0xf);
      FUN_000028a4(_DAT_00097ac0,*piVar10 + 0x18,uVar6 & 0x1fff);
      uVar8 = local_48;
      FUN_000028a4(s___RxType_0x_08x__0x_02x_00097ac2 + 2,*piVar10 + 0x1c,local_48 & 0xff);
      FUN_000028a4(DAT_00097ae4,uVar8 & 0xf);
      uVar8 = (uVar8 & 0x3f) >> 4;
      FUN_000028a4(_DAT_00097ae8,uVar8);
      if (uVar8 == 1) {
        FUN_000028a4(s_ISO__000979c8);
        uVar8 = local_50 & 0xff;
        FUN_000028a4(s_RxIntervl_0x_08x__0x_02x_00097af8,*(int *)(param_1 + 0x4c8) + 0x1d,uVar8);
        pcVar9 = s_RxInterval___d_00097d88;
      }
      else if (uVar8 == 2) {
        FUN_000028a4(s_BULK__000979f0);
        uVar8 = local_50 & 0xff;
        FUN_000028a4(s_RxIntervl_0x_08x__0x_02x_00097af8,*(int *)(param_1 + 0x4c8) + 0x1d,uVar8);
        pcVar9 = s___NakLimit___d_000979fa + 2;
      }
      else if (uVar8 == 3) {
        FUN_000028a4(s_INT__00097a1c);
        uVar8 = local_50 & 0xff;
        FUN_000028a4(s_RxIntervl_0x_08x__0x_02x_00097af8,*(int *)(param_1 + 0x4c8) + 0x1d,uVar8);
        pcVar9 = s_RxInterval___d_00097d88;
      }
      else {
        FUN_000028a4(s__ILLEGAL__00097aea + 2);
        uVar8 = local_50 & 0xff;
        FUN_000028a4(s_RxIntervl_0x_08x__0x_02x_00097af8,*(int *)(param_1 + 0x4c8) + 0x1d,uVar8);
        pcVar9 = s_RxIntNakLimit___d_00097b18;
      }
      FUN_000028a4(pcVar9,uVar8);
      uVar8 = local_60;
      FUN_000028a4(DAT_00097da8,*(int *)(param_1 + 0x4c8) + 99,local_60 & 0xff);
      FUN_000028a4(DAT_00097a28,1 - ((int)(uVar8 << 0x1b) >> 0x1f) << (uVar8 & 0xf) + 3);
      FUN_000028a4(DAT_00097a2c,(uVar8 & 0x1f) >> 4);
      uVar8 = local_64;
      FUN_000028a4(DAT_00097dac,*piVar10 + 0x66,local_64 & 0xffff);
      uVar8 = (uVar8 & 0x1fff) << 3;
      pcVar9 = DAT_00097a34;
    }
  }
  else if (local_28 == 0) {
    FUN_000028a4(DAT_00097db0,*(int *)(param_1 + 0x4c8) + 0x12,uVar11);
    FUN_000028a4(_DAT_000974f8,uVar11 & 1);
    FUN_000028a4(DAT_0009724c,(uVar11 & 3) >> 1);
    FUN_000028a4(_DAT_00097db4,(uVar11 & 7) >> 2);
    FUN_000028a4(s___DataEnd___d_00097db6 + 2,(uVar11 & 0xf) >> 3);
    FUN_000028a4(s_SetupEnd___d_00097dd8,(uVar11 & 0x1f) >> 4);
    FUN_000028a4(_DAT_00097df8,(uVar11 & 0x3f) >> 5);
    FUN_000028a4(s___ServdRxPktRdy___d_00097dfa + 2,(uVar11 & 0x7f) >> 6);
    FUN_000028a4(s_ServdSetupEnd___d_00097e1c,(uVar11 & 0xff) >> 7);
    FUN_000028a4(DAT_00097e3c,(uVar11 & 0x1ff) >> 8);
    FUN_000028a4(DAT_00097e40,*piVar10 + 0x18,bVar3 & 0x7f);
    FUN_000028a4(DAT_00097e44,*piVar10 + 0x1f,uVar8);
    FUN_000028a4(DAT_00097e48,uVar8 & 1);
    FUN_000028a4(DAT_00097e4c,(uVar8 & 3) >> 1);
    FUN_000028a4(DAT_00097e50,(uVar8 & 7) >> 2);
    FUN_000028a4(DAT_00097e54,(uVar8 & 0xf) >> 3);
    FUN_000028a4(DAT_00097e58,(uVar8 & 0x1f) >> 4);
    FUN_000028a4(DAT_00097e5c,(uVar8 & 0x3f) >> 5);
    FUN_000028a4(DAT_00097e60,(uVar8 & 0x7f) >> 6);
    uVar8 = (uint)(bVar1 >> 7);
    pcVar9 = DAT_00097e64;
  }
  else {
    FUN_000028a4(s_______________TX_________________00096974);
    uVar8 = local_3c;
    FUN_000028a4(s_TxMaxPkt_0x_08x__0x_04x_00096998,*(int *)(param_1 + 0x4c8) + 0x10,
                 local_3c & 0xffff);
    FUN_000028a4(s_MaxPayload__0x_03x_000969b8,uVar8 & 0x7ff);
    FUN_000028a4(s_Multiplier___d_000969dc,(local_3c & 0x1fff) >> 0xb);
    FUN_000028a4(s_TX_CSR_0x_08x__0x_04x_000969fc,*piVar10 + 0x12,uVar11);
    FUN_000028a4(s_TxPktRdy___d_00096a1c,uVar11 & 1);
    FUN_000028a4(s_FifoNotEmpty___d_00096a3c,(uVar11 & 3) >> 1);
    FUN_000028a4(s_FifoUnderRun___d_00096a5c,(uVar11 & 7) >> 2);
    FUN_000028a4(s_FlushFifo___d_00096a7c,(uVar11 & 0xf) >> 3);
    FUN_000028a4(s_SendStall___d_00096a9c,(uVar11 & 0x1f) >> 4);
    FUN_000028a4(s_SentStall___d_00096abc,(uVar11 & 0x3f) >> 5);
    FUN_000028a4(s_ClrDataToggle___d_00096adc,(uVar11 & 0x7f) >> 6);
    FUN_000028a4(s_IncompleteTx___d_00096afc,(uVar11 & 0xff) >> 7);
    uVar8 = (uint)(uVar4 >> 8);
    FUN_000028a4(s_FrcDataToggle___d_00096b1c,(uVar8 & 0xf) >> 3);
    FUN_000028a4(s_DmaMode___d_00096b3c,(uVar8 & 7) >> 2);
    FUN_000028a4(s_Mode___d_00096b5c,(uVar8 & 0x3f) >> 5);
    FUN_000028a4(s_IsoMode___d_00096b7c,(uVar8 & 0x7f) >> 6);
    FUN_000028a4(s_AutoSet___d_00096b9c,uVar4 >> 0xf);
    uVar8 = local_44;
    FUN_000028a4(s_TxFifoSiz_0x_08x__0x_02x_00096bbc,*piVar10 + 0x62,local_44 & 0xff);
    FUN_000028a4(s_Size___d_00096bdc,1 - ((int)(uVar8 << 0x1b) >> 0x1f) << (uVar8 & 0xf) + 3);
    FUN_000028a4(s_DblPktBuffer___d_00096bfc,(uVar8 & 0x1f) >> 4);
    uVar8 = local_4c;
    FUN_000028a4(s_TxFifoAdd_0x_08x__0x_04x_00096e14,*piVar10 + 100,local_4c & 0xffff);
    FUN_000028a4(s_StartAddress__0x_04x_00096e34,(uVar8 & 0x1fff) << 3);
    FUN_000028a4(s_______________RX_________________00096e58);
    FUN_000028a4(s_RxMaxPkt_0x_08x__0x_04x_00096e7c,*piVar10 + 0x14,uVar13);
    FUN_000028a4(s_MaxPayload__0x_03x_000969b8,uVar13 & 0xffff07ff);
    FUN_000028a4(s_Multiplier___d_000969dc,(uVar13 & 0x1fff) >> 0xb);
    FUN_000028a4(s_RX_CSR_0x_08x__0x_04x_00096e9c,*piVar10 + 0x16,uVar12);
    FUN_000028a4(s_RxPktRdy___d_00096ebc,uVar12 & 1);
    FUN_000028a4(s_FifoFull___d_00096edc,(uVar12 & 3) >> 1);
    FUN_000028a4(s_FifoOverRun___d_00096efc,(uVar12 & 7) >> 2);
    FUN_000028a4(s_DataError___d_00096f1c,(uVar12 & 0xf) >> 3);
    FUN_000028a4(s_FlushFifo___d_00096a7c,(uVar12 & 0x1f) >> 4);
    FUN_000028a4(s_SendStall___d_00096a9c,(uVar12 & 0x3f) >> 5);
    FUN_000028a4(s_SentStall___d_00096abc,(uVar12 & 0x7f) >> 6);
    FUN_000028a4(s_ClrDataToggle___d_00096adc,(uVar12 & 0xff) >> 7);
    uVar8 = (uint)(uVar5 >> 8);
    FUN_000028a4(s_IncompleteRx___d_00096f3c,uVar8 & 1);
    FUN_000028a4(s_DmaMode___d_00096b3c,(uVar8 & 0xf) >> 3);
    FUN_000028a4(s_DisableNyet___d_00096f5c,(uVar8 & 0x1f) >> 4);
    FUN_000028a4(s_DmaEnable___d_00096f7c,(uVar8 & 0x3f) >> 5);
    FUN_000028a4(s_IsoMode___d_00096b7c,(uVar8 & 0x7f) >> 6);
    FUN_000028a4(s_AutoClear___d_00096f9c,uVar5 >> 0xf);
    FUN_000028a4(s_RxCount_0x_08x__0x_04x_00096fbc,*piVar10 + 0x18,uVar6 & 0x1fff);
    uVar8 = local_60;
    FUN_000028a4(s_RxFifoSiz_0x_08x__0x_02x_00096fdc,*piVar10 + 99,local_60 & 0xff);
    FUN_000028a4(s_Size___d_00096bdc,1 - ((int)(uVar8 << 0x1b) >> 0x1f) << (uVar8 & 0xf) + 3);
    FUN_000028a4(s_DblPktBuffer___d_00096bfc,(uVar8 & 0x1f) >> 4);
    uVar8 = local_64;
    FUN_000028a4(s_RxFifoAdd_0x_08x__0x_04x_00096ffc,*piVar10 + 0x66,local_64 & 0xffff);
    uVar8 = (uVar8 & 0x1fff) << 3;
    pcVar9 = s_StartAddress__0x_04x_00096e34;
  }
  FUN_000028a4(pcVar9,uVar8);
  return;
}

