// rea decompile_all
// name: FUN_001acd0c
// address: 0x1acd0c
// body: available
// range: 0x1acd0c-0x1acf0b inclusive
// range: 0x1ad164-0x1ad20b inclusive
// range: 0x1ad314-0x1ad6a3 inclusive
// range: 0x1ad980-0x1ad9cb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001acd0c(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined1 auStack_18 [12];
  
  if (((param_1 < 0) || (param_1 == 1)) || (4 < param_1)) {
    FUN_000028a4(s_Port__d_does_not_exist_on_this_c_001acf0c,param_1);
    return;
  }
  puVar4 = (uint *)(DAT_001acf34 + param_1 * 0x1000);
  FUN_000028a4(s_AV_port__d_registers__001acf38,param_1);
  if (param_2 != 0) {
    FUN_000472c0(puVar4,param_2);
    return;
  }
  FUN_000028a4(s______________________001acf50);
  FUN_000028a4(s_AV_Control_reg__0x_p__001acf68,puVar4);
  FUN_000028a4(s_UpAndRunning_0x_02x_001acf84,(*puVar4 & 0xfffffff) >> 0x18);
  FUN_000028a4(s_AvFmSrcSel_0x_02x_001acfa4,(*puVar4 & 0x1fffff) >> 0x14);
  FUN_000028a4(s_OsCntSel_0x_02x_001acfc4,(*puVar4 & 0x3ffff) >> 0x10);
  FUN_000028a4(s_OsCntType_0x_02x_001acfe4,(*puVar4 & 0x3fff) >> 0xc);
  FUN_000028a4(s_Mute_0x_02x_001ad004,(*puVar4 & 0xfff) >> 8);
  FUN_000028a4(s_On_0x_02x_001ad024,*puVar4 & 0xf);
  FUN_000028a4(s_AV_Flag_reg__0x_p__001ad044,puVar4 + 1);
  FUN_000028a4(s_avFlag_0x_02x_001ad060,puVar4[1] & 1);
  FUN_000028a4(s_AV_Kind_reg__0x_p__001ad080,puVar4 + 2);
  FUN_000028a4(s_TrailEdgeSmplAvSlv_0x_02x_001ad09c,(puVar4[2] & 0x1fffffff) >> 0x1c);
  FUN_000028a4(s_SpikeFilter_0x_02x_001ad0bc,(puVar4[2] & 0x3ffffff) >> 0x19);
  FUN_000028a4(s_TrailEdgeSmpl_0x_02x_001ad0dc,(puVar4[2] & 0x1ffffff) >> 0x18);
  FUN_000028a4(s_TsValidRange_0x_02x_001ad0fc,(puVar4[2] & 0x3ffff) >> 0x10);
  FUN_0007b98c(auStack_18);
  uVar1 = 0;
  do {
    if ((uint)*(byte *)(s_d___Interf__format_0x_02x_001ad11c._0_4_ + uVar1 * 2 + 1) ==
        (puVar4[2] & 0x3ff) >> 6) {
      FUN_0007b7fc(auStack_18,
                   *(undefined1 *)(s_d___Interf__format_0x_02x_001ad11c._0_4_ + uVar1 * 2));
      iVar2 = FUN_00112aa0(puVar4,auStack_18);
      if (iVar2 != 0) {
        FUN_000028a4(s_d___Interf__format_0x_02x_001ad11c + 4,(puVar4[2] & 0x3ff) >> 6);
        FUN_00156078(auStack_18);
        uVar3 = FUN_000497c0();
        FUN_000028a4(&DAT_001ad140,uVar3);
        FUN_000028a4(s_Interf__config_0x_02x_001ad144,puVar4[2] & 0x3f);
        FUN_001560fc(auStack_18,0);
        goto LAB_001ad178;
      }
      break;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0xd);
  FUN_000028a4(s_Error__could_not_read_port_forma_001ad20c);
LAB_001ad178:
  FUN_000028a4(s_Error__could_not_read_port_forma_001ad20c + 0x34);
  FUN_000028a4(s_AV_Config0_reg__0x_p__001ad244,puVar4 + 3);
  FUN_000028a4(s_AvMuteNonAudio_0x_02x_001ad260,(puVar4[3] & 0x1fffff) >> 0x14);
  FUN_000028a4(s_AvMuteV_0x_02x_001ad280,(puVar4[3] & 0xfffff) >> 0x12);
  FUN_000028a4(s_AvMuteP_0x_02x_001ad2a0,(puVar4[3] & 0x3ffff) >> 0x10);
  FUN_000028a4(s_SYT_sync_Sel_0x_02x_001ad2c0,puVar4[3] & 3);
  FUN_000028a4(s_SYT_interval_0x_02x_001ad2e0,(puVar4[3] & 0xff) >> 4);
  if ((puVar4[3] & 0xff) >> 4 < 6) {
    FUN_000028a4(s_SYT____d_001ad6a4,4 << ((puVar4[3] & 0xff) >> 4));
  }
  else {
    FUN_000028a4(s_reserved__Error__001ad300);
  }
  FUN_000028a4(s_Ext_WS_0x_02x_001ad6b0,(puVar4[3] & 0x1ff) >> 8);
  FUN_000028a4(s_AV_Config1_reg__0x_p__001ad6d0,puVar4 + 4);
  FUN_000028a4(s_AES_ADAT_OSmpl_ticks_0x_08x_001ad6ec,puVar4[4]);
  FUN_000028a4(s_SYT____d_001ad6a4 + 8);
  FUN_000028a4(s_AV_Interface___001ad70c);
  iVar2 = 0;
  do {
    FUN_000028a4(s__i_001ad724,iVar2);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  FUN_000028a4(s_SYT____d_001ad6a4 + 8);
  FUN_000028a4(s_AV_Interface_reg_001ad734);
  iVar2 = 0;
  do {
    FUN_000028a4(s__0x_p__001ad74c,puVar4 + iVar2 + 8);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  FUN_000028a4(s_SYT____d_001ad6a4 + 8);
  FUN_000028a4(s_Direction_001ad754);
  iVar2 = 0;
  do {
    FUN_000028a4(s_0x_02x_001ad76c,puVar4[iVar2 + 8] & 1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  FUN_000028a4(s_SYT____d_001ad6a4 + 8);
  FUN_000028a4(s_AES_Conversion_001ad77c);
  iVar2 = 0;
  do {
    FUN_000028a4(s_0x_02x_001ad76c,(puVar4[iVar2 + 8] & 3) >> 1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  FUN_000028a4(s_SYT____d_001ad6a4 + 8);
  FUN_000028a4(s_CU_Select_001ad794);
  iVar2 = 0;
  do {
    FUN_000028a4(s_0x_02x_001ad76c,(puVar4[iVar2 + 8] & 7) >> 2);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  FUN_000028a4(s_SYT____d_001ad6a4 + 8);
  FUN_000028a4(s_CU_Insertion_001ad7ac);
  iVar2 = 0;
  do {
    FUN_000028a4(s_0x_02x_001ad76c,(puVar4[iVar2 + 8] & 0x3f) >> 4);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  FUN_000028a4(s_SYT____d_001ad6a4 + 8);
  FUN_000028a4(s_DAC_Mute_001ad7c4);
  FUN_000028a4(s_AvMuteNonAudio_0x_02x_001ad260 + 0x14,(puVar4[8] & 0xf) >> 3);
  FUN_000028a4(s_SYT____d_001ad6a4 + 8);
  FUN_000028a4(s_AV_IF_Status_reg_001ad7dc);
  iVar2 = 0;
  do {
    FUN_000028a4(s__0x_p__001ad74c,puVar4 + iVar2 + 0x208);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  FUN_000028a4(s_SYT____d_001ad6a4 + 8);
  FUN_000028a4(s_AES_Sig_Avail_001ad7f4);
  iVar2 = 0;
  do {
    FUN_000028a4(s_0x_02x_001ad76c,puVar4[iVar2 + 0x208] & 1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  FUN_000028a4(s_SYT____d_001ad6a4 + 8);
  FUN_000028a4(s_ADAT_Sig_Avail_001ad80c);
  iVar2 = 0;
  do {
    FUN_000028a4(s_0x_02x_001ad76c,(puVar4[iVar2 + 0x208] & 3) >> 1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  FUN_000028a4(s_SYT____d_001ad6a4 + 8);
  FUN_000028a4(s_Parity_Error_001ad824);
  iVar2 = 0;
  do {
    FUN_000028a4(s_0x_02x_001ad76c,(puVar4[iVar2 + 0x208] & 0x1f) >> 4);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  FUN_000028a4(s_SYT____d_001ad6a4 + 8);
  FUN_000028a4(s_Invalid_Data_001ad83c);
  iVar2 = 0;
  do {
    FUN_000028a4(s_0x_02x_001ad76c,(puVar4[iVar2 + 0x208] & 0x3f) >> 5);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  FUN_000028a4(s_SYT____d_001ad6a4 + 8);
  FUN_000028a4(s_Non_Audio_Data_001ad854);
  iVar2 = 0;
  do {
    FUN_000028a4(s_0x_02x_001ad76c,(puVar4[iVar2 + 0x208] & 0x7f) >> 6);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  FUN_000028a4(&DAT_001ad86c);
  FUN_000028a4(s_AV_Status_regs__0x_p__to__0x_p__001ad870,puVar4 + 0x200);
  FUN_000028a4(s_Data_flow_error_0x_02x_001ad898,puVar4[0x200] & 0xf);
  FUN_000028a4(s_TS_error_0x_02x_001ad8b8,puVar4[0x201] & 0xf);
  FUN_000028a4(s_In_sync_0x_02x_001ad8d8,puVar4[0x202] & 0xf);
  FUN_000028a4(s_AES_ADAT_error_0x_02x_001ad8f8,puVar4[0x203] & 0xf);
  FUN_000028a4(s_OS_count_0x_03x_001ad918,puVar4[0x204] & 0xfff);
  FUN_000028a4(s_ADAT_user_bits_0x_02x_001ad938,puVar4[0x205] & 0x1f);
  FUN_000028a4(s_SYT____d_001ad6a4 + 8);
  FUN_000028a4(s_AV_Interrupt_regs__0x_p__to__0x__001ad958,puVar4 + 0x300);
  FUN_000028a4(s_InterruptSet_0x_04x_001ad9cc,puVar4[0x300]);
  FUN_000472c0(puVar4,0);
  FUN_000028a4(s_InterruptClear_0x_04x_001ad9ec,puVar4[0x301]);
  FUN_000028a4(s_InterruptMaskSet_0x_04x_001ada0c,puVar4[0x302]);
  FUN_000028a4(s_InterruptMaskClr_0x_04x_001ada2c,puVar4[0x303]);
  FUN_0007b9a4(auStack_18);
  return;
}

