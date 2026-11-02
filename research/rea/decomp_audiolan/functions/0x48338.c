// rea decompile_all
// name: FUN_00048338
// address: 0x48338
// body: available
// range: 0x48338-0x486cb inclusive
// range: 0x4896c-0x48ccb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x48cc8 to 0x289c thunk_FUN_000028a4 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00048338(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_000486cc;
  FUN_000028a4(s_Registers_starting_at_Address_0x_000486d4,DAT_000486d0);
  FUN_000028a4(s_Control__Configuration_and_Statu_000486fc);
  uVar1 = FUN_001b0130(uVar2,0);
  FUN_000028a4(_DAT_00048740,s_Network_Control_00048730,0,uVar1);
  uVar1 = FUN_001b0130(uVar2,4);
  FUN_000028a4(_DAT_00048740,s___Network_Configuration_00048742 + 2,4,uVar1);
  uVar1 = FUN_001b0130(uVar2,8);
  FUN_000028a4(_DAT_00048740,s_Network_Status_0004875c,8,uVar1);
  uVar1 = FUN_001b0130(uVar2,0xfc);
  FUN_000028a4(_DAT_00048740,s_Revision_0004876c,0xfc,uVar1);
  uVar1 = FUN_001b0130(uVar2,0x14);
  FUN_000028a4(_DAT_00048740,s_Transmit_Status_00048778,0x14,uVar1);
  uVar1 = FUN_001b0130(uVar2,0x1c);
  FUN_000028a4(_DAT_00048740,s_Transmit_Buffer_Queue_Pointer_00048788,0x1c,uVar1);
  uVar1 = FUN_001b0130(uVar2,0x18);
  FUN_000028a4(_DAT_00048740,s_Receive_Buffer_Queue_Pointer_000487a8,0x18,uVar1);
  uVar1 = FUN_001b0130(uVar2,0x20);
  FUN_000028a4(_DAT_00048740,s_Receive_Status_000487c8,0x20,uVar1);
  uVar1 = FUN_001b0130(uVar2,0x24);
  FUN_000028a4(_DAT_00048740,s_Interrupt_Status_000487d8,0x24,uVar1);
  uVar1 = FUN_001b0130(uVar2,0x28);
  FUN_000028a4(_DAT_00048740,s_Interrupt_Enable_000487ec,0x28,uVar1);
  uVar1 = FUN_001b0130(uVar2,0x2c);
  FUN_000028a4(_DAT_00048740,s_Interrupt_Disable_00048800,0x2c,uVar1);
  uVar1 = FUN_001b0130(uVar2,0x30);
  FUN_000028a4(_DAT_00048740,s_Interrupt_Mask_00048814,0x30,uVar1);
  uVar1 = FUN_001b0130(uVar2,0x34);
  FUN_000028a4(_DAT_00048740,s_PHY_Maintenance_00048824,0x34,uVar1);
  uVar1 = FUN_001b0130(uVar2,0x38);
  FUN_000028a4(_DAT_00048740,s_Pause_Time_00048834,0x38,uVar1);
  uVar1 = FUN_001b0130(uVar2,0xbc);
  FUN_000028a4(_DAT_00048740,s_Transmit_Pause_Quantum_00048840,0xbc,uVar1);
  uVar1 = FUN_001b0130(uVar2,0xc4);
  FUN_000028a4(_DAT_00048740,s_Wake_on_LAN_00048858,0xc4,uVar1);
  FUN_000028a4(s_Address_Matching_Registers__p_40_00048864);
  uVar1 = FUN_001b0130(uVar2,0x98);
  FUN_000028a4(_DAT_00048740,s_Specific_Address_1_Bottom_00048888,0x98,uVar1);
  uVar1 = FUN_001b0130(uVar2,0x9c);
  FUN_000028a4(_DAT_00048740,s_Specific_Address_1_Top_000488a4,0x9c,uVar1);
  uVar1 = FUN_001b0130(uVar2,0xa0);
  FUN_000028a4(_DAT_00048740,s_Specific_Address_2_Bottom_000488bc,0xa0,uVar1);
  uVar1 = FUN_001b0130(uVar2,0xa4);
  FUN_000028a4(_DAT_00048740,s_Specific_Address_2_Top_000488d8,0xa4,uVar1);
  uVar1 = FUN_001b0130(uVar2,0xa8);
  FUN_000028a4(_DAT_00048740,s_Specific_Address_3_Bottom_000488f0,0xa8,uVar1);
  uVar1 = FUN_001b0130(uVar2,0xac);
  FUN_000028a4(_DAT_00048740,s_Specific_Address_3_Top_0004890c,0xac,uVar1);
  uVar1 = FUN_001b0130(uVar2,0xb0);
  FUN_000028a4(_DAT_00048740,s_Specific_Address_4_Bottom_00048924,0xb0,uVar1);
  uVar1 = FUN_001b0130(uVar2,0xb4);
  FUN_000028a4(_DAT_00048740,s_Specific_Address_4_Top_00048940,0xb4,uVar1);
  uVar1 = FUN_001b0130(uVar2,0xb8);
  FUN_000028a4(_DAT_00048740,s_Type_ID_Checking_00048958,0xb8,uVar1);
  uVar1 = FUN_001b0130(uVar2,0x90);
  FUN_000028a4(_DAT_00048740,s_Hash_Bottom_00048ccc,0x90,uVar1);
  uVar1 = FUN_001b0130(uVar2,0x94);
  FUN_000028a4(_DAT_00048740,s_Hash_Top_00048cd8,0x94,uVar1);
  FUN_000028a4(s_Statistics_Registers__p_42__00048ce4);
  uVar1 = FUN_001b0130(uVar2,0x3c);
  FUN_000028a4(_DAT_00048740,s_Pause_Frames_Received_00048d04,0x3c,uVar1);
  uVar1 = FUN_001b0130(uVar2,0x40);
  FUN_000028a4(_DAT_00048740,s_Frames_Transmitted_OK_00048d1c,0x40,uVar1);
  uVar1 = FUN_001b0130(uVar2,0x44);
  FUN_000028a4(_DAT_00048740,s_Single_Collision_Frames_00048d34,0x44,uVar1);
  uVar1 = FUN_001b0130(uVar2,0x48);
  FUN_000028a4(_DAT_00048740,s_Multiple_Collision_Frames_00048d4c,0x48,uVar1);
  uVar1 = FUN_001b0130(uVar2,0x4c);
  FUN_000028a4(_DAT_00048740,s_Frames_Received_OK_00048d68,0x4c,uVar1);
  uVar1 = FUN_001b0130(uVar2,0x50);
  FUN_000028a4(_DAT_00048740,s_Frame_Check_Sequence_Errors_00048d7c,0x50,uVar1);
  uVar1 = FUN_001b0130(uVar2,0x54);
  FUN_000028a4(_DAT_00048740,s_Alignment_Errors_00048d98,0x54,uVar1);
  uVar1 = FUN_001b0130(uVar2,0x58);
  FUN_000028a4(_DAT_00048740,s_Dererred_Transmission_Frames_00048dac,0x58,uVar1);
  uVar1 = FUN_001b0130(uVar2,0x5c);
  FUN_000028a4(_DAT_00048740,s_Late_Collisions_00048dcc,0x5c,uVar1);
  uVar1 = FUN_001b0130(uVar2,0x60);
  FUN_000028a4(_DAT_00048740,s_Excessive_Collisions_00048ddc,0x60,uVar1);
  uVar1 = FUN_001b0130(uVar2,100);
  FUN_000028a4(_DAT_00048740,s_Transmit_Underrun_Errors_00048df4,100,uVar1);
  uVar1 = FUN_001b0130(uVar2,0x68);
  FUN_000028a4(_DAT_00048740,s_Carrier_Sense_Errors_00048e10,0x68,uVar1);
  uVar1 = FUN_001b0130(uVar2,0x6c);
  FUN_000028a4(_DAT_00048740,s_Receive_Resource_Errors_00048e28,0x6c,uVar1);
  uVar1 = FUN_001b0130(uVar2,0x70);
  FUN_000028a4(_DAT_00048740,s_Receive_Overrun_Errors_00048e40,0x70,uVar1);
  uVar1 = FUN_001b0130(uVar2,0x74);
  FUN_000028a4(_DAT_00048740,s_Receive_Symbol_Errors_00048e58,0x74,uVar1);
  uVar1 = FUN_001b0130(uVar2,0x78);
  FUN_000028a4(_DAT_00048740,s_Excessive_Length_Errors_00048e70,0x78,uVar1);
  uVar1 = FUN_001b0130(uVar2,0x7c);
  FUN_000028a4(_DAT_00048740,s_Receive_Jabbers_00048e88,0x7c,uVar1);
  uVar1 = FUN_001b0130(uVar2,0x80);
  FUN_000028a4(_DAT_00048740,s_Undersize_Frames_00048e98,0x80,uVar1);
  uVar1 = FUN_001b0130(uVar2,0x84);
  FUN_000028a4(_DAT_00048740,s_SQE_Test_Errors_00048eac,0x84,uVar1);
  uVar1 = FUN_001b0130(uVar2,0x88);
  FUN_000028a4(_DAT_00048740,s_Received_Length_Field_Mismatch_00048ebc,0x88,uVar1);
  uVar2 = FUN_001b0130(uVar2,0x8c);
  thunk_FUN_000028a4(_DAT_00048740,s_Transmitted_Pause_Frames_00048edc,0x8c,uVar2);
  return;
}

