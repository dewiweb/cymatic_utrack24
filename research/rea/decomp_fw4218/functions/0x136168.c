// rea decompile_all
// name: FUN_00136168
// address: 0x136168
// body: available
// range: 0x136168-0x136373 inclusive
// range: 0x1366e0-0x1367e7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00136168(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  FUN_00002898(s_IsoChannel___d_00136374);
  uVar1 = *param_1;
  uVar2 = FUN_001a6044();
  uVar2 = FUN_001a5910(uVar2,uVar1 & 0xff);
  FUN_00002898(s_Warplet_ID__0x_x___s__001363a0,*param_1,uVar2);
  FUN_00002898(s_Warplet_descriptor_address__0x_0_001363d0,param_1);
  FUN_00002898(s_Warplet_counters_0__address__0x__00136400,param_1 + 0x2c);
  FUN_00002898(s_Warplet_states_0__address__0x_08_00136430,param_1 + 0x30);
  uVar2 = 0;
  if (param_1[1] != 0) {
    uVar2 = FUN_000789c4();
  }
  FUN_00002898(s_Next_warplet_descriptor__0x_08x_00136460,uVar2);
  uVar2 = FUN_001a6044();
  iVar3 = FUN_001a6168(uVar2,param_1[2]);
  uVar1 = param_1[2];
  if (iVar3 != 0) {
    uVar1 = FUN_000789c4();
  }
  FUN_00002898(s_Code_start_address__0x_08x_00136490,uVar1);
  iVar3 = FUN_000789c4(param_1[6]);
  if (*(int *)(iVar3 + 8) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_000789c4();
  }
  FUN_00002898(s_Input_buffer_address__0x_08x_001364c0,uVar2);
  iVar3 = FUN_000789c4(param_1[0x16]);
  if (*(int *)(iVar3 + 8) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_000789c4();
  }
  FUN_00002898(s_Output_buffer_address__0x_08x_001364f0,uVar2);
  uVar2 = 0;
  if (param_1[3] != 0) {
    uVar2 = FUN_000789c4();
  }
  FUN_00002898(s_Control_block_address__0x_08x_00136520,uVar2);
  FUN_00002898(s_Number_of_source_addresses__0x_x_00136550,param_1[4]);
  FUN_00002898(s_Number_of_destination_addresses__0013657c,param_1[5]);
  FUN_00002898(s_Global_flags__0x_08x___001365a8,param_1[0x2a]);
  if ((param_1[0x2a] & 1) != 0) {
    thunk_FUN_00002898(s_muted_001365d8);
  }
  if ((param_1[0x2a] & 2) != 0) {
    thunk_FUN_00002898(s_create_labels_if_skip_001365e0);
  }
  FUN_00002898(&DAT_001365f8);
  FUN_00002898(s_Packet_DMA_flag_offset__0x_08x_001365fc,param_1[0x26]);
  FUN_00002898(s__17s_12s_11s_6s_11s_11s__s_0013666c,s_DmaCtx_00136664,s_BufAddr_0013665c,
               &DAT_00136654);
  FUN_00002898(s_Sources__00136688);
  iVar3 = 0;
  if (0 < (int)param_1[4]) {
    do {
      puVar4 = (undefined4 *)FUN_000789c4(param_1[iVar3 + 6]);
      FUN_000789c4(puVar4[2]);
      FUN_00002898(s_0x_x__0x_02x__2d_0x_08x_0x_08x_0_00136698,iVar3,*puVar4,*puVar4);
      if ((puVar4[4] & 1) != 0) {
        thunk_FUN_00002898(DAT_001366d8);
      }
      if ((puVar4[4] & 2) != 0) {
        thunk_FUN_00002898(DAT_001366dc);
      }
      if ((puVar4[4] & 4) != 0) {
        thunk_FUN_00002898(DAT_001367e8);
      }
      if ((puVar4[4] & 8) != 0) {
        thunk_FUN_00002898(_DAT_001367ec);
      }
      FUN_00002898(&DAT_001365f8);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[4]);
  }
  FUN_00002898(s____Destination__001367ee + 2);
  iVar3 = 0;
  if (0 < (int)param_1[5]) {
    do {
      puVar4 = (undefined4 *)FUN_000789c4(param_1[iVar3 + 0x16]);
      FUN_000789c4(puVar4[2]);
      FUN_00002898(s_0x_x__0x_02x__2d_0x_08x_0x_08x_0_00136698,iVar3,*puVar4,*puVar4);
      if ((puVar4[4] & 1) != 0) {
        thunk_FUN_00002898(DAT_001366d8);
      }
      if ((puVar4[4] & 2) != 0) {
        thunk_FUN_00002898(DAT_001366dc);
      }
      if ((puVar4[4] & 4) != 0) {
        thunk_FUN_00002898(DAT_001367e8);
      }
      if ((puVar4[4] & 8) != 0) {
        thunk_FUN_00002898(_DAT_001367ec);
      }
      FUN_00002898(&DAT_001365f8);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[5]);
    return;
  }
  return;
}

