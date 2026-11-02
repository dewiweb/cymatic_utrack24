// rea decompile_all
// name: FUN_001e58f0
// address: 0x1e58f0
// body: available
// range: 0x1e58f0-0x1e59af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_001e58f0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int *param_6,
            short param_7)

{
  short *psVar1;
  int iVar2;
  undefined1 uStack_38;
  undefined1 local_37;
  short local_36;
  int local_34;
  int iStack_24;
  int iStack_20;
  int local_1c;
  int iStack_18;
  
  iStack_24 = param_1;
  iStack_20 = param_2;
  local_1c = param_3;
  iStack_18 = param_4;
  if (param_1 == 0) {
    FUN_00013244(s_NULL_pointer_inMDNS_001e59b0);
  }
  if (param_2 == 0) {
    FUN_00013244(s_NULL_pointer_inMsg_001e59c8);
  }
  if (local_1c == 0) {
    FUN_00013244(s_NULL_pointer_inMsgEnd_001e59dc);
  }
  if (param_4 == 0) {
    FUN_00013244(s_NULL_pointer_inInterfaceID_001e59f4);
  }
  if (param_6 == (int *)0x0) {
    FUN_00013244(s_NULL_pointer_inDstIP_001e5a10);
  }
  if (*param_6 != 4) {
    return DAT_001e5a28;
  }
  if (*(int *)(param_4 + 4) == -1) {
    FUN_00013244(s_NULL_pointer_item_>sendingSocket_001e5a2c);
  }
  FUN_00003c18(&uStack_38,0x10);
  local_37 = 2;
  local_36 = param_7;
  local_34 = param_6[1];
  iVar2 = FUN_001e1ec8(*(undefined4 *)(param_4 + 4),param_2,local_1c - param_2,0,&uStack_38,0x10);
  *(int *)(param_4 + 0x148c) = *(int *)(param_4 + 0x148c) - (iVar2 >> 0x1f);
  psVar1 = DAT_001e5a68;
  *(uint *)(param_4 + 0x1484) = (uint)(param_7 == *DAT_001e5a68) + *(int *)(param_4 + 0x1484);
  *(uint *)(param_4 + 0x1488) = (uint)(param_7 != *psVar1) + *(int *)(param_4 + 0x1488);
  return 0;
}

