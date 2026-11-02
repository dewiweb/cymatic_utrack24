// rea decompile_all
// name: FUN_000dc638
// address: 0xdc638
// body: available
// range: 0xdc638-0xdc843 inclusive
// range: 0xdcbb0-0xdccb7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000dc638(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  FUN_000028a4(s_IsoChannel___d_000dc844);
  uVar1 = *param_1;
  uVar2 = FUN_0014c228();
  uVar2 = FUN_0014baf4(uVar2,uVar1 & 0xff);
  FUN_000028a4(s_Warplet_ID__0x_x___s__000dc870,*param_1,uVar2);
  FUN_000028a4(s_Warplet_descriptor_address__0x_0_000dc8a0,param_1);
  FUN_000028a4(s_Warplet_counters_0__address__0x__000dc8d0,param_1 + 0x2c);
  FUN_000028a4(s_Warplet_states_0__address__0x_08_000dc900,param_1 + 0x30);
  uVar2 = 0;
  if (param_1[1] != 0) {
    uVar2 = FUN_000760c8();
  }
  FUN_000028a4(s_Next_warplet_descriptor__0x_08x_000dc930,uVar2);
  uVar2 = FUN_0014c228();
  iVar3 = FUN_0014c34c(uVar2,param_1[2]);
  uVar1 = param_1[2];
  if (iVar3 != 0) {
    uVar1 = FUN_000760c8();
  }
  FUN_000028a4(s_Code_start_address__0x_08x_000dc960,uVar1);
  iVar3 = FUN_000760c8(param_1[6]);
  if (*(int *)(iVar3 + 8) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_000760c8();
  }
  FUN_000028a4(s_Input_buffer_address__0x_08x_000dc990,uVar2);
  iVar3 = FUN_000760c8(param_1[0x16]);
  if (*(int *)(iVar3 + 8) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_000760c8();
  }
  FUN_000028a4(s_Output_buffer_address__0x_08x_000dc9c0,uVar2);
  uVar2 = 0;
  if (param_1[3] != 0) {
    uVar2 = FUN_000760c8();
  }
  FUN_000028a4(s_Control_block_address__0x_08x_000dc9f0,uVar2);
  FUN_000028a4(s_Number_of_source_addresses__0x_x_000dca20,param_1[4]);
  FUN_000028a4(s_Number_of_destination_addresses__000dca4c,param_1[5]);
  FUN_000028a4(s_Global_flags__0x_08x___000dca78,param_1[0x2a]);
  if ((param_1[0x2a] & 1) != 0) {
    thunk_FUN_000028a4(s_muted_000dcaa8);
  }
  if ((param_1[0x2a] & 2) != 0) {
    thunk_FUN_000028a4(s_create_labels_if_skip_000dcab0);
  }
  FUN_000028a4(&DAT_000dcac8);
  FUN_000028a4(s_Packet_DMA_flag_offset__0x_08x_000dcacc,param_1[0x26]);
  FUN_000028a4(s__17s_12s_11s_6s_11s_11s__s_000dcb3c,s_DmaCtx_000dcb34,s_BufAddr_000dcb2c,
               &DAT_000dcb24);
  FUN_000028a4(s_Sources__000dcb58);
  iVar3 = 0;
  if (0 < (int)param_1[4]) {
    do {
      puVar4 = (undefined4 *)FUN_000760c8(param_1[iVar3 + 6]);
      FUN_000760c8(puVar4[2]);
      FUN_000028a4(s_0x_x__0x_02x__2d_0x_08x_0x_08x_0_000dcb68,iVar3,*puVar4,*puVar4);
      if ((puVar4[4] & 1) != 0) {
        thunk_FUN_000028a4(DAT_000dcba8);
      }
      if ((puVar4[4] & 2) != 0) {
        thunk_FUN_000028a4(DAT_000dcbac);
      }
      if ((puVar4[4] & 4) != 0) {
        thunk_FUN_000028a4(DAT_000dccb8);
      }
      if ((puVar4[4] & 8) != 0) {
        thunk_FUN_000028a4(_DAT_000dccbc);
      }
      FUN_000028a4(&DAT_000dcac8);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[4]);
  }
  FUN_000028a4(s_0___Destination__000dccbd + 3);
  iVar3 = 0;
  if (0 < (int)param_1[5]) {
    do {
      puVar4 = (undefined4 *)FUN_000760c8(param_1[iVar3 + 0x16]);
      FUN_000760c8(puVar4[2]);
      FUN_000028a4(s_0x_x__0x_02x__2d_0x_08x_0x_08x_0_000dcb68,iVar3,*puVar4,*puVar4);
      if ((puVar4[4] & 1) != 0) {
        thunk_FUN_000028a4(DAT_000dcba8);
      }
      if ((puVar4[4] & 2) != 0) {
        thunk_FUN_000028a4(DAT_000dcbac);
      }
      if ((puVar4[4] & 4) != 0) {
        thunk_FUN_000028a4(DAT_000dccb8);
      }
      if ((puVar4[4] & 8) != 0) {
        thunk_FUN_000028a4(_DAT_000dccbc);
      }
      FUN_000028a4(&DAT_000dcac8);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[5]);
    return;
  }
  return;
}

