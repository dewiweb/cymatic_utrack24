// rea decompile_all
// name: FUN_0004f258
// address: 0x4f258
// body: available
// range: 0x4f258-0x4f5eb inclusive
// range: 0x4f88c-0x4fbeb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4fbe8 to 0x2890 thunk_FUN_00002898 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004f258(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_0004f5ec;
  FUN_00002898(s_Registers_starting_at_Address_0x_0004f5f4,DAT_0004f5f0);
  FUN_00002898(s_Control__Configuration_and_Statu_0004f61c);
  uVar1 = FUN_001f84cc(uVar2,0);
  FUN_00002898(_DAT_0004f660,s_Network_Control_0004f650,0,uVar1);
  uVar1 = FUN_001f84cc(uVar2,4);
  FUN_00002898(_DAT_0004f660,s___Network_Configuration_0004f662 + 2,4,uVar1);
  uVar1 = FUN_001f84cc(uVar2,8);
  FUN_00002898(_DAT_0004f660,s_Network_Status_0004f67c,8,uVar1);
  uVar1 = FUN_001f84cc(uVar2,0xfc);
  FUN_00002898(_DAT_0004f660,s_Revision_0004f68c,0xfc,uVar1);
  uVar1 = FUN_001f84cc(uVar2,0x14);
  FUN_00002898(_DAT_0004f660,s_Transmit_Status_0004f698,0x14,uVar1);
  uVar1 = FUN_001f84cc(uVar2,0x1c);
  FUN_00002898(_DAT_0004f660,s_Transmit_Buffer_Queue_Pointer_0004f6a8,0x1c,uVar1);
  uVar1 = FUN_001f84cc(uVar2,0x18);
  FUN_00002898(_DAT_0004f660,s_Receive_Buffer_Queue_Pointer_0004f6c8,0x18,uVar1);
  uVar1 = FUN_001f84cc(uVar2,0x20);
  FUN_00002898(_DAT_0004f660,s_Receive_Status_0004f6e8,0x20,uVar1);
  uVar1 = FUN_001f84cc(uVar2,0x24);
  FUN_00002898(_DAT_0004f660,s_Interrupt_Status_0004f6f8,0x24,uVar1);
  uVar1 = FUN_001f84cc(uVar2,0x28);
  FUN_00002898(_DAT_0004f660,s_Interrupt_Enable_0004f70c,0x28,uVar1);
  uVar1 = FUN_001f84cc(uVar2,0x2c);
  FUN_00002898(_DAT_0004f660,s_Interrupt_Disable_0004f720,0x2c,uVar1);
  uVar1 = FUN_001f84cc(uVar2,0x30);
  FUN_00002898(_DAT_0004f660,s_Interrupt_Mask_0004f734,0x30,uVar1);
  uVar1 = FUN_001f84cc(uVar2,0x34);
  FUN_00002898(_DAT_0004f660,s_PHY_Maintenance_0004f744,0x34,uVar1);
  uVar1 = FUN_001f84cc(uVar2,0x38);
  FUN_00002898(_DAT_0004f660,s_Pause_Time_0004f754,0x38,uVar1);
  uVar1 = FUN_001f84cc(uVar2,0xbc);
  FUN_00002898(_DAT_0004f660,s_Transmit_Pause_Quantum_0004f760,0xbc,uVar1);
  uVar1 = FUN_001f84cc(uVar2,0xc4);
  FUN_00002898(_DAT_0004f660,s_Wake_on_LAN_0004f778,0xc4,uVar1);
  FUN_00002898(s_Address_Matching_Registers__p_40_0004f784);
  uVar1 = FUN_001f84cc(uVar2,0x98);
  FUN_00002898(_DAT_0004f660,s_Specific_Address_1_Bottom_0004f7a8,0x98,uVar1);
  uVar1 = FUN_001f84cc(uVar2,0x9c);
  FUN_00002898(_DAT_0004f660,s_Specific_Address_1_Top_0004f7c4,0x9c,uVar1);
  uVar1 = FUN_001f84cc(uVar2,0xa0);
  FUN_00002898(_DAT_0004f660,s_Specific_Address_2_Bottom_0004f7dc,0xa0,uVar1);
  uVar1 = FUN_001f84cc(uVar2,0xa4);
  FUN_00002898(_DAT_0004f660,s_Specific_Address_2_Top_0004f7f8,0xa4,uVar1);
  uVar1 = FUN_001f84cc(uVar2,0xa8);
  FUN_00002898(_DAT_0004f660,s_Specific_Address_3_Bottom_0004f810,0xa8,uVar1);
  uVar1 = FUN_001f84cc(uVar2,0xac);
  FUN_00002898(_DAT_0004f660,s_Specific_Address_3_Top_0004f82c,0xac,uVar1);
  uVar1 = FUN_001f84cc(uVar2,0xb0);
  FUN_00002898(_DAT_0004f660,s_Specific_Address_4_Bottom_0004f844,0xb0,uVar1);
  uVar1 = FUN_001f84cc(uVar2,0xb4);
  FUN_00002898(_DAT_0004f660,s_Specific_Address_4_Top_0004f860,0xb4,uVar1);
  uVar1 = FUN_001f84cc(uVar2,0xb8);
  FUN_00002898(_DAT_0004f660,s_Type_ID_Checking_0004f878,0xb8,uVar1);
  uVar1 = FUN_001f84cc(uVar2,0x90);
  FUN_00002898(_DAT_0004f660,s_Hash_Bottom_0004fbec,0x90,uVar1);
  uVar1 = FUN_001f84cc(uVar2,0x94);
  FUN_00002898(_DAT_0004f660,s_Hash_Top_0004fbf8,0x94,uVar1);
  FUN_00002898(s_Statistics_Registers__p_42__0004fc04);
  uVar1 = FUN_001f84cc(uVar2,0x3c);
  FUN_00002898(_DAT_0004f660,s_Pause_Frames_Received_0004fc24,0x3c,uVar1);
  uVar1 = FUN_001f84cc(uVar2,0x40);
  FUN_00002898(_DAT_0004f660,s_Frames_Transmitted_OK_0004fc3c,0x40,uVar1);
  uVar1 = FUN_001f84cc(uVar2,0x44);
  FUN_00002898(_DAT_0004f660,s_Single_Collision_Frames_0004fc54,0x44,uVar1);
  uVar1 = FUN_001f84cc(uVar2,0x48);
  FUN_00002898(_DAT_0004f660,s_Multiple_Collision_Frames_0004fc6c,0x48,uVar1);
  uVar1 = FUN_001f84cc(uVar2,0x4c);
  FUN_00002898(_DAT_0004f660,s_Frames_Received_OK_0004fc88,0x4c,uVar1);
  uVar1 = FUN_001f84cc(uVar2,0x50);
  FUN_00002898(_DAT_0004f660,s_Frame_Check_Sequence_Errors_0004fc9c,0x50,uVar1);
  uVar1 = FUN_001f84cc(uVar2,0x54);
  FUN_00002898(_DAT_0004f660,s_Alignment_Errors_0004fcb8,0x54,uVar1);
  uVar1 = FUN_001f84cc(uVar2,0x58);
  FUN_00002898(_DAT_0004f660,s_Dererred_Transmission_Frames_0004fccc,0x58,uVar1);
  uVar1 = FUN_001f84cc(uVar2,0x5c);
  FUN_00002898(_DAT_0004f660,s_Late_Collisions_0004fcec,0x5c,uVar1);
  uVar1 = FUN_001f84cc(uVar2,0x60);
  FUN_00002898(_DAT_0004f660,s_Excessive_Collisions_0004fcfc,0x60,uVar1);
  uVar1 = FUN_001f84cc(uVar2,100);
  FUN_00002898(_DAT_0004f660,s_Transmit_Underrun_Errors_0004fd14,100,uVar1);
  uVar1 = FUN_001f84cc(uVar2,0x68);
  FUN_00002898(_DAT_0004f660,s_Carrier_Sense_Errors_0004fd30,0x68,uVar1);
  uVar1 = FUN_001f84cc(uVar2,0x6c);
  FUN_00002898(_DAT_0004f660,s_Receive_Resource_Errors_0004fd48,0x6c,uVar1);
  uVar1 = FUN_001f84cc(uVar2,0x70);
  FUN_00002898(_DAT_0004f660,s_Receive_Overrun_Errors_0004fd60,0x70,uVar1);
  uVar1 = FUN_001f84cc(uVar2,0x74);
  FUN_00002898(_DAT_0004f660,s_Receive_Symbol_Errors_0004fd78,0x74,uVar1);
  uVar1 = FUN_001f84cc(uVar2,0x78);
  FUN_00002898(_DAT_0004f660,s_Excessive_Length_Errors_0004fd90,0x78,uVar1);
  uVar1 = FUN_001f84cc(uVar2,0x7c);
  FUN_00002898(_DAT_0004f660,s_Receive_Jabbers_0004fda8,0x7c,uVar1);
  uVar1 = FUN_001f84cc(uVar2,0x80);
  FUN_00002898(_DAT_0004f660,s_Undersize_Frames_0004fdb8,0x80,uVar1);
  uVar1 = FUN_001f84cc(uVar2,0x84);
  FUN_00002898(_DAT_0004f660,s_SQE_Test_Errors_0004fdcc,0x84,uVar1);
  uVar1 = FUN_001f84cc(uVar2,0x88);
  FUN_00002898(_DAT_0004f660,s_Received_Length_Field_Mismatch_0004fddc,0x88,uVar1);
  uVar2 = FUN_001f84cc(uVar2,0x8c);
  thunk_FUN_00002898(_DAT_0004f660,s_Transmitted_Pause_Frames_0004fdfc,0x8c,uVar2);
  return;
}

