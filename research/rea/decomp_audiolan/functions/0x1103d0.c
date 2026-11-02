// rea decompile_all
// name: FUN_001103d0
// address: 0x1103d0
// body: available
// range: 0x1103d0-0x110793 inclusive
// range: 0x11081c-0x11094f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001103d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 auStack_48 [12];
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  
  FUN_001bbbd0(auStack_48);
  uVar1 = FUN_0008cf78();
  iVar2 = FUN_0008ce54(uVar1,s_AudioHWService_00110794,auStack_48);
  if (iVar2 == 0) {
    FUN_000028a4(DAT_001107a4);
    uVar1 = FUN_000a4714(auStack_48);
  }
  else {
    uVar3 = FUN_0018afd4();
    piVar4 = (int *)FUN_001d75e4(auStack_48);
    uVar1 = (**(code **)(*piVar4 + 0x80))(piVar4,uVar3,0,*(code **)(*piVar4 + 0x80),uVar1);
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    if (*(int *)(param_1 + 0x2c) == 0) {
      FUN_000028a4(*(undefined4 *)s_____AvSlaveMode_001107b0._0_4_,&DAT_001107a8);
    }
    FUN_00086440(*(undefined4 *)(param_1 + 0x2c));
    FUN_00086388(*(undefined4 *)(param_1 + 0x2c));
    piVar4 = (int *)FUN_001d75e4(auStack_48);
    uVar1 = (**(code **)(*piVar4 + 0x80))(piVar4,uVar3,1);
    *(undefined4 *)(param_1 + 0x30) = uVar1;
    if (*(int *)(param_1 + 0x30) == 0) {
      FUN_000028a4(*(undefined4 *)s_____AvSlaveMode_001107b0._0_4_,s_____AvSlaveMode_001107b0 + 4);
    }
    FUN_00086440(*(undefined4 *)(param_1 + 0x30));
    FUN_00086388(*(undefined4 *)(param_1 + 0x30));
    piVar4 = (int *)FUN_001d75e4(auStack_48);
    uVar1 = (**(code **)(*piVar4 + 0x80))(piVar4,uVar3,2);
    *(undefined4 *)(param_1 + 0x34) = uVar1;
    if (*(int *)(param_1 + 0x34) == 0) {
      FUN_000028a4(*(undefined4 *)s_____AvSlaveMode_001107b0._0_4_,s_RecPlayMode_001107c0);
    }
    FUN_00086440(*(undefined4 *)(param_1 + 0x34));
    FUN_00086388(*(undefined4 *)(param_1 + 0x34));
    piVar4 = (int *)FUN_001d75e4(auStack_48);
    uVar1 = (**(code **)(*piVar4 + 0x80))(piVar4,uVar3,4);
    *(undefined4 *)(param_1 + 0x38) = uVar1;
    piVar4 = (int *)FUN_001d75e4(auStack_48);
    uVar1 = (**(code **)(*piVar4 + 0x80))(piVar4,uVar3,5);
    *(undefined4 *)(param_1 + 0x3c) = uVar1;
    if (*(int *)(param_1 + 0x38) == 0) {
      FUN_000028a4(*(undefined4 *)s_____AvSlaveMode_001107b0._0_4_,s_SampleRate_0_001107cc);
    }
    if (*(int *)(param_1 + 0x3c) == 0) {
      FUN_000028a4(*(undefined4 *)s_____AvSlaveMode_001107b0._0_4_,s_SampleRate_1_001107dc);
    }
    FUN_00086440(*(undefined4 *)(param_1 + 0x38));
    FUN_00086440(*(undefined4 *)(param_1 + 0x3c));
    FUN_00086388(*(undefined4 *)(param_1 + 0x38));
    FUN_00086388(*(undefined4 *)(param_1 + 0x3c));
    piVar4 = (int *)FUN_001d75e4(auStack_48);
    uVar1 = (**(code **)(*piVar4 + 0x80))(piVar4,uVar3,6);
    *(undefined4 *)(param_1 + 0x40) = uVar1;
    if (*(int *)(param_1 + 0x40) == 0) {
      FUN_000028a4(*(undefined4 *)s_____AvSlaveMode_001107b0._0_4_,s_In_Error_001107ec);
    }
    FUN_00086480(*(undefined4 *)(param_1 + 0x40));
    FUN_000863b4(*(undefined4 *)(param_1 + 0x40));
    FUN_00086388(*(undefined4 *)(param_1 + 0x40));
    piVar4 = (int *)FUN_001d75e4(auStack_48);
    uVar1 = (**(code **)(*piVar4 + 0x80))(piVar4,uVar3,7);
    *(undefined4 *)(param_1 + 0x44) = uVar1;
    if (*(int *)(param_1 + 0x44) == 0) {
      FUN_000028a4(*(undefined4 *)s_____AvSlaveMode_001107b0._0_4_,s_Oun_Error_001107f8);
    }
    FUN_00086480(*(undefined4 *)(param_1 + 0x44));
    FUN_000863b4(*(undefined4 *)(param_1 + 0x44));
    FUN_00086388(*(undefined4 *)(param_1 + 0x44));
    local_28 = (int *)FUN_001d75e4(auStack_48);
    uVar1 = (**(code **)(*local_28 + 0x80))(local_28,uVar3,8);
    *(undefined4 *)(param_1 + 0x48) = uVar1;
    if (*(int *)(param_1 + 0x48) == 0) {
      FUN_000028a4(*(undefined4 *)s_____AvSlaveMode_001107b0._0_4_,s_I8S_IDmode_00110804);
    }
    FUN_00086440(*(undefined4 *)(param_1 + 0x48));
    FUN_00086388(*(undefined4 *)(param_1 + 0x48));
    local_2c = (int *)FUN_001d75e4(auStack_48);
    uVar1 = (**(code **)(*local_2c + 0x80))(local_2c,uVar3,9);
    *(undefined4 *)(param_1 + 0x4c) = uVar1;
    if (*(int *)(param_1 + 0x4c) == 0) {
      FUN_000028a4(*(undefined4 *)s_____AvSlaveMode_001107b0._0_4_,s_I8S_ACK_00110810);
    }
    FUN_00086480(*(undefined4 *)(param_1 + 0x4c));
    FUN_000863b4(*(undefined4 *)(param_1 + 0x4c));
    FUN_00086388(*(undefined4 *)(param_1 + 0x4c));
    local_30 = (int *)FUN_001d75e4(auStack_48);
    uVar1 = (**(code **)(*local_30 + 0x80))(local_30,uVar3,10);
    *(undefined4 *)(param_1 + 0x50) = uVar1;
    if (*(int *)(param_1 + 0x50) == 0) {
      FUN_000028a4(*(undefined4 *)s_____AvSlaveMode_001107b0._0_4_,&DAT_00110818);
    }
    FUN_00086480(*(undefined4 *)(param_1 + 0x50));
    FUN_000863b4(*(undefined4 *)(param_1 + 0x50));
    FUN_00086388(*(undefined4 *)(param_1 + 0x50));
    local_34 = (int *)FUN_001d75e4(auStack_48);
    uVar1 = (**(code **)(*local_34 + 0x80))(local_34,uVar3,0x11);
    *(undefined4 *)(param_1 + 0x54) = uVar1;
    if (*(int *)(param_1 + 0x54) == 0) {
      FUN_000028a4(*(undefined4 *)s_____AvSlaveMode_001107b0._0_4_,s_Ethernet_NRESET_00110950);
    }
    FUN_00086480(*(undefined4 *)(param_1 + 0x54));
    FUN_00086388(*(undefined4 *)(param_1 + 0x54));
    FUN_000863e0(*(undefined4 *)(param_1 + 0x54));
    FUN_000863b4(*(undefined4 *)(param_1 + 0x54));
    FUN_0017b9f8(1);
    FUN_000863e0(*(undefined4 *)(param_1 + 0x54));
    local_38 = (int *)FUN_001d75e4(auStack_48);
    uVar1 = (**(code **)(*local_38 + 0x80))(local_38,uVar3,0x10);
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    if (*(int *)(param_1 + 0x58) == 0) {
      FUN_000028a4(*(undefined4 *)s_____AvSlaveMode_001107b0._0_4_,s_Ethernet_GPIO_00110960);
    }
    FUN_00086440(*(undefined4 *)(param_1 + 0x58));
    FUN_00086388(*(undefined4 *)(param_1 + 0x58));
    local_3c = (int *)FUN_001d75e4(auStack_48);
    uVar1 = (**(code **)(*local_3c + 0x80))(local_3c,uVar3,0xf);
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    if (*(int *)(param_1 + 0x5c) == 0) {
      FUN_000028a4(*(undefined4 *)s_____AvSlaveMode_001107b0._0_4_,s_uT24_AudioLan_LED_00110970);
    }
    FUN_00086480(*(undefined4 *)(param_1 + 0x5c));
    FUN_000863b4(*(undefined4 *)(param_1 + 0x5c));
    FUN_00086388(*(undefined4 *)(param_1 + 0x5c));
    FUN_00110b64(param_1);
    uVar1 = FUN_000a4714(auStack_48);
  }
  return uVar1;
}

